#ifndef GUARD_CONFIG_DEBUG_H
#define GUARD_CONFIG_DEBUG_H

// オーバーワールド デバッグ
#define DEBUG_OVERWORLD_MENU            DISABLED_ON_RELEASE // フィールド上でRボタンを押しながらSTARTボタンを押すことで（デフォルト設定）、フラグや変数の変更、ポケモンの入手などを行えるデバッグメニューを有効にします。
#define DEBUG_OVERWORLD_HELD_KEYS       (R_BUTTON)          // デバッグメニューを開くために押す必要のあるボタン。
#define DEBUG_OVERWORLD_TRIGGER_EVENT   pressedStartButton  // DEBUG_OVERWORLD_HELD_KEYS で定義されたキーを長押しした際にメニューを開くイベント。
#define DEBUG_OVERWORLD_IN_MENU         TRUE               // オーバーワールドでのデバッグメニュー呼び出し用ボタン操作を、スタートメニュー内の項目（図鑑の上）に変更します。

// バトルデバッグメニュー
#define DEBUG_BATTLE_MENU               DISABLED_ON_RELEASE // TRUEに設定すると、戦闘中にSelectボタンを押してデバッグメニューを使用できるようになります。
#define DEBUG_AI_DELAY_TIMER            FALSE // TRUEに設定すると、AIが技を選択するのに要するフレーム数が表示され、「◯◯はどうする？」というテキストの代わりに表示されます。AIのコードを改変した際、処理に時間がかかりすぎていないかを確認したい開発者やユーザーにとって有用です。

// ポケモン デバッグ
#define DEBUG_POKEMON_SPRITE_VISUALIZER DISABLED_ON_RELEASE // ポケモンのスプライトやアイコン用のデバッグメニューを有効にします。このメニューは、ステータス画面で「セレクト」ボタンを押すことで呼び出せます。

#endif // GUARD_CONFIG_DEBUG_H
