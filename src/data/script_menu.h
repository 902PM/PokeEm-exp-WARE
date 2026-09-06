// multichoice lists
static const struct MenuAction MultichoiceList_BrineyOnDewford[] =
{
    {COMPOUND_STRING("{JPN}トウカ")},
    {COMPOUND_STRING("{JPN}カイナ")},
    {gText_Exit},
};

const u8 gText_Info2[] = _("{JPN}せつめいを きく");

static const struct MenuAction MultichoiceList_EnterInfo[] =
{
    {COMPOUND_STRING("{JPN}さんか する")},
    {gText_Info2},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ContestInfo[] =
{
    {COMPOUND_STRING("{JPN}ポケモンコンテストって?")},
    {COMPOUND_STRING("{JPN}コンテストの しゅるい")},
    {COMPOUND_STRING("{JPN}ランクに ついて")},
    {gText_Cancel2},
};

static const struct MenuAction MultichoiceList_ContestType[] =
{
    {gText_CoolnessContest},
    {gText_BeautyContest},
    {gText_CutenessContest},
    {gText_SmartnessContest},
    {gText_ToughnessContest},
    {gText_Exit},
};

const u8 gText_Decoration2[] = _("{JPN}もようがえ");
const u8 gText_PackUp[] = _("{JPN}ひっこし");
const u8 gText_Registry[] = _("{JPN}とうろく");

static const struct MenuAction MultichoiceList_BasePCWithRegistry[] =
{
    {gText_Decoration2},
    {gText_PackUp},
    {gText_Registry},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_BasePCNoRegistry[] =
{
    {gText_Decoration2},
    {gText_PackUp},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_RegisterMenu[] =
{
    {gMenuText_Register},
    {gText_Registry},
    {gText_Information},
    {gText_Cancel2},
};

static const struct MenuAction MultichoiceList_Bike[] =
{
    {COMPOUND_STRING("{JPN}マッハ")},
    {COMPOUND_STRING("{JPN}ダート")},
};

static const struct MenuAction MultichoiceList_StatusInfo[] =
{
    {COMPOUND_STRING("{JPN}どく")},
    {COMPOUND_STRING("{JPN}まひ")},
    {COMPOUND_STRING("{JPN}ねむり")},
    {COMPOUND_STRING("{JPN}やけど")},
    {COMPOUND_STRING("{JPN}こおり")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_BrineyOffDewford[] =
{
    {COMPOUND_STRING("{JPN}ムロ")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ViewedPaintings[] =
{
    {COMPOUND_STRING("{JPN}みた")},
    {COMPOUND_STRING("{JPN}まだ")},
};

static const struct MenuAction MultichoiceList_YesNoInfo2[] =
{
    {gText_Yes},
    {gText_No},
    {gText_Info2},
};

static const struct MenuAction MultichoiceList_ChallengeInfo[] =
{
    {COMPOUND_STRING("{JPN}ちょうせんする")},
    {COMPOUND_STRING("{JPN}せつめいをきく")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_LevelMode[] =
{
    {gText_Lv50},
    {gText_OpenLevel},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_Mechadoll1_Q1[] =
{
    {COMPOUND_STRING("{JPN}ナゾノクサ")},
    {COMPOUND_STRING("{JPN}ポチエナ")},
    {COMPOUND_STRING("{JPN}スバメ")},
};

static const struct MenuAction MultichoiceList_Mechadoll1_Q2[] =
{
    {COMPOUND_STRING("{JPN}ルリリ")},
    {COMPOUND_STRING("{JPN}ハスボー")},
    {COMPOUND_STRING("{JPN}キャモメ")},
};

static const struct MenuAction MultichoiceList_Mechadoll1_Q3[] =
{
    {COMPOUND_STRING("{JPN}ドクケイル")},
    {COMPOUND_STRING("{JPN}ズバット")},
    {COMPOUND_STRING("{JPN}ツチニン")},
};

static const struct MenuAction MultichoiceList_Mechadoll2_Q1[] =
{
    {COMPOUND_STRING("{JPN}ラルトス")},
    {COMPOUND_STRING("{JPN}ジグザグマ")},
    {COMPOUND_STRING("{JPN}ナマケロ")},
};

static const struct MenuAction MultichoiceList_Mechadoll2_Q2[] =
{
    {COMPOUND_STRING("{JPN}ポチエナ")},
    {COMPOUND_STRING("{JPN}キノココ")},
    {COMPOUND_STRING("{JPN}ジグザグマ")},
};

static const struct MenuAction MultichoiceList_Mechadoll2_Q3[] =
{
    {COMPOUND_STRING("{JPN}ポチエナ")},
    {COMPOUND_STRING("{JPN}ズバット")},
    {COMPOUND_STRING("{JPN}キバニア")},
};

static const struct MenuAction MultichoiceList_Mechadoll3_Q1[] =
{
    {COMPOUND_STRING("{JPN}やけどなおし")},
    {COMPOUND_STRING("{JPN}ハーバーメール")},
    {COMPOUND_STRING("{JPN}おなじねだん")},
};

static const struct MenuAction MultichoiceList_Mechadoll3_Q2[] =
{
    {COMPOUND_STRING("{JPN}60えん")},
    {COMPOUND_STRING("{JPN}55えん")},
    {COMPOUND_STRING("{JPN}のこらない")},
};

static const struct MenuAction MultichoiceList_Mechadoll3_Q3[] =
{
    {COMPOUND_STRING("{JPN}もっと たかくなる")},
    {COMPOUND_STRING("{JPN}もっと やすくなる")},
    {COMPOUND_STRING("{JPN}おなじねだん")},
};

static const struct MenuAction MultichoiceList_Mechadoll4_Q1[] =
{
    {COMPOUND_STRING("{JPN}だんせい")},
    {COMPOUND_STRING("{JPN}じょせい")},
    {COMPOUND_STRING("{JPN}どっちでもない")},
};

static const struct MenuAction MultichoiceList_Mechadoll4_Q2[] =
{
    {COMPOUND_STRING("{JPN}おじいさん")},
    {COMPOUND_STRING("{JPN}おばあさん")},
    {COMPOUND_STRING("{JPN}おなじかず")},
};

static const struct MenuAction MultichoiceList_Mechadoll4_Q3[] =
{
    {COMPOUND_STRING("{JPN}いない")},
    {COMPOUND_STRING("{JPN}ひとり")},
    {COMPOUND_STRING("{JPN}ふたり")},
};

static const struct MenuAction MultichoiceList_Mechadoll5_Q1[] =
{
    {COMPOUND_STRING("{JPN}2ひき")},
    {COMPOUND_STRING("{JPN}3ひき")},
    {COMPOUND_STRING("{JPN}4ひき")},
};

static const struct MenuAction MultichoiceList_Mechadoll5_Q2[] =
{
    {COMPOUND_STRING("{JPN}6つ")},
    {COMPOUND_STRING("{JPN}7つ")},
    {COMPOUND_STRING("{JPN}8つ")},
};

static const struct MenuAction MultichoiceList_Mechadoll5_Q3[] =
{
    {COMPOUND_STRING("{JPN}6にん")},
    {COMPOUND_STRING("{JPN}7にん")},
    {COMPOUND_STRING("{JPN}8にん")},
};

static const struct MenuAction MultichoiceList_VendingMachine[] =
{
    {COMPOUND_STRING("{JPN}おいしいみず 200円")},
    {COMPOUND_STRING("{JPN}サイコソーダ 300円")},
    {COMPOUND_STRING("{JPN}ミックスオレ 350円")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_MachBikeInfo[] =
{
    {COMPOUND_STRING("{JPN}はしりかた")},
    {COMPOUND_STRING("{JPN}まがるコツ")},
    {COMPOUND_STRING("{JPN}すなのさか")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_AcroBikeInfo[] =
{
    {COMPOUND_STRING("{JPN}ウイリー")},
    {COMPOUND_STRING("{JPN}ダニエル")},
    {COMPOUND_STRING("{JPN}ジャンプ")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_Satisfaction[] =
{
    {COMPOUND_STRING("{JPN}まんぞく")},
    {COMPOUND_STRING("{JPN}ふまん")},
};

static const struct MenuAction MultichoiceList_SternDeepSea[] =
{
    {COMPOUND_STRING("{JPN}しんかいのキバ")},
    {COMPOUND_STRING("{JPN}しんかいのウロコ")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_UnusedAshVendor[] =
{
    {COMPOUND_STRING("{JPN}あおいビードロ")},
    {COMPOUND_STRING("{JPN}きいろビードロ")},
    {COMPOUND_STRING("{JPN}あかいビードロ")},
    {COMPOUND_STRING("{JPN}しろいビードロ")},
    {COMPOUND_STRING("{JPN}くろいビードロ")},
    {COMPOUND_STRING("{JPN}ガラスのイス")},
    {COMPOUND_STRING("{JPN}ガラスのつくえ")},
    {gText_Cancel2},
};

static const struct MenuAction MultichoiceList_GameCornerDolls[] =
{
    {COMPOUND_STRING("{JPN}キモリドール   1000まい")},
    {COMPOUND_STRING("{JPN}アチャモドール  1000まい")},
    {COMPOUND_STRING("{JPN}ミズゴロウドール 1000まい")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_GameCornerTMs[] =
{
    {COMPOUND_STRING("{JPN}わざマシン32  1500まい")},
    {COMPOUND_STRING("{JPN}わざマシン29  3500まい")},
    {COMPOUND_STRING("{JPN}わざマシン35  4000まい")},
    {COMPOUND_STRING("{JPN}わざマシン24  4000まい")},
    {COMPOUND_STRING("{JPN}わざマシン13  4000まい")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_GameCornerCoins[] =
{
    {COMPOUND_STRING("{JPN}  50まい    1,000円")},
    {COMPOUND_STRING("{JPN}500まい  10,000円")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_HowsFishing[] =
{
    {COMPOUND_STRING("{JPN}ばつぐん")},
    {COMPOUND_STRING("{JPN}あんまり")},
};

const u8 gText_LilycoveCity[] = _("{JPN}ミナモシティ");

static const struct MenuAction MultichoiceList_SSTidalSlateportWithBF[] =
{
    {gText_LilycoveCity},
    {gText_BattleFrontier},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_SSTidalBattleFrontier[] =
{
    {gText_SlateportCity},
    {gText_LilycoveCity},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_RightLeft[] =
{
    {COMPOUND_STRING("{JPN}みぎ")},
    {COMPOUND_STRING("{JPN}ひだり")},
};

static const struct MenuAction MultichoiceList_SSTidalSlateportNoBF[] =
{
    {gText_LilycoveCity},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_Floors[] =
{
    {gText_5F},
    {gText_4F},
    {gText_3F},
    {gText_2F},
    {gText_1F},
    {gText_Exit},
};

const u8 gText_RedShard[] = _("{JPN}あかいかけら");
const u8 gText_YellowShard[] = _("{JPN}きいろいかけら");
const u8 gText_BlueShard[] = _("{JPN}あおいかけら");
const u8 gText_GreenShard[] = _("{JPN}みどりのかけら");

static const struct MenuAction MultichoiceList_ShardsR[] =
{
    {gText_RedShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsY[] =
{
    {gText_YellowShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsRY[] =
{
    {gText_RedShard},
    {gText_YellowShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsB[] =
{
    {gText_BlueShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsRB[] =
{
    {gText_RedShard},
    {gText_BlueShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsYB[] =
{
    {gText_YellowShard},
    {gText_BlueShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsRYB[] =
{
    {gText_RedShard},
    {gText_YellowShard},
    {gText_BlueShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsG[] =
{
    {gText_GreenShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsRG[] =
{
    {gText_RedShard},
    {gText_GreenShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsYG[] =
{
    {gText_YellowShard},
    {gText_GreenShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsRYG[] =
{
    {gText_RedShard},
    {gText_YellowShard},
    {gText_GreenShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsBG[] =
{
    {gText_BlueShard},
    {gText_GreenShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsRBG[] =
{
    {gText_RedShard},
    {gText_BlueShard},
    {gText_GreenShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsYBG[] =
{
    {gText_YellowShard},
    {gText_BlueShard},
    {gText_GreenShard},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ShardsRYBG[] =
{
    {gText_RedShard},
    {gText_YellowShard},
    {gText_BlueShard},
    {gText_GreenShard},
    {gText_Exit},
};

const u8 gText_Opponent[] = _("{JPN}たいせん あいて");
const u8 gText_Tourney_Tree[] = _("{JPN}トーナメントひょう");
const u8 gText_ReadyToStart[] = _("{JPN}じゅんび かんりょう");
const u8 gText_Record2[] = _("{JPN}きろくする");
const u8 gText_Rest[] = _("{JPN}やすむ");
const u8 gText_Retire[] = _("{JPN}リタイア");

static const struct MenuAction MultichoiceList_TourneyWithRecord[] =
{
    {gText_Opponent},
    {gText_Tourney_Tree},
    {gText_ReadyToStart},
    {gText_Record2},
    {gText_Rest},
    {gText_Retire},
};

static const struct MenuAction MultichoiceList_TourneyNoRecord[] =
{
    {gText_Opponent},
    {gText_Tourney_Tree},
    {gText_ReadyToStart},
    {gText_Rest},
    {gText_Retire},
};

static const struct MenuAction MultichoiceList_Tent[] =
{
    {COMPOUND_STRING("{JPN}あかいテント")},
    {COMPOUND_STRING("{JPN}あおいテント")},
};

const u8 gText_TradeCenter[] = _("{JPN}トレードセンター");
const u8 gText_Colosseum[] = _("{JPN}コロシアム");
const u8 gText_RecordCorner[] = _("{JPN}レコードコーナー");

static const struct MenuAction MultichoiceList_LinkServicesNoBerry[] =
{
    {gText_TradeCenter},
    {gText_Colosseum},
    {gText_RecordCorner},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_YesNoInfo[] =
{
    {gText_Yes},
    {gText_No},
    {gText_Info2},
};

static const struct MenuAction MultichoiceList_BattleMode[] =
{
    {COMPOUND_STRING("{JPN}シングルバトル")},
    {COMPOUND_STRING("{JPN}ダブルバトル")},
    {COMPOUND_STRING("{JPN}マルチバトル")},
    {gText_Info2},
    {gText_Exit},
};

const u8 gText_BerryCrush3[] = _("{JPN}きのみクラッシュ");

static const struct MenuAction MultichoiceList_LinkServicesNoRecord[] =
{
    {gText_TradeCenter},
    {gText_Colosseum},
    {gText_BerryCrush3},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_LinkServicesAll[] =
{
    {gText_TradeCenter},
    {gText_Colosseum},
    {gText_RecordCorner},
    {gText_BerryCrush3},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_LinkServicesNoRecordBerry[] =
{
    {gText_TradeCenter},
    {gText_Colosseum},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_WirelessMinigame[] =
{
    {COMPOUND_STRING("{JPN}ミニポケモンでジャンプ")},
    {COMPOUND_STRING("{JPN}ドードリオのきのみどり")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_LinkLeader[] =
{
    {COMPOUND_STRING("{JPN}グループにはいる")},
    {COMPOUND_STRING("{JPN}リーダーになる")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ContestRank[] =
{
    {COMPOUND_STRING("{JPN}ノーマルランク")},
    {COMPOUND_STRING("{JPN}スーパーランク")},
    {COMPOUND_STRING("{JPN}ハイパーランク")},
    {COMPOUND_STRING("{JPN}マスターランク")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_FrontierItemChoose[] =
{
    {COMPOUND_STRING("{JPN}バトルバッグ")},
    {COMPOUND_STRING("{JPN}もたせたどうぐ")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_LinkContestInfo[] =
{
    {COMPOUND_STRING("{JPN}つうしんコンテスト")},
    {COMPOUND_STRING("{JPN}エメラルドモードについて")},
    {COMPOUND_STRING("{JPN}グローバルモードについて")},
    {gText_Cancel2},
};

static const struct MenuAction MultichoiceList_LinkContestMode[] =
{
    {COMPOUND_STRING("{JPN}エメラルドモード")},
    {COMPOUND_STRING("{JPN}グローバルモード")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_ForcedStartMenu[] =
{
    {gText_MenuOptionPokedex},
    {gText_MenuOptionPokemon},
    {gText_MenuOptionBag},
    {gText_MenuOptionPokenav},
    {COMPOUND_STRING("     ")}, // blank because it's filled by the player's name
    {gText_MenuOptionSave},
    {gText_MenuOptionOption},
    {gText_MenuOptionExit},
};

static const struct MenuAction MultichoiceList_FrontierGamblerBet[] =
{
    {COMPOUND_STRING("{JPN}  5BP")},
    {COMPOUND_STRING("{JPN}10BP")},
    {COMPOUND_STRING("{JPN}15BP")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_UnusedSSTidal1[] =
{
    {gText_SouthernIsland},
    {gText_BirthIsland},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_UnusedSSTidal2[] =
{
    {gText_SouthernIsland},
    {gText_FarawayIsland},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_UnusedSSTidal3[] =
{
    {gText_BirthIsland},
    {gText_FarawayIsland},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_UnusedSSTidal4[] =
{
    {gText_SouthernIsland},
    {gText_BirthIsland},
    {gText_FarawayIsland},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_Fossil[] =
{
    {COMPOUND_STRING("{JPN}ツメのカセキ")},
    {COMPOUND_STRING("{JPN}ねっこのカセキ")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_YesNo[] =
{
    {gText_Yes},
    {COMPOUND_STRING("{JPN}いいえ")},
};

static const struct MenuAction MultichoiceList_FrontierRules[] =
{
    {COMPOUND_STRING("{JPN}2つのコース")},
    {COMPOUND_STRING("{JPN}レベル50")},
    {COMPOUND_STRING("{JPN}オープンレベル")},
    {COMPOUND_STRING("{JPN}ポケモンのしゅるいとかず")},
    {COMPOUND_STRING("{JPN}もたせるどうぐ")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_FrontierPassInfo[] =
{
    {COMPOUND_STRING("{JPN}シンボル")},
    {COMPOUND_STRING("{JPN}たいせんのきろく")},
    {COMPOUND_STRING("{JPN}バトルポイント")},
    {gText_Exit},
};

const u8 gText_BattleRules[] = _("{JPN}バトルでの ちゅうい");
const u8 gText_JudgeMind[] = _("{JPN}はんてい「こころ」");
const u8 gText_JudgeSkill[] = _("{JPN}はんてい「わざ」");
const u8 gText_JudgeBody[] = _("{JPN}はんてい「からだ」");

static const struct MenuAction MultichoiceList_BattleArenaRules[] =
{
    {gText_BattleRules},
    {gText_JudgeMind},
    {gText_JudgeSkill},
    {gText_JudgeBody},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_BattleTowerRules[] =
{
    {COMPOUND_STRING("{JPN}タワーについて")},
    {COMPOUND_STRING("{JPN}つれていくポケモン")},
    {COMPOUND_STRING("{JPN}バトルサロン")},
    {COMPOUND_STRING("{JPN}つうしんマルチ")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_BattleDomeRules[] =
{
    {COMPOUND_STRING("{JPN}くみあわせ")},
    {COMPOUND_STRING("{JPN}トーナメントひょう")},
    {COMPOUND_STRING("{JPN}ダブルノックアウト")},
    {gText_Exit},
};

const u8 gText_BasicRules[] = _("{JPN}きほんルール");
const u8 gText_SwapPartners[] = _("{JPN}トレード あいて");
const u8 gText_SwapNumber[] = _("{JPN}トレード かいすう");
const u8 gText_SwapNotes[] = _("{JPN}トレード ちゅうい");

static const struct MenuAction MultichoiceList_BattleFactoryRules[] =
{
    {gText_BasicRules},
    {gText_SwapPartners},
    {gText_SwapNumber},
    {gText_SwapNotes},
    {COMPOUND_STRING("{JPN}オープンレベル")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_BattlePalaceRules[] =
{
    {gText_BattleBasics},
    {gText_PokemonNature},
    {gText_PokemonMoves},
    {gText_Underpowered},
    {gText_WhenInDanger},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_BattlePyramidRules[] =
{
    {COMPOUND_STRING("{JPN}ピラミッドの ポケモン")},
    {COMPOUND_STRING("{JPN}ピラミッドの トレーナー")},
    {COMPOUND_STRING("{JPN}ピラミッドの めいろ")},
    {COMPOUND_STRING("{JPN}バトルバッグ")},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_BattlePikeRules[] =
{
    {COMPOUND_STRING("{JPN}ポケナビと バッグ")},
    {COMPOUND_STRING("{JPN}もちもたせた どうぐ")},
    {COMPOUND_STRING("{JPN}ポケモンの じゅんばん")},
    {gText_Exit},
};

const u8 gText_GoOn[] = _("{JPN}つづける");

static const struct MenuAction MultichoiceList_GoOnRecordRestRetire[] =
{
    {gText_GoOn},
    {gText_Record2},
    {gText_Rest},
    {gText_Retire},
};

static const struct MenuAction MultichoiceList_GoOnRestRetire[] =
{
    {gText_GoOn},
    {gText_Rest},
    {gText_Retire},
};

static const struct MenuAction MultichoiceList_GoOnRecordRetire[] =
{
    {gText_GoOn},
    {gText_Record2},
    {gText_Retire},
};

static const struct MenuAction MultichoiceList_GoOnRetire[] =
{
    {gText_GoOn},
    {gText_Retire},
};

static const struct MenuAction MultichoiceList_TVLati[] =
{
    {COMPOUND_STRING("{JPN}あか")},
    {COMPOUND_STRING("{JPN}あお")},
};

static const struct MenuAction MultichoiceList_BattleTowerFeelings[] =
{
    {COMPOUND_STRING("{JPN}これからしょうぶだ!")},
    {COMPOUND_STRING("{JPN}しょうぶにかった!")},
    {COMPOUND_STRING("{JPN}しょうぶにまけた!")},
    {COMPOUND_STRING("{JPN}おしえない")},
};

static const struct MenuAction MultichoiceList_WheresRayquaza[] =
{
    {COMPOUND_STRING("{JPN}めざめのほこら")},
    {COMPOUND_STRING("{JPN}おくりびやま")},
    {COMPOUND_STRING("{JPN}そらのはしら")},
    {COMPOUND_STRING("{JPN}おぼえていない")},
};

static const struct MenuAction MultichoiceList_SlateportTentRules[] =
{
    {gText_BasicRules},
    {gText_SwapPartners},
    {gText_SwapNumber},
    {gText_SwapNotes},
    {gText_BattlePokemon},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_FallarborTentRules[] =
{
    {gText_BattleTrainers},
    {gText_BattleRules},
    {gText_JudgeMind},
    {gText_JudgeSkill},
    {gText_JudgeBody},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_TagMatchType[] =
{
    {gText_NormalTagMatch},
    {gText_VarietyTagMatch},
    {gText_UniqueTagMatch},
    {gText_ExpertTagMatch},
    {gText_Exit},
};

static const struct MenuAction MultichoiceList_BerryPlot[] =
{
    {COMPOUND_STRING("{JPN}こやしをまく")},
    {COMPOUND_STRING("{JPN}きのみをうえる")},
    {gText_Exit},
};

static const struct MenuAction sMultichoiceList_BikeShop[] = {
    {COMPOUND_STRING("{JPN}じてんしゃ{CLEAR_TO 73}{FONT_SMALL}1,000,000円")},
    {COMPOUND_STRING("{JPN}いりません")}
};

static const struct MenuAction sMultichoiceList_Eeveelutions[] = {
    {COMPOUND_STRING("{JPN}イーブイ")},
    {COMPOUND_STRING("{JPN}ブースター")},
    {COMPOUND_STRING("{JPN}サンダース")},
    {COMPOUND_STRING("{JPN}シャワーズ")},
    {COMPOUND_STRING("{JPN}みるのを やめる")}
};

static const u8 gText_SeviiIslands[] = _("{JPN}ナナシマ");
static const u8 gText_OneIsland[] = _("{JPN}1のしま");
static const u8 gText_TwoIsland[] = _("{JPN}2のしま");
static const u8 gText_ThreeIsland[] = _("{JPN}3のしま");
static const u8 gText_Vermilion[] = _("{JPN}クチバ");

static const struct MenuAction sMultichoiceList_Island23[] = {
    {gText_TwoIsland},
    {gText_ThreeIsland},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_Island13[] = {
    {gText_OneIsland},
    {gText_ThreeIsland},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_Island12[] = {
    {gText_OneIsland},
    {gText_TwoIsland},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_SeviiNavel[] = {
    {gText_SeviiIslands},
    {gText_NavelRock},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_SeviiBirth[] = {
    {gText_SeviiIslands},
    {gText_BirthIsland},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_SeviiNavelBirth[] = {
    {gText_SeviiIslands},
    {gText_NavelRock},
    {gText_BirthIsland},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_Seagallop123[] = {
    {gText_OneIsland},
    {gText_TwoIsland},
    {gText_ThreeIsland},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_SeagallopV23[] = {
    {gText_Vermilion},
    {gText_TwoIsland},
    {gText_ThreeIsland},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_SeagallopV13[] = {
    {gText_Vermilion},
    {gText_OneIsland},
    {gText_ThreeIsland},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_SeagallopV12[] = {
    {gText_Vermilion},
    {gText_OneIsland},
    {gText_TwoIsland},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_SeagallopVermilion[] = {
    {gText_Vermilion},
    {gText_Exit}
};

const u8 sText_NoThanks[] = _("{JPN}けっこうです");

static const struct MenuAction sMultichoiceList_GameCornerPokemonPrizes[] = {
#if defined(FIRERED)
    {COMPOUND_STRING("{JPN}ケーシィ{CLEAR_TO 85}{FONT_SMALL} 180コイン")},
    {COMPOUND_STRING("{JPN}ピッピ{CLEAR_TO 85}{FONT_SMALL} 500コイン")},
    {COMPOUND_STRING("{JPN}ミニリュウ{CLEAR_TO 75}{FONT_SMALL} 2,800コイン")},
    {COMPOUND_STRING("{JPN}ストライク{CLEAR_TO 75}{FONT_SMALL} 5,500コイン")},
    {COMPOUND_STRING("{JPN}ポリゴン{CLEAR_TO 75}{FONT_SMALL} 9,999コイン")},
#else
    {COMPOUND_STRING("{JPN}ケーシィ{CLEAR_TO 85}{FONT_SMALL} 120コイン")},
    {COMPOUND_STRING("{JPN}ピッピ{CLEAR_TO 85}{FONT_SMALL} 750コイン")},
    {COMPOUND_STRING("{JPN}カイロス{CLEAR_TO 75}{FONT_SMALL} 2,500コイン")},
    {COMPOUND_STRING("{JPN}ミニリュウ{CLEAR_TO 75}{FONT_SMALL} 4,600コイン")},
    {COMPOUND_STRING("{JPN}ポリゴン{CLEAR_TO 75}{FONT_SMALL} 6,500コイン")},
#endif
    {sText_NoThanks}
};

static const struct MenuAction sMultichoiceList_GameCornerTMPrizes[] = {
    {COMPOUND_STRING("{JPN}わざマシン13{CLEAR_TO 72}{FONT_SMALL}4,000コイン")},
    {COMPOUND_STRING("{JPN}わざマシン23{CLEAR_TO 72}{FONT_SMALL}3,500コイン")},
    {COMPOUND_STRING("{JPN}わざマシン24{CLEAR_TO 72}{FONT_SMALL}4,000コイン")},
    {COMPOUND_STRING("{JPN}わざマシン30{CLEAR_TO 72}{FONT_SMALL}4,500コイン")},
    {COMPOUND_STRING("{JPN}わざマシン35{CLEAR_TO 72}{FONT_SMALL}4,000コイン")},
    {sText_NoThanks}
};

static const struct MenuAction sMultichoiceList_GameCornerBattleItemPrizes[] = {
    {COMPOUND_STRING("{JPN}けむりだま{CLEAR_TO 90}{FONT_SMALL}800コイン")},
    {COMPOUND_STRING("{JPN}きせきのタネ{CLEAR_TO 80}{FONT_SMALL}1,000コイン")},
    {COMPOUND_STRING("{JPN}もくたん{CLEAR_TO 80}{FONT_SMALL}1,000コイン")},
    {COMPOUND_STRING("{JPN}しんぴのしずく{CLEAR_TO 80}{FONT_SMALL}1,000コイン")},
    {COMPOUND_STRING("{JPN}きいろビードロ{CLEAR_TO 80}{FONT_SMALL}1,600コイン")},
    {sText_NoThanks}
};

static const struct MenuAction sMultichoiceList_DeptStoreElevator[] = {
    {COMPOUND_STRING("{JPN}5かい")},
    {COMPOUND_STRING("{JPN}4かい")},
    {COMPOUND_STRING("{JPN}3かい")},
    {COMPOUND_STRING("{JPN}2かい")},
    {COMPOUND_STRING("{JPN}1かい")},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_GameCornerCoinPurchaseCounter[] = {
    {COMPOUND_STRING("{JPN}{FONT_SMALL} 50まい{CLEAR_TO 69}1,000円")},
    {COMPOUND_STRING("{JPN}{FONT_SMALL}500まい{CLEAR_TO 64}10,000円")},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_LinkedDirectUnion[] = {
    {COMPOUND_STRING("{JPN}つうしんで あそぶには")},
    {COMPOUND_STRING("{JPN}ダイレクト コーナー")},
    {COMPOUND_STRING("{JPN}ユニオン ルーム")},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_CeladonVendingMachine[] = {
    {COMPOUND_STRING("{JPN}おいしいみず{CLEAR_TO 87}{FONT_SMALL}200円")},
    {COMPOUND_STRING("{JPN}サイコソーダ{CLEAR_TO 87}{FONT_SMALL}300円")},
    {COMPOUND_STRING("{JPN}ミックスオレ{CLEAR_TO 87}{FONT_SMALL}350円")},
    {gText_Exit}
};

const u8 sText_FreshWater[] = _("{JPN}おいしいみず");
const u8 sText_SodaPop[] = _("{JPN}サイコソーダ");
const u8 sText_Lemonade[] = _("{JPN}ミックスオレ");

static const struct MenuAction sMultichoiceList_ThirstyGirlFreshWater[] = {
    {sText_FreshWater},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_ThirstyGirlSodaPop[] = {
    {sText_SodaPop},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_ThirstyGirlFreshWaterSodaPop[] = {
    {sText_FreshWater},
    {sText_SodaPop},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_ThirstyGirlLemonade[] = {
    {sText_Lemonade},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_ThirstyGirlFreshWaterLemonade[] = {
    {sText_FreshWater},
    {sText_Lemonade},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_ThirstyGirlSodaPopLemonade[] = {
    {sText_SodaPop},
    {sText_Lemonade},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_ThirstyGirlFreshWaterSodaPopLemonade[] = {
    {sText_FreshWater},
    {sText_SodaPop},
    {sText_Lemonade},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_RocketHideoutElevator[] = {
    {gText_B1F},
    {gText_B2F},
    {gText_B4F},
    {gText_Exit}
};

static const u8 sText_HelixFossil[] = _("{JPN}かいのカセキ");
static const u8 sText_DomeFossil[] = _("{JPN}こうらのカセキ");
static const u8 sText_OldAmber[] = _("{JPN}ひみつのコハク");

static const struct MenuAction sMultichoiceList_Helix[] = {
    {sText_HelixFossil},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_Dome[] = {
    {sText_DomeFossil},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_Amber[] = {
    {sText_OldAmber},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_HelixAmber[] = {
    {sText_HelixFossil},
    {sText_OldAmber},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_DomeAmber[] = {
    {sText_DomeFossil},
    {sText_OldAmber},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_Mushrooms[] = {
    {COMPOUND_STRING("{JPN}ちいさなキノコ 2こ")},
    {COMPOUND_STRING("{JPN}おおきなキノコ 1こ")}
};

static const struct MenuAction sMultichoiceList_RooftopB1F[] = {
    {gText_Rooftop},
    {gText_B1F},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_TrainerTowerMode[] = {
    {gText_Single},
    {gText_Double},
    {gText_Knockout},
    {gText_Mixed},
    {gText_Exit}
};

static const struct MenuAction sMultichoiceList_TrainerCardIconTint[] = {
    {gText_Normal},
    {COMPOUND_STRING("{JPN}ブラック")},
    {COMPOUND_STRING("{JPN}ピンク")},
    {COMPOUND_STRING("{JPN}セピア")}
};

static const u8 sText_Eggs[] = _("{JPN}タマゴ");
static const u8 sText_Victories[] = _("{JPN}しょうり");

static const struct MenuAction sMultichoiceList_HOF_Quit[] = {
    {gText_HallOfFame},
    {gText_ShopQuit}
};

static const struct MenuAction sMultichoiceList_Eggs_Quit[] = {
    {sText_Eggs},
    {gText_ShopQuit}
};

static const struct MenuAction sMultichoiceList_Victories_Quit[] = {
    {sText_Victories},
    {gText_ShopQuit}
};

static const struct MenuAction sMultichoiceList_HOF_Eggs_Quit[] = {
    {gText_HallOfFame},
    {sText_Eggs},
    {gText_ShopQuit}
};

static const struct MenuAction sMultichoiceList_HOF_Victories_Quit[] = {
    {gText_HallOfFame},
    {sText_Victories},
    {gText_ShopQuit}
};

static const struct MenuAction sMultichoiceList_Eggs_Victories_Quit[] = {
    {sText_Eggs},
    {sText_Victories},
    {gText_ShopQuit}
};

static const struct MenuAction sMultichoiceList_HOF_Eggs_Victories_Quit[] = {
    {gText_HallOfFame},
    {sText_Eggs},
    {sText_Victories},
    {gText_ShopQuit}
};

static const struct MenuAction MultichoiceList_Exit[] =
{
    {gText_Exit},
};

struct MultichoiceListStruct
{
    const struct MenuAction *list;
    u8 count;
};

static const struct MultichoiceListStruct sMultichoiceLists[] =
{
    [MULTI_BRINEY_ON_DEWFORD]          = MULTICHOICE(MultichoiceList_BrineyOnDewford),
    [MULTI_PC]                         = MULTICHOICE(MultichoiceList_Exit),
    [MULTI_ENTERINFO]                  = MULTICHOICE(MultichoiceList_EnterInfo),
    [MULTI_CONTEST_INFO]               = MULTICHOICE(MultichoiceList_ContestInfo),
    [MULTI_CONTEST_TYPE]               = MULTICHOICE(MultichoiceList_ContestType),
    [MULTI_BASE_PC_NO_REGISTRY]        = MULTICHOICE(MultichoiceList_BasePCNoRegistry),
    [MULTI_BASE_PC_WITH_REGISTRY]      = MULTICHOICE(MultichoiceList_BasePCWithRegistry),
    [MULTI_REGISTER_MENU]              = MULTICHOICE(MultichoiceList_RegisterMenu),
    [MULTI_SSTIDAL_LILYCOVE]           = MULTICHOICE(MultichoiceList_Exit),
    [MULTI_UNUSED_9]                   = MULTICHOICE(MultichoiceList_Exit),
    [MULTI_UNUSED_10]                  = MULTICHOICE(MultichoiceList_Exit),
    [MULTI_FRONTIER_PASS_INFO]         = MULTICHOICE(MultichoiceList_FrontierPassInfo),
    [MULTI_BIKE]                       = MULTICHOICE(MultichoiceList_Bike),
    [MULTI_STATUS_INFO]                = MULTICHOICE(MultichoiceList_StatusInfo),
    [MULTI_BRINEY_OFF_DEWFORD]         = MULTICHOICE(MultichoiceList_BrineyOffDewford),
    [MULTI_UNUSED_15]                  = MULTICHOICE(MultichoiceList_Exit),
    [MULTI_VIEWED_PAINTINGS]           = MULTICHOICE(MultichoiceList_ViewedPaintings),
    [MULTI_YESNOINFO]                  = MULTICHOICE(MultichoiceList_YesNoInfo),
    [MULTI_BATTLE_MODE]                = MULTICHOICE(MultichoiceList_BattleMode),
    [MULTI_UNUSED_19]                  = MULTICHOICE(MultichoiceList_Exit),
    [MULTI_YESNOINFO_2]                = MULTICHOICE(MultichoiceList_YesNoInfo2),
    [MULTI_UNUSED_21]                  = MULTICHOICE(MultichoiceList_Exit),
    [MULTI_UNUSED_22]                  = MULTICHOICE(MultichoiceList_Exit),
    [MULTI_CHALLENGEINFO]              = MULTICHOICE(MultichoiceList_ChallengeInfo),
    [MULTI_LEVEL_MODE]                 = MULTICHOICE(MultichoiceList_LevelMode),
    [MULTI_MECHADOLL1_Q1]              = MULTICHOICE(MultichoiceList_Mechadoll1_Q1),
    [MULTI_MECHADOLL1_Q2]              = MULTICHOICE(MultichoiceList_Mechadoll1_Q2),
    [MULTI_MECHADOLL1_Q3]              = MULTICHOICE(MultichoiceList_Mechadoll1_Q3),
    [MULTI_MECHADOLL2_Q1]              = MULTICHOICE(MultichoiceList_Mechadoll2_Q1),
    [MULTI_MECHADOLL2_Q2]              = MULTICHOICE(MultichoiceList_Mechadoll2_Q2),
    [MULTI_MECHADOLL2_Q3]              = MULTICHOICE(MultichoiceList_Mechadoll2_Q3),
    [MULTI_MECHADOLL3_Q1]              = MULTICHOICE(MultichoiceList_Mechadoll3_Q1),
    [MULTI_MECHADOLL3_Q2]              = MULTICHOICE(MultichoiceList_Mechadoll3_Q2),
    [MULTI_MECHADOLL3_Q3]              = MULTICHOICE(MultichoiceList_Mechadoll3_Q3),
    [MULTI_MECHADOLL4_Q1]              = MULTICHOICE(MultichoiceList_Mechadoll4_Q1),
    [MULTI_MECHADOLL4_Q2]              = MULTICHOICE(MultichoiceList_Mechadoll4_Q2),
    [MULTI_MECHADOLL4_Q3]              = MULTICHOICE(MultichoiceList_Mechadoll4_Q3),
    [MULTI_MECHADOLL5_Q1]              = MULTICHOICE(MultichoiceList_Mechadoll5_Q1),
    [MULTI_MECHADOLL5_Q2]              = MULTICHOICE(MultichoiceList_Mechadoll5_Q2),
    [MULTI_MECHADOLL5_Q3]              = MULTICHOICE(MultichoiceList_Mechadoll5_Q3),
    [MULTI_UNUSED_40]                  = MULTICHOICE(MultichoiceList_Exit),
    [MULTI_UNUSED_41]                  = MULTICHOICE(MultichoiceList_Exit),
    [MULTI_VENDING_MACHINE]            = MULTICHOICE(MultichoiceList_VendingMachine),
    [MULTI_MACH_BIKE_INFO]             = MULTICHOICE(MultichoiceList_MachBikeInfo),
    [MULTI_ACRO_BIKE_INFO]             = MULTICHOICE(MultichoiceList_AcroBikeInfo),
    [MULTI_SATISFACTION]               = MULTICHOICE(MultichoiceList_Satisfaction),
    [MULTI_STERN_DEEPSEA]              = MULTICHOICE(MultichoiceList_SternDeepSea),
    [MULTI_UNUSED_ASH_VENDOR]          = MULTICHOICE(MultichoiceList_UnusedAshVendor),
    [MULTI_GAME_CORNER_DOLLS]          = MULTICHOICE(MultichoiceList_GameCornerDolls),
    [MULTI_GAME_CORNER_COINS]          = MULTICHOICE(MultichoiceList_GameCornerCoins),
    [MULTI_HOWS_FISHING]               = MULTICHOICE(MultichoiceList_HowsFishing),
    [MULTI_UNUSED_51]                  = MULTICHOICE(MultichoiceList_Exit),
    [MULTI_SSTIDAL_SLATEPORT_WITH_BF]  = MULTICHOICE(MultichoiceList_SSTidalSlateportWithBF),
    [MULTI_SSTIDAL_BATTLE_FRONTIER]    = MULTICHOICE(MultichoiceList_SSTidalBattleFrontier),
    [MULTI_RIGHTLEFT]                  = MULTICHOICE(MultichoiceList_RightLeft),
    [MULTI_GAME_CORNER_TMS]            = MULTICHOICE(MultichoiceList_GameCornerTMs),
    [MULTI_SSTIDAL_SLATEPORT_NO_BF]    = MULTICHOICE(MultichoiceList_SSTidalSlateportNoBF),
    [MULTI_FLOORS]                     = MULTICHOICE(MultichoiceList_Floors),
    [MULTI_SHARDS_R]                   = MULTICHOICE(MultichoiceList_ShardsR),
    [MULTI_SHARDS_Y]                   = MULTICHOICE(MultichoiceList_ShardsY),
    [MULTI_SHARDS_RY]                  = MULTICHOICE(MultichoiceList_ShardsRY),
    [MULTI_SHARDS_B]                   = MULTICHOICE(MultichoiceList_ShardsB),
    [MULTI_SHARDS_RB]                  = MULTICHOICE(MultichoiceList_ShardsRB),
    [MULTI_SHARDS_YB]                  = MULTICHOICE(MultichoiceList_ShardsYB),
    [MULTI_SHARDS_RYB]                 = MULTICHOICE(MultichoiceList_ShardsRYB),
    [MULTI_SHARDS_G]                   = MULTICHOICE(MultichoiceList_ShardsG),
    [MULTI_SHARDS_RG]                  = MULTICHOICE(MultichoiceList_ShardsRG),
    [MULTI_SHARDS_YG]                  = MULTICHOICE(MultichoiceList_ShardsYG),
    [MULTI_SHARDS_RYG]                 = MULTICHOICE(MultichoiceList_ShardsRYG),
    [MULTI_SHARDS_BG]                  = MULTICHOICE(MultichoiceList_ShardsBG),
    [MULTI_SHARDS_RBG]                 = MULTICHOICE(MultichoiceList_ShardsRBG),
    [MULTI_SHARDS_YBG]                 = MULTICHOICE(MultichoiceList_ShardsYBG),
    [MULTI_SHARDS_RYBG]                = MULTICHOICE(MultichoiceList_ShardsRYBG),
    [MULTI_TOURNEY_WITH_RECORD]        = MULTICHOICE(MultichoiceList_TourneyWithRecord),
    [MULTI_CABLE_CLUB_NO_RECORD_MIX]   = MULTICHOICE(MultichoiceList_LinkServicesNoRecordBerry),
    [MULTI_WIRELESS_NO_RECORD_BERRY]   = MULTICHOICE(MultichoiceList_LinkServicesNoRecordBerry),
    [MULTI_CABLE_CLUB_WITH_RECORD_MIX] = MULTICHOICE(MultichoiceList_LinkServicesNoBerry),
    [MULTI_WIRELESS_NO_BERRY]          = MULTICHOICE(MultichoiceList_LinkServicesNoBerry),
    [MULTI_WIRELESS_NO_RECORD]         = MULTICHOICE(MultichoiceList_LinkServicesNoRecord),
    [MULTI_WIRELESS_ALL_SERVICES]      = MULTICHOICE(MultichoiceList_LinkServicesAll),
    [MULTI_WIRELESS_MINIGAME]          = MULTICHOICE(MultichoiceList_WirelessMinigame),
    [MULTI_LINK_LEADER]                = MULTICHOICE(MultichoiceList_LinkLeader),
    [MULTI_CONTEST_RANK]               = MULTICHOICE(MultichoiceList_ContestRank),
    [MULTI_FRONTIER_ITEM_CHOOSE]       = MULTICHOICE(MultichoiceList_FrontierItemChoose),
    [MULTI_LINK_CONTEST_INFO]          = MULTICHOICE(MultichoiceList_LinkContestInfo),
    [MULTI_LINK_CONTEST_MODE]          = MULTICHOICE(MultichoiceList_LinkContestMode),
    [MULTI_FORCED_START_MENU]          = MULTICHOICE(MultichoiceList_ForcedStartMenu),
    [MULTI_FRONTIER_GAMBLER_BET]       = MULTICHOICE(MultichoiceList_FrontierGamblerBet),
    [MULTI_TENT]                       = MULTICHOICE(MultichoiceList_Tent),
    [MULTI_UNUSED_SSTIDAL_1]           = MULTICHOICE(MultichoiceList_UnusedSSTidal1),
    [MULTI_UNUSED_SSTIDAL_2]           = MULTICHOICE(MultichoiceList_UnusedSSTidal2),
    [MULTI_UNUSED_SSTIDAL_3]           = MULTICHOICE(MultichoiceList_UnusedSSTidal3),
    [MULTI_UNUSED_SSTIDAL_4]           = MULTICHOICE(MultichoiceList_UnusedSSTidal4),
    [MULTI_FOSSIL]                     = MULTICHOICE(MultichoiceList_Fossil),
    [MULTI_YESNO]                      = MULTICHOICE(MultichoiceList_YesNo),
    [MULTI_FRONTIER_RULES]             = MULTICHOICE(MultichoiceList_FrontierRules),
    [MULTI_BATTLE_ARENA_RULES]         = MULTICHOICE(MultichoiceList_BattleArenaRules),
    [MULTI_BATTLE_TOWER_RULES]         = MULTICHOICE(MultichoiceList_BattleTowerRules),
    [MULTI_BATTLE_DOME_RULES]          = MULTICHOICE(MultichoiceList_BattleDomeRules),
    [MULTI_BATTLE_FACTORY_RULES]       = MULTICHOICE(MultichoiceList_BattleFactoryRules),
    [MULTI_BATTLE_PALACE_RULES]        = MULTICHOICE(MultichoiceList_BattlePalaceRules),
    [MULTI_BATTLE_PYRAMID_RULES]       = MULTICHOICE(MultichoiceList_BattlePyramidRules),
    [MULTI_BATTLE_PIKE_RULES]          = MULTICHOICE(MultichoiceList_BattlePikeRules),
    [MULTI_GO_ON_RECORD_REST_RETIRE]   = MULTICHOICE(MultichoiceList_GoOnRecordRestRetire),
    [MULTI_GO_ON_REST_RETIRE]          = MULTICHOICE(MultichoiceList_GoOnRestRetire),
    [MULTI_GO_ON_RECORD_RETIRE]        = MULTICHOICE(MultichoiceList_GoOnRecordRetire),
    [MULTI_GO_ON_RETIRE]               = MULTICHOICE(MultichoiceList_GoOnRetire),
    [MULTI_TOURNEY_NO_RECORD]          = MULTICHOICE(MultichoiceList_TourneyNoRecord),
    [MULTI_TV_LATI]                    = MULTICHOICE(MultichoiceList_TVLati),
    [MULTI_BATTLE_TOWER_FEELINGS]      = MULTICHOICE(MultichoiceList_BattleTowerFeelings),
    [MULTI_WHERES_RAYQUAZA]            = MULTICHOICE(MultichoiceList_WheresRayquaza),
    [MULTI_SLATEPORT_TENT_RULES]       = MULTICHOICE(MultichoiceList_SlateportTentRules),
    [MULTI_FALLARBOR_TENT_RULES]       = MULTICHOICE(MultichoiceList_FallarborTentRules),
    [MULTI_TAG_MATCH_TYPE]             = MULTICHOICE(MultichoiceList_TagMatchType),
    [MULTI_BERRY_PLOT]                 = MULTICHOICE(MultichoiceList_BerryPlot),
    [MULTI_BIKE_SHOP]                  = MULTICHOICE(sMultichoiceList_BikeShop),
    [MULTI_EEVEELUTIONS]               = MULTICHOICE(sMultichoiceList_Eeveelutions),
    [MULTI_ISLAND_23]                  = MULTICHOICE(sMultichoiceList_Island23),
    [MULTI_ISLAND_13]                  = MULTICHOICE(sMultichoiceList_Island13),
    [MULTI_ISLAND_12]                  = MULTICHOICE(sMultichoiceList_Island12),
    [MULTI_SEVII_NAVEL]                = MULTICHOICE(sMultichoiceList_SeviiNavel),
    [MULTI_SEVII_BIRTH]                = MULTICHOICE(sMultichoiceList_SeviiBirth),
    [MULTI_SEVII_NAVEL_BIRTH]          = MULTICHOICE(sMultichoiceList_SeviiNavelBirth),
    [MULTI_SEAGALLOP_123]              = MULTICHOICE(sMultichoiceList_Seagallop123),
    [MULTI_SEAGALLOP_V23]              = MULTICHOICE(sMultichoiceList_SeagallopV23),
    [MULTI_SEAGALLOP_V13]              = MULTICHOICE(sMultichoiceList_SeagallopV13),
    [MULTI_SEAGALLOP_V12]              = MULTICHOICE(sMultichoiceList_SeagallopV12),
    [MULTI_SEAGALLOP_VERMILION]        = MULTICHOICE(sMultichoiceList_SeagallopVermilion),
    [MULTI_GAME_CORNER_POKEMON_PRIZES] = MULTICHOICE(sMultichoiceList_GameCornerPokemonPrizes),
    [MULTI_GAME_CORNER_TMPRIZES]           = MULTICHOICE(sMultichoiceList_GameCornerTMPrizes),
    [MULTI_GAME_CORNER_BATTLE_ITEM_PRIZES] = MULTICHOICE(sMultichoiceList_GameCornerBattleItemPrizes),
    [MULTI_DEPT_STORE_ELEVATOR]            = MULTICHOICE(sMultichoiceList_DeptStoreElevator),
    [MULTI_GAME_CORNER_COIN_PURCHASE_COUNTER] = MULTICHOICE(sMultichoiceList_GameCornerCoinPurchaseCounter),
    [MULTI_LINKED_DIRECT_UNION]         = MULTICHOICE(sMultichoiceList_LinkedDirectUnion),
    [MULTI_CELADON_VENDING_MACHINE]           = MULTICHOICE(sMultichoiceList_CeladonVendingMachine),
    [MULTI_THIRSTY_GIRL_FRESH_WATER]                   = MULTICHOICE(sMultichoiceList_ThirstyGirlFreshWater),
    [MULTI_THIRSTY_GIRL_SODA_POP]                      = MULTICHOICE(sMultichoiceList_ThirstyGirlSodaPop),
    [MULTI_THIRSTY_GIRL_FRESH_WATER_SODA_POP]          = MULTICHOICE(sMultichoiceList_ThirstyGirlFreshWaterSodaPop),
    [MULTI_THIRSTY_GIRL_LEMONADE]                      = MULTICHOICE(sMultichoiceList_ThirstyGirlLemonade),
    [MULTI_THIRSTY_GIRL_FRESH_WATER_LEMONADE]          = MULTICHOICE(sMultichoiceList_ThirstyGirlFreshWaterLemonade),
    [MULTI_THIRSTY_GIRL_SODA_POP_LEMONADE]             = MULTICHOICE(sMultichoiceList_ThirstyGirlSodaPopLemonade),
    [MULTI_THIRSTY_GIRL_FRESH_WATER_SODA_POP_LEMONADE] = MULTICHOICE(sMultichoiceList_ThirstyGirlFreshWaterSodaPopLemonade),
    [MULTI_ROCKET_HIDEOUT_ELEVATOR]                    = MULTICHOICE(sMultichoiceList_RocketHideoutElevator),
    [MULTI_HELIX]                                      = MULTICHOICE(sMultichoiceList_Helix),
    [MULTI_DOME]                                       = MULTICHOICE(sMultichoiceList_Dome),
    [MULTI_AMBER]                                      = MULTICHOICE(sMultichoiceList_Amber),
    [MULTI_HELIX_AMBER]                                = MULTICHOICE(sMultichoiceList_HelixAmber),
    [MULTI_DOME_AMBER]                                 = MULTICHOICE(sMultichoiceList_DomeAmber),
    [MULTI_MUSHROOMS]                                  = MULTICHOICE(sMultichoiceList_Mushrooms),
    [MULTI_ROOFTOP_B1F]                                = MULTICHOICE(sMultichoiceList_RooftopB1F),
    [MULTI_TRAINER_TOWER_MODE]                         = MULTICHOICE(sMultichoiceList_TrainerTowerMode),
    [MULTI_TRAINER_CARD_ICON_TINT]                     = MULTICHOICE(sMultichoiceList_TrainerCardIconTint),
    [MULTI_HOF_QUIT]                                   = MULTICHOICE(sMultichoiceList_HOF_Quit),
    [MULTI_EGGS_QUIT]                                  = MULTICHOICE(sMultichoiceList_Eggs_Quit),
    [MULTI_VICTORIES_QUIT]                             = MULTICHOICE(sMultichoiceList_Victories_Quit),
    [MULTI_HOF_EGGS_QUIT]                              = MULTICHOICE(sMultichoiceList_HOF_Eggs_Quit),
    [MULTI_HOF_VICTORIES_QUIT]                         = MULTICHOICE(sMultichoiceList_HOF_Victories_Quit),
    [MULTI_EGGS_VICTORIES_QUIT]                        = MULTICHOICE(sMultichoiceList_Eggs_Victories_Quit),
    [MULTI_HOF_EGGS_VICTORIES_QUIT]                    = MULTICHOICE(sMultichoiceList_HOF_Eggs_Victories_Quit),
};

const u8 *const gStdStrings[] =
{
    [STDSTRING_COOL] = gText_Cool,
    [STDSTRING_BEAUTY] = gText_Beauty,
    [STDSTRING_CUTE] = gText_Cute,
    [STDSTRING_SMART] = gText_Smart,
    [STDSTRING_TOUGH] = gText_Tough,
    [STDSTRING_NORMAL] = gText_Normal,
    [STDSTRING_SUPER] = COMPOUND_STRING("{JPN}スーパー"),
    [STDSTRING_HYPER] = COMPOUND_STRING("{JPN}ハイパー"),
    [STDSTRING_MASTER] = COMPOUND_STRING("{JPN}マスター"),
    [STDSTRING_COOL2] = COMPOUND_STRING("{JPN}かっこいい"),
    [STDSTRING_BEAUTY2] = COMPOUND_STRING("{JPN}うつくしい"),
    [STDSTRING_CUTE2] = COMPOUND_STRING("{JPN}かわいい"),
    [STDSTRING_SMART2] = COMPOUND_STRING("{JPN}かしこそうな"),
    [STDSTRING_TOUGH2] = COMPOUND_STRING("{JPN}たくましい"),
    [STDSTRING_ITEMS] = COMPOUND_STRING("{JPN}どうぐ"),
    [STDSTRING_KEYITEMS] = COMPOUND_STRING("{JPN}たいせつなもの"),
    [STDSTRING_POKEBALLS] = COMPOUND_STRING("{JPN}ボール"),
    [STDSTRING_TMHMS] = COMPOUND_STRING("{JPN}わざマシン"),
    [STDSTRING_BERRIES] = COMPOUND_STRING("{JPN}きのみ"),
    [STDSTRING_SINGLE] = COMPOUND_STRING("{JPN}シングル"),
    [STDSTRING_DOUBLE] = COMPOUND_STRING("{JPN}ダブル"),
    [STDSTRING_MULTI] = COMPOUND_STRING("{JPN}マルチ"),
    [STDSTRING_MULTI_LINK] = COMPOUND_STRING("{JPN}つうしん マルチ"),
    [STDSTRING_BATTLE_TOWER] = gText_BattleTower2,
    [STDSTRING_BATTLE_DOME] = gText_BattleDome,
    [STDSTRING_BATTLE_FACTORY] = gText_BattleFactory,
    [STDSTRING_BATTLE_PALACE] = gText_BattlePalace,
    [STDSTRING_BATTLE_ARENA] = gText_BattleArena,
    [STDSTRING_BATTLE_PIKE] = gText_BattlePike,
    [STDSTRING_BATTLE_PYRAMID] = gText_BattlePyramid,
    [STDSTRING_BOULDER_BADGE] = gText_Boulderbadge,
    [STDSTRING_CASCADE_BADGE] = gText_Cascadebadge,
    [STDSTRING_THUNDER_BADGE] = gText_Thunderbadge,
    [STDSTRING_RAINBOW_BADGE] = gText_Rainbowbadge,
    [STDSTRING_SOUL_BADGE]    = gText_Soulbadge,
    [STDSTRING_MARSH_BADGE]   = gText_Marshbadge,
    [STDSTRING_VOLCANO_BADGE] = gText_Volcanobadge,
    [STDSTRING_EARTH_BADGE]   = gText_Earthbadge,
    [STDSTRING_COINS]         = COMPOUND_STRING("{JPN}コイン"),
};

static const u8 sLinkServicesMultichoiceIds[] =
{
    MULTI_CABLE_CLUB_NO_RECORD_MIX,
    MULTI_WIRELESS_NO_RECORD_BERRY,
    MULTI_CABLE_CLUB_WITH_RECORD_MIX,
    MULTI_WIRELESS_NO_BERRY,
    MULTI_WIRELESS_NO_RECORD,
    MULTI_WIRELESS_ALL_SERVICES
};

static const u8 *const sPCNameStrings[] =
{
    gText_SomeonesPC,
    gText_LanettesPC,
    gText_PlayersPC,
    gText_LogOff,
};

static const u8 *const sLilycoveSSTidalDestinations[SSTIDAL_SELECTION_COUNT] =
{
    [SSTIDAL_SELECTION_SLATEPORT]       = gText_SlateportCity,
    [SSTIDAL_SELECTION_BATTLE_FRONTIER] = gText_BattleFrontier,
    [SSTIDAL_SELECTION_SOUTHERN_ISLAND] = gText_SouthernIsland,
    [SSTIDAL_SELECTION_NAVEL_ROCK]      = gText_NavelRock,
    [SSTIDAL_SELECTION_BIRTH_ISLAND]    = gText_BirthIsland,
    [SSTIDAL_SELECTION_FARAWAY_ISLAND]  = gText_FarawayIsland,
    [SSTIDAL_SELECTION_EXIT]            = gText_Exit,
};

static const u8 *const sCableClubOptions_WithRecordMix[] =
{
    CableClub_Text_TradeUsingLinkCable,
    CableClub_Text_BattleUsingLinkCable,
    CableClub_Text_RecordCornerUsingLinkCable,
    CableClub_Text_CancelSelectedItem,
};
static const u8 *const sWirelessOptionsNoBerryCrush[] =
{
    CableClub_Text_YouMayTradeHere,
    CableClub_Text_YouMayBattleHere,
    CableClub_Text_CanMixRecords,
    CableClub_Text_CancelSelectedItem,
};
static const u8 *const sWirelessOptions_NoRecordMix[] =
{
    CableClub_Text_YouMayTradeHere,
    CableClub_Text_YouMayBattleHere,
    CableClub_Text_CanMakeBerryPowder,
    CableClub_Text_CancelSelectedItem,
};
static const u8 *const sWirelessOptions_AllServices[] =
{
    CableClub_Text_YouMayTradeHere,
    CableClub_Text_YouMayBattleHere,
    CableClub_Text_CanMixRecords,
    CableClub_Text_CanMakeBerryPowder,
    CableClub_Text_CancelSelectedItem,
};
static const u8 *const sCableClubOptions_NoRecordMix[] =
{
    CableClub_Text_TradeUsingLinkCable,
    CableClub_Text_BattleUsingLinkCable,
    CableClub_Text_CancelSelectedItem,
};
static const u8 *const sWirelessOptions_NoRecordMixBerryCrush[] =
{
    CableClub_Text_YouMayTradeHere,
    CableClub_Text_YouMayBattleHere,
    CableClub_Text_CancelSelectedItem,
};

static const u8 *const sSeagallopDestStrings[] = {
    [SEAGALLOP_VERMILION_CITY] = gText_Vermilion,
    [SEAGALLOP_ONE_ISLAND]     = gText_OneIsland,
    [SEAGALLOP_TWO_ISLAND]     = gText_TwoIsland,
    [SEAGALLOP_THREE_ISLAND]   = gText_ThreeIsland,
    [SEAGALLOP_FOUR_ISLAND]    = COMPOUND_STRING("{JPN}4のしま"),
    [SEAGALLOP_FIVE_ISLAND]    = COMPOUND_STRING("{JPN}5のしま"),
    [SEAGALLOP_SIX_ISLAND]     = COMPOUND_STRING("{JPN}6のしま"),
    [SEAGALLOP_SEVEN_ISLAND]   = COMPOUND_STRING("{JPN}7のしま"),
};
