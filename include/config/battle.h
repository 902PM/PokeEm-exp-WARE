#ifndef GUARD_CONFIG_BATTLE_H
#define GUARD_CONFIG_BATTLE_H

// 戦闘計算設定
#define B_CRIT_CHANCE               GEN_LATEST // 急所に当たる確率。CalcCritChanceStageを参照。第6世代以降の仕様では、カモネギやネギガナイトがながねぎを持った状態で急所ランクの高い技を使用すると、必ず急所に当たります。
#define B_CRIT_MULTIPLIER           GEN_3      // 第6世代以降、急所ヒット時のダメージ倍率は2倍ではなく1.5倍になります。
#define B_PARALYSIS_SPEED           GEN_LATEST // 第7世代以降、マヒは素早さが75%ではなく50%低下する。
#define B_CONFUSION_SELF_DMG_CHANCE GEN_LATEST // 第7世代以降、こんらん状態での自傷確率は50%ではなく33.3%になっています。
#define B_MULTI_HIT_CHANCE          GEN_LATEST // 第5世代以降、連続攻撃技の確率が異なります。具体的な数値については SetRandomMultiHitCounter を参照してください。
#define B_WHITEOUT_MONEY            GEN_LATEST // 第4世代以降、バトルに敗北した際に失う金額は、獲得したバッジの数によって決まります。それ以前の作品では、所持金が半分になっていました。（この変更はFRLGでも導入されていましたが、設定を「GEN_3」にすると、簡略化のためRSEの挙動になります。）
#define B_LIGHT_BALL_ATTACK_BOOST   GEN_LATEST // 第4世代以降、「でんきだま」は特殊技だけでなく物理技の威力も2倍にします。
#define B_PARALYSIS_CHANCE          GEN_9      // Champions以降、麻痺による行動不能の確率は25%ではなく12.5%です。

// 経験値設定
#define B_EXP_CATCH                 GEN_LATEST // 第6世代以降、ポケモンは捕獲することでも経験値を得られるようになりました。
#define B_TRAINER_EXP_MULTIPLIER    GEN_3      // 第7世代以降、トレーナー戦で獲得できる経験値に1.5倍の補正はかからなくなりました。
#define B_SPLIT_EXP                 GEN_LATEST // 第6世代以降、参加したすべてのポケモンがフルで経験値を獲得します。
#define B_SCALED_EXP                GEN_LATEST // 第5世代および第7世代以降では、獲得経験値はレベル差に応じて補正されます。
#define B_UNEVOLVED_EXP_MULTIPLIER  GEN_LATEST // 第6世代以降、進化可能なレベルに達しているにもかかわらず進化していないポケモンは、獲得経験値に約1.2倍の補正がかかります。この仕様は、進化条件が「レベルアップ（EVO_LEVEL）」であるポケモンにのみ適用されます。
#define B_LEVEL_UP_NOTIFICATION     GEN_LATEST // 第9世代以降では、ポケモンがレベルアップに必要な経験値を十分に獲得し、複数回レベルアップする場合でも、メッセージは1回しか表示されません。

// ステータス設定
#define B_BADGE_BOOST               GEN_LATEST // 第4世代以降、ジムバッジはポケモンのステータスを上昇させなくなりました。（第2世代における、そのバッジのジムのタイプと一致するポケモンの能力上昇効果は含まれません）
#define B_FRIENDSHIP_BOOST          FALSE      // ピカブイ限定の仕様として、HP以外のすべてのステータスが「なかよし度」に応じて最大10%上昇します。B_BADGE_BOOST（バッジによる補正）とは異なり、これらの上昇分は基礎ステータスの計算時に反映されます。
#define B_MAX_LEVEL_EV_GAINS        GEN_LATEST // 第5世代以降では、レベル100のポケモンも通常通り努力値を獲得できます。
#define B_RECALCULATE_STATS         GEN_LATEST // 第5世代以降では、戦闘に参加したポケモンのステータスが、各戦闘の終了時に再計算されます。

// ダメージ設定
#define B_BURN_DAMAGE               GEN_6      // 第7世代以降、やけどによるダメージは最大HPの1/8ではなく1/16になりました。これは「しもやけ」にも同様に適用されます。
#define B_BURN_FACADE_DMG           GEN_LATEST // 第6世代以降、やけどによる攻撃力低下の効果は「からげんき」には適用されなくなりました。
#define B_BINDING_DAMAGE            GEN_LATEST // 第6世代以降、拘束ダメージは最大HPの1/16ではなく1/8になります（「しめつけバンド」を持たせている場合は、それぞれ1/6と1/8になります）。
#define B_PSYWAVE_DMG               GEN_LATEST // 「サイコウェーブ」のダメージ計算式。詳細は DoFixedDamageMoveCalc を参照してください。
#define B_PAYBACK_SWITCH_BOOST      GEN_LATEST // 第5世代以降では、相手が交代した場合、「しっぺがえし」のダメージは2倍にならなくなりました。
#define B_HIDDEN_POWER_DMG          GEN_3      // 第6世代以降、「めざめるパワー」の威力は常に60に固定されるようになりました。それ以前は、ポケモンの個体値によって威力が決まっていました。
#define B_ROUGH_SKIN_DMG            GEN_LATEST // 第4世代以降、「さめはだ」による接触ダメージは最大HPの1/16ではなく1/8になります。これは「てつのトゲ」にも同様に適用されます。
#define B_KNOCK_OFF_DMG             GEN_LATEST // 第6世代以降、「はたきおとす」は相手の持ち物をはたき落とす際、ダメージが50%増加します。
#define B_SPORT_DMG_REDUCTION       GEN_LATEST // 第5世代以降、「みずあそび」や「どろあそび」によるほのお・でんきタイプの技のダメージ軽減率は、50%ではなく67%になっています。
#define B_EXPLOSION_DEFENSE         GEN_3      // 第5世代以降、「じばく」や「だいばくはつ」は、相手の防御を半分にしません。
#define B_PARENTAL_BOND_DMG         GEN_LATEST // 第7世代以降、「おやこあい」による2回目の攻撃のダメージは、1回目の攻撃の25%になりました。それ以前は50%でした。
#define B_MULTIPLE_TARGETS_DMG      GEN_LATEST // 第4世代以降、複数の対象を同時に攻撃する技のダメージは75%に軽減されます。第3世代では50%でしたが、フィールド全体を攻撃する技の場合は軽減されませんでした。

// タイプ設定
#define B_GHOSTS_ESCAPE             GEN_3      // 第6世代以降、「かげふみ」などの特性や「くろいまなざし」などの技は、ゴーストタイプのポケモンに対しては効果がありません。また、野生のポケモンとのバトルから逃げることも可能です。
#define B_PARALYZE_ELECTRIC         GEN_3      // 第6世代以降、でんきタイプのポケモンはまひ状態になりません。
#define B_POWDER_GRASS              GEN_3      // 第6世代以降、くさタイプのポケモンは粉・胞子技を無効化します。
#define B_UPDATED_TYPE_MATCHUPS     GEN_LATEST // タイプ相性を更新しました。詳細は src/data/types_info.h を参照。
#define B_PRANKSTER_DARK_TYPES      GEN_3      // 第7世代以降、「いたずらごころ」によって優先度が上がった変化技は、あくタイプのポケモンには無効です。
#define B_SHEER_COLD_IMMUNITY       GEN_3      // 第7世代以降、こおりタイプは「ぜったいれいど」を無効化します。
#define B_ROOST_PURE_FLYING         GEN_4      // 第5世代以降、「はねやすめ」は純粋なひこうタイプのポケモンをノーマルタイプに変化させます。
#define B_STATUS_TYPE_IMMUNITY      GEN_LATEST // 第1世代では、攻撃技と同じタイプを持つポケモンは、その技の追加効果である「まひ」「こおり」「やけど」を受けませんでした。

