#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "battle_terastal.h"
#include "battle_gimmick.h"
#include "battle_scripts.h"
#include "event_data.h"
#include "item.h"
#include "palette.h"
#include "pokemon.h"
#include "safari_zone.h"
#include "sprite.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/rgb.h"

// トレーナーのテラスタル時にフラグや変数を設定します。
void ActivateTera(enum BattlerId battler)
{
    // 適切なフラグを設定。
    SetActiveGimmick(battler, GIMMICK_TERA);
    SetGimmickAsActivated(battler, GIMMICK_TERA);

    // テラオーブのチャージを消費。
    if (B_FLAG_TERA_ORB_CHARGED != 0
        && (B_FLAG_TERA_ORB_NO_COST == 0 || !FlagGet(B_FLAG_TERA_ORB_NO_COST))
        && IsOnPlayerSide(battler)
        && !(IsDoubleBattle() && !IsPartnerMonFromSameTrainer(battler)))
    {
        FlagClear(B_FLAG_TERA_ORB_CHARGED);
    }

    // 戦闘スクリプトを実行。
    PREPARE_TYPE_BUFFER(gBattleTextBuff1, GetBattlerTeraType(battler));
    if (TryBattleFormChange(gBattlerAttacker, FORM_CHANGE_BATTLE_TERASTALLIZATION, GetBattlerAbility(gBattlerAttacker)))
        BattleScriptPushCursorAndCallback(BattleScript_TeraFormChange);
    else if (gBattleStruct->illusion[gBattlerAttacker].state == ILLUSION_ON
          && DoesSpeciesHaveFormChangeMethod(GetIllusionMonSpecies(gBattlerAttacker), FORM_CHANGE_BATTLE_TERASTALLIZATION))
        BattleScriptPushCursorAndCallback(BattleScript_IllusionOffAndTerastallization);
    else
        BattleScriptPushCursorAndCallback(BattleScript_Terastallization);
}

// アニメーションの再生後、パレットブレンドを適用し、UIインジケーターを有効にします。
void ApplyBattlerVisualsForTeraAnim(enum BattlerId battler)
{
    struct Pokemon *party = GetBattlerParty(battler);
    u32 index = gBattlerPartyIndexes[battler];

    // インジケーターを表示し、パレットブレンドを行う。
    UpdateHealthboxAttribute(gHealthboxSpriteIds[battler], &party[index], HEALTHBOX_ALL);
    BlendPalette(OBJ_PLTT_ID(battler), 16, 8, GetTeraTypeRGB(GetBattlerTeraType(battler)));
    CpuCopy32(gPlttBufferFaded + OBJ_PLTT_ID(battler), gPlttBufferUnfaded + OBJ_PLTT_ID(battler), PLTT_SIZEOF(16));

    // We apply the animation behind a white screen, so restore the blended color here to avoid a pop
    BlendPalette(OBJ_PLTT_ID(battler), 16, 16, RGB_WHITEALPHA);
}

// トレーナーがテラスタル可能かどうかを返す。
bool32 CanTerastallize(enum BattlerId battler)
{
    enum HoldEffect holdEffect = GetBattlerHoldEffectIgnoreNegation(battler);

    if (gBattleMons[battler].volatiles.transformed && GET_BASE_SPECIES_ID(gBattleMons[battler].species) == SPECIES_TERAPAGOS)
        return FALSE;

    // 素の状態において、最初のジグザグマがテラスタルするのを防ぎます。
    if (gBattleTypeFlags & BATTLE_TYPE_FIRST_BATTLE && !IsOnPlayerSide(battler))
        return FALSE;

    if (TESTING || !IsOnPlayerSide(battler))
    {
        // このブロック内の他のすべてのチェックをスキップし、HasTrainerUsedGimmick へ進む。
    }
    else if (!CheckBagHasItem(ITEM_TERA_ORB, 1))
    {
        return FALSE;
    }
    else if (FlagGet(B_FLAG_TERA_ORB_NO_COST))
    {
        // テラオーブが消費されていない場合、HasTrainerUsedGimmickへ進む。
    }
    else if (!FlagGet(B_FLAG_TERA_ORB_CHARGED))
    {
        return FALSE;
    }

    // トレーナーがすでにテラスタルしているか確認。
    if (HasTrainerUsedGimmick(battler, GIMMICK_TERA))
        return FALSE;

    // AIがテラスタルを行う意図があるか確認。
    if (!ShouldTrainerBattlerUseGimmick(battler, GIMMICK_TERA))
        return FALSE;

    // ポケモンが別のギミックが有効になっているか確認。
    if (GetActiveGimmick(battler) != GIMMICK_NONE)
        return FALSE;

    // ポケモンがZクリスタルまたはメガストーンを持っているか確認。
    if (!TESTING && (holdEffect == HOLD_EFFECT_Z_CRYSTAL || holdEffect == HOLD_EFFECT_MEGA_STONE)) // tests make this check already
        return FALSE;

    // チェックに合格
    return TRUE;
}

