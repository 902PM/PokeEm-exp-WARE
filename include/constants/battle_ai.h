#ifndef GUARD_CONSTANTS_BATTLE_AI_H
#define GUARD_CONSTANTS_BATTLE_AI_H

// AIフラグ。多くはスコアを更新する特定の関数を実行しますが、新しいフラグは他のスクリプト内の内部ロジックで使用されます。
// 詳細については docs/ai_flags.md を参照してください。
#define AI_FLAG(x) ((u64)1 << x)

#define AI_FLAG_CHECK_BAD_MOVE              AI_FLAG(0)  // AIは、現在の状況において失敗したり効果がなかったりする可能性が高い行動を避けます。
#define AI_FLAG_TRY_TO_FAINT                AI_FLAG(1)  // AIは可能であれば、プレイヤーのポケモンを倒すことを優先します。
#define AI_FLAG_CHECK_VIABILITY             AI_FLAG(2)  // AIは、ダメージを与える技や技の効果を評価し、現在の状況において最善の技を決定します。
#define AI_FLAG_FORCE_SETUP_FIRST_TURN      AI_FLAG(3)  // AIは、他のあらゆる行動を犠牲にしてでも、1ターン目に能力変化技（セットアップ技）の使用を優先します。一方、AI_FLAG_CHECK_VIABILITYが有効な場合は、AIがその行動を合理的だと判断した時にのみ、それを行います。
#define AI_FLAG_RISKY                       AI_FLAG(4)  // AIは概して、命中精度よりもダメージや爆発などを優先し、より無謀な挙動をとるようになります。
#define AI_FLAG_TRY_TO_2HKO                 AI_FLAG(5)  // AIは、プレイヤーを「確１」または「確２」で倒せる自身の技に対し、スコアボーナスを加算します。
#define AI_FLAG_PREFER_BATON_PASS           AI_FLAG(6)  // AIは自身のステータスを上げることと、バトンタッチの設定/使用を好みます。
#define AI_FLAG_DOUBLE_BATTLE               AI_FLAG(7)  // ダブルバトル用に自動設定され、パートナーとのAIの連携も処理されます。
#define AI_FLAG_HP_AWARE                    AI_FLAG(8)  // AIは、自身とプレイヤーのポケモンの残りHPに応じて、特定の技の効果を優先的に選択します。
#define AI_FLAG_POWERFUL_STATUS             AI_FLAG(9)  // AIは、たとえ相手を倒せる状況であっても、フィールド効果や場全体に及ぶ状態変化（サイドステータス）を発生させる技を優先的に選択します。
// 新機能：トレーナーのハンデフラグ
#define AI_FLAG_NEGATE_UNAWARE              AI_FLAG(10)  // AIは、「ワンダールーム」や「かたやぶり」などの効果を打ち消す要素を認識していません。
#define AI_FLAG_WILL_SUICIDE                AI_FLAG(11)  // AIは「だいばくはつ」「じばく」「いのちがけ」などを使用します。// 新規：トレーナーの行動指針フラグ
#define AI_FLAG_PREFER_STATUS_MOVES         AI_FLAG(12)  // AIは変化技に対してスコアボーナスを得ます。変化技ばかりを使用するのを防ぐため、AI_FLAG_CHECK_BAD_MOVEと併用すべきです。
#define AI_FLAG_STALL                       AI_FLAG(13)  // AIは戦闘を長引かせ（ストール）、継続ダメージや拘束（トラップ）などを優先する。（未実装）
#define AI_FLAG_SMART_SWITCHING             AI_FLAG(14)  // AIには、より多くの切り替えチェックが含まれています。AI_FLAG_SMART_MON_CHOICESが自動的に含まれます。
#define AI_FLAG_ACE_POKEMON                 AI_FLAG(15)  // AIは「エースポケモン」を持っています。手持ちの最後のポケモンは、その1匹だけが残る状況になるまでは使用されません。
#define AI_FLAG_OMNISCIENT                  AI_FLAG(16)  // AIは、プレイヤーの技、特性、持ち物を完全に把握しています。
#define AI_FLAG_SMART_MON_CHOICES           AI_FLAG(17)  // 戦闘中や相手を倒した後にどのポケモンを繰り出すかを選択する際、AIはより適切な判断を下すようになります（これらはそれぞれ別の判断として扱われます）。この機能は `AI_FLAG_SMART_SWITCHING` によって自動的に有効化されます。
#define AI_FLAG_CONSERVATIVE                AI_FLAG(18)  // AIは、すべての攻撃のダメージが下振れすると想定します。
#define AI_FLAG_SEQUENCE_SWITCHING          AI_FLAG(19)  // AIは手持ちの並び順通りにポケモンを交代させ、戦闘の途中で交代することはありません。
#define AI_FLAG_DOUBLE_ACE_POKEMON          AI_FLAG(20)  // AIは「エースポケモン」を2匹持っています。手持ちの最後の2匹は、それらしか残っていない状況にならない限り使用されません。トレーナーIDが「ふたごちゃん」や「カップル」などに設定されているバトルに適した仕様です。
#define AI_FLAG_WEIGH_ABILITY_PREDICTION    AI_FLAG(21)  // AIはaiRatingに基づいてプレイヤーの特性を予測します。
#define AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE  AI_FLAG(22)  // AIは、命中率や追加効果にかかわらず、最大ダメージを与える技にスコアを加算します。
#define AI_FLAG_PREDICT_SWITCH              AI_FLAG(23)  // AIは、その状況下で自身がどう行動するかを基準として、プレイヤーの交代や交代出しを予測します。AI_FLAG_OMNISCIENTの使用を推奨します。
#define AI_FLAG_PREDICT_INCOMING_MON        AI_FLAG(24)  // AIは、プレイヤーが交代すると予測した場合、その交代先となるポケモンに対して有効な技を選択します。AI_FLAG_PREDICT_SWITCHが必要です。
#define AI_FLAG_PP_STALL_PREVENTION         AI_FLAG(25)  // AIは、選択された技が無効化されるようなポケモンの交代（交代出し）を把握しています。
#define AI_FLAG_PREDICT_MOVE                AI_FLAG(26)  // AIは、同じ状況下で自身がどのような手を打つかに基づいて、プレイヤーの次の一手を予測します。AI_FLAG_OMNISCIENTの使用を推奨します。
#define AI_FLAG_SMART_TERA                  AI_FLAG(27)  // AIはテラスタルを行うかどうかの判断をより賢く行うようになります（デフォルト設定では、可能な限り常にテラスタルを行います）。
#define AI_FLAG_ASSUME_STAB                 AI_FLAG(28)  // AIはプレイヤーのタイプ一致技（STAB技）については把握していますが、それ以外の情報は知りません。これは AI_FLAG_OMNISCIENT の制限版です。
#define AI_FLAG_ASSUME_STATUS_MOVES         AI_FLAG(29)  // AIは、特定の「ダメージを与えない技」に加え、「ねこだまし」や「いかりのまえば」を覚えている可能性があります。これは AI_FLAG_OMNISCIENT（全知AIフラグ）の制限版です。
#define AI_FLAG_ATTACKS_PARTNER             AI_FLAG(30)  // ダブルバトル専用のAIであり、意図的に「味方」を攻撃することが可能です。
#define AI_FLAG_KNOW_OPPONENT_PARTY         AI_FLAG(31)  // AIはプレイヤーのパーティ内の全ポケモン（種族）を把握していますが、技・持ち物・特性については、実際に確認（目撃）しない限り把握していません。
#define AI_FLAG_RANDOMIZE_SWITCHIN          AI_FLAG(32)  //AIは、特定のカテゴリにおける交代可能な候補の中からランダムに選択を行います（パーティの最後尾にいるポケモンを選ぶのではなく）。
#define AI_FLAG_RANDOMIZE_PARTY_INDICES     AI_FLAG(33)  // AIは、先頭のポケモンを含め、手持ちのポケモンの並び順をランダムに変更します。これは厳密にはAIのフラグというわけではなく、TPPの機能を動作させるための仕組みです。