// ターン設定
#define B_BINDING_TURNS             GEN_LATEST // 第5世代以降、拘束技の継続ターン数は2～5ターンではなく4～5ターンになりました（「しめつけバンド」を持たせている場合は、それぞれ7ターンと5ターンになります）。
#define B_UPROAR_TURNS              GEN_LATEST // 第5世代以降、「さわぐ」の継続ターン数は2～5ターンではなく3ターンになりました。
#define B_UPROAR_IGNORE_SOUNDPROOF  GEN_LATEST // 第5世代以降、「さわぐ」状態の効果は特性「ぼうおん」を無視します。
#define B_DISABLE_TURNS             GEN_LATEST // 「かなしばり」のターン。Cmd_disablelastusedattack を参照してください。
#define B_TAILWIND_TURNS            GEN_LATEST // 第5世代以降、「おいかぜ」の持続ターン数は3ターンから4ターンになりました。
#define B_SLEEP_TURNS               GEN_LATEST // 第5世代以降、ねむりの継続ターン数が2〜5ターンから2〜4ターンに変更されました。
#define B_TAUNT_TURNS               GEN_LATEST // 第5世代以降、「ちょうはつ」の効果は、使用者が対象より先に行動した場合は3ターン、対象が使用者より先に行動した場合は4ターン持続します。第3世代では2ターン、第4世代では3～5ターン持続します。
#define B_ENCORE_TURNS              GEN_LATEST // 第5世代以降、「アンコール」の効果は、対象がそのターンにまだ行動していない場合は3ターン、すでに行動済みの場合は4ターン持続します。第4世代では3～7ターン、第2・3世代では2～6ターン持続します。
#define B_SPORT_TURNS               GEN_LATEST // 第6世代以降、「みずあそび」や「どろあそび」の効果は、使用者が交代しても5ターンの間持続します。
#define B_MEGA_EVO_TURN_ORDER       GEN_LATEST // 第7世代では、行動順を決定する際、メガシンカ前の素早さではなく、メガシンカ後の素早さが参照されます。
#define B_RECALC_TURN_AFTER_ACTIONS GEN_LATEST // 第8世代以降、交代や技の使用がそのターンの行動順に影響を及ぼします。これは一般的に「ダイナミック・スピード」として知られています。
#define B_FAINT_SWITCH_IN           GEN_LATEST // 第4世代以降、前のポケモンがひんしになった後に新しいポケモンを出す処理はターンの最後に行われますが、それ以前は各行動の直後に行われていました。
#define B_MEGA_EVO_SPEED_SWAP       GEN_LATEST // Champions以降、メガシンカは「スピードスワップ」で入れ替えられた素早さのステータスを上書きしません。
#define B_FREEZE_TURNS              GEN_9      // Championsより前は、凍結状態が解除される確率が20%でした。
                                               // Championsの時点では、凍結状態は25%の確率で解除され、最大継続ターン数は3ターンとなっています。

// ワザデータ設定
#define B_UPDATED_MOVE_DATA         GEN_LATEST // 更新処理により、威力、命中率、PP、能力変化、対象、追加効果の発生確率など、gMovesInfo内のデータが更新されます。
#define B_UPDATED_MOVE_TYPES        GEN_LATEST // 技タイプをアップデート
#define B_UPDATED_MOVE_FLAGS        GEN_LATEST // 技フラグをアップデート
#define B_PHYSICAL_SPECIAL_SPLIT    GEN_LATEST // 第1〜3世代では、物理ダメージを与えるか特殊ダメージを与えるかは、技のタイプによって決まります。ステータス画面の「分類」アイコンには、この仕様が反映されます。
#define B_RECOIL_IF_MISS_DMG        GEN_LATEST // 第5世代以降、「とびげり」と「とびひざげり」は外すと、必ず使用者の最大HPの半分のダメージを受けます。
#define B_KLUTZ_FLING_INTERACTION   GEN_LATEST // 第5世代以降、特性「ぶきよう」を持つポケモンは「なげつける」を使うことができません。
#define B_UPDATED_CONVERSION        GEN_LATEST // 第6世代以降、「テクスチャー」は使用者のタイプを「覚えている技の1番目」のタイプと同じものに変化させるようになりました。それ以前は、ランダムに技が選ばれていました。
#define B_UPDATED_CONVERSION_2      GEN_LATEST // 第5世代以降、「テクスチャー2」は、選択した相手が直前に使用した技に対して耐性を持つタイプへと、自身のタイプを変化させる技となりました。それ以前の世代では、自身が直前に受けた技（実際に命中した技）が対象となっていました。なお、第5世代より前では、「わるあがき」はノーマルタイプの技として扱われます。
#define B_PP_REDUCED_BY_SPITE       GEN_LATEST // 第4世代以降、「うらみ」は相手が最後に使った技のPPを2～5ではなく4減らす。
#define B_EXTRAPOLATED_MOVE_FLAGS   TRUE       // 公式には設定されていないものの、最新のメインシリーズ作品に登場していればおそらく持っているであろう「技フラグ」を、各技に追加します。
#define B_HIDDEN_POWER_COUNTER      GEN_LATEST // 第4世代以前では、「カウンター」と「ミラーコート」は、タイプにかかわらず「めざめるパワー」を物理技として扱います。
#define B_MODERN_TRICK_CHOICE_LOCK  GEN_LATEST // 第5世代以降では、「こだわり」系アイテム同士を「トリック」や「すりかえ」で交換した場合、その技の使い手は別の技を選択でき、その後はその技に固定されることになります。
#define B_PROTECT_FAILURE_RATE      GEN_LATEST // 第5世代以降、「まもる」などの技が失敗する確率は1/2ではなく1/3になりました。

// 特性データ設定
#define B_UPDATED_ABILITY_DATA      GEN_LATEST // フラグに影響します

// 技の命中率設定
#define B_TOXIC_NEVER_MISS          GEN_LATEST // 第6世代以降、毒タイプのポケモンが「どくどく」を使用した場合、必中。
#define B_MINIMIZE_DMG_ACC          GEN_LATEST // 第6世代以降、「ちいさくなる」状態のポケモンに対して2倍のダメージを与える技は、必中になる。
#define B_BLIZZARD_HAIL             GEN_LATEST // 第4世代以降では、あられ状態の際、「ふぶき」必中。
#define B_SHEER_COLD_ACC            GEN_3      // 第7世代以降、使用者がこおりタイプでない場合、「ぜったいれいど」の基本命中率は20%に低下します。

// ステータス変化技の設定
#define B_FELL_STINGER_STAT_RAISE   GEN_LATEST // 第7世代以降では、対象をひんし状態にした場合、攻撃が2段階ではなく3段階上昇します。（とどめばり）
#define B_KINGS_SHIELD_LOWER_ATK    GEN_LATEST // 第8世代以降では、攻撃してきた相手の攻撃を2段階ではなく1段階下げます。（キングシールド）
#define B_SPEED_BUFFING_RAPID_SPIN  GEN_LATEST // 第8世代以降、「こうそくスピン」は使用者の素早さを1段階上昇させる。
#define B_CHARGE_SPDEF_RAISE        GEN_LATEST // 第5世代以降、「じゅうでん」は使用者の特防を1段階上昇させる。
#define B_MINIMIZE_EVASION          GEN_LATEST // 第5世代以降、「ちいさくなる」は回避率を1段階ではなく2段階上昇させる。
#define B_GROWTH_STAT_RAISE         GEN_LATEST // 第5世代以降、晴れ状態では、それぞれ2段階上昇するようになります。（せいちょう）
#define B_FOCUS_ENERGY_CRIT_RATIO   GEN_LATEST // 第3世代以降、「きあいだめ」による急所率の上昇幅は1段階ではなく2段階になります。
#define B_PSYCH_UP_CRIT_RATIO       GEN_LATEST // 第6世代以降、「じこあんじ」は対象の急所率もコピーする。

// その他技設定
#define B_INCINERATE_GEMS               GEN_LATEST // 第6世代以降、「やきつくす」は「ジュエル」を破壊できます。
#define B_CAN_SPITE_FAIL                GEN_LATEST // 第4世代以降、「うらみ」は、相手が最後に使用した技の残りPPが1であっても失敗しなくなりました。
#define B_CRASH_IF_TARGET_IMMUNE        GEN_LATEST // 第4世代以降、反動ダメージを伴う技は、タイプ相性によって無効化する相手に対して使用した場合でも、反動ダメージが発生します。
#define B_MEMENTO_FAIL                  GEN_LATEST // 第4世代以降、「おきみやげ」は対象の「こうげき」と「とくこう」が既に-6段階の状態であっても失敗しなくなりました。また、第5世代以降は、対象が存在しない場合や、対象が「まもる」状態または「みがわり」状態である場合には失敗します。
#define B_PARTING_SHOT_SWITCH           GEN_LATEST // 第7世代以降、「すてゼリフ」が相手の能力を下げることに失敗した場合、使用者は交代しません。
#define B_BATON_PASS_TRAPPING           GEN_LATEST // 第5世代以降、「バトンタッチ」を使用しても、使用者が交代する際に他のポケモンに対する拘束状態の効果は引き継がれません。
#define B_GLARE_GHOST                   GEN_LATEST // 第4世代以降、「にらみつける」はゴーストタイプのポケモンにも通常通り命中するようになりました。
#define B_SKILL_SWAP                    GEN_LATEST // 第4世代以降、「スキルスワップ」の使用後、場に出た際に発動する特性が発動します。
#define B_BRICK_BREAK                   GEN_LATEST // 第4世代以降では、自陣の壁を破壊することができます。第5世代以降では、対象がその効果を無効化する場合でも、壁は解除されません。（かわらわり）
#define B_WISH_HP_SOURCE                GEN_LATEST // 第5世代以降、「ねがいごと」は対象の最大HPではなく、使用者の最大HPの半分を回復します。
#define B_RAMPAGE_CONFUSION             GEN_LATEST // 第5世代以降、「げきりん」は技の使用直後に終了します（ターン終了時ではありません）。また、技が失敗した場合、最終ターンでなければカウントはリセットされます。
#define B_HEAL_BLOCKING                 GEN_LATEST // 第5世代以降、「かいふくふうじ」は「くろいヘドロ」、「たべのこし」、「かいがらのすず」による回復を防ぎます。効果を受けているポケモンは、持っているHP回復用のきのみや「きのみジュース」を消費しません。
                                                   // HPを吸収する技は、HPを回復させる効果は発揮しませんが、ダメージを防ぐことはできます。第6世代以降では、「かいふくふうじ」状態になると、HPを吸収する技の大部分が使用できなくなります。
