# GYOZA（ガイヨーザ）
1GB程度のファイルをずっと置いておきたくないので、クラウド保存するためのプロジェクト。  
出来上がったROMも32MBあんの、ヤバすぎだろ。  
  
EXPの内容  
  
- フォーク元のテキストを全て日本語化、そしてテキストの優先権を日本語へ。  
  
- 野生、トレーナー、ショップ等を弄り倒し、4世代以降の方々を召喚。  
  
- ストーリーにメガ導入。これに伴い、メガシンカするトレーナーも(ネームドのみ)  
  
- 落ちているアイテムや、もらえるアイテム、もっているアイテムを強化。(メガ石も配備)  
  
- ジムリーダー(再戦も)、ライバル、四天王、チャンピオン、ダイゴを現代風に強化。（リーグは強化四天王も実装）  
  
- バトルフロンティアのテーブルを全世代にしてガチガチに。そして相手は全てのギミックが使用可能に。（こちらはメガのみ）  
  
- ↑に伴い、景品や教え技を改変、まあまあ戦えるように。  
  
- バトルピラミッドがアイテム持ち込めない関係で、理不尽施設になってしまったので、アイテム等を整備。  
→ダイマックスBを初期アイテムに置き、ダイマックスできるようにすることで緩和。（なお、ダイマレベル）  
  
- クリア後、経験値稼ぎが難しい問題をアメでどうにか対処。  
  
- トレーナーヒルのショップ改変して、一番ほしいアイテムたちを導入。（なお値段）  
  
- Configを色々自分の勝手でカスタム。基本ナーフは許さないスタイルなので、結局強いヤツが強い環境なのはマジ。  
→『ばけのかわ』と『おやこあい』が全盛期で共存してんのホント草。  
  
# フォーク元から抱えているバグ

- アダンの勝利後のセリフのバッファがヤバいらしい。(Scriptsに書いてあるが、あまりにも再現性がない。)  
  
- 120ばんどうろのきのみ周辺のトレーナーが多い場所で、クラッシュ。（していたが、KANZENでは一切起きない。アレ？）  
  
- エントリーコールを登録してくれる人と初回戦闘終了時、エントリーコールのセリフ中にロックされず、くるくる動き回る人がいる。  
→なお、する人しない人バラバラで再現性がまるでない。  
→してた人がしなくなることもある。  
  
- 乗船する時に、連れ歩きポケモンが置いていかれる（フォーク元のバグというか、仕様）  
  
- ジムリーダーに初戦で話しかけると、戦闘前BGMがなる。本来は鳴らない。（ここでは修正済み）  
→フォーク元が悪い。singlebattleの際のasm/macros/event.incにおける、if文の結果が一緒になっているのにフォーク元が気づいてない。  
  
# こっち側のバグ(おそらく)

- 戦闘施設でフィールド勝手に貼ってくる問題(正確には最初からフィールドになっている)  
  
  対象者：トライアスリート(水泳・ランニング)F、ジェントルマン  
  
  貼ったフィールド：サイコ・エレキ・グラスの順  
  
この方々と出会うのが、そもそも大変なので、状況再現大変だと思います。  
  
- (かなり未確定)戦闘バッファに0xFFが入らないとクラッシュする。({JPN}のせい説ありけり)  
ただし、再現性がまるでない。再現性を出すのに時間がかかるから、どうしましょう。  
→戦闘バッファなので、基本的にはbattle_messageと各種固有名詞以外関係ないのは間違いないはず。  
  
# 考え中

- 『かんたんかいわ』のソートがアルファベット順で元の言葉を参照しているのでひじょーにわかりにくい。  
→unusedデータに、日本ソートあって草
  
- 『ふしぎなもらいもの』が存在していない。（いわゆる、『ふしぎなおくりもの』画面だけ）  
内部で存在していて、呼び出せてないだけかは知らない。（graphicsにwonder_newsとかはあるけども……）

- AIのラス1先制技で試合諦めてる思考。または、ラス１だいばくはつ打ってくる思考。  
  
- ダイマックスがシステム的にズル。HP増えるわ、追加効果あるわ。ダイジェットってなんなん？  

- バトルフロンティアの一部の耐久ポケが異常なヤバさしている。(というか、ちからをすいとるがヤバい)  
→特殊ポケ使おうよ。  

- バトルファクトリーのレベル50のテーブルが、ハッキリ言ってつまらない。貧弱すぎる。 
→オープンは、大丈夫。  

- (現状でAIテラできなかった前提)Tera_Type設定した方はテラして、設定していない方はどうやってテラさせないか問題。  
→たぶんいけてると思う。未確認で進行形だけど。  
   
# 検証中

- バトルタワー等のKP  
→トレーナープール改変中。元々のデータの関係で変なポケモンが紛れ込んでる。  
→バラエティ豊かになったと思う。その代償として、容量がががが。

- アリーナ、ドームあたりの難易度（パレスは運ゲーですｗ）  
→ドームは試合数が少ない関係で、ぶっちゃけそうでもない。ダイマックスポケモンは出てこないので続けて検証。  
→パレスは運ゲー  
→ファクトリーはそもそも個体値が周回や、レンタル回数によって変わることが判明したので、全部３１にして要再検証。 

- 新ギミック条件のもとで、テラとZ打ってくる方はいらっしゃるのか。  
→フォーク元のテラとダイマの使用の条件が、あまりにもいい加減すぎる。もうちょいなんとかならんかね。  
→１度の戦闘で、同じポケモンがダイマとテラスタルしてくるのはおかしいでしょ。  
→ちなみにメガは持ってれば即、ダイマはレベルでBlock_AIできる。  
おそらく、AIが賢いからか、マジで打ってこない。  

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
