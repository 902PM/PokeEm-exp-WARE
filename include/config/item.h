#ifndef GUARD_CONFIG_ITEM_H
#define GUARD_CONFIG_ITEM_H

// アイテム設定
#define I_SHINY_CHARM_ADDITIONAL_ROLLS  2           // 「ひかるおまもり」を所持している場合の、色違い抽選の追加回数です。0に設定すると、「ひかるおまもり」の効果が無効になります。
#define I_KEY_FOSSILS                   GEN_LATEST  // 第4世代以降、第3世代の化石はすべて通常のアイテムになりました。
#define I_KEY_ESCAPE_ROPE               GEN_3  // 第8世代では、「あなぬけのヒモ」が「たいせつなもの」に変更されました。これにより、フレンドリィショップ等で無料入手できるようになる点にご注意ください。
#define I_HEALTH_RECOVERY               GEN_3  // 第7世代以降、一部の回復アイテムのHP回復量が以前とは異なります。
#define I_SITRUS_BERRY_HEAL             GEN_LATEST  // 第4世代以降、オボンのみの効果は、HPを30回復するものから最大HPの25%を回復するものに変更されました。
#define I_VITAMIN_EV_CAP                GEN_LATEST  // 第8世代以降、ドーピングアイテムは100以上振れるようになりました。
#define I_BERRY_EV_JUMP                 GEN_LATEST  // 第4世代に限り、努力値を下げるきのみは、努力値が100を超えている場合、その値を100まで下げます。
#define I_GRISEOUS_ORB_FORM_CHANGE      GEN_LATEST  // 第9世代以降、はっきんだまを持たせてもギラティナのフォルムは変化しなくなりました。
#define I_GEM_BOOST_POWER               GEN_5        // 第6世代以降、「ジュエル」による威力上昇幅が50%から30%に引き下げられました。
#define I_USE_EVO_HELD_ITEMS_FROM_BAG   TRUE        // TRUEの場合、『Pokémon LEGENDS アルセウス』と同様に、「するどいツメ」や「エレキブースター」などのアイテムをバッグから使用してポケモンを進化させることができます。
#define I_TYPE_BOOST_POWER              GEN_LATEST  // 第4世代以降、「もくたん」などのタイプ強化アイテムによる補正倍率が1.1倍から1.2倍に引き上げられました。「うしおのおこう」については、1.05倍から1.2倍に変更されました。
#define I_SELL_VALUE_FRACTION           GEN_8        // 第9世代以降では、アイテムの売却額は本来の価格の1/2ではなく1/4になります。
#define I_PRICE                         GEN_LATEST  // 世代によって価格が変動したアイテムがあります。
#define I_BERRY_PRICE                   GEN_3       // きのみが植えられなくなった（第8世代以降）ため、価格が上昇しました。
#define I_POWER_ITEM_BOOST              GEN_LATEST  // 第7世代以降、パワー系アイテムは4ではなく8の努力値を得ます。
#define I_PREMIER_BALL_BONUS            GEN_LATEST  // 『ピカブイ』以降（ここでは第8世代以降を指します）、一度の購入でどの種類のモンスターボールでも10個購入するごとに、プレミアボールが1個もらえます。以前は通常のモンスターボールのみが対象で、一度の購入につき1個しか入手できませんでした。
#define I_ROTOM_CATALOG_THUNDER_SHOCK   GEN_LATEST  // 第9世代以降、ロトムを通常フォルムに戻すと、別の技を覚えていたとしても「でんきショック」を覚えます。
#define I_REPEL_INCLUDE_FAINTED         GEN_LATEST  // 第1世代および第6世代以降では、野生ポケモンとのエンカウントを防ぐ判定を行う際、たとえ手持ちの先頭のポケモンが「ひんし」状態であっても、常にそのポケモンのレベルが参照されます。一方、第2世代から第5世代にかけては、「ひんし」状態ではない先頭のポケモンのレベルのみが参照されます。
#define I_LAX_INCENSE_BOOST             GEN_LATEST  // 第4世代以降、「のんきのおこう」による回避率の上昇幅は5%から10%に変更されました。