#define B_ROOTED_GROUNDING              GEN_LATEST // 第4世代以降、「ねをはる」は、効果を受けたポケモンを地面にいる状態にします。
#define B_METRONOME_MOVES               GEN_LATEST // この設定は、「ゆびをふる」で技が選ばれる対象となる世代の範囲を決定します。
#define B_TELEPORT_BEHAVIOR             GEN_LATEST // ピカブイ以降（ここでは第8世代以降を指します）、「テレポート」を使うと、手持ちの別のポケモンと交代できるようになりました。
#define B_BEAT_UP                       GEN_LATEST // 第5世代以降、「ふくろだたき」のダメージ計算式は変更され、あくタイプのダメージを与えるようになりました。第5世代より前は、攻撃が当たるたびに、その技を繰り出すパーティメンバーの名前が表示されていました。
#define B_DARK_VOID_FAIL                GEN_4      // 第7世代以降では、ダークライのみが「ダークホール」を使用できます。
#define B_HIT_THAW                      GEN_LATEST // 第6世代以降では、使用者のこおり状態を解除する効果を持つダメージ技は、相手のこおり状態も解除します。第3世代以降では、ほのおタイプの技は相手のこおり状態を解除します。第1・2世代では、やけど状態にする可能性のあるダメージ技は、相手がやけど状態になり得るかどうかにかかわらず、相手のこおり状態を解除します。
#define B_HEALING_WISH_SWITCH           GEN_LATEST // 第5世代以降では、「いやしのねがい」や「みかづきのまい」を受けるポケモンはターンの終了時に場に出ます。さらに第8世代以降では、状態異常やダメージを受けているポケモンに交代するまで、その効果は保持されます。
#define B_DEFOG_EFFECT_CLEARING         GEN_LATEST // 第5世代以降、「きりばらい」は「みがわり」状態の相手の回避率を下げません。第6世代以降、「きりばらい」は双方の場の「まきびし」「どくびし」「ステルスロック」「ねばねばネット」を除去します。第8世代以降、「きりばらい」は展開中の「フィールド」も解除します。
#define B_STOCKPILE_RAISES_DEFS         GEN_LATEST // この設定は機能しません！第4世代以降では、「たくわえる」は防御と特防の能力も上昇させます。「はきだす」や「のみこむ」を使用すると、これらの能力変化は失われます。
#define B_TRANSFORM_SEMI_INV_FAIL       GEN_LATEST // 第2世代以降、対象が隠れている状態の場合、「へんしん」は失敗します。
#define B_TRANSFORM_TARGET_FAIL         GEN_LATEST // 第2世代以降、対象が既に変身している場合、「へんしん」は失敗します。
#define B_TRANSFORM_USER_FAIL           GEN_LATEST // 第5世代以降、使用者が既に変身している場合、「へんしん」は失敗します。
#define B_TRANSFORM_SUBSTITUTE_FAIL     GEN_LATEST // 第5世代以降、対象が「みがわり」状態にある場合、「へんしん」は失敗します。
#define B_TRANSFORM_SHINY               GEN_LATEST // 第4世代以降、「へんしん」を使用すると、自身の「色違い」の状態を維持するのではなく、相手の「色違い」の状態をコピーするようになります。
#define B_TRANSFORM_CATCH_RATE          GEN_LATEST // 第3世代と第4世代では、変身したポケモンは変身後のポケモンの捕獲率になりますが、それ以外の世代では元の捕獲率が維持されます。
#define B_TRANSFORM_BATTLE_REWARDS      GEN_LATEST // 第3・第4世代では、「へんしん」したポケモンはコピー先の種族に応じた経験値と努力値を与えますが、それ以外の世代では、元の種族に応じた経験値と努力値を与えます。
#define B_TRANSFORM_FORM_CHANGES        GEN_LATEST // 第5世代以降では、「へんしん」したポケモンはフォルムチェンジできません。
#define B_WIDE_GUARD                    GEN_LATEST // 第5世代に限り、「ワイドガード」は連続して使用すると失敗する可能性があります。
#define B_QUICK_GUARD                   GEN_LATEST // 第5世代に限り、「ファストガード」を連続して使用すると失敗する可能性があります。
#define B_IMPRISON                      GEN_LATEST // 第5世代以降、「ふういん」は、相手のポケモンが使用者と同じ技を覚えていなくても失敗しません。
#define B_TAUNT_ME_FIRST                GEN_LATEST // 第5世代以降、「ちょうはつ」は「さきどり」を防ぎません。
#define B_ALLY_SWITCH_FAIL_CHANCE       GEN_LATEST // 第9世代以降、「サイドチェンジ」を連続して使用すると、使用するたびに成功率が低下します。
#define B_SKETCH_BANS                   GEN_LATEST // 第9世代以降、「スケッチ」でコピーできる技の数は、それ以前の世代と比べて増えてはいません。
#define B_KNOCK_OFF_REMOVAL             GEN_LATEST // 第5世代以降、「はたきおとす」は相手の持ち物を無効化するのではなく、除去するようになりました。
                                                   // Championsでは、対象の持ち物が使用者のフォルムを変化させるもの（メガシンカやゲンシカイキなど）であるかどうかを判定しなくなりました。
#define B_HEAL_BELL_SOUNDPROOF          GEN_LATEST // 第5世代では、「いやしのすず」は特性「ぼうおん」を持つすべてのポケモンに効果が及びます。第6～8世代では、控えのポケモンには効果がありますが、場に出ているポケモンには効果がありません。第9世代では、常に使用者自身に効果が及びます。
#define B_CHARGE                        GEN_8      // 第9世代以降では、次に出す技のタイプにかかわらず、「じゅうでん」状態は解除されます。
#define B_POWDER_STATUS_HEAVY_RAIN      GEN_LATEST // 第7世代以降、大雨の状況下では、粉技はほのおタイプの技の使い手にダメージを与えません。
#define B_AFTER_YOU_TURN_ORDER          GEN_LATEST // 第8世代以降、使用しても行動順が変わらない場合でも、「おさきにどうぞ」は失敗しません。
#define B_QUASH_TURN_ORDER              GEN_LATEST // 第8世代以降、「さきおくり」を受けたポケモンは素早さ順に行動します。第8世代より前は、「さきおくり」を受けた順に行動していました。
#define B_DESTINY_BOND_FAIL             GEN_LATEST // 第7世代以降、「みちづれ」を連続して使用すると失敗します。
#define B_FORESIGHT_FAIL                GEN_LATEST // 第2世代および第5世代以降において、すでに「みやぶる」の効果を受けている対象に対して使用した場合、失敗します。
#define B_MIRACLE_EYE_FAIL              GEN_LATEST // 第5世代以降、「ミラクルアイ」は、既に対象がその効果を受けている状態で使用すると失敗します。
#define B_PURSUIT_TARGET                GEN_LATEST // 第4世代以降、「おいうち」は、たとえ攻撃対象として指定していなかった相手であっても、交代する相手を攻撃します。第4世代より前は、元々攻撃対象として指定していた相手が交代する場合にのみ、「おいうち」による攻撃が行われていました。
#define B_SKIP_RECHARGE                 GEN_LATEST // 第1世代では、「はかいこうせん」のような「はんどうで うごけない」技において、対象をひんしにした場合、行動不能にならない。
#define B_ENCORE_TARGET                 GEN_LATEST // 第5世代以降、アンコール状態の技でも対象を選択できます。
#define B_TIME_OF_DAY_HEALING_MOVES     GEN_2      // 第2世代では、時間帯に応じて「あさのひざし」「つきのひかり」「こうごうせい」の回復量が2倍になります。また、回復量そのものも変更されています。「つきのひかり」は夕方の時間帯の影響を受けます。
                                                   // OW_TIMES_OF_DAYがGen 3に設定されている場合、昼間は「あさのひざし」の効果が強化されます。
#define B_DREAM_EATER_LIQUID_OOZE       GEN_LATEST // 第5世代以降、「ゆめくい」は「ヘドロえき」の影響を受けます。
#define B_DREAM_EATER_SUBSTITUTE        GEN_LATEST // 第5世代以降、「ゆめくい」は「みがわり」状態の相手にも命中し、HPを吸収することができます。
#define B_SNATCH                        GEN_LATEST // 第5世代以降、「よこどり」は、同じターンに別のポケモンの「よこどり」によって既に奪われた技を奪うことはできなくなりました。
#define B_FOCUS_PUNCH_FAILURE           GEN_LATEST // 集中状態が解除されたかどうかを判定するには、第4世代以前の仕様において、"現在の技"が「きあいパンチ」であるかを確認してください。
                                                   // 第5・6世代において、"選択された技"が「きあいパンチ」かどうかを確認してください。
                                                   // 第7世代以降、"現在の技と選択された技"が「きあいパンチ」であるかを確認してください。
                                                   // また、第4世代以前では「きあいパンチ」の失敗判定はPP消費やひるみといった効果の処理後に行われますが、第5世代以降ではそれらの処理の前に行われます。
