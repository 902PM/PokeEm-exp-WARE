#ifndef GUARD_CONFIG_CONTEST_H
#define GUARD_CONFIG_CONTEST_H

// コンテストデータを隠す
#define C_HIDE_CONTEST_DATA         FALSE      // TRUEの場合、ステータス画面でコンテストデータを非表示にし、わざ思い出しに変更します。
                                               // 注意：この設定を行ってもコンテストデータは削除されず、ユーザーから非表示になるだけです。この設定を有効にしても、セーブデータの互換性が損なわれることはありません。

// 技データ設定
#define C_UPDATED_MOVE_CATEGORIES   GEN_3 // コンテストのカテゴリをアップデート
#define C_UPDATED_MOVE_EFFECTS      GEN_3 // コンテストの効果をアップデート

#endif // GUARD_CONFIG_CONTEST_H