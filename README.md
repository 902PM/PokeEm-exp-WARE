# GYOZA（ガイヨーザ）
1GB程度のファイルをずっと置いておきたくないので、クラウド保存するためのプロジェクト。  
出来上がったROMも32MBあんの、ヤバすぎだろ。  
  
EXPの内容  
  
- フォーク元のテキストを全て日本語化、そしてテキストの優先権を日本語へ。  
  
- 野生で夕夜限定で4世代以降の方々を召喚。  
  
- 一般トレーナーも合わせてなるべく被りなくバラけさせる。  
  
- ショップを弄り、ボールや進化石などを配備。  
  
- けいけんおまもりと、ひかおまを導入。ストーリーでもらえるように。  
  
- ストーリーにギミック全導入。これに伴い、ギミック使うトレーナーも(ネームドのみ)   
  
- メガ石も以降のエリアでボールや隠しアイテムとして入手可能。（一部ショプや景品にもあるよ！）  
  
- 再戦も含め、ネームドキャラの手持ちを大幅に強化。（手持ち変更は基本なし）  
  
- リーグは再戦を実装。(手持ち、セリフはORASを基盤とし、全員メガする)  
  
- フロンティアのテーブルを全世代にしてガチガチに。そして相手も全てのギミックを使用。  
  
- ↑に伴い、景品や教え技を改変、まあまあ戦えるように。  
  
- バトルピラミッドがアイテム持ち込めない関係で、理不尽施設になってしまったので、アイテム等を整備。  
→ダイマックスBを初期アイテムに置き、ダイマできるようにすることで緩和。  
  
- クリア後、経験値稼ぎが難しい問題を、けいけんアメ配置でどうにか対処。  
  
- 全ギミック解禁に伴い、フロンティアにテラ変更とダイスープ、すごいとっくんの機能実装。  
  
- トレーナーヒルのショップ改変して、一番ほしいアイテムたちを導入。（なお値段）  
  
- include/Configを色々とカスタム。ナーフ絶対許さないので、色々とケイオス。  
  
# フォーク元が抱えているバグ

- アダンの勝利後のセリフのバッファがヤバいらしい。(Scriptsに書いてあるが、あまりにも再現性がない。)  
  
- （120ばんどうろのきのみ周辺のトレーナーが多い場所で、スプライトでクラッシュ。）←全然しなくなった。  
  
- エントリーコールの登録時、登録する時のセリフ中にNPCがロックされず、くるくる動き回る人がいる。  
→なお、する人しない人バラバラで再現性がまるでない。  
→してた人がしなくなることもある。  
  
- (修正済み)ジムリーダーに初戦で話しかけると、戦闘前BGMが再生される。本来は何も再生しない。  
→フォーク元が悪い。singlebattleの際のasm/macros/event.incにおける、if文の結果が一緒になっているのにフォーク元が気づいてない。  

- (修正済み)フロンティアのトレーナーが開始時に◯◯フィールドを貼ってくる。（◯◯メイカーなしに）  
→原因は一般トレーナーのIDとフロンティアトレーナーのIDを場合分けしていなかったこと。  
→Trainers.partyの方で開始時フィールドを設定していると、フロンティアの方でもそこを参照してしまう。  
（トライアスリートのシオで、修正されたことを確認）  
  
- バトルアリーナで相手がダイマックスしていて、（おそらく解除ターンに）判定で相手が引き分け以下の場合、そのままターンが１ターンだけ続行する。  

- (おそらく修正完了)バトルアリーナで入れ替わり技のことを想定していない。（バトンタッチやほえる、ふきとばしは失敗するため）  
→フォーク元が全然バトルアリーナのこと考えてくれてなかった。  
  
- (一旦修正済み)特性イリュージョンで化けている時に、テラスタルすると、正体がバレる。  
→battle_gfx_sfx_util.cが悪い  

- (修正済み)トレーナー(ファクトリーも含め)の性格が設定と一致しない。  
→性格値が思いっきし負になっていました。u32なので負の数として読み込んでくれず、ズレるみたいです。  

- ちょうはつによって技が出せない時、{CURRENT_MOVE}になっているが、これでも『-が だせない』になる。  
    
