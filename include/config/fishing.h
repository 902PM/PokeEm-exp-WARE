#ifndef GUARD_CONFIG_FISHING_H
#define GUARD_CONFIG_FISHING_H

#define I_FISHING_BITE_ODDS         GEN_LATEST // 第1・第2世代では、ボロのつりざおのヒット率は100%、いいつりざおは66%、すごいつりざおは50%です。第3世代では、すべてのつりざおのヒット率は一律50%です。第4世代以降は、ボロのつりざおのヒット率が25%、いいつりざおが50%、すごいつりざおが75%となっています。
#define I_FISHING_MINIGAME          GEN_2      // 各世代において、ポケモンを釣り上げた後の「リールを巻く」操作にはそれぞれ異なる方式が採用されています。注：現時点で実装されているのは、第1・2世代および第3世代のミニゲームのみです。
#define I_FISHING_ENVIRONMENT       GEN_LATEST // 第3世代では、釣り上げたポケモンとの戦闘環境はプレイヤーが立っているマスに基づいて決定されます。一方、第4世代以降は釣りを行っているマスに基づいて環境が決まるため、通常は水上の環境となります。
#define I_FISHING_STICKY_BOOST      GEN_LATEST // 第3世代では、「きゅうばん」または「ねんちゃく」を持つポケモンを手持ちの先頭に置くと、食いつきの確率が約35%上昇します。第4世代以降では、食いつきの基本確率が2倍になります。
#define I_FISHING_FOLLOWER_BOOST    TRUE      // HGSSでは、現在連れ歩いているポケモンのなつき度に応じて、釣りでポケモンがヒットする確率が上がります。
#define I_FISHING_CHAIN             FALSE      // XYで導入された仕様として、同じポケモンを連続して釣り上げると、そのポケモンが色違いである確率が上昇します。XYについては詳細な解析やデータマイニングが完全には行われていないため、この実装は実際の仕様を近似的に再現したものです。
#define I_FISHING_PROXIMITY         FALSE      // XYでは、釣り糸の周囲にある「なみのり」で移動できないマスの数に応じて、魚がかかる確率が上昇します。
#define I_FISHING_TIME_OF_DAY_BOOST FALSE      // XYでは、朝と夕方の時間帯にかみつく発生率が上昇します。

#endif // GUARD_CONFIG_FISHING_H