// 以下のオプションがあれば、BASIC/SMART_TRAINERとして機能させるには十分です。これら以外に追加を行うと、フラグの設定次第でトレーナーの性能が低下したり、逆に向上したりする可能性があります。
#define AI_FLAG_BASIC_TRAINER         (AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY)
#define AI_FLAG_SMART_TRAINER         (AI_FLAG_BASIC_TRAINER | AI_FLAG_OMNISCIENT | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_SMART_TERA | AI_FLAG_RANDOMIZE_SWITCHIN)
#define AI_FLAG_PREDICTION            (AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PREDICT_MOVE)
#define AI_FLAG_ASSUMPTIONS           (AI_FLAG_ASSUME_STAB | AI_FLAG_ASSUME_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION)

// 'other' ai logic flags
#define AI_FLAG_DYNAMIC_FUNC          AI_FLAG(60)  // 「setdynamicaifunc」コマンドを使用して、特定の戦闘向けのカスタムAI関数を作成します。
#define AI_FLAG_ROAMING               AI_FLAG(61)
#define AI_FLAG_SAFARI                AI_FLAG(62)
#define AI_FLAG_FIRST_BATTLE          AI_FLAG(63)

#define AI_SCORE_DEFAULT 100 // Default score for all AI moves.

#endif // GUARD_CONSTANTS_BATTLE_AI_H
