#ifndef GUARD_CONFIG_OVERWORLD_H
#define GUARD_CONFIG_OVERWORLD_H

// 動きの設定
#define OW_RUNNING_INDOORS          GEN_LATEST  // 第4世代以降、プレイヤーは屋内で走ることができます。
#define SLOW_MOVEMENT_ON_STAIRS     FALSE       // 有効にすると、FRLGと同様に、階段を上り下りする際のプレイヤーの移動速度が遅くなります。

// その他設定
#define OW_POISON_DAMAGE                GEN_LATEST // 第4世代では、フィールド上で『どく』状態によってポケモンがひんしになることはなくなりました。第5世代以降は、ダメージを受けることさえなくなっています。
#define OW_DOUBLE_APPROACH_WITH_ONE_MON FALSE      // この機能を有効にすると、手持ちに対象のポケモンが1匹しかいなくても、同時に2人のトレーナーに見つかる可能性があります。
#define OW_HIDE_REPEAT_MAP_POPUP        FALSE      // これを有効にすると、直前と同じ「マップセクションID」を持つマップに入った際、マップのポップアップは表示されなくなります。
#define OW_WHITEOUT_CUTSCENE            GEN_3 // 第4世代以降、全滅（ホワイトアウト）時に追加のメッセージが表示され、回復役のNPCを伴うイベントスクリプトのカットシーンが再生されます（この変更はFRLGにも存在しましたが、簡略化のため、GEN_3に設定した場合はRSEの挙動となります）。
#define OW_DEFOG_FIELD_MOVE             FALSE      // 有効にすると、DPPtと同様に『きりばらい』をフィールドで使用できます。
#define OW_ROCK_CLIMB_FIELD_MOVE        FALSE      // 有効にすると、DPPtと同様に『ロッククライム』をフィールドで使用できます。
#define OW_CHOOSE_FROM_PC_AND_PARTY     TRUE       // 有効にすると、技を教えてくれるNPCや交換を求めてくるトレーナーとのやり取りにおいて、手持ちのポケモンだけでなく、ボックス内のポケモンも選べるようになります。

// アイテム入手時の説明（ポップアップ）
#define OW_ITEM_DESCRIPTIONS_OFF        0   // 説明を一切表示しない
#define OW_ITEM_DESCRIPTIONS_FIRST_TIME 1   // 初回表示 (** セーブデータ互換性破壊 - struct SaveBlock3 を参照 **)
#define OW_ITEM_DESCRIPTIONS_ALWAYS     2   // 常に説明を表示する
#define OW_SHOW_ITEM_DESCRIPTIONS       OW_ITEM_DESCRIPTIONS_OFF // 有効にすると、アイテムを見つけた際にアイテムの説明や画像が表示されます。

// これらの世代ごとの定義は、木の実（Berries）と OW_PC_MOVE_ORDER に関してのみ区別を行っています。
#define GEN_6_XY GEN_6
#define GEN_6_ORAS GEN_COUNT + 1

// PC設定
#define OW_PC_PRESS_B               GEN_LATEST // 第4世代では、ポケモンを持っている状態でBボタンを押すと、そのポケモンを置く動作になります。一方、第3世代では『ポケモンをつかんだままです！』というエラーメッセージが表示されます。
#define OW_PC_JAPAN_WALDA_ICONS     TRUE       // エメラルドの北米版では、ワルダの壁紙用アイコンである「クロス」「ボルト」「プラスル」が、日本版とは異なり空白の状態になっていました。これを「TRUE」に設定すると、それらのアイコンが復元されます。
#define OW_PC_HEAL                  GEN_7 // 第8世代以降、ポケモンをPCに預けても回復は行われません。
#define OW_PC_MOVE_ORDER            GEN_3 // 第4世代から、PCメニュー内の選択肢の並び順が変更されました。（大嘘）
#define OW_PC_RELEASE_ITEM          GEN_LATEST // 第8世代以降、持ち物を持った状態で逃がされたポケモンは、その持ち物をバッグに戻します。

