#ifndef GUARD_CONFIG_NAME_BOX_H
#define GUARD_CONFIG_NAME_BOX_H

#define OW_FLAG_SUPPRESS_NAME_BOX   0  // このフラグが設定されている間は、（マクロによるものかコードによるものかを問わず）どのネームボックスも表示されません。このフラグが解除されると表示されるようになります。

// 話している人の名前表示の設定
#define OW_NAME_BOX_USE_DYNAMIC_WIDTH TRUE  // TRUEの場合、名前表示ボックスの幅は、話者の名前の長さに応じて可変となります。
#define OW_NAME_BOX_NPC_TRAINER       FALSE // TRUEに設定すると、近づいてくるNPCトレーナーの名前ボックスが自動的に表示されるようになります。名前はトレーナーデータから取得されます。
#define OW_NAME_BOX_DEFAULT_WIDTH     8     // OW_NAME_BOX_USE_DYNAMIC_WIDTH で設定可能な最大幅です。また、上記の設定が FALSE の場合（または動的な幅がこの値を超える場合）のデフォルトの幅でもあります。
#define OW_NAME_BOX_DEFAULT_HEIGHT    2     // 名前ボックスウィンドウの最大の高さ。

// ネームボックスの文字色。数値はパレットインデックスに対応しています。
// 背景色は常に0である必要があるため、指定されません。
#define OW_NAME_BOX_FOREGROUND_COLOR  1
#define OW_NAME_BOX_SHADOW_COLOR      2

#endif // GUARD_CONFIG_NAME_BOX_H
