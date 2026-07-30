#ifndef GUARD_CONFIG_AI_H
#define GUARD_CONFIG_AI_H

// いれかえ判定関数が具体的にどのような要素を考慮しているかについては、src/battle_ai_switch_items.c 内の ShouldSwitch に関連する関数を参照してください。
// これらの設定オプションは、AIが「交代の条件をすべて満たしている」と判断した際に、実際に交代を行う確率を制御するものです。
// これらは一種の「成功率」のようなものだと考えてください。例えば、AIが「ふしぎなまもり」対策として交代が必要だと判断した場合、実際にその行動をとる頻度をどの程度にするか、といった具合です。

// AIの『いれかえ』確率。より複雑な挙動が必要な場合は、GetSwitchChanceを修正してください。
#define SHOULD_SWITCH_WONDER_GUARD_PERCENTAGE                   100
#define SHOULD_SWITCH_TRUANT_PERCENTAGE                         100
#define SHOULD_SWITCH_ALL_MOVES_BAD_PERCENTAGE                  100
#define STAY_IN_STATS_RAISED                                    2  // 特定の状況下でAIがポケモンの交代を行わなくなるために、いずれかのステータスで上昇させる必要のあるステータスランクの数

// AIの『いれかえ』確率（AI smart switching chances）。より複雑な挙動が必要な場合は、GetSwitchChanceを修正してください。
#define SHOULD_SWITCH_ABSORBS_MOVE_PERCENTAGE                       100
#define SHOULD_SWITCH_ABSORBS_HIDDEN_POWER_PERCENTAGE               50
#define SHOULD_SWITCH_TRAPPER_PERCENTAGE                            100
#define SHOULD_SWITCH_FREE_TURN_PERCENTAGE                          50
#define STAY_IN_ABSORBING_PERCENTAGE                                66  // 場に出ているポケモンがプレイヤーに対して「効果は抜群」の技を持っている場合、そのポケモンが居座る可能性があります。その際、この確率で、プレイヤー側が「受け」のポケモンに交代することが阻止されます。
#define SHOULD_SWITCH_HASBADODDS_PERCENTAGE                         50
#define SHOULD_SWITCH_ENCORE_STATUS_PERCENTAGE                      100
#define SHOULD_SWITCH_ENCORE_DAMAGE_PERCENTAGE                      50
#define SHOULD_SWITCH_CHOICE_LOCKED_PERCENTAGE                      50 // 「変化技」に固定されている場合のみ
#define SHOULD_SWITCH_ATTACKING_STAT_MINUS_TWO_PERCENTAGE           50
#define SHOULD_SWITCH_ATTACKING_STAT_MINUS_THREE_PLUS_PERCENTAGE    100
#define SHOULD_SWITCH_ALL_SCORES_BAD_PERCENTAGE                     100
#define SHOULD_SWITCH_DYN_FUNC_PERCENTAGE                           50 // 動的切り替え機能の切り替え機会
#define SHOULD_SWITCH_LOSES_1V1_PERCENTAGE                          0 // デフォルトで無効にしておくことで、開発時に切り替え動作を評価・テストするのが格段に容易になります。

// AIによる不調ステータス時のAI smart switching chances
#define SHOULD_SWITCH_PERISH_SONG_PERCENTAGE                    100
#define SHOULD_SWITCH_YAWN_PERCENTAGE                           100
#define SHOULD_SWITCH_BADLY_POISONED_PERCENTAGE                 50
#define SHOULD_SWITCH_BADLY_POISONED_STATS_RAISED_PERCENTAGE    20
#define SHOULD_SWITCH_CURSED_PERCENTAGE                         50
#define SHOULD_SWITCH_CURSED_STATS_RAISED_PERCENTAGE            20
#define SHOULD_SWITCH_NIGHTMARE_PERCENTAGE                      33
#define SHOULD_SWITCH_NIGHTMARE_STATS_RAISED_PERCENTAGE         15
#define SHOULD_SWITCH_SEEDED_PERCENTAGE                         25
#define SHOULD_SWITCH_SEEDED_STATS_RAISED_PERCENTAGE            10
#define SHOULD_SWITCH_INFATUATION_PERCENTAGE                    100