// きのみ設定
#define OW_BERRY_MUTATIONS             FALSE      // 有効にすると、きのみの苗は隣に植えられたベリーの影響を受けて突然変異することがあります。
#define OW_BERRY_MUTATION_CHANCE       25         // 突然変異が発生する確率（%）を決定します。
#define OW_BERRY_MOISTURE              FALSE      // 有効にすると、きのみへの水やりは、生育段階ごとに一度行うのではなく、土壌を湿った状態に保つ形で行われます。
#define OW_BERRY_ALWAYS_WATERABLE      FALSE      // OW_BERRY_MOISTUREが有効な場合、プレイヤーは土に継続して水をまくことができます（乾燥した土では、第4世代と同様にきのみの収穫量が減少します）。無効な場合、水やりは土が乾燥している時にのみ可能となり、水やりを行うと収穫量が増加します（第6世代と同様の仕様です）。
#define OW_BERRY_MULCH_USAGE           FALSE      // 有効にすると、マルチを土壌に使用して肥料として活用できます。無効の場合、使用不可とみなされます。なお、水分に関する効果は「OW_BERRY_MOISTURE」が有効な場合にのみ機能しますのでご注意ください。
#define OW_BERRY_WEEDS                 FALSE      // 有効にすると、プレイヤーが手入れを必要とするきのみの木に雑草が生えるようになります。「OW_BERRY_MOISTURE」が設定されていない場合、除草によるボーナスは端数が切り捨てられます。
#define OW_BERRY_PESTS                 FALSE      // 有効にすると、プレイヤーが世話をする必要のある木の実の植物に害虫が近づく可能性があります。OW_BERRY_MOISTUREが設定されていない場合、害虫によるボーナスは切り捨てられます。
#define OW_BERRY_SIX_STAGES            FALSE      // 『XY』では、きのみの成長段階は4段階ではなく6段階になっています。この設定は、木が収穫可能になるまでの時間には影響しません。「OW_BERRY_MOISTURE」が有効でない場合、追加された2つの段階は、水やり判定においては「BERRY_STAGE_TALLER」として扱われます。

#define OW_BERRY_GROWTH_RATE           GEN_3      // 各きのみの木が成長するまでの時間を設定するプリセット。
#define OW_BERRY_YIELD_RATE            GEN_3      // 各きのみの木が収穫できるの数を設定するプリセット。
#define OW_BERRY_DRAIN_RATE            GEN_6_ORAS // OW_BERRY_MOISTUREが有効な場合、この設定は土壌が乾燥する速度を決定します。GEN_4ではきのみの種類に応じた乾燥速度が適用され、GEN_6_XYでは24時間（特定の「こやし」を使用している場合は4時間）で乾燥し、GEN_6_ORASでは4時間で乾燥します。これら以外の値は無効です。
#define OW_BERRY_IMMORTAL              FALSE      // 有効にすると、きのみが実った後、プレイヤーが収穫するまでその木は消滅しなくなります。
#define OW_BERRY_COLORS                GEN_6_ORAS // GEN_6_XY または GEN_6_ORASに設定した場合、カゴ、ウイ、ブリー、モコシ、シーヤ、ベリブ、リュガ、カイス、タポル、ノワキ、カシブ、ナモ、​​サン、アッキ、ウタン、ロゼル、チイラ、ナゾ、タラプの実の色は、指定されたゲームでの色になります。それ以外の値は不正なものとして扱われます。