- (バグというよりほぼ仕様)リージョンフォームやフォルムチェンジは内部IDが違うので重複する。  
→なので、重複しないように設定。ついでに、メガストーンとZクリスタルもパーティに１匹までに制限。  
 これにより、控えのメガ石重複がなくなり、１匹目でメガされて、２匹目以降が役割を失うことがないようになった。  
 代わりに制約を厳しくした結果、３匹選出できないと、おそらく無限ループするので、そこは注意。  
 ただし、ダイマとテラは振り分けしてないので、特にテラは先にテラされると、後発がテラなしテラバしてくる。  
  
- (ほぼTo-do扱い)乗船する時に、連れ歩きポケモンが置いていかれる。  

- (完全To-do)テラスタイプのフェアリーとステラのアイコンが分かりづらい。(フェアリー感ないと思うの自分だけ?)  
  
# こっち側のバグ(おそらく)
  
- (かなり未確定)戦闘バッファに0xFFが入らないとクラッシュする。({JPN}のせい説ありけり)  
ただし、再現性がまるでない。再現性を出すのに時間がかかるから、どうしましょう。  
→戦闘バッファなので、基本的にはbattle_messageと各種固有名詞以外関係ないのは間違いないはず。   
→(戦闘施設に限って)100戦ぐらいやって1回もクラッシュしないので、もういいのでは？？？  
  
- ときたま、ダイマする前に表示される技が１色になることがある。（しかも全然関係ないダイマ技だったりする）  
→あまりにも要検証すぎるので、条件を検索中。

- ファクトリーにて、性格が設定値と異なる場合がかなりある。  
→いまのところ、ウェーニバル(たつじん、のおびようき→のうてんき	)とパッチルドン(むじゃき→おくびょう)。レパルダス(わんぱく→やんちゃ)  、ユキノオー（ゆうかん→しんちょう）、サマヨール（ずぶとい→さみしがり）
  
# 考え中

- 『ふしぎなもらいもの』が存在していない。（いわゆる、『ふしぎなおくりもの』画面だけ）  
内部で存在していて、呼び出せてないだけかは知らない。（graphicsにwonder_newsとかはあるけども……）

- AIのラス1先制技で試合諦めてる思考。または、ラス１だいばくはつ打ってくる思考。  
→というか、単純にだいばくはつ個体減らさん？？？  
  
- 全ギミックのバランスが悪い。ダイマだけHP増えて技に追加効果あるのズル。  
→他、個体が変わるだけ、威力があがるだけ（+追加効果）、タイプが変わるだけ。なのに、ダイマずるいでしょ。  
  
- フロンティアの一部の耐久ポケが異常なヤバさしている。(というか、ちからをすいとるがヤバい)  
→大概これ系統は特防が弱いので、特殊ポケ使おう。  
→これらの個体は数でバランス取った方がよさそう。  
  
- 全部入り解禁に伴い、Zのクリスタルさんの配置。  
→正直、攻撃Zが『ちょっと強い技』感がいなめないから、どうしよう。あんま得にならない気がする。  
  
- (たいした難しさじゃないけど)すごいとっくんのレベル参照する術。  
→既存のイベントスクリプトじゃムリっぽい。なので新規でSpecialコードでも作らないといけない。  
→けど、必要レベルっているかなーって感じ。現代に置いて実質廃止されているわけだし。  
  
- あまりにも環境がダイマ過ぎて、ファクトリーがダイマ引くor敵に出ないゲーになっている。  
→これホントに本家で混ざったらどうなるんすか？  
→あとS遅いヤツはもう生き残れない。早いヤツが高火力だすから、耐えられない。タスキゲーですか？  
  
# 検証中

- バトルタワー等のKP（かぶりポイント）  
→だいぶバラエティ豊かになったと思うが、まだ特定のポケモンが連チャンする。  
→これ、そもそもの話、トレーナー自体の被りが多すぎる方が原因だと思う。  
→エリートトレーナーみたいに、枠数自体増やします？？？  
→ファクトリーでも特定の個体だけ連チャンして草。乱数か？  
  