#define B_COUNTER_MIRROR_COAT_ALLY      GEN_LATEST // 第5世代以降では、味方からの攻撃は「カウンター」「ミラーコート」「メタルバースト」の判定対象に含まれません。一方、第4世代以前では、直前に受けた攻撃が味方からのものであった場合、これらの技は失敗していました。
#define B_COUNTER_TRY_HIT_PARTNER       GEN_LATEST // 第5世代以降、直前の攻撃の使い手が場にいない場合、その攻撃は味方のポケモンに向けられます。一方、第4世代以前では、「カウンター」「ミラーコート」「メタルバースト」は失敗します。
#define B_RAGE_BUILDS                   GEN_LATEST // 第4世代以降、「いかり」の効果は攻撃が命中した時にのみ発動します。一方、第3世代では、命中・回避・失敗のいずれであっても効果が発動します。
#define B_CHECK_USER_FAILURE            GEN_LATEST // 第5世代以降、技の失敗判定を自分自身に対して行うことはなくなりました（例：「ぼうおん」の特性を持つポケモンが「ほろびのうた」を使っても、その効果が自分自身によって無効化されることはありません）。
#define B_ABSORB_MESSAGE                GEN_LATEST // 第5世代以降、使用者のHPが既に満タンの場合、吸収時のメッセージは表示されません。
#define B_UPROAR                        GEN_LATEST // 第5世代以降、「さわぐ」が成功すると、その最初のターンにすべてのバトル参加者が目を覚まします。一方、第3・4世代では、「さわぐ」の効果により、各バトル参加者は自身の行動前またはターンの終了時に目を覚まします。
#define B_FIRST_TURN_MOVE               GEN_LATEST // Champions以降、「ねこだまし」と「であいがしら」は、タイミングを逃すと、選択自体できなくなります。
#define B_SALT_CURE_DAMAGE              GEN_9      // 第9世代では、「しおづけ」は最大HPの1/8（はがね・みずタイプには最大HPの1/4）のダメージを与える。
                                                   // Championsでは、「しおづけ」は最大HPの1/16（はがね・みずタイプに対しては最大HPの1/8）のダメージを与えます。
#define B_BELCH_SELECTABLE              GEN_LATEST // 第9世代以前は、使用者がきのみを食べていない限り、「ゲップ」を選択することはできませんでした。
                                                   // Championsでは、「ゲップ」は条件を満たさなくても選択可能になりました。行動までにきのみを食べていれば成功します。
#define B_STUFF_CHEEKS_SELECTABLE       GEN_LATEST // 第9世代以前は、きのみを持っていなければ「ほおばる」を選択できません。
                                                   // Championsでは、きのみを持っていなくても「ほおぶくろ」を選択できます。
#define B_SPIT_UP_SELECTABLE            GEN_LATEST // Championsでは、使用者が「たくわえる」状態でない限り、「はきだす」を選択することはできません。
#define B_MOVES_THAT_REMOVE_TYPE        GEN_LATEST // Championsでは、使用者がほのおタイプでない場合、「もえつきる」は選択できません。
#define B_LAST_RESORT_SELECTABLE        GEN_LATEST // Championsでは、他のすべての技を使用していない場合、「とっておき」を選択することはできません。
#define B_FAINT_MOVE_EFFECT_TIMING      GEN_LATEST // Championsでは、「さめはだ」や「てつのトゲ」などで倒れた場合でも、一部の技の効果が発動するようになりました。
                                                   // 例：「はたきおとす」、「どろぼう」、「こうそくスピン」、「モータルスピン」、「アイススピナー」など。
                                                   // しかし「ひけん・ちえなみ」と「がんせきアックス」は”現在”対象外です。
#define B_SHEER_FORCE_AGAINST_ABILITIES GEN_LATEST // Champions以降、特性「ちからずく」は、特性「ぎゃくじょう」や「かるわざ」の発動を妨げなくなりました。
                                                   // 「だっしゅつボタン」や「だっしゅつパック」のようなケースにおけるイベントの処理順序を確定させるための情報が不足しているため、現時点では何も行われません。
#define B_ENCORE_PRIORITY               GEN_LATEST // Championsでは、「アンコール」は相手の選択した技の優先度ではなく、アンコールされた技の優先度を用いて行動順を決定します。
                                                   // 第9世代以前、「アンコール」を受けた対象は、そのアンコールされた技を、選択した技の優先度を用いて行動順を決定していました。
#define B_RAGE_FIST                     GEN_9      // Championsでは、「ふんどのこぶし」は交代等で手持ちに戻ると威力がリセットされます。
#define B_MOVE_EFFECTS_BEFORE_MOVES     GEN_LATEST // Championsでは、別の技から「アンコール」を受けて「くちばしキャノン」を出す場合、その技は正常に機能します。
                                                   // さらに、溜めのモーションが表示されます。

// 特性設定
#define B_GALE_WINGS                    GEN_6      // 第7世代以降、発動にはHPが満タンである必要があります。（はやてのつばさ）
#define B_STANCE_CHANGE_FAIL            GEN_LATEST // 第7世代以降、混乱や麻痺などが原因で技を出せない場合、「バトルスイッチ」は発動しません。一方、第6世代では発動します。
#define B_SHADOW_TAG_ESCAPE             GEN_LATEST // 第4世代以降では、双方が特性「かげふみ」を持つポケモンを出している場合、すべてのポケモンが交代や逃走を行えるようになりました。それ以前は、この状況下ではどちらも交代や逃走ができませんでした。
#define B_MOODY_ACC_EVASION             GEN_7      // 第8世代以降、「ムラっけ」で命中率と回避率を上げることはできなくなりました。
#define B_FLASH_FIRE_FROZEN             GEN_LATEST // 第5世代以降、「もらいび」はこおり状態でも発動し、こおり状態は回復しません。
#define B_SYNCHRONIZE_TOXIC             GEN_LATEST // 第5世代以降、「シンクロ」を持つポケモンがもうどく状態になった場合、相手ももうどく状態になります。それ以前の世代では、相手は通常のどく状態になっていました。
#define B_UPDATED_INTIMIDATE            GEN_LATEST // 第8世代以降、「いかく」は特性「せいしんりょく」「きもったま」「マイペース」「どんかん」を持つ相手には効果がありません。また、戦闘中に発動します。
#define B_OBLIVIOUS_TAUNT               GEN_LATEST // 第6世代以降、「どんかん」を持つポケモンは「ちょうはつ」を受けません。
#define B_STURDY                        GEN_LATEST // 第5世代以降、「がんじょう」を持つポケモンは、他のポケモンの攻撃や混乱によるダメージを受けてHPが満タンの状態から0になるような場合でも、HPが1残るようになります。
#define B_PLUS_MINUS_INTERACTION        GEN_LATEST // 第5世代以降、特性「プラス」や「マイナス」は、自分自身や対となる特性によって発動できるようになりました。それ以前は、対となる特性によってのみ発動していました。
#define B_WEATHER_FORMS                 GEN_LATEST // 第5世代以降、ポワルンとチェリムはそれぞれの特性を失うと、基本の姿に戻ります。チェリムが姿を変えるには、「フラワーギフト」が必要です。
#define B_SYMBIOSIS_GEMS                GEN_6      // 第7世代以降、「きょうせい」は「ジュエル」で強化された後に持ち物を渡すようになりました。それ以前は「ジュエル」で強化される前に持ち物が渡されていたため、その持ち物の効果が適用されていました。
#define B_REDIRECT_ABILITY_IMMUNITY     GEN_LATEST // 第5世代以降、「ひらいしん」や「よびみず」を持つポケモンは、技を自分に引き寄せる効果に加え、電気タイプや水タイプの技を無効化し、特攻を1段階上昇させるようになりました。
#define B_REDIRECT_ABILITY_ALLIES       GEN_LATEST // 第4世代以降、「ひらいしん」や「よびみず」は、味方の技も引き寄せるようになりました。
#define B_LEAF_GUARD_PREVENTS_REST      GEN_LATEST // 第5世代以降、「リーフガード」は晴れ状態で「ねむる」の使用すると失敗します。
#define B_TRANSISTOR_BOOST              GEN_8      // 第9世代以降、「トランジスタ」によるでんきタイプの技の威力上昇率は、1.5倍ではなく1.3倍になります。
#define B_ILLUMINATE_EFFECT             GEN_LATEST // 第9世代以降、「はっこう」は命中率低下を防ぎ、相手の回避率を無視します。
#define B_WEAK_ARMOR_SPEED              GEN_LATEST // 第7世代以降、「くだけるよろい」は物理技を受けた際、素早さが1段階ではなく2段階上昇するようになりました。
#define B_PROTEAN_LIBERO                GEN_6      // 第9世代以降、「へんげんじざい」と「リベロ」によるタイプ変化は、1回のバトルにつき1回のみ発生します。
#define B_INTREPID_SWORD                GEN_8      // 第9世代以降、「ふとうのけん」は、戦闘中に一度だけ攻撃を1段階上昇させます。
#define B_DAUNTLESS_SHIELD              GEN_8      // 第9世代以降、「ふくつのたて」は、戦闘中に一度だけ防御を1段階上昇させます。
#define B_DISGUISE_HP_LOSS              GEN_7      // 第8世代以降、「ばけのかわ」は最大HPの1/8を消費するようになりました。
#define B_ABILITY_TRIGGER_CHANCE        GEN_LATEST // 第3世代では、「だっぴ」「メロメロボディ」「ほのおのからだ」「せいでんき」「どくのトゲ」が発動する確率は1/3ですが、第4世代以降は30%になっています。
                                                   // 第3世代において、特性「ほうし」は10%の確率で相手を「ねむり」「どく」「まひ」のいずれかの状態異常にし、それぞれの確率は等しくなっています。
                                                   // 第4世代では30%ですが、第5世代以降では、眠り状態にする確率が11%、毒状態にする確率が9%、麻痺状態にする確率が10%となっています。
