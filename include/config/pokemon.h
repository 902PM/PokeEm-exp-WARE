#ifndef GUARD_CONFIG_POKEMON_H
#define GUARD_CONFIG_POKEMON_H

// ポケモンデータ設定
#define P_UPDATED_TYPES             GEN_LATEST  // 一部のポケモンは、登場後にタイプが変更されました。
#define P_UPDATED_STATS             GEN_LATEST  // 一部のポケモンは、登場後に種族値が変更されています。
#define P_UPDATED_ABILITIES         GEN_LATEST  // 第4世代以降、一部のポケモンの特性が変更されています。
#define P_UPDATED_EGG_GROUPS        GEN_LATEST  // 第8世代以降、一部のポケモンは新たなタマゴグループを獲得しました。
#define P_UPDATED_FRIENDSHIP        GEN_LATEST  // 第8世代以降、一部のポケモンの初期なつき度が変更されました。
#define P_UPDATED_EVS               GEN_LATEST  // 第4世代以降、一部のポケモンで努力値（EV）の変更が行われています。
#define P_UPDATED_EXP_YIELDS        GEN_LATEST  // 第5世代以降、一部のポケモンの基礎経験値が変更されました。

// 習得技
#define P_LVL_UP_LEARNSETS          GEN_LATEST  // 使用するレベルアップ習得技のセットを選んでください。
                                                // まだそのポケモンが登場していない世代については、そのポケモンの初登場の世代のデータを使用します。（例：設定が GEN_1 の場合、チコリータの「GEN 2」のデータを使用）
                                                // リストラされた世代については、そのポケモンが最後に登場したデータを使用します。（例：設定が「GEN 8」の場合、ツタージャは「GEN 7」のデータを使用）
                                                // GEN_1/2/3/4/5/6/7：それぞれ『Yellow』『Crystal』『RSE』『HGSS』『B2W2』『ORAS』『USUM』での技の習得状況。
                                                // GEN_8: 以下の優先順位で使用します：第1～4世代のポケモンはBDSP、レジェアル初登場ポケモンはLA、剣盾に登場するならSwSh。それ以外の場合はGEN_7を使用します。
                                                // GEN_9: SV（登場するポケモンのみ）。それ以外はGEN_8を使用。
#define P_EVOLUTION_LEVEL_1_LEARN   GEN_LATEST  // 第8世代以降、レベル1で進化するポケモンは、それ以前とは異なり、レベル1で覚える技を習得する機会がなくなりました。

// 進化設定
#define P_FRIENDSHIP_EVO_THRESHOLD   GEN_LATEST  // 第8世代以降、なつき度で進化するポケモンは、なつき度が220ではなく160以上になると進化するようになりました。

// タマゴ設定
#define P_NIDORAN_M_DITTO_BREED        GEN_LATEST                // 第5世代以降、ニドラン♂をメタモンと預け屋に預けてタマゴを作ると、ニドラン♀が生まれるようになりました。それ以前は、オスしか生まれませんでした。この変更はバルビートにも適用されています。
#define P_INCENSE_BREEDING             GEN_LATEST                // 第9世代以降、世代をまたいで登場した「ベイビィポケモン」は、タマゴから入手する際に親に「おこう」を持たせる必要がなくなりました。
#define P_EGG_HATCH_LEVEL              GEN_LATEST                // 第4世代以降、ポケモンはタマゴから孵化する際、レベル5ではなくレベル1になります。
#define P_BALL_INHERITANCE             GEN_LATEST                // 第6世代以降、預かり屋で入手できるタマゴは、♀のモンスターボールを引き継ぐようになりました。第7世代からは、♀と同じ種族であれば、♂のボールも引き継ぐことが可能になりました。
#define P_MOVE_INHERITANCE             GEN_LATEST                // 第6世代より前では、タマゴは♂親のタマゴ技、♂親のわざマシン技、両親が共通して覚えるレベルアップ技の順で技を遺伝していました。第6世代以降は、両親が共通して覚えるレベルアップ技、♂親のタマゴ技、♀親のタマゴ技の順で技を遺伝するようになりました。
#define P_NATURE_INHERITANCE           GEN_LATEST                // 第3世代では、かわらずのいしを持たせると、メタモンや♀が50%の確率で性格を遺伝させることができました。第4世代からは、どのポケモンでも性格を遺伝させられるようになりました。第5世代以降（正確にはBW2）、その確率は100%になっています。
#define P_ABILITY_INHERITANCE          GEN_LATEST                // BW2では、オスと交配させた際、メスのポケモンが特性を遺伝させる確率は80%です。第6世代以降は、通常の特性なら80%、夢特性なら60%の確率で遺伝し、メタモンと交配させる場合は（性別を問わず）特性を遺伝させることができます。なお、BWにおける『夢特性は60%、通常の特性はランダムで遺伝する』という仕様は除外されています。
#define P_EGG_MOVE_TRANSFER            GEN_LATEST                // 第8世代以降、同じ種類のポケモン2匹を預かり屋に預けた際、片方がタマゴ技を覚えていてもう片方の技スロットに空きがあれば、空きのあるポケモンはそのタマゴ技を覚えることができます。第9世代では、「ものまねハーブ」を持たせたポケモンであれば、種類が異なっていても相手からタマゴ技を覚えることが可能です。
#define P_SCATTERBUG_LINE_FORM_BREED   SPECIES_SCATTERBUG_FANCY  // ビビヨン・コフキムシ・コフキラの進化形となるコフキムシの「模様」を選びます。これは基本的に、プレイヤーのゲームの「地域」に対応しています。

