#ifndef GUARD_CONFIG_POKERUS_H
#define GUARD_CONFIG_POKERUS_H

//ポケルスに関して、「感染」とは敵のポケモン（トレーナーまたは野生）からポケルスに感染することを指し、「拡散」とは手持ちの別の感染済みポケモンからポケルスに感染することを指します。
#define P_POKERUS_ENABLED                TRUE       // FALSEの場合、ポケルスは効果を発揮せず、表示もされず、いかなる方法でも入手できませんが、セーブデータには影響しません。
#define P_POKERUS_STRAIN_DISTRIBUTION    GEN_LATEST // ポケルスには16種類の株が存在し、その確率分布は世代によって異なります。第3世代では『ルビー・サファイア』版の分布が、第4世代では『エメラルド』および第4世代作品で採用された分布が使用されます。
#define P_POKERUS_SPREAD_ADJACENCY       GEN_LATEST // 第2世代では、ポケルスは隣接するポケモン1匹にのみ感染していましたが、第3世代以降は隣接する両側のポケモンに感染するようになりました。
#define P_POKERUS_SPREAD_DAYS_LEFT       GEN_LATEST // 第2世代では、新たに感染したポケモンは、そのウイルスの株に応じた規定の期間（日数）だけ感染状態が持続します。一方、第3世代以降では、感染源となったポケモンの感染残り期間がそのまま引き継がれます。
#define P_POKERUS_INFECT_AGAIN           GEN_LATEST // 第2世代に限った話ですが、手持ちのポケモンが既にポケルスに感染している状態でも、再び感染することがあります（感染の広まりやすさには影響しません）。
#define P_POKERUS_VISIBLE_ON_EGG         GEN_LATEST // タマゴのステータス画面でポケルス・マークを表示できるかどうかを制御します（第3～6世代はTRUE、第2・7・8世代はFALSE）。
#define P_POKERUS_INFECT_EGG             FALSE      // TRUEの場合、タマゴは「感染の伝播（スプレッド）」および「直接的な感染」の両方によってポケルスに感染し得ます（第2世代）。FALSEの場合、タマゴは「感染の伝播」によってポケルスに感染することはありますが、「直接的な感染」は受けません（第3世代）。他の世代における挙動は不明です。
#define P_POKERUS_FLAG_INFECTION         0          // ポケルスへの感染は、このフラグが設定されているか、あるいは未定義（0）である場合にのみ発生します。これは、コガネシティを訪れた後にのみポケモンがポケルスに感染するという、第2世代の仕様を再現したものです。なお、感染の伝播（他へのうつりやすさ）には影響しません。

// バグとみなされ得る奇妙なポケルス（Pokérus）の挙動。これらは原作『エメラルド』ではTRUEですが、ExpansionではデフォルトでFALSEに設定されています（他世代での挙動は不明です）。
#define P_POKERUS_HERD_IMMUNITY          FALSE      // これがTRUEの場合、手持ちに既にポケルスに感染したことのあるポケモンがいると、手持ち全体がポケルスに感染する確率が低下します（感染の対象として選ばれる可能性はあるものの、それらのポケモンは既に「免疫」を持っているためです）。
#define P_POKERUS_WEAK_VARIANT           FALSE      // TRUEの場合、ポケルスが拡散する際、ポケルスのバリアント0はより強力なバリアントによって上書き（消去）される可能性があります。

#define P_POKERUS_INFECTION_ODDS         3          // 実際の確率は POKERUS_INFECTION_ODDS/65536 です。
#define P_POKERUS_SPREAD_ODDS            21846      // 実際の確率は POKERUS_SPREAD_ODDS/65536 です（21846 という値は、原作の Random() % 3 に相当するはずです）。

#endif // GUARD_CONFIG_POKERUS_H