// 有益なとくせいを発動させるためのAI smart switching chances
#define SHOULD_SWITCH_NATURAL_CURE_STRONG_PERCENTAGE                66
#define SHOULD_SWITCH_NATURAL_CURE_STRONG_STATS_RAISED_PERCENTAGE   10
#define SHOULD_SWITCH_NATURAL_CURE_WEAK_PERCENTAGE                  25
#define SHOULD_SWITCH_NATURAL_CURE_WEAK_STATS_RAISED_PERCENTAGE     10
#define SHOULD_SWITCH_REGENERATOR_PERCENTAGE                        50
#define SHOULD_SWITCH_REGENERATOR_STATS_RAISED_PERCENTAGE           20
#define SHOULD_SWITCH_INTIMIDATE_PERCENTAGE                         25
#define SHOULD_SWITCH_INTIMIDATE_STATS_RAISED_PERCENTAGE            10
#define SHOULD_SWITCH_WISH_PASSING_PERCENTAGE                       50

// AI switchin considerations
#define ALL_MOVES_BAD_STATUS_MOVES_BAD                          FALSE // If the AI has no moves that affect the target, ShouldSwitchIfAllMovesBad can prompt a switch. Enabling this config will ignore status moves that can affect the target when making this decision.
#define AI_BAD_SCORE_THRESHOLD                                  90 // Move scores beneath this threshold are considered "bad" when deciding switching
#define AI_GOOD_SCORE_THRESHOLD                                 100 // Move scores above this threshold are considered "good" when deciding switching
#define ALL_MOVES_BAD_NEEDS_GOOD_SWITCHIN                       FALSE // AI will only trigger ShouldSwitchIfAllMovesBad if they have a good switchin
#define ALL_SCORES_BAD_NEEDS_GOOD_SWITCHIN                      FALSE // AI will only trigger ShouldSwitchIfAllScoresBad if they have a good switchin
#define AI_DEFENSIVE_KO_THRESHOLD                               3 // AI must be able to take more than this many hits before being KO'd before being considered a "defensive mon"
#define AI_TYPE_MATCHUP_THRESHOLD                               UQ_4_12(2.0) // AI must have a better matchup than this to be considered good; 2.0 is the default "Neutral" matchup from GetBattlerTypeMatchup
#define AI_WISH_HEAL_THRESHOLD                                  4 // Fraction of HP AI must restore to be considered a good recipient of Wish, treated as a fraction denominator (ie. 4 = 1/4 = 25% HP)
#define AI_SWITCHIN_DAMAGE_THRESHOLD                            0 // Damage AI must exceed to be considered an acceptable switchin candidate. Keep this *very low*, as it's used as a fallback case before giving up.
#define AI_REVERSE_BATTLER_LOGIC_ORDER_CHANCE                   50 // Chance to reverse the order of mons when running AI logic in double battles. For example if both mons want to switch and there's only one mon to switch in, the first mon processed will get to switch; setting this above zero controls the chance of switching which slot is processed first

// AI held item-based move scoring
#define LOW_ACCURACY_THRESHOLD                                  75 // Moves with accuracy equal OR below this value are considered low accuracy

// AI move scoring
#define STATUS_MOVE_FOCUS_PUNCH_CHANCE                          50 // Chance the AI will use a status move if the player's best move is Focus Punch
#define BOOST_INTO_HAZE_CHANCE                                  0 // Chance the AI will use a stat boosting move if the player has used Haze
#define SHOULD_RECOVER_CHANCE                                   50 // Chance the AI will give recovery moves score increase if less than ENABLE_RECOVERY_THRESHOLD and in no immediate danger
#define ENABLE_RECOVERY_THRESHOLD                               60 // HP percentage beneath which SHOULD_RECOVER_CHANCE is active
#define SUCKER_PUNCH_CHANCE                                     50 // Chance for the AI to not use Sucker Punch if the player has a status move
#define SUCKER_PUNCH_PREDICTION_CHANCE                          50 // Additional chance for the AI to not use Sucker Punch if actively predicting a status move if SUCKER_PUNCH_CHANCE fails
#define PRIORITIZE_LAST_CHANCE_CHANCE                           50 // Chance the AI will prioritize Last Chance (priority move in the face of being outsped and KO'd) over Slow KO
#define LAST_MON_PREFERS_NOT_SACRIFICE                          FALSE // Whether the AI will be hesitant to use self-sacrificing moves (Explosion, Final Gambit) with their last mon
#define EXPLOSION_LOWER_HP_THRESHOLD                            10 // HP percentage at or beneath which the AI has a 90% chance to explode; otherwise scales between this and higher threshold
#define EXPLOSION_HIGHER_HP_THRESHOLD                           90 // HP percentage at or above which the AI has a 0% chance to explode; otherwise scales between this and lower threshold
#define EXPLOSION_MINIMUM_CHANCE                                0 // Lowest possible percent chance of the AI using explosion based on its current HP
#define EXPLOSION_MAXIMUM_CHANCE                                90 // Highest possible percent chance of the AI using explosion based on its current HP
#define FINAL_GAMBIT_CHANCE                                     50 // Chance for AI to consider using Final Gambit if it outspeeds the player and thinks it has more HP
#define SHOULD_PIVOT_BREAK_SASH_CHANCE                          50 // 「マルチスケイル」や「きあいのタスキ」といった効果を無効化しつつ、有利な状況で交代（スイッチイン）できる際に、`ShouldPivot` が `true` を返す可能性があります。
#define FAKE_OUT_SAVE_ALLY_CHANCE                               50 // 味方が対戦相手2体から素早くKOされそうな際、AIが「ねこだまし」で妨害して味方を救うチャンス

