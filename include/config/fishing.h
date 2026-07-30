#ifndef GUARD_CONFIG_FISHING_H
#define GUARD_CONFIG_FISHING_H

#define I_FISHING_BITE_ODDS         GEN_LATEST // In Gen 1 and Gen 2, the Old Rod has a 100% chance for a bite, Good Rod has a 66% chance for a bite, and Super Rod has a 50% chance for a bite. In Gen 3, all rods have a base 50% chance for a bite. In Gen 4 onwards, the Old Rod has a base 25% chance for a bite, Good Rod has a 50% chance for a bite, and Super Rod has a 75% chance for a bite.
#define I_FISHING_MINIGAME          GEN_3      // Each generation uses a variation of reeling in Pokémon once they have been hooked. NOTE: Only the Gen 1/2 and Gen 3 minigames are implemented right now!
#define I_FISHING_ENVIRONMENT       GEN_LATEST // In Gen 3, the battle environment when fighting a hooked Pokémon is based on the tile the player is standing on. In Gen 4 onwards, the environment is based on tile that is being fished in, resulting in it usually being a water environment.
#define I_FISHING_STICKY_BOOST      GEN_LATEST // In Gen 3, a Pokemon with Suction Cups or Sticky Hold in the first slot of the party causes the chance for a bite to increase by about 35%. In Gen 4 onwards, it doubles the base bite chance.
#define I_FISHING_FOLLOWER_BOOST    FALSE      // In HGSS, fishing bite odds are increased depending on the friendship of the current following Pokémon.
#define I_FISHING_CHAIN             FALSE      // Introduced in XY, hooking the same Pokémon repeatedly will increase the odds of that mon being shiny. NOTE: This implementation is an approximation of the actual feature, as XY have not been throughoutly documented or datamined.
#define I_FISHING_PROXIMITY         FALSE      // In XY, bite chance is boosted by the number of adjacent non-surfable tiles next to your fishing line
#define I_FISHING_TIME_OF_DAY_BOOST FALSE      // In XY, bite chance is boosted during morning and evening
#define I_FISHING_BITE_ODDS         GEN_LATEST // 第1・第2世代では、ボロのつりざおのヒット率は100%、いいつりざおは66%、すごいつりざおは50%です。第3世代では、すべてのつりざおのヒット率は一律50%です。第4世代以降は、ボロのつりざおのヒット率が25%、いいつりざおが50%、すごいつりざおが75%となっています。
#define I_FISHING_MINIGAME          GEN_2      // 各世代において、ポケモンを釣り上げた後の「リールを巻く」操作にはそれぞれ異なる方式が採用されています。注：現時点で実装されているのは、第1・2世代および第3世代のミニゲームのみです。
#define I_FISHING_ENVIRONMENT       GEN_LATEST // 第3世代では、釣り上げたポケモンとの戦闘環境はプレイヤーが立っているマスに基づいて決定されます。一方、第4世代以降は釣りを行っているマスに基づいて環境が決まるため、通常は水上の環境となります。
#define I_FISHING_STICKY_BOOST      GEN_LATEST // 第3世代では、特性「きゅうばん」または「ねんちゃく」を持つポケモンを手持ちの先頭に置くと、ヒット（食いつき）の確率が約35%上昇します。第4世代以降では、ヒットの基本確率が2倍になります。
#define I_FISHING_FOLLOWER_BOOST    TRUE      // 『HGSS』では、現在連れ歩いているポケモンのなつき度に応じて、釣りでポケモンがヒットする確率が上がります。
#define I_FISHING_CHAIN             FALSE      // 『XY』で導入された仕様として、同じポケモンを連続して釣り上げると、そのポケモンが色違いである確率が上昇します。『XY』については詳細な解析やデータマイニングが完全には行われていないため、この実装は実際の仕様を近似的に再現したものです。
#define I_FISHING_PROXIMITY         FALSE      // 『XY』では、釣り糸の周囲にある「なみのり」で移動できないマスの数に応じて、魚がかかる確率が上昇します。
#define I_FISHING_TIME_OF_DAY_BOOST FALSE      // 『XY』では、朝と夕方の時間帯にかみつく発生率が上昇します。

#endif // GUARD_CONFIG_FISHING_H
