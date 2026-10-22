# GYOZA（ガイヨーザ）
1GB程度のファイル群をずっと置いておきたくないので、クラウド保存するためのプロジェクト。  
出来上がったROMも32MBあんの、ヤバすぎだろ。で、8割も容量食われてんのもっとヤバいだろ。  
  
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

- 多すぎるので、BUGS.mdへ移動。こちら側で解決済みのものも記載。あちら側が解決したら、同期して消します。  

# こっち側のバグ

- 技の説明欄もヤバそう。  
思い出しでオーバー(サマリーはおｋ)  
いとをはく  
かまいたち  
つめとぎ  
サイドチェンジ  
ボディプレス  
  
- 多くを生かすために、スケッチがセーブされなくなったので、もろもろ動作するのか検証。  
→確実にセーブされていないので、初期状態に戻るだろうなという予想。  

- さわぐ状態になった場合、『さわがしくて　めがさめた！』じゃなくて、単に『めが さめた』になっている。  
→検証めんどくせえええええ  

- マジックコートorマジミラ状態で、相手からの攻撃なのに、『"自分"の "技名"ははねかえされた』になる。  
→おそらく、マジックコート側の処理かなぁー  
  
- コンテンストの『ツギ◯バン』がうまくできてない。英語と日本語の差の関係。  
→優先度かなり低め。  
  
# 考え中

- 『ふしぎなもらいもの』が存在していない。（いわゆる、『ふしぎなおくりもの』画面だけ）  
内部で存在していて、呼び出せてないだけかは知らない。（graphicsにwonder_newsとかはあるけども……）

- AIのラス1先制技やラス１大爆発する思考。  
  
- 全ギミックのバランスが悪い。ダイマだけHP増えて技に追加効果あるのズル。  
→他、個体が変わるだけ、威力があがるだけ（+追加効果）、タイプが変わるだけ。なのに、ダイマずるいでしょ。  
→これ以上、個体は増やさないように。  

- 全部入り解禁に伴い、Zのクリスタルさんの配置。  
→正直、攻撃Zが『ちょっと強い技』感が否めないから、どうしよう。あんま得にならない気がする。  
  
- (たいした難しさじゃないけど)すごいとっくんのレベル参照する術。  
→既存のイベントスクリプトじゃムリっぽい。なので新規でSpecialコードでも作らないといけない。  
→けど、必要レベルっているかなーって感じ。現代に置いて実質廃止されているわけだし。  

# Frontier_Monsの状況
  
 総数883、使用811、未使用 41  
 うち、M:88、Z:39、D:41、T:158 ぐらい。

# About `pokeemerald-expansion`

<!-- If you want to re-record or change these gifs, here are some notes that I used: https://files.catbox.moe/05001g.md -->

**`pokeemerald-expansion`** is a GBA ROM hack base that equips developers with a comprehensive toolkit for creating Pokémon ROM hacks. **`pokeemerald-expansion`** is built on top of [pret's `pokeemerald`](https://github.com/pret/pokeemerald) decompilation project. **It is not a playable Pokémon game on its own.**

# [Features](FEATURES.md)

**`pokeemerald-expansion`** offers hundreds of features from various [core series Pokémon games](https://bulbapedia.bulbagarden.net/wiki/Core_series), along with popular quality-of-life enhancements designed to streamline development and improve the player experience. A full list of those features can be found in [`FEATURES.md`](FEATURES.md).

# [Credits](CREDITS.md)

 [![](https://img.shields.io/github/all-contributors/rh-hideout/pokeemerald-expansion/upcoming)](CREDITS.md)

If you use **`pokeemerald-expansion`**, please credit **RHH (Rom Hacking Hideout)**. Optionally, include the version number for clarity.

```
Based off RHH's pokeemerald-expansion 1.17.1 https://github.com/rh-hideout/pokeemerald-expansion/
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