#define B_PICKUP_WILD                   GEN_LATEST // 第9世代以降、特性「ものひろい」を持つポケモンは、野生のポケモンとのバトルにおいて、ターン終了時に自身が使用した持ち物を拾うことができます。
#define B_MAGIC_GUARD                   GEN_LATEST // 第4世代限定で、「マジックガード」は「まひ」による行動不能を無効化します。
#define B_BATTLE_BOND                   GEN_7      // 第9世代以降、「きずなへんげ」は戦闘中に一度だけ、攻撃・特攻・素早さを1段階上昇させます。
#define B_ATE_MULTIPLIER                GEN_6      // 第7世代以降、「〇〇スキン」はダメージを1.2倍にします。それ以外の世代では1.3倍となりますが、ノーマルスキンには倍率補正がかかりません。
#define B_DEFIANT_STICKY_WEB            GEN_LATEST // 第9世代以降、「まけんき」は誰が「ねばねばネット」を設置したかにかかわらず発動します。一方、第8世代では、「コートチェンジ」で設置場所が入れ替わった後、味方が設置した「ねばねばネット」に対しては「まけんき」が発動しません。
#define B_MIRROR_ARMOR_STICKY_WEB       GEN_8      // 第9世代以降、「ミラーアーマー」は、たとえ「ねばねばネット」の使い手がまだ場に残っていたとしても、「ねばねばネット」による能力変化を跳ね返しません。
#define B_POWDER_OVERCOAT               GEN_LATEST // 第6世代以降、「ぼうじん」は粉や胞子を使う技の効果を無効化します。
#define B_INFILTRATOR_SUBSTITUTE        GEN_LATEST // 第6世代以降、「すりぬけ」は技の使用時に「みがわり」を無視します（ただし、「へんしん」と「フリーフォール」は除きます）。
#define B_DANCER_ORDER                  GEN_LATEST // 第8世代以降、「おどりこ」の発動順は、能力補正を含めた素早さの順序に基づきます。一方、第7世代では、補正のかかっていない素早さの数値に基づき、素早さが低いポケモンから高いポケモンの順に発動します。
#define B_UNSEEN_FIST_PIERCING_DRILL    GEN_9      // 第9世代までは、「ふかしのこぶし」や「つらぬきドリル」は、相手が「まもる」状態であってもダメージを100%与えることができ、かつ「まもる」系の技に伴う接触時の追加効果も無効化します。
                                                   // Championsでは、防御側が1/4のダメージを受けるようになりました。また、防御技に伴う接触時の効果を無視することもなくなりました。（ニードルガードなど）

// さまざまな技の効果ターン数
#define B_CONFUSION_TURNS    5
#define B_UPROAR_TURN_COUNT  5
#define B_RAMPAGE_TURNS      3
#define B_DISABLE_TIMER      4
#define B_ENCORE_TIMER       4
#define B_PERISH_SONG_TIMER  3
#define B_TAUNT_TIMER        5
#define B_SLOW_START_TIMER   5
#define B_EMBARGO_TIMER      5
#define B_MAGNET_RISE_TIMER  5
#define B_TELEKINESIS_TIMER  3
#define B_HEAL_BLOCK_TIMER   5
#define B_LASER_FOCUS_TIMER  2
#define B_THROAT_CHOP_TIMER  2
#define B_WRAP_TURNS         7 // 「ねばりのかぎつめ」による最大ターン数
#define B_SYRUP_BOMB_TIMER   3
#define B_TORMENT_TIMER      3

// アイテム設定
#define B_CONFUSE_BERRIES_HEAL      GEN_7      // 第3～6世代では、フィラのみなどのきのみはHPを1/8回復し、HPが半分になった時に発動します。第7世代ではHPを半分回復し、HPが25%になった時に発動します。第8世代ではHPを1/3回復します。
#define B_X_ITEMS_BUFF              GEN_LATEST // 第7世代以降、戦闘アイテムはステータスを1段階ではなく2段階上昇させます。
#define B_X_ITEMS_CROSSUSE          TRUE       // 第3世代では、戦闘アイテムは現在バトルに出ているポケモンにしか使えませんが、第7世代のダブルバトルでは味方のどのポケモンにも使用できます（どの世代でこの変更が行われたのかは定かではありません）。
#define B_MENTAL_HERB               GEN_LATEST // 第5世代以降、「メンタルハーブ」は従来の「メロメロ」に加え、「ちょうはつ」「アンコール」「かなしばり」「いちゃもん」「かいふくふうじ」の状態も治すようになりました。
#define B_TRAINERS_KNOCK_OFF_ITEMS  TRUE       // TRUEの場合、トレーナーがプレイヤーの持ち物を盗んだり交換したりできるようになります（きのみ以外のアイテムは戦闘後に元に戻ります）。通常のゲーム（バニラ）では、特定の施設以外でトレーナーがアイテムを盗むことはありません。
#define B_RETURN_STOLEN_NPC_ITEMS   GEN_4      // 第5世代以降、「どろぼう」や「ほしがる」ではNPCからアイテムを盗めなくなりました。
#define B_STEAL_WILD_ITEMS          GEN_LATEST // 第9世代以降、「どろぼう」や「ほしがる」で野生のポケモンの持ち物を奪うと、そのアイテムはバッグに送られます。一方、第2世代から第8世代までは、奪ったアイテムは技を使用したポケモンが持ち物として所持する仕様でした。
#define B_RESTORE_HELD_BATTLE_ITEMS GEN_LATEST // 第9世代以降、きのみ以外のすべての持ち物は戦闘後に元に戻ります。
#define B_SOUL_DEW_BOOST            GEN_3      // 第6世代までは、「こころのしずく」はラティ兄妹の特攻と特防を上昇させます。一方、第7世代以降は、エスパータイプとドラゴンタイプの技の威力を上昇させる効果に変更されました。
#define B_NET_BALL_MODIFIER         GEN_LATEST // 第7世代以降、ネットボールの捕獲倍率は3倍ではなく5倍になっています。
#define B_DIVE_BALL_MODIFIER        GEN_LATEST // 第4世代以降、ダイブボールは「なみのり」中または釣り中に使用すると、効果が3.5倍になります。
#define B_NEST_BALL_MODIFIER        GEN_LATEST // ネストボールの計算式は世代によって異なります。Cmd_handleballthrow を参照してください。
#define B_REPEAT_BALL_MODIFIER      GEN_LATEST // 第7世代以降、リピートボールの捕獲倍率は3倍ではなく3.5倍になっています。
#define B_TIMER_BALL_MODIFIER       GEN_LATEST // 第5世代以降、タイマーボールの捕獲率は1ターンにつき0.1倍ではなく0.3倍ずつ上昇する。
#define B_DUSK_BALL_MODIFIER        GEN_6      // 第7世代以降、ダークボールの捕獲倍率は3.5倍ではなく3倍になっています。
#define B_QUICK_BALL_MODIFIER       GEN_LATEST // 第5世代以降、クイックボールの捕獲倍率は4倍ではなく5倍になっています。
#define B_LURE_BALL_MODIFIER        GEN_7      // 第8世代以降、ルアーボールの捕獲倍率は4倍です。第7世代では5倍、第6世代以前は3倍です。
#define B_HEAVY_BALL_MODIFIER       GEN_LATEST // 第7世代以降、ヘビーボールの適用範囲（重さの判定基準）が変更されています。Cmd_handleballthrow を参照してください。
#define B_DREAM_BALL_MODIFIER       GEN_LATEST // 第8世代以降、対象が「ねむり」状態であるか、特性「ぜったいねむり」を持っている場合、ドリームボールの捕獲倍率は4倍になります。
#define B_SPORT_BALL_MODIFIER       GEN_7      // 第8世代以降、コンペボールの捕獲倍率は1.5倍から1倍に引き下げられました。
#define B_SAFARI_BALL_MODIFIER      GEN_7      // 第8世代以降、サファリボールの捕獲倍率は1.5倍から1倍に引き下げられました。
#define B_FRIEND_BALL_MODIFIER      GEN_7      // 第8世代以降、フレンドボールによるなつき度の上昇幅が200から150に引き下げられました。
#define B_SERENE_GRACE_BOOST        GEN_LATEST // 第5世代以降、「てんのめぐみ」は「おうじゃのしるし」や「するどいキバ」による追加のひるみ確率を上昇させます。
#define B_IRON_BALL                 GEN_LATEST // 第5世代以降、「くろいてっきゅう」を持ったひこうタイプのポケモンは、逆さバトル中や他の効果で地面に接地している場合を除き、他のタイプにかかわらず、じめんタイプの技は等倍になります。

