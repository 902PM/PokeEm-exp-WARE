#ifndef GUARD_CONFIG_SUMMARY_SCREEN_H
#define GUARD_CONFIG_SUMMARY_SCREEN_H

// Settings
#define P_SUMMARY_SCREEN_NATURE_COLORS   TRUE   // TRUEの場合、ステータス画面において、性格に基づく上昇・下降が赤色と青色で表示されます。
#define P_SUMMARY_SCREEN_RENAME          TRUE   // TRUEの場合、ステータス画面の「情報」ページにおいて、キャンセルを促す表示の代わりに、ポケモンのニックネームを変更するオプションが表示されるようになります。

// IV/EV settings
#define P_SUMMARY_SCREEN_IV_EV_INFO      TRUE   // TRUEに設定すると、ステータス画面で実数値、個体値（IV）、努力値（EV）の表示を切り替えられるようになります。
#define P_SUMMARY_SCREEN_IV_EV_BOX_ONLY  FALSE  // TRUE の場合、プレイヤーはステータス画面ので実数値、個体値、努力値と順繰りで確認できますが、ボックス内でのみ可能です。
#define P_SUMMARY_SCREEN_IV_HYPERTRAIN   TRUE   // TRUEに設定すると、ステータス画面で「すごいとっくん」済みのステータスが「31/S」と表示されるようになります。
#define P_SUMMARY_SCREEN_IV_EV_TILESET   FALSE  // TRUEに設定すると、ポケモン画面のスキルページにある「STATS」ラベルを変更可能にするための代替タイルセットが読み込まれます。なお、この設定を変更して再コンパイルした後も代替タイルセットが読み込まれたままになる場合は、コンパイル前に `make clean` を実行する必要があるかもしれません。
#define P_SUMMARY_SCREEN_IV_EV_VALUES    TRUE   // TRUE の場合、文字での表示の代わりに実際の個体値が表示されます。
/*
LETTER GRADE GUIDE:

    F = 0
    D = 1 - 15
    C = 16 - 25
    B = 26 - 29
    A = 30
    S = 31

Info taken from https://bulbapedia.bulbagarden.net/wiki/Stats_judge.
*/
#define P_SUMMARY_SCREEN_IV_ONLY         FALSE  // TRUEの場合、『のうりょく』には個体値のみが表示されます。
#define P_SUMMARY_SCREEN_EV_ONLY         FALSE  // TRUEの場合、『のうりょく』には努力値のみが表示されます。

// IV/EV flags
#define P_FLAG_SUMMARY_SCREEN_IV_EV_INFO FLAG_EXPANSION_SUMMARY_SCREEN_IV_EV_INFO // このフラグが設定されている場合、ステータス画面の能力値ページで、実数値、個体値、努力値の表示を切り替えられるようになります。なお、`P_SUMMARY_SCREEN_IV_EV_INFO` が `TRUE` の場合、このフラグは機能しません。

// Move Relearner settings
#define P_ENABLE_MOVE_RELEARNERS         TRUE    // TRUEに設定すると、タマゴ技、わざマシン、および教え技の技思い出し機能が有効になります（具体的な設定やフラグについては下記を参照してください）。
#define P_SORT_MOVES                     TRUE    // TRUEの場合、技の思い出し屋のリストにあるすべての技をアルファベット順に並べ替えます。

// Level up Relearner
#define P_PRE_EVO_MOVES                  TRUE    // TRUEの場合、そのポケモンは進化前の段階で覚える技を覚えることができます。
#define P_ENABLE_ALL_LEVEL_UP_MOVES      TRUE    // TRUEの場合、レベルに関係なく、そのポケモンはレベルアップで覚えるすべての技を覚えることができます。

// TM Relearner
#define P_TM_MOVES_RELEARNER             TRUE    // TRUEの場合、『わざおもいだし』の機能を有効にします。
#define P_ENABLE_ALL_TM_MOVES            TRUE    // TRUEの場合、バッグに入っているかどうかにかかわらず、そのポケモンは対応するすべてのわざマシンを覚えることができます。

// Relearner用フラグ — `P_ENABLE_MOVE_RELEARNERS` が `TRUE` の場合は不要ですが、すべての Relearner を同時にアンロックしたくない場合に備えて、ここに追加しています。
// スクリプトで以下の機能を使用するには、0を割り当てるフラグIDに置き換えてください。
// 例：FLAG_UNUSED_0x264 に置き換えることで、そのフラグを使って機能を切り替えられるようになります。
#define P_FLAG_EGG_MOVES                 FLAG_EXPANSION_EGG_MOVE_RELEARNER    // このフラグが設定されている場合、タマゴ技の思い出し機能が有効になります。
#define P_FLAG_TUTOR_MOVES               FLAG_EXPANSION_TUTOR_MOVE_RELEARNER  // このフラグが設定されている場合、教え技の思い出し機能が有効になります。

// Move Relearner summary screen
#define P_SUMMARY_SCREEN_MOVE_RELEARNER  TRUE   // TRUEの場合、ステータス画面の「わざ」ページに、ポケモンが技を思い出すためのオプションが表示されます。
#define P_SUMMARY_MOVE_RELEARNER_FULL_PP TRUE   // TRUEの場合、ステータス画面の「技思い出し」機能は、思い出した技のPPを最大値まで回復させます。

#endif // GUARD_CONFIG_SUMMARY_SCREEN_H