// ポケモンのテラスタイプを返す。
enum Type GetBattlerTeraType(enum BattlerId battler)
{
    return GetMonData(GetBattlerMon(battler), MON_DATA_TERA_TYPE);
}

// 特定のタイプのステラブーストを消費。
void ExpendTypeStellarBoost(enum BattlerId battler, enum Type type)
{
    if (type < 32 && gBattleMons[battler].species != SPECIES_TERAPAGOS_STELLAR) // avoid OOB access
        gBattleStruct->stellarBoostFlags[GetBattlerTrainer(battler)] |= 1u << type;
}

// ステラブーストが消費されたか確認。
bool32 IsTypeStellarBoosted(enum BattlerId battler, enum Type type)
{
    if (type < 32) // OOBアクセスを回避
        return !(gBattleStruct->stellarBoostFlags[GetBattlerTrainer(battler)] & (1u << type));
    else
        return FALSE;
}

// テラスタル時に適用されるタイプ一致補正の倍率を返す。
// Smogonの調査スレッドにある威力倍率。
uq4_12_t GetTeraMultiplier(struct DamageContext *ctx)
{
    enum Type teraType = GetBattlerTeraType(ctx->battlerAtk);

    // セーフティチェック
    if (GetActiveGimmick(ctx->battlerAtk) != GIMMICK_TERA)
        return UQ_4_12(1.0);

    // テラスタイプチェック
    if (teraType == TYPE_STELLAR)
    {
        bool32 shouldBoost = IsTypeStellarBoosted(ctx->battlerAtk, ctx->moveType);
        if (IS_BATTLER_OF_BASE_TYPE(ctx->battlerAtk, ctx->moveType))
        {
            if (shouldBoost)
                return UQ_4_12(2.0);
            else
                return UQ_4_12(1.5);
        }
        else if (shouldBoost)
            return UQ_4_12(1.2);
        else
            return UQ_4_12(1.0);
    }
    // 元のタイプとテラスタイプ
    if (ctx->moveType == teraType && IS_BATTLER_OF_BASE_TYPE(ctx->battlerAtk, ctx->moveType))
    {
        if (ctx->abilities[ctx->battlerAtk] == ABILITY_ADAPTABILITY)
            return UQ_4_12(2.25);
        else
            return UQ_4_12(2.0);
    }
    // テラスタイプのみ（てきおうりょくを適用）。
    else if (ctx->moveType == teraType && !IS_BATTLER_OF_BASE_TYPE(ctx->battlerAtk, ctx->moveType))
    {
        if (ctx->abilities[ctx->battlerAtk] == ABILITY_ADAPTABILITY)
            return UQ_4_12(2.0);
        else
            return UQ_4_12(1.5);
    }
    // 元のタイプのみ（テラスタル中はてきおうりょくは適用しない）。
    else if (ctx->moveType != teraType && IS_BATTLER_OF_BASE_TYPE(ctx->battlerAtk, ctx->moveType))
    {
        return UQ_4_12(1.5);
    }
    // 元のタイプでもテラスタイプでもない
    else
    {
        return UQ_4_12(1.0);
    }
}

u16 GetTeraTypeRGB(enum Type type)
{
    return gTypesInfo[type].teraTypeRGBValue;
}