// フラグ設定
// 以下の機能を使用するには、include/constants/flags.h に定義されているフラグの「0」を別の値（未使用のフラグが望ましい）に変更してください。
// 例：FLAG_UNUSED_0x264 を分かりやすい名前に変更し、以下で使用することができます。

// バッジ設定
#define B_FLAG_BADGE_BOOST_ATTACK   FLAG_BADGE01_GET // このフラグが設定されており、かつ B_BADGE_BOOST == GEN_3 である場合、プレイヤーのポケモンの「こうげき」に1.1倍の補正がかかります。
#define B_FLAG_BADGE_BOOST_DEFENSE  FLAG_BADGE05_GET // このフラグが設定されており、かつ B_BADGE_BOOST == GEN_3 である場合、プレイヤーのポケモンの防御力が1.1倍になります。
#define B_FLAG_BADGE_BOOST_SPEED    FLAG_BADGE03_GET // このフラグが設定されており、かつ B_BADGE_BOOST == GEN_3 である場合、プレイヤーのポケモンの素早さに1.1倍の補正がかかります。
#define B_FLAG_BADGE_BOOST_SPATK    FLAG_BADGE07_GET // このフラグが設定されており、かつ B_BADGE_BOOST == GEN_3 である場合、プレイヤーのポケモンの特攻に1.1倍の補正がかかります。
#define B_FLAG_BADGE_BOOST_SPDEF    FLAG_BADGE07_GET // このフラグが設定されており、かつ B_BADGE_BOOST == GEN_3 である場合、プレイヤーのポケモンの特防に 1.1 倍の補正がかかります。

// その他バトル設定
#define B_FLAG_INVERSE_BATTLE       FLAG_EXPANSION_INVERSE_BATTLE     // このフラグが設定されている場合、戦闘におけるタイプの相性が逆転します。例えば、炎タイプは水タイプに対して効果はばつぐんとなります。
#define B_FLAG_AI_VS_AI_BATTLE      FLAG_EXPANSION_AI_VS_AI_BATTLE    // このフラグが設定されている場合、次回の戦闘ではプレイヤーのポケモンがAIによって操作されます。
#define B_FLAG_DYNAMAX_BATTLE       FLAG_EXPANSION_DYNAMAX_BATTLE     // このフラグが設定されている場合、すべてのトレーナーがバトル中にダイマックスできるようになります。
#define B_FLAG_TERA_ORB_CHARGED     FLAG_EXPANSION_TERA_ORB_CHARGED   // このフラグが設定されると、テラスタルオーブがチャージされます。設定後は、回復時に自動的にセットされ、テラスタルを行うと解除されます。
#define B_FLAG_TERA_ORB_NO_COST     FLAG_EXPANSION_TERA_ORB_NO_COST   // このフラグが設定されている場合、テラスタルを行ってもテラスタルオーブのチャージは消費されません。SVでは、テラパゴスに関するイベントの後にこの状態になります。
#define B_FLAG_SLEEP_CLAUSE         FLAG_EXPANSION_SLEEP_CLAUSE       // このフラグが設定されている場合、Sleep Clauseが有効になります。つまり、プレイヤーやAIが相手のポケモンをすでにねむり状態にしており、そのポケモンがまだ眠っている間は、別のポケモンをねむり状態にすることはできません。AIがこのルールを認識して動作するには、`AI_FLAG_CHECK_BAD_MOVE` フラグが必要です。
#define B_FLAG_NO_WHITEOUT          FLAG_EXPANSION_NO_WHITEOUT        // このフラグが設定されている場合、トレーナー戦で全滅（ホワイトアウト）することはありません。ただし、手持ちのポケモンは自動的に回復しない点にご注意ください。

// 変数設定
// 以下の機能を使用するには、include/constants/vars.h で定義されている変数のうち、0 が割り当てられているもの（できれば未使用のもの）を書き換えてください。
// 例: VAR_UNUSED_0x404E を分かりやすい名前に変更し、以下で使用することができます。
#define B_VAR_WILD_AI_FLAGS         VAR_EXPANSION_WILD_AI_FLAGS     // 0以外の場合、この変数をデフォルトの野生AIフラグに追加できます。(1 << 15)を超えるフラグには使用できませんのでご注意ください。
                                          // この変数が、プレイヤーがセーブできるほどの時間、非ゼロのままになるようなことはあってはなりません。
                                          // 野生ポケモンのAIの挙動を改善するには、src/battle_ai_main.c 内の GetWildAiFlags() を編集してください。

#define B_VAR_DIFFICULTY            VAR_EXPANSION_DIFFICULTY     // 0以外の値を設定すると、この変数を使用して、読み込むトレーナーの難易度バージョンを制御できます。この変数は、`NewGameInitData`の実行後に、開発者が`Script_SetDifficulty`を使用して手動で設定する必要があります。

// バッグなし設定
#define NO_BAG_RESTRICTION       0
#define NO_BAG_AGAINST_TRAINER   1
#define NO_BAG_IN_BATTLE         2
#define NO_BAG_INVALID_VALUE     3

#define B_VAR_NO_BAG_USE         0     // 1の場合、トレーナー戦でのバッグの使用が無効になります。2の場合、野生のポケモンとの戦闘でも無効になります。

// スカイバトル
#define B_FLAG_SKY_BATTLE                 0     // このフラグに値が設定されている場合、プレイヤーはスクリプト制御されたスカイバトルを行うことができます。
#define B_VAR_SKY_BATTLE                  0     // このフラグに値が設定されている場合、スカイバトルで使用されたポケモンの位置がゲームに記憶されます。
#define B_SKY_BATTLE_STRICT_ELIGIBILITY   FALSE // TRUEの場合、スカイバトルの参加条件はXYの仕様が適用されます。FALSEの場合、すべてのひこうタイプ、または特性「ふゆう」を持つポケモンが参加可能です。

// Flag and Var settings
#define B_RESET_FLAGS_VARS_AFTER_WHITEOUT TRUE // TRUEの場合、プレイヤーが全滅した際に `Overworld_ResetBattleFlagsAndVars` が戦闘関連のフラグと変数をリセットします。

// Ingame partner flag
#define B_SHOW_PARTNER_TARGET             FALSE // パートナーがターゲットにするポケモンを表示します。

// Move description menu
#define B_SHOW_MOVE_DESCRIPTION     TRUE       // バトル中に技の説明を表示します。

// 天気設定
// 「雨」、「晴れ」、「あられ」で検索して、特定の技やポケモンに関連する天候の相互作用を確認してください。
#define B_ICE_WEATHER_BOTH              0
#define B_ICE_WEATHER_HAIL              1
#define B_ICE_WEATHER_SNOW              2

#define B_ABILITY_WEATHER               GEN_5      // 第6世代以降、特性によって発生する天候は5ターンの間持続します。それ以前は、戦闘が終了するか、技や別の天候特性によって天候が変化するまで持続していました。
#define B_SANDSTORM_SPDEF_BOOST         GEN_LATEST // 第4世代以降、砂嵐の天候によって Sp が倍増します。いわタイプのポケモンの防御力が1.5倍になる。
#define B_SANDSTORM_SOLAR_BEAM          GEN_LATEST // 第3世代以降、砂嵐によってソーラー ビームの出力が低下します。
#define B_OVERWORLD_FOG                 GEN_4      // 第8世代以降、フィールド上の「霧」は戦闘中に「ミストフィールド」を発生させます。一方、第4世代に限っては、フィールド上の「霧」は戦闘中に「霧」という特殊な天候状態を発生させます。
#define B_OVERWORLD_SNOW                GEN_8      // 第9世代以降、フィールド上の天候が「雪」の場合、戦闘では「あられ」ではなく「ゆき」が発生します。
#define B_SNOW_WARNING                  GEN_8      // 第9世代以降、「ゆきふらし」は「あられ」の代わりに「ゆき」を降らせるようになります。
#define B_PREFERRED_ICE_WEATHER         B_ICE_WEATHER_BOTH // 「あられ」状態と「ゆき」状態を共存させます。
#define B_OVERWORLD_WEATHER_OVERRIDE    GEN_8      // 第9世代以降、フィールド上の天候は上書きできません。