// わざマシン設定
#define I_REUSABLE_TMS          TRUE        // 第5世代から第8世代では、わざマシンは消費しません。これをTRUEに設定すると、すべてのわざマシンが消費しなくなりますが、重要度を1に設定することで、特定のわざマシンを選択的に使用することもできます。

// がくしゅうそうち設定
// この機能を使用するには、0を割り当てるフラグIDに置き換えてください。
// 例：FLAG_UNUSED_0x264 に置き換えることで、そのフラグを使って機能を切り替えられるようになります。
#define I_EXP_SHARE_FLAG        FLAG_EXPANSION_EXP_SHARE // このフラグが設定されている場合、戦闘に参加したかどうかにかかわらず、手持ちのすべてのポケモンが経験値を獲得します。
#define I_EXP_SHARE_ITEM        GEN_5       // 第6世代以降、がくしゅうそうちは持ち物から、前述の効果を切り替えるたいせつなものへと変更されました。

// むしよけスプレー/コロン（ピカブイのルアー）設定
// これら2つの設定は、独立していると同時に、互いに補完し合う関係にあります。
#define VAR_LAST_REPEL_LURE_USED    VAR_EXPANSION_LAST_REPEL_LURE_USED // この変数が設定されている場合、最後に使用した「スプレー」または「コロン」が記録され、プレイヤーには原作の「スプレー」使用確認（はい／いいえ）が表示されます。（ただし、`I_REPEL_LURE_MENU` が `TRUE` に設定されている場合を除きます）
#define I_REPEL_LURE_MENU           TRUE    // TRUEの場合、使用中の「スプレー」や「コロン」の効果が切れた際、次どれを使うかを選択できるようになります。VAR_LAST_REPEL_LURE_USEDが0でない場合、カーソル位置がそこに保存されます。

// バトルサーチャー
#define I_VS_SEEKER_CHARGING        FLAG_EXPANSION_VS_SEEKER_CHARGING // このフラグが設定されると、バトルサーチャーの機能が有効になります。プレイヤーがバトルサーチャーを所持している間は、エントリーコールによる再戦機能は動作しなくなります。バトルサーチャーに関するドキュメントは `docs/tutorials/vs_seeker.md` にあります。
#define I_SHOW_NO_ID_TRAINER        DISABLED_ON_RELEASE   // TRUEに設定すると、トレーナータイプはあるものの表示されるトレーナーIDがないオブジェクトイベントは、クエスチョンマーク（?）で表示されます。バトルサーチャーにどのような反応をさせるべきか認識させるために、スクリプトの冒頭に `vsseeker_rematchid TRAINER_ID` を追加しておくとよいでしょう。

// ORAS ダウジングマシン
#define I_ORAS_DOWSING_FLAG         FLAG_EXPANSION_ORAS_DOWSING // ORASの「ダウジングマシン」の機能を有効にするには、0を未使用のフラグに置き換えてください。
#define I_ORAS_DOWSING_SOUNDS       TRUE        // TRUE の場合、ダウジングマシンは隠しアイテムの距離に基づいて音を鳴らします。
#define I_ORAS_DOWSING_COLOR_PAL    15          // アイテムとの距離に応じて変化する、パレット内の色。

// ORASのダウジングマシンにおける距離・アニメーションの数値
#define I_ORAS_DOWSING_COLOR_NONE   RGB_GRAY
#define I_ORAS_DOWSING_COLOR_SLOW   RGB2GBA(56, 120, 255)
#define I_ORAS_DOWSING_COLOR_NORMAL RGB2GBA(24, 216, 24)
#define I_ORAS_DOWSING_COLOR_FAST   RGB2GBA(255, 255, 40)
#define I_ORAS_DOWSING_COLOR_FASTER RGB_RED

#endif // GUARD_CONFIG_ITEM_H