// AIダメージ計算に関する検討事項
#define RISKY_AI_CRIT_STAGE_THRESHOLD                           2   // リスキーがクリティカルヒットを狙うと判断するステータス段階
#define RISKY_AI_CRIT_THRESHOLD_GEN_1                           128 // リスキーが第 1 世代のメカニズムでクリティカルを獲得すると想定する「統計ステージ」 (これは X / 255 % のクリティカル閾値に相当します)
#define AI_DAMAGES_THROUGH_BERRIES                              TRUE // ダメージ計算において「確定撃破（確殺）」のラインを判断する際、AIは「半減実（ダメージを軽減するきのみ）」の効果を考慮に入れます。これにより、最適な技を比較検討する中で、必要であれば確実に一撃で倒せる技（OHKO）が選択されるようになります。
#define AI_IGNORE_BERRY_KO_THRESHOLD                            2   // AIが「きのみ」の効果を考慮して攻撃を行うために満たす必要のあるKO（撃破）ラインの閾値です（例：値が2の場合、「きのみで軽減される攻撃」と「軽減されない次の攻撃」の組み合わせで2発KOが可能なら、最初の攻撃の計算時にきのみによる軽減を無視する、という意味になります）。使用するには `AI_DAMAGES_THROUGH_BERRIES` が必要です。

// AIのダメージ計算におけるころがる（ダイスロール）の検討事項
#define AI_ROLL_MIN                                             1
#define AI_ROLL_MEDIAN                                          2
#define AI_ROLL_MAX                                             3
#define AI_ROLL_RANDOM                                          4
#define AI_ROLL_TYPE_COUNT                                      5

// 各状況で使用するころがるの種類を定義します（AI_FLAG_RISKY および AI_FLAG_CONSERVATIVE によって上書きされます）。
#define AI_ROLL_ATTACKING                                       AI_ROLL_MAX
#define AI_ROLL_DEFENDING                                       AI_ROLL_MEDIAN
#define AI_ROLL_SWITCHIN_ATTACKING                              AI_ROLL_MEDIAN
#define AI_ROLL_SWITCHIN_DEFENDING                              AI_ROLL_MEDIAN
#define AI_ROLL_SHOULD_SETUP_DEFENDING                          AI_ROLL_MAX
#define AI_ROLL_ATTACKING_PARTNER                               AI_ROLL_MAX

// AI予測の確率
#define PREDICT_SWITCH_CHANCE                                   50
#define PREDICT_MOVE_CHANCE                                     100

// AIのテラスタル発生率
#define AI_CONSERVE_TERA_CHANCE_PER_MON                         10 // 「smart tera flag 」を持つAIが、防御面でのメリットを考慮する前にテラスタルしないと判断する確率は、*(X-1)となります（ここでXは、テラスタル可能な生存ポケモンの数です）。
#define AI_TERA_PREDICT_CHANCE                                  40 // 「テラスタルすればきのみ等でKOを免れるが、別の技でKOされるリスクもある」という状況において、AIが「smart tera flag （テラスタルによる生存）」を選択する可能性。

// AI_FLAG_PP_STALL_PREVENTION 設定
#define PP_STALL_DISREGARD_MOVE_PERCENTAGE                      50 // PP消費なしで技を使用した際の確率:1回の判定あたりの確率
#define PP_STALL_SCORE_REDUCTION                                20 // PP枯渇検知のロールがいずれか1つでも成功した場合、スコアが減少する。

