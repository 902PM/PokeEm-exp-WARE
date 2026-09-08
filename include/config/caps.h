#ifndef GUARD_CONFIG_CAPS_H
#define GUARD_CONFIG_CAPS_H

// レベル上限定数(レベル上限≠Lv.100のレベルキャップ だということに留意)
#define EXP_CAP_NONE                    0 // 通常の動作となり、レベル上限は適用されません。
#define EXP_CAP_HARD                    1 // レベル上限以上のレベルを持つポケモンは、経験値を獲得できません。
#define EXP_CAP_SOFT                    2 // レベル上限以上のレベルを持つポケモンは、獲得できる経験値が減少します。

#define LEVEL_CAP_NONE                  0 // レベル上限なし（B_EXP_CAP_TYPEがEXP_CAP_NONEの場合のみ適用）
#define LEVEL_CAP_FLAG_LIST             1 // レベル上限は、`sLevelCapFlagMap` の未設定の最初のフラグに基づいて決定されます。
#define LEVEL_CAP_VARIABLE              2 // レベル上限は、`B_LEVEL_CAP_VARIABLE` で指定されたイベント変数の内容に基づいて決定されます。

// レベル上限設定
#define B_EXP_CAP_TYPE                  EXP_CAP_NONE   // [EXP_CAP_NONE, EXP_CAP_HARD, EXP_CAP_SOFT] 適用するレベル上限のタイプを選択します
#define B_LEVEL_CAP_TYPE                LEVEL_CAP_NONE // [LEVEL_CAP_NONE, LEVEL_CAP_FLAG_LIST, LEVEL_CAP_VARIABLE] レベル上限を決定する方法を選択します
#define B_LEVEL_CAP_VARIABLE            0 // `B_LEVEL_CAP_TYPE` が`LEVEL_CAP_VARIABLE` に設定されている場合に、レベル上限を導出するために使用されるイベント変数

#define B_RARE_CANDY_CAP                FALSE // TRUEに設定すると、ふしぎなアメを使ってレベル上限を超えることはできなくなります。
#define B_LEVEL_CAP_EXP_UP              FALSE // TRUEに設定すると、レベル上限に達していないモンスターはより多くの経験値を獲得します。

// 努力値上限定数（努力値上限≠510 であることに留意）
#define EV_CAP_NONE                     0 // 通常の動作となり、努力値の上限は適用されません。
#define EV_CAP_FLAG_LIST                1 // 努力値上限は、`sEVCapFlagMap` 内の最初の未設定フラグに基づいて決定されます。
#define EV_CAP_VARIABLE                 2 // 努力値上限は、`B_EV_CAP_VARIABLE`で指定されたイベント変数の内容に基づいて決定されます。
#define EV_CAP_NO_GAIN                  3 // 努力値は獲得できません。

// EV Cap Configs
#define B_EV_CAP_TYPE                   EV_CAP_NONE   // [EV_CAP_NONE, EV_CAP_FLAG_LIST, EV_CAP_VARIABLE, EV_CAP_NO_GAIN]適用するEV上限のタイプを選択します
#define B_EV_CAP_VARIABLE               8 // `B_EV_CAP_TYPE`が`EV_CAP_VARIABLE`に設定されている場合に努力値上限の算出に使用されるイベント変数

#define B_EV_ITEMS_CAP                  FALSE // TRUEに設定した場合、努力値を上昇させるアイテムを使用して努力値の上限を超えることはできません。

#endif /* GUARD_CONFIG_CAPS_H */