#ifndef GUARD_CONFIG_SAVE_H
#define GUARD_CONFIG_SAVE_H

// Menu configs
#define SKIP_SAVE_CONFIRMATION              FALSE   // TRUEの場合、セーブデータを上書きする際の「まえに かかれた レポートに うえから かいても いいですか？」という確認をスキップします。

// SaveBlock1 configs
#define FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK1    FALSE   // 未使用のポケモン図鑑の『みつけたフラグ』を解放する。（52バイト）
#define FREE_TRAINER_HILL                   FALSE   // 『トレーナーヒル』のデータを解放します。（28バイト）
#define FREE_TRAINER_TOWER                  FALSE   // 『トレーナータワー』のデータを解放します。（xバイト）
#define FREE_MYSTERY_EVENT_BUFFERS          FALSE   // ramScriptを解放します。 (1104バイト) 
#define FREE_MATCH_CALL                     FALSE   // 『エントリーコール』および『バトルサーチャー』のデータを解放します。（104バイト）
#define FREE_UNION_ROOM_CHAT                FALSE   // 『ユニオンルームのチャット』を解放します。（212バイト）
#define FREE_ENIGMA_BERRY                   FALSE   // Eリーダーの『ナゾのみ』のデータを解放します。（52バイト）
#define FREE_LINK_BATTLE_RECORDS            FALSE   // 『通信対戦の記録データ』を解放します。（88バイト）
#define FREE_MYSTERY_GIFT                   FALSE   // 『ふしぎなおくりもの』のデータを解放します。（876バイト）
                                            // SaveBlock1 合計: 2516バイト
// SaveBlock2 configs
#define FREE_BATTLE_TOWER_E_READER          FALSE   // 『バトルタワーのカードeリーダー用』データを解放します。（188バイト）
#define FREE_POKEMON_JUMP                   FALSE   // 『ミニポケモンでジャンプ』のデータを解放します。（16バイト）
#define FREE_RECORD_MIXING_HALL_RECORDS     FALSE   // 『レコードをまぜる』のデータを解放します。（1032バイト）おそらく、ランキングホール。
#define FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK2    FALSE   // 未使用のポケモン図鑑『みつけたフラグ』を解放する。（108バイト）
                                            // SaveBlock2 合計: 1274バイト

                                            // Grand Total: 3790

#endif // GUARD_CONFIG_SAVE_H
