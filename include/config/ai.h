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

// AIへの『いれかえ』に関する検討事項
#define ALL_MOVES_BAD_STATUS_MOVES_BAD                          FALSE // AIが敵に影響を与える技を一つも持っていない場合、『ShouldSwitchIfAllMovesBad』によって交代が促されることがあります。この設定を有効にすると、交代の判断を行う際、対象に影響を及ぼし得る変化技は無視されるようになります。
#define AI_BAD_SCORE_THRESHOLD                                  70 // 『いれかえ』を判断する際、この閾値を下回る技評価は『不可』とみなされます。
#define AI_GOOD_SCORE_THRESHOLD                                 100 // 『いれかえ』を判断する際、この閾値を超える技評価は『良』とみなされます。
#define ALL_MOVES_BAD_NEEDS_GOOD_SWITCHIN                       FALSE // AI は、適切な『いれかえ』がある場合にのみ ShouldSwitchIfAllMovesBad をトリガーします
#define ALL_SCORES_BAD_NEEDS_GOOD_SWITCHIN                      FALSE // AI は、適切な『いれかえ』がある場合にのみ ShouldSwitchIfAllScoresBad をトリガーします
#define AI_DEFENSIVE_KO_THRESHOLD                               3 // 防御型ポケモンと見なされるためには、AIが撃破されるまでに、これ以上の回数の攻撃に耐えられる必要があります。
#define AI_TYPE_MATCHUP_THRESHOLD                               UQ_4_12(2.0) // AIが「優秀」とみなされるには、これよりも有利な相性である必要があります。2.0は、GetBattlerTypeMatchupにおけるデフォルトの等倍な相性値です。
#define AI_WISH_HEAL_THRESHOLD                                  4 // 「ねがいごと」の適切な対象とみなされるためにAIが回復すべきHPの割合（分母として扱われる。例：4 = 1/4 = HPの25%）
#define AI_SWITCHIN_DAMAGE_THRESHOLD                            0 // 安全な交代先として認められるには、AIが算出する被ダメージ量が一定の基準を下回る必要があります。この値は、他の選択肢を断念した際の「最後の手段」として使われるため、**極めて低く**設定してください。
#define AI_REVERSE_BATTLER_LOGIC_ORDER_CHANCE                   50 // ダブルバトルでAIのロジックを実行する際、ポケモンの処理順序を入れ替えるための設定です。例えば、2匹のポケモンが交代しようとしていて、交代先が1匹しかいない場合、先に処理されたポケモンが交代することになります。この値を0より大きく設定することで、どちらのスロットを先に処理するかを入れ替える確率を制御できます。

// AIの持ち物に基づいた技の評価
#define LOW_ACCURACY_THRESHOLD                                  75 // この値以下の命中率を持つ技は、命中率が低いとみなされます。

// AIの技評価
#define STATUS_MOVE_FOCUS_PUNCH_CHANCE                          70 // プレイヤーの最適解が「きあいパンチ」である場合、AIが変化技を使用する確率
#define BOOST_INTO_HAZE_CHANCE                                  0 // プレイヤーが「くろいきり」を使用した際、AIが能力を上げる技を使用する確率
#define SHOULD_RECOVER_CHANCE                                   50 // AIが回復技にスコア加算を行う条件：現在の値が `ENABLE_RECOVERY_THRESHOLD` 未満であり、かつ差し迫った危険がないこと。
#define ENABLE_RECOVERY_THRESHOLD                               30 // SHOULD_RECOVER_CHANCEが有効になるHPの割合
#define SUCKER_PUNCH_CHANCE                                     50 // プレイヤーが変化技を持っている場合、AIが「ふいうち」を使わない可能性
#define SUCKER_PUNCH_PREDICTION_CHANCE                          50 // SUCKER_PUNCH_CHANCEの判定に外れた場合でも、相手が変化技を使うと積極的に予測した際に、AIが「ふいうち」を使用しない確率が追加。
#define PRIORITIZE_LAST_CHANCE_CHANCE                           50 // AIが低速撃破よりも相手に先手を取られ撃破されそうな状況で優先的に発動する技を優先する可能性。
#define LAST_MON_PREFERS_NOT_SACRIFICE                          FALSE // AIが最後のポケモンで自己犠牲的な技（じばく系、いのちがけ）を使うことを躊躇するかどうか
#define EXPLOSION_LOWER_HP_THRESHOLD                            10 // AIが90%の確率で自爆するHPの割合（閾値）。それ以上のHPでは、この閾値と最大閾値の間で確率が変動する。
#define EXPLOSION_HIGHER_HP_THRESHOLD                           100 // AIが自爆する確率が0%となるHPの割合（これ以上の場合は自爆しない）。それ未満の場合は、この閾値と最低閾値の間で確率が変動する。
#define EXPLOSION_MINIMUM_CHANCE                                0 // 現在のHPに基づいた、AIが「だいばくはつ」を使用する最低確率
#define EXPLOSION_MAXIMUM_CHANCE                                90 // 現在のHPに基づき、AIが「だいばくはつ」を使用する可能性が最大確率
#define FINAL_GAMBIT_CHANCE                                     50 // AIがプレイヤーより素早く、かつ自身のHPの方が多いと判断した場合、「いのちがけ」の使用を検討する可能性
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
#define AI_TERA_PREDICT_CHANCE                                  40 // 「テラスタルすればきのみ等でKOを免れるが、別の技でKOされるリスクもある」という状況において、AIが「smart tera flag」を選択する可能性。

// AI_FLAG_PP_STALL_PREVENTION 設定
#define PP_STALL_DISREGARD_MOVE_PERCENTAGE                      50 // PP消費なしで技を使用した際の確率:1回の判定あたりの確率
#define PP_STALL_SCORE_REDUCTION                                20 // PP枯渇検知のロールがいずれか1つでも成功した場合、スコアが減少する。

// AI_FLAG_ASSUME_STAB 設定
#define ASSUME_STAB_SEES_ABILITY                                FALSE // フラグはプレイヤーの特性に対する全知性も与えます。全知を持たないよりスマートな予測のために、代わりに AI_FLAG_WEIGH_ABILITY_PREDICTION を使用できます。

// AI_FLAG_ASSUME_STATUS_MOVES 設定
#define ASSUME_STATUS_MOVES_HAS_TUNING                  TRUE // フラグは、ステータス変化技の種類によって異なるレートを持ちます。
                                                             // FALSEに設定すると、「ねこだまし」や「いかりのまえば」に対しても通知されなくなります。
#define ASSUME_STATUS_HIGH_ODDS                         90 // 「キノコのほうし」のように、そのポケモンが覚えている可能性が極めて高い技をAIが認識する機会
#define ASSUME_STATUS_MEDIUM_ODDS                       70 // 「まもる」のように、そのポケモンが覚えている可能性がそれなりにある技をAIが認識するチャンス
#define ASSUME_STATUS_LOW_ODDS                          40 // AIが、「なりきり」のような、そのポケモンが覚える可能性はあるものの実際には採用されにくい「ニッチな技」を認識するチャンス。
#define ASSUME_ALL_STATUS_ODDS                          25 // AIが何らかの状態変化技を使用する機会。

// AI_FLAG_SMART_SWITCHING 設定
#define SMART_SWITCHING_OMNISCIENT                              FALSE // AIは、他の「全知」設定にかかわらず、切り替え計算に全知の能力を使用します。

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
