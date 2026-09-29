# GYOZA（ガイヨーザ）
1GB程度のファイルをずっと置いておきたくないので、クラウド保存するためのプロジェクト。  
出来上がったROMも32MBあんの、ヤバすぎだろ。  
  
EXPの内容  
  
- フォーク元のテキストを全て日本語化、そしてテキストの優先権を日本語へ。  
  
- 野生で夕夜限定で4世代以降の方々を召喚。  
  
- 一般トレーナーも合わせてなるべく被りなくバラけさせる。  
  
- ショップを弄り、ボールや進化石などを配備。  
  
- けいけんおまもりと、ひかおまを導入。ストーリーでもらえるように。  
  
- ストーリーにメガ導入。これに伴い、メガシンカするトレーナーも(ネームドのみ)   
  
- メガ石も以降のエリアでボールや隠しアイテムとして入手可能。（一部ショプや景品にもあるよ！）  
  
- 再戦も含め、ネームドキャラを現代風に強化。（手持ち変更は基本なし）  
  
- リーグは再戦を実装。(手持ちはORASを基盤とし、全員メガする)  
  
- バトルフロンティアのテーブルを全世代にしてガチガチに。そして相手は全てのギミックが使用可能に。（こちらはメガのみ）  
  
- ↑に伴い、景品や教え技を改変、まあまあ戦えるように。  
  
- バトルピラミッドがアイテム持ち込めない関係で、理不尽施設になってしまったので、アイテム等を整備。  
→ダイマックスBを初期アイテムに置き、ダイマックスできるようにすることで緩和。（なお、ダイマレベル）  
  
- クリア後、経験値稼ぎが難しい問題を、けいけんアメ配置でどうにか対処。  
  
- トレーナーヒルのショップ改変して、一番ほしいアイテムたちを導入。（なお値段）  
  
- Configを色々自分の勝手でカスタム。基本ナーフは許さないスタイルなので、結局強いヤツが強い環境なのはマジ。  
→『ばけのかわ』と『おやこあい』が全盛期で共存してんのホント草。  
  
# フォーク元から抱えているバグ

- アダンの勝利後のセリフのバッファがヤバいらしい。(Scriptsに書いてあるが、あまりにも再現性がない。)  
  
- 120ばんどうろのきのみ周辺のトレーナーが多い場所で、クラッシュ。  
→しなくなっちゃった。
  
- エントリーコールの登録時、登録する時のセリフ中にNPCがロックされず、くるくる動き回る人がいる。  
→なお、する人しない人バラバラで再現性がまるでない。  
→してた人がしなくなることもある。  
  
- 乗船する時に、連れ歩きポケモンが置いていかれる（フォーク元のバグというか、仕様）  
  
- ジムリーダーに初戦で話しかけると、戦闘前BGMがなる。本来は鳴らない。（ここでは修正済み）  
→フォーク元が悪い。singlebattleの際のasm/macros/event.incにおける、if文の結果が一緒になっているのにフォーク元が気づいてない。  
  
# こっち側のバグ(おそらく)

- 戦闘施設でフィールド勝手に貼ってくる問題(正確には最初からフィールドになっている)  
→トライアスリートの水泳・ランニングのFがしなくなったので、アプデでなおった？  
→ないしは、他の要因があるとか？レベル５０とオープン含めかなり周回して出ないならもうよくね？  
  
- (かなり未確定)戦闘バッファに0xFFが入らないとクラッシュする。({JPN}のせい説ありけり)  
ただし、再現性がまるでない。再現性を出すのに時間がかかるから、どうしましょう。  
→戦闘バッファなので、基本的にはbattle_messageと各種固有名詞以外関係ないのは間違いないはず。   
→バトルタワー内の話だが、10周(=7×10戦)して出ないので大丈夫。あとは他の戦闘。  
  
# 考え中

- 『ふしぎなもらいもの』が存在していない。（いわゆる、『ふしぎなおくりもの』画面だけ）  
内部で存在していて、呼び出せてないだけかは知らない。（graphicsにwonder_newsとかはあるけども……）

- AIのラス1先制技で試合諦めてる思考。または、ラス１だいばくはつ打ってくる思考。  
  
- ダイマックスがシステム的にズル。HP増えるわ、追加効果あるわ。ダイジェットってなんなん？  

- バトルフロンティアの一部の耐久ポケが異常なヤバさしている。(というか、ちからをすいとるがヤバい)  
→大概これ系統は特防が弱いので、特殊ポケ使おう。  

- バトルファクトリーのレベル50のテーブルが、ハッキリ言ってつまらない。貧弱すぎる。 
→オープンは、大丈夫。  
  
# 検証中

- バトルタワー等のKP（かぶりポイント）  
→だいぶバラエティ豊かになったと思うが、まだ特定のポケモンが連チャンする。  
→エリートトレーナーはちょっと考えた方が良いレベルで多すぎる。  

- アリーナ、ドームあたりの難易度  
→ドームは試合数が少ない関係で、ぶっちゃけそうでもない。ダイマックスポケモンは出てこないので続けて検証。  
→パレスは運ゲー  
→ファクトリーはそもそも個体値が周回や、レンタル回数によって変わることが判明したので、全部３１にして要再検証。 

- 現在おそらく、テラスタルだけ制御できていない。  
→テラスタルしてくるのを確認。  
→我が大いにshouldTerastalを設定し忘れたのが原因。途中で忘れてやめたままになってたっぽい。  

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