// オーバーワールドのポケモン
#define OW_POKEMON_OBJECT_EVENTS       TRUE       // すべてのポケモンに対応するオブジェクトイベント用フィールドを追加します。OBJ_EVENT_GFX_SPECIESマクロ（例: OBJ_EVENT_GFX_SPECIES(BULBASAUR)）を使用するNPCに適用可能です。
#define OW_SUBSTITUTE_PLACEHOLDER      TRUE       // オーバーワールド用スプライト（フィールド上の姿）が存在しないポケモンには、みがわり人形のスプライトを使用。
#define OW_LARGE_OW_SUPPORT            TRUE       // TRUEに設定すると、OWコードにわずかなオーバーヘッドが追加され、大きなサイズ（48x48、64x64）のOWが橋の下などで正しく表示されるようになります。
#define OW_PKMN_OBJECTS_SHARE_PALETTES FALSE      // [WIP!! すべてのパレットがこれに対応するよう調整されているわけではありません!!]] TRUEの場合、フォロワーのパレットはバトルスプライトから取得されます。
#define OW_GFX_COMPRESS                TRUE       // 圧縮されたフィールド上のグラフィック（OWグラフィック）への対応を追加しました（ポケモンの連れ歩きグラフィックも圧縮されます）。
                                                  // 重要：グラフィックは、継続的な展開（デコンプレッション）処理を避けるためにVRAMへ読み込まれます。より多くのVRAMが必要な場合や、フィールド上のポケモンを一度に多数表示させたい場合は、この設定を無効にしてください。
                                                  // 圧縮されたグラフィックは、2の累乗ではないサイズのスプライトとは互換性がありません。sizes:
                                                  // (圧縮グラフィックに48x48のスプライトやテーブルは使用しないでください)
                                                  // 16x32、32x32、64x64などは問題ありません
#define OW_MON_WANDER_WALK             TRUE       // TRUEの場合、、MOVEMENT_TYPE_WANDER（徘徊タイプ）のフィールド上のポケモンは、移動の合間にその場で足踏みを行います。

// 連れ歩き機能
#define OW_FOLLOWERS_ENABLED           TRUE       // HGSSの『連れ歩き機能』を有効にします。`OW_POKEMON_OBJECT_EVENTS`が必要です。なお、完全に機能させるには追加のスクリプト記述が必要になる場合があります。
#define OW_FOLLOWERS_BOBBING           TRUE       // TRUEの場合、連れ歩きポケモンは待機中や歩行中のアニメーションで上下に揺れるようになります。
#define OW_FOLLOWERS_POKEBALLS         TRUE       // TRUEの場合、連れ歩きポケモンは通常のモンスターボールではなく、そのポケモンが収納されているモンスターボールから出てきます。
#define OW_FOLLOWERS_WEATHER_FORMS     FALSE      // TRUEの場合、ポワルンとチェリムは「FORM_CHANGE_OVERWORLD_WEATHER」を獲得し、フィールド上の天候に応じて姿を変化させるようになります。
#define OW_FOLLOWERS_COPY_WILD_PKMN    FALSE      // TRUEの場合、「へんしん」を覚えているか、特性「イリュージョン」または「かわりもの」を持つ、後ろを歩くポケモンは、野生のポケモンにランダムで変身します。
#define OW_BATTLE_ONLY_FORMS           TRUE       // TRUEの場合、メガシンカなどの「戦闘時のみのフォルム」に対応するオーバーワールド用スプライトを読み込みます。OW_POKEMON_OBJECT_EVENTSが必要です。
#define B_FLAG_FOLLOWERS_DISABLED      FLAG_EXPANSION_FOLLOWING_MON_DISABLED // フラグを使用して連れ歩き機能を有効または無効にします。一定期間連れ歩き機能を無効にしたい場合に便利です。
#define OW_FOLLOWERS_SCRIPT_MOVEMENT   TRUE       // TRUEの場合、デフォルトでフラグ「FLAG_SAFE_FOLLOWER_MOVEMENT」が設定され、プレイヤー以外のキャラクターが接触したときにのみ、連れ歩きポケモンがモンスターボールに戻るようになります。
// 後ろを歩くポケモンの制限
// 設定した場合、後ろを歩くことが許可されるのは、種族、出会った場所、または出会ったレベルが一致するポケモンのみとなります。これらには変数（VAR_TEMP_1など）も使用可能です。
// 例については "docs/tutorials/how_to_new_pokemon.md" を参照してください。
#define OW_FOLLOWERS_ALLOWED_SPECIES (0)
#define OW_FOLLOWERS_ALLOWED_MET_LVL (0)
#define OW_FOLLOWERS_ALLOWED_MET_LOC (0)

