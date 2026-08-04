#ifndef GUARD_FOLLOWER_NPC_OVERWORLD_H
#define GUARD_FOLLOWER_NPC_OVERWORLD_H

// NPC Followers
#define FNPC_ENABLE_NPC_FOLLOWERS                 TRUE  // スクリプトマクロを使用して、DPtのようにNPCをプレイヤーの後ろにつれ歩くことが可能になります。SaveBlock3のサイズがわずかに増加します。
#define FNPC_FLAG_HEAL_AFTER_FOLLOWER_BATTLE      FLAG_EXPANSION_FOLLOWER_HEAL_AFTER_BATTLE     // 「0」をフラグに置き換えることで、そのフラグを使って、同行者との戦闘後にプレイヤーのパーティを自動的に回復させるかどうかを切り替えられるようになります。フラグを使わずに常にこの機能を有効にしたい場合は、「0」を「FNPC_ALWAYS」に置き換えてください。
#define FNPC_FLAG_PARTNER_WILD_BATTLES            FLAG_EXPANSION_FOLLOWER_PARTNER_WILD_BATTLES  // 「0」をフラグに置き換えることで、そのフラグを使って、同行者が野生ポケモンとのバトルに参加するかどうかを切り替えられるようになります。フラグを使わずに常に有効にしたい場合は、「0」を「FNPC_ALWAYS」に置き換えてください。
#define FNPC_NPC_FOLLOWER_WILD_BATTLE_VS_2        TRUE  // TRUEに設定すると、パートナーバトルに野生のポケモンが1匹ではなく2匹出現します。
#define FNPC_NPC_FOLLOWER_PARTY_PREVIEW           TRUE  // TRUEに設定すると、すべてのトレーナー戦の前に、プレイヤーとパートナーのチームのプレビューが表示されます。
#define FNPC_FACE_NPC_FOLLOWER_ON_DOOR_EXIT       TRUE  // TRUEに設定すると、プレイヤーがマップから出る際、同行者の方を向くようになります。
#define FNPC_NPC_FOLLOWER_SHOW_AFTER_LEAVE_ROUTE  TRUE  // TRUEに設定すると、「そらをとぶ」、「あなぬけのヒモ」、または「テレポート」を使用した際、パートナーが再出現し、プレイヤーの体から歩き出します。

#endif // GUARD_FOLLOWER_NPC_OVERWORLD_H
