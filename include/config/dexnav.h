#ifndef GUARD_CONFIG_DEXNAV_H
#define GUARD_CONFIG_DEXNAV_H

#define DEXNAV_ENABLED                FALSE   // DexNavが有効かどうか。TRUEの場合、以下のフラグや変数はすべて非ゼロである必要があります。
#define USE_DEXNAV_SEARCH_LEVELS      FALSE  // * 警告: セーブブロックの容量を超える可能性があります！ 1種につき1バイト必要です */ */

// フラグ／変数の定義
#define DN_FLAG_SEARCHING             0      	// ポケモンのサーチ中
#define DN_FLAG_DEXNAV_GET            0  	// スタートメニューにずかんナビが表示されます。
#define DN_FLAG_DETECTOR_MODE         0   	// プレイヤーが隠されたポケモンを見つけられるようにする
#define DN_VAR_SPECIES                0         // ずかんナビのポケモンを登録
#define DN_VAR_STEP_COUNTER           0    	// 隠れているポケモンを見つける手順

// サーチパラメータ
#define DEXNAV_TIMEOUT                  15  // タイムアウトは15秒です。最大1092秒まで許容されます。
#define SNEAKING_PROXIMITY              4   // タイルの枚数
#define CREEPING_PROXIMITY              2
#define MAX_PROXIMITY                   20

#define DEXNAV_CHAIN_MAX                100 // 最大チェーン値

// ポケモンの隠しステータス（利用可能なデータが不足しているため、推定値）
#define HIDDEN_MON_STEP_COUNT       100  // x歩ごとに隠れたポケモンを発見
#define HIDDEN_MON_SEARCH_RATE      25   // x歩ごとに隠れたポケモンを見つける確率 x%
#define HIDDEN_MON_PROBABILTY       15   // 通常の出現データと比較して、隠れたポケモンが見つかる確率がx%

//// サーチ確率
// See https://bulbapedia.bulbagarden.net/wiki/DexNav#Benefits
// サーチレベルに応じたタマゴ技習得個体とのエンカウント率
#define SEARCHLEVEL0_MOVECHANCE         0
#define SEARCHLEVEL5_MOVECHANCE         21
#define SEARCHLEVEL10_MOVECHANCE        46
#define SEARCHLEVEL25_MOVECHANCE        58
#define SEARCHLEVEL50_MOVECHANCE        63
#define SEARCHLEVEL100_MOVECHANCE       83
// サーチレベルに応じた夢特性とのエンカウント率
#define SEARCHLEVEL0_ABILITYCHANCE      0
#define SEARCHLEVEL5_ABILITYCHANCE      0
#define SEARCHLEVEL10_ABILITYCHANCE     5
#define SEARCHLEVEL25_ABILITYCHANCE     15
#define SEARCHLEVEL50_ABILITYCHANCE     20
#define SEARCHLEVEL100_ABILITYCHANCE    23
// 持ち物を所持している確率
#define SEARCHLEVEL0_ITEM               0
#define SEARCHLEVEL5_ITEM               0
#define SEARCHLEVEL10_ITEM              1
#define SEARCHLEVEL25_ITEM              7
#define SEARCHLEVEL50_ITEM              6
#define SEARCHLEVEL100_ITEM             12
// V1つのポテンシャルを持つ個体にエンカウントする確率
#define SEARCHLEVEL0_ONESTAR            0
#define SEARCHLEVEL5_ONESTAR            14
#define SEARCHLEVEL10_ONESTAR           17
#define SEARCHLEVEL25_ONESTAR           17
#define SEARCHLEVEL50_ONESTAR           15
#define SEARCHLEVEL100_ONESTAR          8
// V2つのポテンシャルを持つ個体にエンカウントする確率
#define SEARCHLEVEL0_TWOSTAR            0
#define SEARCHLEVEL5_TWOSTAR            1
#define SEARCHLEVEL10_TWOSTAR           9
#define SEARCHLEVEL25_TWOSTAR           16
#define SEARCHLEVEL50_TWOSTAR           17
#define SEARCHLEVEL100_TWOSTAR          24
// V3つのポテンシャルを持つ個体にエンカウントする確率
#define SEARCHLEVEL0_THREESTAR          0
#define SEARCHLEVEL5_THREESTAR          0
#define SEARCHLEVEL10_THREESTAR         1
#define SEARCHLEVEL25_THREESTAR         7
#define SEARCHLEVEL50_THREESTAR         6
#define SEARCHLEVEL100_THREESTAR        12

#endif // GUARD_CONFIG_DEXNAV_H