// 戦闘外での特性の効果
#define OW_SYNCHRONIZE_NATURE       GEN_LATEST // 第8世代以降、特性「シンクロ」を持つポケモンを先頭にすると、野生のポケモンは必ずそのポケモンと同じ性格になります（過去の作品では50%の確率でした）。ただし、プレゼントされるポケモンは除きます。
                                               // USUM（第7世代）において、特性「シンクロ」を持つポケモンを先頭にしている場合、プレゼントされるポケモンは、そのタマゴグループにかかわらず、常に「シンクロ」持ちのポケモンと同じ性格になります。
                                               // ORAS（第6世代）において、特性「シンクロ」を持つポケモンを手持ちの先頭にしている場合、「タマゴ未発見」グループに属するポケモン（プレゼントとして受け取るポケモン）の性格は、必ずその「シンクロ」持ちのポケモンと同じ性格になります。
#define OW_SUPER_LUCK               GEN_LATEST // 第8世代以降、「きょううん」の特性を持つポケモンを先頭にしている場合、野生のポケモンが道具を持っている確率が60%および20%に上昇します。
#define OW_INFILTRATOR              GEN_LATEST // 第8世代以降、「すりぬけ」の特性を持つポケモンを先頭にしている場合、野生のポケモンとのエンカウント率が半分になります。
#define OW_HARVEST                  GEN_LATEST // 第8世代以降、「しゅうかく」の特性を持つポケモンを先頭にしている場合、50%の確率でくさタイプのポケモンとエンカウントします。
#define OW_LIGHTNING_ROD            GEN_LATEST // 第8世代以降、「ひらいしん」の特性を持つポケモンを先頭にしている場合、50%の確率ででんきタイプのポケモンとエンカウントします。
#define OW_STORM_DRAIN              GEN_LATEST // 第8世代以降、「よびみず」の特性を持つポケモンを先頭にしている場合、50%の確率でみずタイプのポケモンとエンカウントします。
#define OW_FLASH_FIRE               GEN_LATEST // 第8世代以降、「もらいび」の特性を持つポケモンを先頭にしている場合、50%の確率でほのおタイプのポケモンとエンカウントします。

// これらの定義は、OW_ALTERED_TIME_RATIO についてのみ区別を行います。
#define GEN_8_PLA                       GEN_COUNT + 2
#define TIME_DEBUG                      GEN_COUNT + 3

// 時間
#define OW_TIMES_OF_DAY                 GEN_8        // 世代によって、時間帯が切り替わるタイミングが異なります。
#define OW_USE_FAKE_RTC                 FALSE        // TRUEの場合、ゲーム内時計の秒数は60 playTimeVBlanks（60フレーム）ごとに1秒進みます。
#define OW_ALTERED_TIME_RATIO           GEN_LATEST   // GEN_8_PLAでは、RTCの1秒に対してゲーム内の時間が60秒進みます。GEN_9では20秒です。TIME_DEBUGは1:1（リアルタイム同期）で、デバッグ用です。OW_USE_FAKE_RTCがFALSEの場合、この設定は無効です。
#define OW_TIME_OF_DAY_ENCOUNTERS       TRUE        // TRUEの場合、時間帯に応じて異なるエンカウントテーブルを定義・使用できるようになります。
#define OW_TIME_OF_DAY_DISABLE_FALLBACK FALSE       // TRUEの場合、特定のマップと時間帯のエンカウントテーブルが空だと、バニラ（標準）のマップ・時間帯のテーブルを参照する代わりに、そのエリアではエンカウントが発生しなくなります。
#define OW_TIME_OF_DAY_FALLBACK         TIME_MORNING // エンカウントテーブルがフォールバック（代替参照）する時間帯。OW_TIMES_OF_DAYをGEN_3に設定する場合、ここをTIME_DAYに変更しないとエンカウントが発生しません！

