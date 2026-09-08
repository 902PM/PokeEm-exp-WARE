#ifndef GUARD_CONFIG_QUICKSTART_H
#define GUARD_CONFIG_QUICKSTART_H

#define GENDER_MALE              0
#define GENDER_FEMALE            1
#define GENDER_RANDOM            2

// Quickstart Settings
#define ENABLE_QUICKSTART            FALSE  // TRUEの場合、タイトル画面でSELECTを押すと新しいゲームを開始できます（リリースビルドでは無効）。
#define QUICKSTART_HUD               TRUE  // クイックスタートが有効な場合、タイトル画面に小さなHUDを表示します。
#define QUICKSTART_GENDER            GENDER_FEMALE

#define QUICKSTART_HUD_X             (DISPLAY_WIDTH - 32) // クイックスタートHUDのX位置
#define QUICKSTART_HUD_Y             (16)                 // クイックスタートHUDのY位置

#endif // GUARD_CONFIG_QUICKSTART_H