// ◯◯フィールド設定
#define B_TERRAIN_BG_CHANGE         TRUE       // TRUEの場合、地形変化の技は、その効果が切れるまでデフォルトの戦闘背景を永続的に変更します。
#define B_THUNDERSTORM_TERRAIN      TRUE       // TRUEの場合、オーバーワールドの雷雨は第8世代と同様に、雨とエレキフィールドを発生させます。
#define B_TERRAIN_TYPE_BOOST        GEN_7 // 第8世代では、ダメージの補正は50%ではなく30%になります。（◯◯フィールド）
#define B_SECRET_POWER_EFFECT       GEN_LATEST // 「ひみつのちから」の効果は、地形や世代によって変化します。`SetMoveEffect` 内の `MOVE_EFFECT_SECRET_POWER` の処理を​​参照してください。
#define B_SECRET_POWER_ANIMATION    GEN_LATEST // 「ひみつのちから」の演出は、地形や世代によって変化します。
#define B_NATURE_POWER_MOVES        GEN_LATEST // 「しぜんのちから」は、地形や世代によって繰り出す技が異なります。gBattleEnvironmentInfo を参照してください。
#define B_CAMOUFLAGE_TYPES          GEN_LATEST // 「ほごしょく」は、地形や世代に応じて使用者のタイプを変化させます。sTerrainToType を参照してください。
#define B_NEW_TERRAIN_BACKGROUNDS   TRUE       // TRUEの場合、エレキフィールド、ミストフィールド、グラスフィールド、サイコフィールドに新しい地形の背景が使用されます。

// インターフェイス
#define B_FAST_INTRO_PKMN_TEXT              TRUE       // TRUEの場合、対戦開始時のテキストは、ポケモンのアニメーションの終了を待つのではなく、アニメーションと同時に表示されます。
#define B_FAST_INTRO_NO_SLIDE               FALSE      // TRUEの場合、戦闘開始時のスライドアニメーションがスキップされます。
#define B_FAST_HP_DRAIN                     TRUE       // TRUEの場合、HPバーの動きが速くなります。
#define B_FAST_EXP_GROW                     TRUE       // TRUEの場合、経験値バーの動きが速くなります。
#define B_SHOW_TARGETS                      TRUE       // TRUEの場合、2体または3体のポケモンにヒットする技について、技を選択する前にすべての有効なターゲットが表示されます。
#define B_SHOW_CATEGORY_ICON                TRUE       // TRUEの場合、ステータス画面や技の思い出し画面で、技の分類を示すアイコンが表示されます。
#define B_HIDE_HEALTHBOX_IN_ANIMS           TRUE       // TRUEの場合、技アニメーション中にヘルスボックスが非表示になります。
#define B_WAIT_TIME_MULTIPLIER              16         // 戦闘中のテキスト表示時間を決定します。デフォルト値は16です。値を小さくすると、戦闘の進行が速くなります。
#define B_QUICK_MOVE_CURSOR_TO_RUN          FALSE      // TRUEの場合、野生のポケモンとの遭遇時にバトルオプションでBボタンを押した際、カーソルが「にげる」オプションに移動します。
#define B_RUN_TRAINER_BATTLE                FALSE      // TRUEの場合、プレイヤーはトレーナーから逃げることができます。これは全滅として扱われます。
#define B_MOVE_DESCRIPTION_BUTTON           L_BUTTON   // B_LAST_USED_BALL_BUTTON 以外のボタンに設定した場合、そのボタンを押すと技の説明メニューが開きます。
#define B_SHOW_USELESS_Z_MOVE_INFO          TRUE       // TRUEの場合、新しい世代の補助技のような追加効果を持たないZワザは、「追加効果なし」と表示されるようになります。
#define B_ANIMATE_MON_AFTER_KO              FALSE      // TRUEの場合、敵(自分・相手関わらず)が倒れた時に勝利アニメーションを表示する。
#define B_ANIMATE_MON_AFTER_FAILED_POKEBALL TRUE       // TRUEの場合、相手がボールから登場したときにアニメーションを表示します。
#define B_SHOW_DYNAMAX_MESSAGE              TRUE       // TRUEの場合、ダイマックスまたはキョダイマックスの完了後に、追加のバトルメッセージが表示されます。(原作にはメッセージはありません。)
#define B_HPBAR_COLOR_THRESHOLD             GEN_LATEST // 第5世代以降、HPバーの色の変化基準は、HPバーのピクセルの長さに基づくものから、実際のHP値に基づくものへと変更され、より正確な色で表示されるようになりました。
#define B_HP_PERCENTAGE_DISPLAY             FALSE      // TRUEの場合、対戦相手のポケモンのHPが、HPバーの横にパーセンテージで表示されるようになります。シングルバトルでは、HPバーの下にパーセンテージが表示されるようにHP表示枠が拡張されます。ダブルバトルでは、自陣のHP数値を切り替える際と同じ操作で、対戦相手側のパーセンテージ表示も切り替えることができます。

// 捕獲設定
#define B_SEMI_INVULNERABLE_CATCH       GEN_3      // 第4世代以降では、半無敵状態（「あなをほる」や「そらをとぶ」など）にあるポケモンに対してボールを投げることはできません。
#define B_CATCHING_CHARM_BOOST          100        // ゆれないおまもりを所持している場合、クリティカルキャッチの発生率がX%上昇します。
#define B_INCAPACITATED_CATCH_BONUS     GEN_LATEST // 第5世代以降では、ポケモンが「ねむり」または「こおり」状態の際の捕獲率ボーナスは2.5倍ですが、第4世代以前では2倍にとどまります。
#define B_LOW_LEVEL_CATCH_BONUS         GEN_8      // 第8世代では、レベル20未満のポケモンを捕まえる際に捕獲率へのボーナスが加算されます。一方、第9世代では、このボーナスはレベル13未満のポケモンにのみ適用されます。
#define B_MISSING_BADGE_CATCH_MALUS     GEN_3      // 第9世代では、現在の捕獲レベルより5レベル上のモンを捕獲しようとすると、獲得したジムバッジの数に基づいて捕獲率にペナルティが追加されます。
#define B_CRITICAL_CAPTURE              TRUE       // TRUEの場合、捕獲クリティカルが有効になります。
#define B_CRITICAL_CAPTURE_LOCAL_DEX    TRUE       // FALSEの場合、捕獲クリティカル率は、有効化された世代に基づく全国図鑑のデータをもとに算出されます。
#define B_CRITICAL_CAPTURE_IF_OWNED     GEN_LATEST // 第9世代では、捕まえようとしているポケモンがすでに図鑑に登録されている（過去に捕獲したことがある）場合、捕獲時に捕獲クリティカルが発生することがあります。
#define B_FLAG_VICTORY_CATCH_RANDOM     0          // この設定が有効な場合、エンカウントした相手を倒した後にボールを投げるよう促されます（捕獲率はランダムです）。それ以外の方法で捕獲することはできません。
#define B_FLAG_VICTORY_CATCH_GUARANTEED 0          // この設定が有効な場合、エンカウントに勝利した後にボールを投げるよう促され、確実に捕獲できます。それ以外の方法で捕獲することはできません。

#define B_LAST_USED_BALL            TRUE       // TRUEの場合、第7世代の「最後に使ったボール」機能が実装されます。
#define B_LAST_USED_BALL_BUTTON     R_BUTTON   // 「最後に使用したボール」の機能が実装されている場合、このボタン（またはボタンの組み合わせ）を押すと、最後に使用したボールが投げられます。
#define B_LAST_USED_BALL_CYCLE      TRUE       // TRUEの場合、B_LAST_USED_BALL_BUTTONを押しながら十字キーを押すと、ボールが切り替わります。
#define B_CATCH_SWAP_INTO_PARTY     GEN_6      // 第7世代以降、捕獲した野生のポケモンを手持ちに加えるかどうかの選択肢が表示され、代わりに別のポケモンをボックスへ送ることができます。
#define B_CATCH_SWAP_CHECK_HMS      TRUE       // TRUEの場合、上記の「捕獲時手持ちに入れる」機能は、秘伝技を覚えているポケモンをボックスに戻すのを防ぎます。

