#ifndef GUARD_CONFIG_TEXT_H
#define GUARD_CONFIG_TEXT_H

// Text settings:
#define AUTO_SCROLL_TEXT             FALSE   // TRUEの場合、NUM_FRAMES_AUTO_SCROLL_DELAYで指定したフレーム数が経過すると、テキストは自動的に次の行へスクロールします。プレイヤーはA_BUTTONまたはB_BUTTONを押して、手動でスクロールさせることも可能です。
#define NUM_FRAMES_AUTO_SCROLL_DELAY 49

// 補正値（モディファイア）について補足します。これらは概ね乗算的に作用するため、値を1に設定すると標準（バニラ）の速度になります。また、スクロール効果やアニメーションする下矢印の表示タイミング（フレーム遅延）の計算にも使用されるため、テキストの表示とA/Bボタン入力との間でズレが生じないよう、上限値は31に制限されています。
// テストの結果、18から20という値は、実質的に「インスタントテキスト」と同等であることがわかりました。
#define TEXT_SPEED_SLOW_MODIFIER     1       // おそいのテキスト表示速度設定における表示速度
#define TEXT_SPEED_MEDIUM_MODIFIER   1       // ふつうのテキスト表示速度設定における表示速度
#define TEXT_SPEED_FAST_MODIFIER     1       // はやいのテキスト表示速度設定における表示速度
#define TEXT_SPEED_INSTANT_MODIFIER  12      // アニメーションの遅延にのみ必要です。
#define TEXT_SPEED_INSTANT           FALSE   // すべてのテキストを可能な限り高速（実質的に瞬時）に表示します。`FLAG_TEXT_SPEED_INSTANT` およびゲーム内のプレイヤーオプション設定よりも優先されます。

// Text speed flag:
#define FLAG_TEXT_SPEED_INSTANT      0       // テキストの表示速度を瞬時に切り替えたい場合は、これを使用してください。

#endif // GUARD_CONFIG_TEXT_H