// AI_FLAG_ASSUME_STAB 設定
#define ASSUME_STAB_SEES_ABILITY                                FALSE // フラグはプレイヤーの特性に対する全知性も与えます。全知を持たないよりスマートな予測のために、代わりに AI_FLAG_WEIGH_ABILITY_PREDICTION を使用できます。

// AI_FLAG_ASSUME_STATUS_MOVES 設定
#define ASSUME_STATUS_MOVES_HAS_TUNING                  TRUE // フラグは、ステータス変化技の種類によって異なるレートを持ちます。
                                                             // falseに設定すると、「ねこだまし」や「いかりのまえば」に対しても通知されなくなります。
#define ASSUME_STATUS_HIGH_ODDS                         90 // 「キノコのほうし」のように、そのポケモンが覚えている可能性が極めて高い技をAIが認識する機会
#define ASSUME_STATUS_MEDIUM_ODDS                       70 // 「まもる」のように、そのポケモンが覚えている可能性がそれなりにある技をAIが認識するチャンス
#define ASSUME_STATUS_LOW_ODDS                          40 // AIが、「なりきり（Entrainment）」のような、そのポケモンが覚える可能性はあるものの実際には採用されにくい「ニッチな技」を認識するチャンス。
#define ASSUME_ALL_STATUS_ODDS                          25 // AIが何らかの状態変化技を使用する機会。

// AI_FLAG_SMART_SWITCHING 設定
#define SMART_SWITCHING_OMNISCIENT                              FALSE // AIは、他の「全知（omniscience）」設定にかかわらず、切り替え計算に全知の能力を使用します。

// AI_FLAG_RANDOMIZE_SWITCHIN settings
#define RANDOMIZE_SWITCHIN_ANY_VALID                            TRUE // AIにとって適切な候補となるポケモンがいない場合、パーティ順の最後にあるポケモンをデフォルトで選ぶのではなく、有効な選択肢すべての中からランダムに選出します。

// AI_FLAG_DOUBLE_BATTLEに特化した設定。
#define FRIENDLY_FIRE_RISKY_THRESHOLD             2 // AI_FLAG_RISKY：フレンドリーファイアでパートナーをKOさせるまでに許容されるヒット数
#define FRIENDLY_FIRE_NORMAL_THRESHOLD            3 // 味方への攻撃（フレンドリーファイア）で相手をKOするのに要する、一般的かつ許容範囲内のヒット数
#define FRIENDLY_FIRE_CONSERVATIVE_THRESHOLD      4 // AI_FLAG_CONSERVATIVE 味方への攻撃（フレンドリーファイア）でパートナーをKOさせるまでに許容されるヒット数
// 相手が守備に回ることを前提としたカウンタープレー
#define DOUBLE_TRICK_ROOM_ON_LAST_TURN_CHANCE    35 // 相手が時間稼ぎのために「まもる」を使ってくることを期待し、「トリックルーム」の効果が切れるターンに両方のポケモンで「トリックルーム」を使用することで、効果時間をタダで更新しようとする。
#define TAILWIND_IN_TRICK_ROOM_CHANCE            35 // 相手が両方とも「まもる」を使って時間を稼いでいることを期待して、「トリックルーム」が切れるターンに「おいかぜ」を使う。

#define AI_FLAG_ATTACKS_PARTNER_FOCUSES_PARTNER  FALSE  // TRUEの場合、AI_FLAG_ATTACKS_PARTNERは味方よりもパートナーを優先して攻撃します。
                                                        // AIとの野生ポケモン戦では、状況にかかわらず、これは真であるとして扱われます。

// AIが「ガードシェア」および「パワーシェア」に対して望むステータス変化（％換算）
#define GUARD_SPLIT_ALLY_PERCENTAGE     200
#define GUARD_SPLIT_ENEMY_PERCENTAGE    50
#define POWER_SPLIT_ALLY_PERCENTAGE     150
#define POWER_SPLIT_ENEMY_PERCENTAGE    50

// ステータス変化系Zワザを使用するためのHPのしきい値。
#define Z_EFFECT_FOLLOW_ME_THRESHOLD    30
#define Z_EFFECT_RESTORE_HP_LOWER_THRESHOLD   ENABLE_RECOVERY_THRESHOLD // threshold used for moves you could conceivably use more than once
#define Z_EFFECT_RESTORE_HP_HIGHER_THRESHOLD  90                        // these moves are one-time use or drop your HP

#endif // GUARD_CONFIG_AI_H
