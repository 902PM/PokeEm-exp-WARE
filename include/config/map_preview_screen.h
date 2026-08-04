#ifndef GUARD_CONFIG_MAP_PREVIEW_H
#define GUARD_CONFIG_MAP_PREVIEW_H

#define MPS_ENABLE_MAP_PREVIEWS     IS_FRLG // マップのプレビューを有効にします。

#define MPS_DURATION_LONG       120 // これは、プレイヤーが初めてマップに入った際にマップのプレビューが表示されるフレーム数です。
#define MPS_DURATION_SHORT      40  // これは、プレイヤーが以前にそのマップを訪れたことがある場合に、マップのプレビューが表示されるフレーム数です。
#define MPS_DURATION_NO_FLAG    40  // これは、マップの flagId が MPS_FLAG_NULL である場合にマッププレビューが継続するフレーム数です。
#define MPS_BASIC_FADE_SPEED    1   // これは、MPS_TYPE_BASICが使用される際に、マッププレビューが黒色へフェードアウトする速度を設定します。
                                    // 1未満の数値を指定すると、フェード時間が短くなります（負の数も使用可能です）。
                                    // 1より大きい数値を指定すると、フェード時間が長くなります。

#endif // GUARD_CONFIG_MAP_PREVIEW_H
