# GYOZA（ガイヨーザ）
1GB程度のファイルをずっと置いておきたくないので、クラウド保存するためのプロジェクト。  
出来上がったROMも32MBあんの、ヤバすぎだろ。  
  
EXPの内容  
  
- フォーク元のテキストを全て日本語化、そしてテキストの優先権を日本語へ。  
  
- 野生で夕夜限定で4世代以降の方々を召喚。  
  
- 一般トレーナーも合わせてなるべく被りなくバラけさせる。  
  
- ショップを弄り、ボールや進化石などを配備。  
  
- けいけんおまもりと、ひかおまを導入。ストーリーでもらえるように。  
  
- ストーリーにメガ導入。これに伴い、メガするトレーナーも(ネームドのみ)   
  
- メガ石も以降のエリアでボールや隠しアイテムとして入手可能。（一部ショプや景品にもあるよ！）  
  
- 再戦も含め、ネームドキャラの手持ちを大幅に強化。（手持ち変更は基本なし）  
  
- リーグは再戦を実装。(手持ち、セリフはORASを基盤とし、全員メガする)  
  
- フロンティアのテーブルを全世代にしてガチガチに。そして相手は全てのギミックが使用可能に。（こちらはメガのみ）  
  
- ↑に伴い、景品や教え技を改変、まあまあ戦えるように。  
  
- バトルピラミッドがアイテム持ち込めない関係で、理不尽施設になってしまったので、アイテム等を整備。  
→ダイマックスBを初期アイテムに置き、ダイマできるようにすることで緩和。（なお、ダイマレベル）  
  
- クリア後、経験値稼ぎが難しい問題を、けいけんアメ配置でどうにか対処。  
  
- トレーナーヒルのショップ改変して、一番ほしいアイテムたちを導入。（なお値段）  
  
- include/Configを色々とカスタム。ナーフ絶対許さないので、色々とケイオス。  
  
# フォーク元から抱えているバグ

- アダンの勝利後のセリフのバッファがヤバいらしい。(Scriptsに書いてあるが、あまりにも再現性がない。)  
  
- 120ばんどうろのきのみ周辺のトレーナーが多い場所で、クラッシュ。  
→しなくなっちゃった。
  
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

- バトルアリーナで入れ替わり技のことを想定していない。（バトンタッチやほえる、ふきとばしは失敗するため）なのでブルスクになる。（スタート押せば続行は可能）  
→battle_script_commands.c 3206  

- ゾロアークがイリュージョンで化けている時に、テラスタル(たぶんダイマも)すると、正体がバレる。  
→イリュージョン発動中、ダイマックスしても化けた状態は解除されない。  
→イリュージョン発動中、テラスタルしても化けた状態は解除されない。（一部除いて）  
→なので、バグですね。  
    
- ちょうはつによって技が出せない時、{CURRENT_MOVE}になっているが、これでも『-が だせない』になる。  
    
- (バグというよりほぼ仕様)リージョンフォームやフォルムチェンジは内部IDが違うので重複する。  
→なので、重複しないように設定。ついでに、メガストーンとZクリスタルもパーティに１匹までに制限。  
 これにより、控えのメガ石重複がなくなり、１匹目でメガされて、２匹目以降が役割を失うことがないようになった。  
 代わりに制約を厳しくした結果、３匹選出できないと、おそらく無限ループするので、そこは注意。  
 ただし、ダイマとテラは振り分けしてないので、特にテラは先にテラされると、後発がテラなしテラバしてくる。  
  
- (ほぼTo-do扱い)乗船する時に、連れ歩きポケモンが置いていかれる。  

- (完全To-do)テラスタイプのフェアリーとステラのアイコンが分かりづらい。  
  
# こっち側のバグ(おそらく)
  
- (かなり未確定)戦闘バッファに0xFFが入らないとクラッシュする。({JPN}のせい説ありけり)  
ただし、再現性がまるでない。再現性を出すのに時間がかかるから、どうしましょう。  
→戦闘バッファなので、基本的にはbattle_messageと各種固有名詞以外関係ないのは間違いないはず。   
→バトルタワー内の話だが、10周(=7×10戦)して出ないので大丈夫。あとは他の戦闘。  
  
# 考え中

- 『ふしぎなもらいもの』が存在していない。（いわゆる、『ふしぎなおくりもの』画面だけ）  
内部で存在していて、呼び出せてないだけかは知らない。（graphicsにwonder_newsとかはあるけども……）

- AIのラス1先制技で試合諦めてる思考。または、ラス１だいばくはつ打ってくる思考。  
  
- ダイマがシステム的にズル。HP増えるわ、追加効果あるわ、ダイジェットってなんなん？  

- フロンティアの一部の耐久ポケが異常なヤバさしている。(というか、ちからをすいとるがヤバい)  
→大概これ系統は特防が弱いので、特殊ポケ使おう。  
  
- パーティ画面で、６文字の方が名前がHPバーに入っちゃっている。  
    
# 検証中

- バトルタワー等のKP（かぶりポイント）  
→だいぶバラエティ豊かになったと思うが、まだ特定のポケモンが連チャンする。  
→これ、そもそもの話、トレーナー自体の被りが多すぎる方が原因だと思う。  
→エリートトレーナーみたいに、枠数自体増やします？？？  
  
- フロンティア全体の難易度。  
→ルールとして、理不尽さはなくなった。パレスは知らん。  
  
- バトルファクトリーのレベル50のテーブルが、ハッキリ言ってつまらない。貧弱すぎる。  
→だいぶいじりました。まだ検証中だけど。  
  
- Frontier_Monsの状況。  
  
 総数883、使用793、未使用66  
 うち、Dyna:40、Tera:147、Z:38、Mega:26  
 あと66も未使用あんの……（笑）

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