- フロンティア全体の難易度。  
→あとはもうパレスだけじゃないですかね？運ゲーだけど。  
  
- みがわりとしっぽきりに関連したバトルメッセージがおかしい?  
→こちらみがわり状態で相手に攻撃すると、『かわって ぶんしんが こうげきを うけた』メッセージが出る。  
→『しっぽきり』した後、みがわり人形状態じゃない？ 
  
- Frontier_Monsの状況。  
  
 総数883、使用792、未使用 57  
 うち、Dyna:40、Tera:149、Z:38、Mega:26  

# About `pokeemerald-expansion`

<!-- If you want to re-record or change these gifs, here are some notes that I used: https://files.catbox.moe/05001g.md -->

**`pokeemerald-expansion`** is a GBA ROM hack base that equips developers with a comprehensive toolkit for creating Pokémon ROM hacks. **`pokeemerald-expansion`** is built on top of [pret's `pokeemerald`](https://github.com/pret/pokeemerald) decompilation project. **It is not a playable Pokémon game on its own.**

# [Features](FEATURES.md)

**`pokeemerald-expansion`** offers hundreds of features from various [core series Pokémon games](https://bulbapedia.bulbagarden.net/wiki/Core_series), along with popular quality-of-life enhancements designed to streamline development and improve the player experience. A full list of those features can be found in [`FEATURES.md`](FEATURES.md).

# [Credits](CREDITS.md)

 [![](https://img.shields.io/github/all-contributors/rh-hideout/pokeemerald-expansion/upcoming)](CREDITS.md)

If you use **`pokeemerald-expansion`**, please credit **RHH (Rom Hacking Hideout)**. Optionally, include the version number for clarity.

```
Based off RHH's pokeemerald-expansion 1.17.0 https://github.com/rh-hideout/pokeemerald-expansion/
```

Please consider [crediting all contributors](CREDITS.md) involved in the project!

# Choosing `pokeemerald` or **`pokeemerald-expansion`**

- **`pokeemerald-expansion`** supports multiplayer functionality with other games built on **`pokeemerald-expansion`**. It is not compatible with official Pokémon games.
- If compatibility with official games is important, use [`pokeemerald`](https://github.com/pret/pokeemerald). Otherwise, we recommend using **`pokeemerald-expansion`**.
- **`pokeemerald-expansion`** incorporates regular updates from `pokeemerald`, including bug fixes and documentation improvements.

# [Getting Started](INSTALL.md)

❗❗ **Important**: Do not use GitHub's "Download Zip" option as it will not include commit history. This is necessary if you want to update or merge other feature branches.

If you're new to git and GitHub, [Team Aqua's Asset Repo](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/) has a [guide to forking and cloning the repository](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/The-Basics-of-GitHub). Then you can follow one of the following guides:

## 📥 [Installing **`pokeemerald-expansion`**](INSTALL.md)
## 🏗️ [Building **`pokeemerald-expansion`**](INSTALL.md#Building-pokeemerald-expansion)
## 🚚 [Migrating from **`pokeemerald`**](INSTALL.md#Migrating-from-pokeemerald)
## 🚀 [Updating **`pokeemerald-expansion`**](INSTALL.md#Updating-pokeemerald-expansion)

# [Documentation](https://rh-hideout.github.io/pokeemerald-expansion/)

For detailed documentation, visit the [pokeemerald-expansion documentation page](https://rh-hideout.github.io/pokeemerald-expansion/).

# [Contributions](CONTRIBUTING.md)
If you are looking to [report a bug](CONTRIBUTING.md#Bug-Report), [open a pull request](CONTRIBUTING.md#Pull-Requests), or [request a feature](CONTRIBUTING.md#Feature-Request), our [`CONTRIBUTING.md`](CONTRIBUTING.md) has guides for each.

# [Community](https://discord.gg/6CzjAG6GZk)

[![](https://dcbadge.limes.pink/api/server/6CzjAG6GZk)](https://discord.gg/6CzjAG6GZk)

Our community uses the [ROM Hacking Hideout (RHH) Discord server](https://discord.gg/6CzjAG6GZk) to communicate and organize. Most of our discussions take place there, and we welcome anybody to join us!