// その他設定２
#define B_MULTI_BATTLE_WHITEOUT         GEN_LATEST // 第4世代以降のマルチバトルでは、プレイヤーとパートナーの双方が戦えるポケモンをすべて失った時点でバトルが終了します。
#define B_EVOLUTION_AFTER_WHITEOUT      GEN_LATEST // 第6世代以降、戦闘後に進化条件を満たしたポケモンは、たとえプレイヤーが敗北しても進化します。
#define B_AFFECTION_MECHANICS           TRUE       // 第6世代以降、バトル中に様々な効果を発動させる「なかよし度」というステータスが存在しますが、ピカブイ以降では、代わりに「なつき度」が使用されるようになりました。
#define B_TRAINER_CLASS_POKE_BALLS      GEN_LATEST // 第7世代以降、トレーナーはそのトレーナーのクラスに応じて特定の種類のボールを使用します。
#define B_TRAINER_MON_RANDOM_ABILITY    TRUE       // これをTRUEに設定すると、トレーナーのポケモンにランダムな合法的な特性が生成されます。
#define B_OBEDIENCE_MECHANICS           GEN_3      // レジェアル（ここでは第8世代以降）においても、交換したポケモンに対して「言うことを聞かなくなる」制限が適用されますが、その判定基準は現在のレベルではなく、入手時のレベルに基づいています。
#define B_USE_FROSTBITE                 FALSE      // レジェアルでは、こおり状態の代わりにしもやけ状態が採用されています。このフラグを有効にすると、同様の挙動になります。技ごとにこおりにするかしもやけにするかを選択することも可能です。「フリーズドライ」、「ひみつのちから」、「トライアタック」の挙動はこの設定に依存します。
#define B_TOXIC_REVERSAL                GEN_LATEST // 第5世代以降、戦闘終了時にもうどくが通常のどくに変化します。
#define B_TRY_CATCH_TRAINER_BALL        GEN_LATEST // 第4世代以降、トレーナーのポケモンを捕まえようとしても、モンスターボールは消費されません。
#define B_SLEEP_CLAUSE                  FALSE      // B_FLAG_SLEEP_CLAUSEの設定にかかわらず、常にSleep Clauseを有効にします。モジュール性を高めるためにこれを使用してください。
#define B_PARTNER_MONS_MARKED_SEEN      TRUE       // TRUEの場合、ダブルバトルのパートナーがまだ遭遇したことのないポケモンを繰り出すと、そのポケモンは図鑑に「見つけたポケモン」として記録されます。
#define B_MULTI_HALF_TEAMS              FALSE      // TRUEの場合、戦闘で片側に2人のトレーナーがいる場合、トレーナーはそれぞれ3匹のポケモンに制限されます。 FALSE の場合、「trainers.party」の「Multi Party: Half」を使用して戦闘ごとの上限を設定できます。
#define B_TERA_ORB_ALWAYS_CHARGED       TRUE       // TRUEの場合、B_FLAG_TERA_ORB_CHARGEDの状態にかかわらず、テラスタルオーブが常にチャージされた状態になります。モジュール性を高めるために使用してください。

#define NUM_BEEPS_GEN_LATEST            4                    // 4回繰り返す（HP赤の点滅音）
#define NUM_BEEPS_GEN_3                 -1                   // 無限
#define NUM_BEEPS_OFF                   0                    // 再生しない
#define B_NUM_LOW_HEALTH_BEEPS          NUM_BEEPS_GEN_LATEST // これは、HP赤の時の点滅音が繰り返される回数を制御します。この値を `NUM_BEEPS_OFF` に設定するとビープ音は無効になり、`NUM_BEEPS_GEN_3` に設定すると無限に繰り返されます。任意の数値を設定可能であり、ここに挙げた定義はあくまで利便性のためのものです。

// アニメーション設定
#define B_NEW_SWORD_PARTICLE            FALSE    // TRUEの場合、「つるぎのまい」のパーティクルがアップデートされる。
#define B_NEW_LEECH_SEED_PARTICLE       FALSE    // TRUEの場合、「やどりぎのタネ」のパーティクルがアップデートされる。
#define B_NEW_HORN_ATTACK_PARTICLE      FALSE    // TRUEの場合、「つのでつく 」の角のパーティクルがアップデートされる。
#define B_NEW_ROCKS_PARTICLE            TRUE     // TRUEの場合、岩のパーティクルをアップデートされる。
#define B_NEW_LEAF_PARTICLE             TRUE     // TRUEの場合、葉っぱのパーティクルをアップデートされる。
#define B_NEW_EMBER_PARTICLES           FALSE    // TRUEの場合、「ひのこ」の炎のパーティクルがアップデートされる。。
#define B_NEW_MEAN_LOOK_PARTICLE        FALSE    // TRUEの場合、「くろいまなざし」の目のパーティクルがアップデートされる。
#define B_NEW_TEETH_PARTICLE            FALSE    // TRUEの場合、「かみつく」/「かみくだく」の歯のパーティクルがアップデートされる。
#define B_NEW_HANDS_FEET_PARTICLE       FALSE    // TRUEの場合、チョップ、キック、パンチのパーティクルがアップデートされる。
#define B_NEW_SPIKES_PARTICLE           FALSE    // TRUEの場合、「まきびし」のパーティクルがアップデートされる。
#define B_NEW_FLY_BUBBLE_PARTICLE       FALSE    // TRUEの場合、「そらをとぶ」のバブルのパーティクルがアップデートされる。
#define B_NEW_CURSE_NAIL_PARTICLE       TRUE     // TRUEの場合、「のろい」のツメがアップデートされる。
#define B_NEW_BATON_PASS_BALL_PARTICLE  TRUE     // TRUEの場合、「バトンタッチ」のボールのグラフィックがアップデートされる。
#define B_NEW_MORNING_SUN_STAR_PARTICLE TRUE     // TRUEの場合、「あさのひざし」の星のパーティクルがアップデートされる。
#define B_NEW_IMPACT_PALETTE            TRUE     // TRUEの場合、基本的な「ヒット」パレットがアップデートされる。
#define B_NEW_SURF_PARTICLE_PALETTE     FALSE    // TRUEの場合、「なみのり」の波パレットがアップデートされる。

// モンスターボールのアニメーションとサウンド
#define B_ENEMY_THROW_BALLS          GEN_LATEST  // 第6世代以降、敵のトレーナーがモンスターボールを地面に置いて開かせるのではなく、バトル中にボールを投げ入れるようになりました。
#define B_ENEMY_THROW_BALLS_SOUND    GEN_LATEST  // 第5世代以降の仕様では、敵トレーナーがポケモンを出すためにモンスターボールを投げる際、効果音が再生されます。この機能は、`B_ENEMY_THROW_BALLS` が `GEN_6` 以降に設定されている場合にのみ有効です。
#define B_PLAYER_THROW_BALLS_SOUND   GEN_LATEST  // 第5世代以降、ポケモンを繰り出すためにモンスターボールを投げると、そのボールから音が鳴るようになっています。

#define SHOW_TYPES_NEVER    0                    // 戦闘中にタイプが表示されない。
#define SHOW_TYPES_ALWAYS   1                    // バトル中に常にタイプを表示する。
#define SHOW_TYPES_CAUGHT   2                    // 捕まえたことがある場合のみ、タイプを表示する。
#define SHOW_TYPES_SEEN     3                    // 一度でも見かけた場合のみ、タイプを表示する
#define B_SHOW_TYPES        SHOW_TYPES_NEVER     // バトル中、ターゲットとなるポケモンを選択した後、技を選ぶ際にポケモンのHPバーの横へタイプアイコンを表示するタイミング。

#define SHOW_EFFECTIVENESS_NEVER    0           // 技を選択する際、相性は表示しない。
#define SHOW_EFFECTIVENESS_ALWAYS   1           // 技を選択する際、相性を常に表示する。
#define SHOW_EFFECTIVENESS_CAUGHT   2           // 捕まえたことがある場合のみ、相性を表示。
#define SHOW_EFFECTIVENESS_SEEN     3           // 見たことがある場合にのみ、相性を表示。
#define B_SHOW_EFFECTIVENESS        SHOW_EFFECTIVENESS_SEEN // SHOW_EFFECTIVENESS_NEVER でない場合、PPは、技と相手の情報を基にしたタイプ相性に置き換えられます。

// ポケモンのバトル用スプライト設定
#define B_ENEMY_MON_SHADOW_STYLE        GEN_LATEST // 第4世代以降、すべての敵ポケモンの足元に影が描画されます。

//  バトルUI設定
#define B_MOVE_REARRANGEMENT_IN_BATTLE  GEN_1  //  第4世代以降、戦闘中に技の並び順を変更することはできません。

#define B_POOL_SETTING_CONSISTENT_RNG       FALSE    // TRUEの場合、同じセーブデータにおいて、同じトレーナーが常に同じプールを乱数生成するようになります。
#define B_POOL_SETTING_USE_FIXED_SEED       FALSE    // TRUEの場合、B_POOL_SETTING_FIXED_SEEDで定義された固定シードが使用されます。
#define B_POOL_SETTING_FIXED_SEED           0x1D4127 // 「ランダム」な数値についてですが、間違いでなければ、JP-EMの文字コード表『へだら』になります。
#define B_POOL_RULE_SPECIES_CLAUSE          FALSE    // 全国図鑑番号が異なるポケモンを1匹だけ選ぶ。
#define B_POOL_RULE_EXCLUDE_FORMS           FALSE    // 「SPECIES_CLAUSE」から異なる形態を除外する
#define B_POOL_RULE_ITEM_CLAUSE             TRUE    // 各アイテムの選択を1回のみ許可する。
#define B_POOL_RULES_USE_ITEM_EXCLUSIONS    FALSE    // poolItemClauseExclusions に記載されている項目を除外する
#define B_POOL_RULE_MEGA_STONE_CLAUSE       FALSE    // メガストーンを持たせるポケモンは1匹だけ選ぶ。
#define B_POOL_RULE_Z_CRYSTAL_CLAUSE        FALSE    // Zクリスタルを持たせるポケモンを1匹だけ選ぶ。

#endif // GUARD_CONFIG_BATTLE_H
