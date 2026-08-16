# GYOZA
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
１０．６に伴い、フロンティアトレーナーの使用ポケモンテーブルも合わせて変更。（肩書きに沿うように、できるだけ変更）<br>
１１．そしてバトルフロンティアのみ、相手"だけ"メガシンカ、Zワザ、ダイマックス、テラスタル使用可能。<br>
→ただし、テラスタルとか期待通りの動きするとは限らない。ダイマも終わったら引っ込めがち。<br>
１２．フロンティアの景品や教え技を実用的にし、↑と戦えるポケモンが育成できるように調整。<br>
１３．クリア後のトレーナーが少なくて、経験値稼ぎがリーグぐらいな問題をXLアメを各所の景品にすることで解決。<br>
１４．１０に合わせて、ストーリー中にけいけんおまもりとひかるおまもりが手に入るように調整。<br>

<br>
# 現状抱えているバグ(フォーク元からのものも含む)

- 敵のAIのせいか（正しい技を選ばずに専用Zワザを使っている）バトルメッセージでZワザが『-』で表示される時がある。

- アダン勝利後、ルネシティ左上の家のわざマシン31を受け取ろうとするとクラッシュする。<br>２回やって２回ともなったので、アダンが悪い（そもそもルネジムのセリフのファイルにバッファがどうとか書いている）

- 120ばんどうろの高い草むらの前のトレーナーが集まるところで、スプライトが多すぎてゲーム内ブルスク。（ただしそこから復帰できずクラッシュ）
<br>右エリアのきのみを取ると、改善されるっぽい？フォーク元から弄ってないので、おそらくフォーク元のバグ。（たぶん連れ歩き機能のせい？）

- バトルフロンティアの東側エリアの通常ドアとスライド式ドアのアニメーションが正しくない（洞窟の穴に入るのと同じモーションになっている）<br>これはフォーク元の素状態でも確認済み。

- 上下に動き続けるトレーナーと、相手に見つかって戦闘に入る場合、NPCの動きがロックされず反対向きになって戦闘が開始する。<br>そしてそのまま戦闘終了しても、そっぽ向いて会話する。（エントリーコールとかの場合）

- 一部のテキスト（特にレポート時のウインドウ）が、英語と日本語の関係で表示位置がズレている。(JP原作と正確に一緒じゃない)

- (バグではないが)AIが先制技大好きすぎて、先制技入れたポケモンとの戦闘がつまんない（敵が自分の攻撃で確1でやられない場面なのに、先制技打って微ダメだけ与えてくる。）

# About `pokeemerald-expansion`

![Gif that shows debugging functionality that is unique to pokeemerald-expansion such as rerolling Trainer ID, Cheat Start, PC from Debug Menu, Debug PC Fill, Pokémon Sprite Visualizer, Debug Warp to Map, and Battle Debug Menu](https://github.com/user-attachments/assets/cf9dfbee-4c6b-4bca-8e0a-07f116ef891c) ![Gif that shows overworld functionality that is unique to pokeemerald-expansion such as indoor running, BW2 style map popups, overworld followers, DNA Splicers, Gen 1 style fishing, OW Item descriptions, Quick Run from Battle, Use Last Ball, Wild Double Battles, and Catch from EXP](https://github.com/user-attachments/assets/383af243-0904-4d41-bced-721492fbc48e) ![Gif that shows off a number of modern Pokémon battle mechanics happening in the pokeemerald-expansion engine: 2 vs 1 battles, modern Pokémon, items, moves, abilities, fully customizable opponents and partners, Trainer Slides, and generational gimmicks](https://github.com/user-attachments/assets/50c576bc-415e-4d66-a38f-ad712f3316be)

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