// 種族ごとの個別設定
#define P_SHEDINJA_BALL             GEN_3  // 第4世代以降、ヌケニンへの進化にはモンスターボールが必要ですが、第3世代ではツチニンのボールが引き継がれます。
#define P_KADABRA_EVERSTONE         GEN_3  // 第4世代以降、ユンゲラーは「かわらずのいし」を持たせていても進化できるようになりました。
#define P_SHUCKLE_BERRY_JUICE       GEN_LATEST  // 第2世代において、ツボツボは持っている「きのみ」を1/16の確率で「きのみジュース」に変化させる能力を持っていました。この機能を有効にすることで、ツボツボは「きのみ」の実質的な後継アイテムである「オボンのみ」に対しても、同様の変化を行えるようになります。

// 種族ごとのグラフィック設定
#define P_GENDER_DIFFERENCES            TRUE        // TRUEの場合、メスのポケモンは見た目のみが異なるようになります。ニャオニクス等は『フォルム』として扱われます。
#define P_CUSTOM_GENDER_DIFF_ICONS      TRUE        // TRUEの場合、ヒポポタスやカバルドンのように、性別による外見差があるポケモンに対して、より多くのポケモンが独自のアイコンを持つようになります。
#define P_ARCEUS_UNIQUE_FORM_ICONS      GEN_LATEST  // 第9世代以降、アルセウスのアイコンは現在のフォルムを反映したものに変化するようになりました。
#define P_FOOTPRINTS                    TRUE        // TRUEに設定すると、ポケモンに足跡が表示されるようになります（第5世代や『BDSP』と同様）。無効にすると、ROMの容量を節約できます。
#define P_TWO_FRAME_FRONT_SPRITES       TRUE        // 『ポケットモンスター エメラルド』では、ポケモンの正面グラフィックは常に2つのフレームで構成されています。この設定を有効にすると、他の第3世代の作品と同様に、最初のフレームのみを使用するように変更できます。
#define P_GBA_STYLE_SPECIES_GFX         FALSE       // デフォルトでは、ポケモンのスプライトは第4・5世代のスタイルが使用されます。この設定により、GBA時代のスタイルに戻すことができます。注：これらのスプライトを使用する場合、現時点では `B_ENEMY_MON_SHADOW_STYLE` は無効になります。
#define P_GBA_STYLE_SPECIES_ICONS       FALSE       // デフォルトでは、ポケモンはアップデートされたアイコンを使用します。この設定により、GBAスタイルのアイコンに戻すことができます。
#define P_GBA_STYLE_SPECIES_FOOTPRINTS  FALSE       // デフォルトでは、ポケモンはアップデートされた足跡を使用します。この設定により、GBA版のスタイルに戻すことができます。

