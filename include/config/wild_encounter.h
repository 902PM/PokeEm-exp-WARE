#ifndef GUARD_CONFIG_WILD_ENCOUNTER_H
#define GUARD_CONFIG_WILD_ENCOUNTER_H

// Vanilla
#define WE_VANILLA_RANDOM           TRUE    // TRUEの場合、原作と同様に、野生のポケモンとの遭遇が発生しうるタイル上でポケモンがランダムに出現するようになります。
#define WE_FLAG_NO_ENCOUNTER        0       // このフラグが設定されている場合、野生のポケモンとの遭遇は無効になります。＝フラグでエンカウントを無効にできる。

// Double Wild Battles
#define WE_DOUBLE_WILD_CHANCE            0          // 野生のエンカウントで2匹のポケモンに遭遇する確率（%）
#define WE_DOUBLE_WILD_REQUIRE_2_MONS    FALSE      // これをTRUEに設定すると、プレイヤーが戦闘可能なポケモンを1匹しか持っていない場合、`WE_DOUBLE_WILD_CHANCE`や`WE_FLAG_FORCE_DOUBLE_WILD`の設定にかかわらず、野生のダブルバトルはデフォルトでシングルバトルになります。
#define WE_WILD_NATURAL_ENEMIES          TRUE       // TRUEに設定すると、野生のダブルバトルで特定の野生ポケモン同士がペアになった際、互いに攻撃し合うようになります（例：ザングースVSハブネーク）。

// Wild Battle Flags
#define WE_FLAG_FORCE_DOUBLE_WILD    0     // このフラグが設定されている場合、陸上および波乗り中の野生ポケモンとのバトルはすべてダブルバトルになります。
#define WE_SMART_WILD_AI_FLAG        0     // このフラグが設定されると、野生のポケモンは賢くなり、すべてのAIフラグが有効になります。
#define WE_FLAG_NO_CATCHING          0     // このフラグが設定されている場合、野生のポケモンを捕まえる機能は無効になります。
#define WE_FLAG_NO_RUNNING           0     // このフラグが設定されている場合、野生のポケモンとの戦闘から逃げることができなくなります。また、「ほえる」や「ふきとばし」、および（第8世代における）「テレポート」も失敗するようになります。

// Overworld Wild Encounters (OWEs)
#define WE_OW_ENCOUNTERS                        FALSE   // TRUEの場合、OWポケモンが現在のマップ上で「フィールド上の野生ポケモン（Overworld Wild Encounters）」として出現するようになります。OW_POKEMON_OBJECT_EVENTSが必要です。
                                                        // WE_OW_ENCOUNTERS が TRUE の場合、VRAM に関する問題を回避するため、OW_GFX_COMPRESS を FALSE に設定することが推奨されます。
#define WE_OWE_FLAG_DISABLED                    0       // 生成されるOWEの有効化・無効化を切り替えるために、0をフラグに置き換えてください。
#define WE_OWE_SPECIAL_ONLY                     FALSE   // TRUEの場合、生成されるOWEは特別なスポーンのみとなります。
#define WE_OWE_BATTLE_PIKE                      TRUE    // TRUEの場合、バトルチューブでOWE（フィールド上のエンカウント）が発生するようになります。FALSEの場合、代わりにランダムエンカウントが有効になります。WE_OW_ENCOUNTERSがTRUEに設定されている必要があります。
#define WE_OWE_BATTLE_PYRAMID                   TRUE    // TRUEの場合、バトルピラミッド内でOWE（フィールド上のエンカウント）が発生するようになります。FALSEの場合、代わりにランダムエンカウントが有効になります。WE_OW_ENCOUNTERSがTRUEに設定されている必要があります。
#define WE_OWE_RESTRICT_METATILE                TRUE    // TRUEの場合、OWEは（もしあれば）現在位置しているタイルと同じエンカウント・メタタイル挙動を持つタイルの範囲内に留まります。
#define WE_OWE_RESTRICT_MAP                     TRUE    // TRUEの場合、OWEは現在のマップ境界内に留まります。
#define WE_OWE_UNRESTRICT_SIGHT                 FALSE   // TRUEの場合、プレイヤーに反応する移動行動を持つOWEは、プレイヤーを視認できるとき、あらゆる移動制限を無視します。
#define WE_OWE_SPAWN_REPLACEMENT                FALSE   // TRUEの場合、最も古いOWEオブジェクトは短時間で消滅し、可能であれば新しいオブジェクトが代わりにスポーンします。
#define WE_OWE_FLEE_DESPAWN                     TRUE    // TRUEの場合、逃走中のOWEは、短時間移動できずにいるとデスポーンします。
#define WE_OWE_SHINY_SPARKLE                    FALSE   // TRUEの場合、色違いのOWEはキラキラのエフェクトと共にスポーンし、色違いのSEが再生されます。
#define WE_OWE_FEEBAS_SPOTS                     TRUE   // TRUEの場合、ヒンバスが釣れる可能性のあるあらゆる地点で、ヒンバスのOWE（フィールド上のポケモン）が出現し得ます。
#define WE_OWE_DESPAWN_SOUND                    FALSE   // TRUEの場合、OWEがデスポーンする際にSE_FLEEを再生します。
#define WE_OWE_APPROACH_FOR_BATTLE              TRUE    // TRUEの場合、OWEは戦闘開始前にプレイヤーのすぐそばに移動します。
#define WE_OWE_PREVENT_SHINY_DESPAWN            TRUE   // TRUEの場合、プレイヤーと同じマップ上にいる限り、画面外に出ても色違いのOWEは消滅せず、またWE_OWE_SPAWN_REPLACEMENTがTRUEであっても置き換えられません。
#define WE_OWE_PREVENT_FEEBAS_DESPAWN           FALSE   // If TRUE, Feebas OWEs spawned from special Feebas fishing spots (when WE_OWE_FEEBAS_SPOTS is TRUE) will not be despawned when off-screen if on the same map as the player, or be replaced if WE_OWE_SPAWN_REPLACEMENT is TRUE.
#define WE_OWE_PREVENT_SPECIAL_MOVEMENT_DESPAWN TRUE    // これがTRUEの場合、（`WE_OWE_FEEBAS_SPOTS`がTRUEの際に）特別なヒンバス釣りスポットから出現したヒンバスのOWE（フィールド上の実体）は、プレイヤーと同じマップ上にいる限り、画面外に出ても消滅したり、あるいは（`WE_OWE_SPAWN_REPLACEMENT`がTRUEの場合に）置き換えられたりすることはありません。
#define WE_OWE_DESPAWN_ON_ENTER_TOWN            TRUE    // TRUEの場合、都市（MAP_TYPE_CITY）または町（MAP_TYPE_TOWN）に入ると、すべてのOWEをデスポーンさせます。
#define WE_OWE_NO_REPEL_DEXNAV_COLLISION        FALSE   // TRUEの場合、「スプレー」または「サーチナビ」が有効な状態では、接触によってOWE（フィールド上の野生ポケモンとの遭遇）が発生することはありません。

#endif // GUARD_CONFIG_WILD_ENCOUNTER_H