// 明かり
#define OW_SHADOW_INTENSITY             4       // 0から16の範囲で指定。0は完全透明、16は黒色。
#define OW_OBJECT_SUBPRIORITY           148     // 値が大きいほど、他のスプライトより奥（背面）に描画されます。影はオブジェクトイベントより奥に配置されるべきです。
#define OW_ENABLE_DNS                   TRUE    // TRUEに設定すると、時間帯に応じてオーバーワールド（フィールド）の色調が変化します。＝夜になると暗くなるってこと。

// オブジェクトの影
#define OW_OBJECT_VANILLA_SHADOWS      TRUE    // FALSEの場合、オーバーワールド上のすべてのオブジェクトに影が表示されます。警告：これにより、各オブジェクトは1つではなく2つのスプライトを使用することになります。TRUEの場合、オブジェクトの影はジャンプ中のみ表示されます。

// オーバーワールドフラグ
// スクリプトで以下の機能を使用するには、`0` の部分を割り当てるフラグIDに置き換えてください。
// 例: `FLAG_UNUSED_0x264` に置き換えると、そのフラグを使って機能を切り替えられるようになります。
#define OW_FLAG_PAUSE_TIME          0  // このフラグがセットされ、かつ OW_USE_FAKE_RTC が有効な場合、ゲーム内時計の秒数は進まなくなります。
#define OW_FLAG_NO_TRAINER_SEE      FLAG_EXPANSION_TRAINER_SEE_DISABLED  // このフラグがセットされていると、トレーナーは話しかけられない限りプレイヤーとバトルしません。
#define OW_FLAG_NO_COLLISION        FLAG_EXPANSION_COLLISION_DISABLED    // このフラグがセットされていると、プレイヤーは衝突判定（コリジョン）のあるタイル上を歩けるようになります。主にデバッグ用です。
#define OW_FLAG_POKE_RIDER          FLAG_EXPANSION_POKE_RIDER      // このフラグがセットされていると、ポケナビの地方マップや「タウンマップ」（重要アイテム）から、飛行可能な街や場所で「R」ボタンを押すことで「そらをとぶ」を使用できるようになります。

#define BATTLE_PYRAMID_RANDOM_ENCOUNTERS    FALSE    // TRUEに設定すると、バトルピラミッドのポケモンは `src/data/battle_frontier/battle_pyramid_level_50_wild_mons.h`（または `open_level_wild_mons.h`）にハードコードされたものではなく、そのラウンドの挑戦内容に基づいてランダムに生成されるようになります。

// マップのポップアップ設定
#define OW_POPUP_GENERATION        GEN_3    // 世代によって、オーバーワールドのポップアップに表示される地名の見せ方が異なります。
                                            // 選択肢はGEN_3とGEN_5のみで、それ以外はすべてデフォルトでGen3のポップアップになります。
                                            // docs/team_procedures/scope.md に詳述されているように、プロジェクトの範囲の変更
                                            // Expansionにおいて、これ以外のオーバーワールドでのポップアップは実装されません。

// Gen5 マップポップアップ設定
// Constants
#define OW_POPUP_BW_TIME_NONE      0   // 時刻を表示しない
#define OW_POPUP_BW_TIME_12_HR     1   // 12時間制（AM/PM）を使用する
#define OW_POPUP_BW_TIME_24_HR     2   // 24時間制を使用する

#define OW_POPUP_BW_COLOR_BLACK    0   // B2のポップアップ
#define OW_POPUP_BW_COLOR_WHITE    1   // W2のポップアップ