// その他設定
#define P_CRIES_ENABLED                  TRUE        // TRUEに設定すると、ポケモンに鳴き声が実装されます。これを無効にするとROM容量を大幅に（25%以上も！）節約できますが、代わりに `include/config/species_enabled.h` で、使用しないポケモンの系統ごとに無効化することをお勧めします。
#define P_LEGENDARY_PERFECT_IVS          GEN_LATEST  // 第6世代以降、野生で出現したり、プレゼントとして受け取ったりする伝説のポケモン、幻のポケモン、およびウルトラビーストは、少なくとも3つの個体値が『さいこう』になっています。
#define P_EV_CAP                         GEN_LATEST  // 第6世代以降、1つのステータスあたりの努力値の上限は255ではなく252になっています。
#define P_SHOW_TERA_TYPE                 GEN_LATEST  // 第9世代からは、ステータス画面にテラスタイプが表示されるようになりました。
#define P_TM_LITERACY                    GEN_LATEST  // 第6世代以降、本来はわざマシンを使えないポケモンであっても、レベルアップで覚える技であれば、わざマシンを使ってその技を習得できるようになりました。
#define P_CAN_FORGET_HIDDEN_MOVE         TRUE        // TRUEの場合、ポケモンは秘伝技であっても、忘れることができます。
#define P_ASK_MOVE_CONFIRMATION          FALSE       // FALSEの場合、『では◯◯をあきらめますか？』の表示がなくなります。
#define P_EGG_CYCLE_LENGTH               GEN_LATEST  // 第8世代以降、タマゴの孵化に必要な歩数はそれまでの半分になりました。それ以前の世代では、255歩を基準として歩数に多少のばらつきがありました。
#define P_ONLY_OBTAINABLE_SHINIES        FALSE       // TRUEの場合、バトルピラミッドでエンカウントしたポケモンや、捕獲が無効化されている間にエンカウントしたポケモンは色違いになりません。
#define P_NO_SHINIES_WITHOUT_POKEBALLS   FALSE       // TRUEの場合、プレイヤーがモンスターボールを所持していない状態でエンカウントしたポケモンは色違いになりません。
#define P_SHOW_DYNAMIC_TYPES             TRUE        // TRUEの場合、めざめるパワーのようなタイプが変化するすべての技について、原作のように一部の技だけでなく、バ​​トル画面やステータス画面で現在のタイプが反映されるようになります。
#define P_BASE_HP_1_SHEDINJA_HANDLING    FALSE       // TRUEの場合、HPの種族値が1のポケモンは、ヌケニンと同じ処理になります。

// おしえわざの切り替え
#define P_LEARNSET_HELPER_TEACHABLE      TRUE   // FALSEの場合、`.gitignore`ファイルから`teachable_learnset.h`を必ず削除してください。TRUEの場合、利用可能なわざマシンや教え技に基づき、同梱のJSONファイルを使用して`tools/learnset_helpers/make_teachables.py`が`teachable_learnsets.h`を生成します。

// フラグ設定
// スクリプトで以下の機能を使用するには、0の部分を割り当てるフラグIDに置き換えてください。
// 例: FLAG_UNUSED_0x264に置き換えることで、そのフラグを使って機能を切り替えられるようになります。
#define P_FLAG_FORCE_SHINY               FLAG_EXPANSION_FORCE_SHINY     // このフラグが設定されている場合、すべての野生のポケモンおよびプレゼントされるポケモンは、強制的に色違いになります。
#define P_FLAG_FORCE_NO_SHINY            FLAG_EXPANSION_FORCE_NO_SHINY  // このフラグが設定されている場合、野生およびプレゼントで入手するすべてのポケモンは、強制的に色違いではない状態になります。

// 特定のポケモンの系統を無効にしたい場合は、こちら↓
#include "config/species_enabled.h"

#include "constants/sound.h"

// Sound related settings
#define P_MODIFIED_MEGA_CRIES            P_MEGA_EVOLUTIONS  // TRUEの場合、個別のメガシンカ用鳴き声（ROM容量の約3%を使用）が使用されます。FALSEの場合、P_MODIFIED_MEGA_CRY_MODEによる変更を除き、すべてのメガシンカで共通の鳴き声が使用されます。デフォルトでは、メガシンカが有効かどうかに基づいて設定されます。
#define P_MODIFIED_MEGA_CRY_MODE         CRY_MODE_HIGH_PITCH

// Pokédex
#define DONT_SKIP_GAPS                   0              // Does not skip any gaps in the Pokédex.
#define SKIP_GAPS_EXCEPT_ONE             1              // Skips all gaps in the Pokédex other than one blank entry in between seen entries.
#define SKIP_GAPS_EXCEPT_BEFORE_AFTER    2              // Skips all gaps in the Pokédex other than one before and after seen entries. Most similar to whats seen in Pokémon SV.
#define SKIP_ALL_GAPS                    3              // Skips all gaps in the Pokédex.
#define P_SKIP_POKEDEX_GAPS              DONT_SKIP_GAPS // Pokémon SV skip large gaps in the Pokédex.

#endif // GUARD_CONFIG_POKEMON_H
