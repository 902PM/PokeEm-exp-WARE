# GYOZA（ガイヨーザ）
1GB程度のファイルをずっと置いておきたくないので、クラウド保存するためのプロジェクト。<br>
<br>
EXPの内容<br>
１．プレイ中に見えるあらゆる英語を日本語に。（表記は原作と完全に同じ、4世代以降のセリフはそれぞれから引用）<br>
２．夕方～夜にかけて時間限定エンカウントを追加し、ホウエン以外のポケモンが登場するように変更。（ただし、ボックスは14と変わらないので、全部はムリ）<br>
３．２に伴い、ストーリー中の一般トレーナーの手持ちも合わせて変更。<br>
４．ストーリーでメガシンカの導入。（それ以外は導入していないので、８↓で不公平になる）<br>
５．４に伴い、元々の隠しアイテムやモンボをメガストーンにし、バラまく。フロンティア、ミナモデパートにも販売。<br>
６．ジムリーダーの手持ちを強化。再戦５回のヤツも全部強化し、メガシンカやZワザを使用する"者も"。<br>
７．ポケモンリーグ再戦実装。（ベースはORASで、再戦のみメガシンカを使用）<br>
８．バトルフロンティアのポケモンプールを全世代に拡張＆対戦向きに変更。<br>
９．８に伴い、フロンティアトレーナーの使用ポケモンテーブルも合わせて変更。（肩書きに沿うように、できるだけ変更）<br>
１０．そしてバトルフロンティアのみ、相手"だけ"メガシンカ、Zワザ、ダイマックス、テラスタル全部使用可能。（自分はメガシンカのみ）<br>
１１．フロンティアの景品や教え技を実用的にし、↑と戦えるポケモンが育成できるように調整。<br>
１２．クリア後のトレーナーが少なくて、経験値稼ぎがリーグぐらいな問題をXLアメを各所の景品にすることで解決。<br>
１３．１２に合わせて、ストーリー中にけいけんおまもりとひかるおまもりが手に入るように調整。<br>
１４．トレーナーヒルのショップにミント等を置き、キンセツ入った時点で解禁。(なお値段)<br>

# 現状抱えているバグ(フォーク元からのものも含む)＆対処に時間がかかるもの

- アダン勝利後、ルネシティ左上の家のわざマシン31を受け取ろうとするとクラッシュする。
<br>→何度か試したが再現性がない（おそらく予想として、バッファ周り。でクラッシュしない回はエンカウント等をして、バッファ解消されているから？）

- 120ばんどうろの高い草むらの前のトレーナーが集まるところで、スプライトが多すぎてゲーム内ブルスク。（ただしそこから復帰できずクラッシュ）
<br>→きのみ、真ん中のモンボ取ってもクラッシュするので、ただの危険地帯。フォーク元からのバグっぽい。

- (特に113ばんどうろのハジツゲの前で起こる現象)上下に行ったり来たりするトレーナーと視線エンカウントする時に、反対向いて迫ってきて、そのまま会話して戦闘。（おそらく、NPCをロックできていない）
<br>→フォーク元のIssuesにこれと同じ現象があったので、バグ確定。

- 乗船する時に、連れ歩きポケモンが置いていかれる（フォーク元のバグというか、仕様）

- ウインドウで表示されるテキストが原作JPの位置と厳密には違う。(特にレポートは桁数が変わる関係でズレまくる。)
<br>→レポート画面、対戦成績画面、きのみブレンダー結果画面、戦闘のUI、パーティ画面のUIなど、見比べるとちょっとズレてたり、フォントが違う。

# バグ（直せそうorすぐ対応が必要なもの）

- バトルフロンティア系でトライアスリート（水泳）Fだけがサイコフィールドを貼ってくる。他のトライアスリートも、その他トレーナーがフィールドを貼ることはない。（特性の◯◯メイカーを除いて）
<br>→一般トレーナーの該当する肩書きと戦闘しても、フィールドを貼らない。なので、タワーかフロンティア限定バグ。

# 考え中

- 日本版のフォントが恋しい。特に戦闘画面。FONT_BOLDが必要らしい。変換できてんのかあんまわからない。

- ひみつきちのPCでグッズ置くウインドウがバグって『いあ0うう0』とかいうホラーみたいな文字で埋め尽くされてしまった。
<br>→ただし、この文言がどこから来ているのか、何なのかすらわからないので、修正まで時間がかかりそう。

- 『かんたんかいわ』のソートがアルファベット順で元の言葉を参照しているのでひじょーにわかりにくい。特に↓のあいことば打つ時
<br>（これに関しては入力画面のレイアウトも変える必要があるので、”やりたくない”）

- 『ふしぎなもらいもの』が存在していない。（いわゆる、『ふしぎなおくりもの』画面だけ）
<br>内部で存在していて、呼び出せてないだけかは知らない。

- AIのラス1先制技で試合諦めてる思考。

- ダイマックスそのもののギミックがズルい。HP増えて固いし、キョダイワザならスリップダメージ出すし。ダイジェットとかズルじゃん。それにマルスケはズルだろ。
<br>1.HP増えるから耐える。で、キョダイワザ、ダイマックスワザを打ってくる。
<br>2.追加効果のでせいで、ずっとスリップダメージとか、ダイジェット等で素早さ上げてくる。
<br>3.後続も2の効果でダメージor先手取られて上から殴られる。
<br>という、状況なので、1のキョダイワザを耐えてターンを消費するしかない。幸いダメージは通るようになった。ダイマックス状態で倒すことも可能っちゃ可能。だけど、結局、３ターン消費して元に戻すが答えになっている。
<br><br>
キョダイインテレオン、ダイマボーマンダ、ダイマカイリュー辺りがはやい・つよいで１匹は持っていかれてしまう。<br>
3on3ルールなので、1匹やられる重みがエグい。あんま検証してないけど、これバトルドームだとどうすんねん。

# 検証中

- Zワザ『-』に表示されるものはいるのか。

- 『こうかなし』を打って、つっぱってくるヤツはいるのか。

- バトルタワー等のKP

- アリーナ、ドームあたりの難易度（パレスは運ゲーですｗ）

# About `pokeemerald-expansion`

<!-- If you want to re-record or change these gifs, here are some notes that I used: https://files.catbox.moe/05001g.md -->

**`pokeemerald-expansion`** is a GBA ROM hack base that equips developers with a comprehensive toolkit for creating Pokémon ROM hacks. **`pokeemerald-expansion`** is built on top of [pret's `pokeemerald`](https://github.com/pret/pokeemerald) decompilation project. **It is not a playable Pokémon game on its own.**

# [Features](FEATURES.md)

**`pokeemerald-expansion`** offers hundreds of features from various [core series Pokémon games](https://bulbapedia.bulbagarden.net/wiki/Core_series), along with popular quality-of-life enhancements designed to streamline development and improve the player experience. A full list of those features can be found in [`FEATURES.md`](FEATURES.md).

# [Credits](CREDITS.md)

 [![](https://img.shields.io/github/all-contributors/rh-hideout/pokeemerald-expansion/upcoming)](CREDITS.md)

If you use **`pokeemerald-expansion`**, please credit **RHH (Rom Hacking Hideout)**. Optionally, include the version number for clarity.

```
Based off RHH's pokeemerald-expansion 1.16.3 https://github.com/rh-hideout/pokeemerald-expansion/
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