// 構成
#define OW_POPUP_BW_COLOR          OW_POPUP_BW_COLOR_WHITE  // BW2では、マップ上のポップアップに異なる色が使用されています。
#define OW_POPUP_BW_TIME_MODE      OW_POPUP_BW_TIME_NONE    // 表示する時刻の種類を決定。
#define OW_POPUP_BW_ALPHA_BLEND    FALSE                    // ポップアップのアルファ ブレンディング/透明度を有効にします。主に黒色オプションと併用することを目的としています。
                                                            // これを TRUE に設定すると、昼夜システムが有効な場合にグラフィックの不具合が発生します。
                                                            // また、ポップアップが消える際に、影や反射のスプライトの透明度が調整されることで、軽微な表示の乱れが生じます。

// ポケモンセンター
#define OW_IGNORE_EGGS_ON_HEAL           GEN_LATEST         // 第4世代以降、ポケモンセンターのジョーイさんは、回復マシンでタマゴを回復させません。
#define OW_UNION_DISABLE_CHECK           TRUE              // TRUEの場合、ユニオンルームで待機しているトレーナーがいても、ジョーイさんはプレイヤーにそのことを知らせません。これにより、ポケモンセンターの読み込みが速くなります。
#define OW_FLAG_MOVE_UNION_ROOM_CHECK    0                  // このフラグが設定されている場合、プレイヤーがポケモンセンターに入った時ではなく、ポケモンを回復させる時のみ、プレイヤーがユニオンルームにいるかどうかがチェックされます。これにより、ポケモンセンターの読み込みが高速化します。なお、OW_UNION_DISABLE_CHECKがTRUEの場合、このフラグは無視されます。

// Berry Blender
#define BERRY_BLENDER_THROW_ALL_BERRIES_AT_ONCE TRUE        // これはちょっとした追加要素で、全プレイヤーのきのみをミキサーに投入する際のアニメーションを高速化する

// トレーナー再戦
#define OW_REMATCH_BADGE_COUNT      5 // 「エントリーコール」や「バトルサーチャー」で再戦が可能になるまでに必要なバッジの数

// 鳴き声の環境音
// Constants
#define OW_AMBIENT_CRIES_NONE           0   // 環境音としての鳴き声は再生しない
#define OW_AMBIENT_CRIES_VANILLA        1   // 原作と同様
#define OW_AMBIENT_CRIES_OWE_PRIORITY   2   // オーバーワールドでの野生ポケモンとのエンカウント（OWE）状況に応じた環境音としての鳴き声を再生し、エンカウントがない場合は原作の鳴き声に戻します。
#define OW_AMBIENT_CRIES_OWE_ONLY       3   // オーバーワールドでの野生ポケモンとのエンカウント（OWE）が発生している場合にのみ、環境音としての鳴き声を再生します。
                                            // フィールド上の野生ポケモンとのエンカウント時、プレイヤーとの位置関係に応じた環境音としての鳴き声が再生されます。

// Configuration
#define OW_AMBIENT_CRIES                OW_AMBIENT_CRIES_OWE_PRIORITY // 環境音としての鳴き声を再生するかどうか、またその再生方法を選択します。原作と同様に、どの設定を選んだ場合でも、陸地や水上のエンカウントテーブルが設定されたマップにいなければ、鳴き声は再生されません。


// Daily Seed
#define OW_USE_DAILY_SEED_FOR_VANILLA_VARIABLES     FALSE // If TRUE, use daily seed to compute mirage island chance and lottery corner tickets.
                                                          // This has a side effect of removing the deterministic/anti save scumming aspect of the mirage island randomisation

// Script Config
#define OW_CHECK_FOR_TOTAL_EVS TRUE        // If FALSE, givemon and createmon will not check for total EVs when generating a new Pokemon

#endif // GUARD_CONFIG_OVERWORLD_H
