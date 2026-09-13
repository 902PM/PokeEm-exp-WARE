const struct AbilityInfo gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("とくせい なし"),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("あくしゅう"),
        .description = COMPOUND_STRING("ポケモンが よりつき にくくなる"),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("あめふらし"),
        .description = COMPOUND_STRING("せんとうに でると あめを ふらす"),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("かそく"),
        .description = COMPOUND_STRING("ちょっとずつ すばやく なっていく"),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("カブトアーマー"),
        .description = COMPOUND_STRING("わざを きゅうしょに うけない"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("がんじょう"),
        .description = COMPOUND_STRING("いちげきで たおされない"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("しめりけ"),
        .description = COMPOUND_STRING("だれも じばくが できなくなる"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("じゅうなん"),
        .description = COMPOUND_STRING("まひ じょうたいに ならない"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("すながくれ"),
        .description = COMPOUND_STRING("すなあらしで かいひりつが あがる"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("せいでんき"),
        .description = COMPOUND_STRING("さわった あいてを まひさせる"),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("ちくでん"),
        .description = COMPOUND_STRING("でんきを うけると かいふくする"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("ちょすい"),
        .description = COMPOUND_STRING("みずを うけると かいふくする"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("どんかん"),
        .description = COMPOUND_STRING("メロメロ じょうたいに ならない"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("ノーてんき"),
        .description = COMPOUND_STRING("てんきの えいきょうが なくなる"),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("ふくがん"),
        .description = COMPOUND_STRING("わざの めいちゅうりつが あがる"),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("ふみん"),
        .description = COMPOUND_STRING("ねむり じょうたいに ならない"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("へんしょく"),
        .description = COMPOUND_STRING("うけた わざの タイプに へんかする"),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("めんえき"),
        .description = COMPOUND_STRING("どく じょうたいに ならない"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("もらいび"),
        .description = COMPOUND_STRING("ほのおを うけると つよくなる"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("りんぷん"),
        .description = COMPOUND_STRING("わざの ついかこうかを うけない"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("マイペース"),
        .description = COMPOUND_STRING("こんらん じょうたいに ならない"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("きゅうばん"),
        .description = COMPOUND_STRING("きゅうばんで じめんに はりつく"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("いかく"),
        .description = COMPOUND_STRING("あいての こうげきを さげる"),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("かげふみ"),
        .description = COMPOUND_STRING("あいてを にげられなくする"),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("さめはだ"),
        .description = COMPOUND_STRING("さわった あいてを キズつける"),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("ふしぎなまもり"),
        .description = COMPOUND_STRING("こうか ばつぐん しか あたらない"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("ふゆう"),
        .description = COMPOUND_STRING("じめんタイプの わざを うけない"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("ほうし"),
        .description = COMPOUND_STRING("さわった あいてに ほうしがつく"),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("シンクロ"),
        .description = COMPOUND_STRING("どく まひ やけどを あいてにうつす"),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("クリアボディ"),
        .description = COMPOUND_STRING("あいてに のうりょくを さげられない"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("しぜんかいふく"),
        .description = COMPOUND_STRING("ひっこむと いじょうが なおる"),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("ひらいしん"),
        .description = COMPOUND_STRING("でんきタイプの わざが じぶんにくる"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("てんのめぐみ"),
        .description = COMPOUND_STRING("わざの ついかこうかが でやすい"),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("すいすい"),
        .description = COMPOUND_STRING("あめのとき すばやさが はやくなる"),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("ようりょくそ"),
        .description = COMPOUND_STRING("はれのとき すばやさが はやくなる"),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("はっこう"),
        .description = COMPOUND_STRING("ポケモンに そうぐう しやすくなる"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("トレース"),
        .description = COMPOUND_STRING("あいてと おなじ とくせいになる"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE, //B_UPDATED_ABILITY_DATA >= GEN_4
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("ちからもち"),
        .description = COMPOUND_STRING("こうげきりょくが たかい"),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("どくのトゲ"),
        .description = COMPOUND_STRING("さわったあいてに どくをあたえる"),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("せいしんりょく"),
        .description = COMPOUND_STRING("ひるまない"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("マグマのよろい"),
        .description = COMPOUND_STRING("こおり じょうたいに ならない"),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("みずのベール"),
        .description = COMPOUND_STRING("やけど じょうたいに ならない"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("じりょく"),
        .description = COMPOUND_STRING("はがねタイプが にげられなくなる"),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("ぼうおん"),
        .description = COMPOUND_STRING("おとの わざを うけない"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("あめうけざら"),
        .description = COMPOUND_STRING("あめのとき すこしずつ かいふく"),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("すなおこし"),
        .description = COMPOUND_STRING("せんとうで すなあらしを おこす"),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("プレッシャー"),
        .description = COMPOUND_STRING("あいての PPが へりやすくなる"),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("あついしぼう"),
        .description = COMPOUND_STRING("ほのお こおりに つよい"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("はやおき"),
        .description = COMPOUND_STRING("おきるのが はやくなる"),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("ほのおのからだ"),
        .description = COMPOUND_STRING("さわった あいてを やけど させる"),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("にげあし"),
        .description = COMPOUND_STRING("せんとうから にげやすい"),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("するどいめ"),
        .description = COMPOUND_STRING("あいてに めいちゅうを さげられない"),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("かいりきバサミ"),
        .description = COMPOUND_STRING("あいてに こうげきを さげられない"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("ものひろい"),
        .description = COMPOUND_STRING("どうぐを ひろってくる ことがある"),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("なまけ"),
        .description = COMPOUND_STRING("こうげきが れんぞくで だせない"),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("はりきり"),
        .description = COMPOUND_STRING("こうげきは たかいが はずれやすい"),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("メロメロボディ"),
        .description = COMPOUND_STRING("さわった あいてを メロメロにする"),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("プラス"),
        .description = COMPOUND_STRING("マイナスが いると つよくなる"),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("マイナス"),
        .description = COMPOUND_STRING("プラスが いると つよくなる"),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("てんきや"),
        .description = COMPOUND_STRING("てんきで ポワルンが へんかする"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_4,
        .failsOnImposter = B_UPDATED_ABILITY_DATA >= GEN_5,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("ねんちゃく"),
        .description = COMPOUND_STRING("どうぐを とられない"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("だっぴ"),
        .description = COMPOUND_STRING("だっぴして からだを なおす"),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("こんじょう"),
        .description = COMPOUND_STRING("いじょうのとき こうげきが あがる"),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("ふしぎなうろこ"),
        .description = COMPOUND_STRING("いじょうのとき ぼうぎょが あがる"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("ヘドロえき"),
        .description = COMPOUND_STRING("すいとると たいりょくが へる"),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("しんりょく"),
        .description = COMPOUND_STRING("ピンチに くさの いりょくが あがる"),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("もうか"),
        .description = COMPOUND_STRING("ピンチに ほのおが つよくなる"),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("げきりゅう"),
        .description = COMPOUND_STRING("ピンチに みずの いりょくが あがる"),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("むしのしらせ"),
        .description = COMPOUND_STRING("ピンチに むしの いりょくが あがる"),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("いしあたま"),
        .description = COMPOUND_STRING("ぶつかっても はんどうを うけない"),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("ひでり"),
        .description = COMPOUND_STRING("せんとうで ひざしを つよくする"),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("ありじごく"),
        .description = COMPOUND_STRING("あいてを にげられなくする"),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("やるき"),
        .description = COMPOUND_STRING("ねむらない"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("しろいけむり"),
        .description = COMPOUND_STRING("あいてに のうりょくを さげられない"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("ヨガパワー"),
        .description = COMPOUND_STRING("こうげきりょくが たかい"),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("シェルアーマー"),
        .description = COMPOUND_STRING("わざを きゅうしょに うけない"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("エアロック"),
        .description = COMPOUND_STRING("てんきの えいきょうが なくなる"),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("ちどりあし"),
        .description = COMPOUND_STRING("こんらんのとき かいひりつが あがる"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("でんきエンジン"),
        .description = COMPOUND_STRING("でんきを うけると すばやさが あがる"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("とうそうしん"),
        .description = COMPOUND_STRING("せいべつが おなじだと つよくなる"),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("ふくつのこころ"),
        .description = COMPOUND_STRING("ひるむ たびに すばやさが あがる"),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("ゆきがくれ"),
        .description = COMPOUND_STRING("あられのとき かいひりつが あがる"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("くいしんぼう"),
        .description = COMPOUND_STRING("きのみを いつもより はやく つかう"),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("いかりのつぼ"),
        .description = COMPOUND_STRING("きゅうしょを うけると こうげきがあがる"),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("かるわざ"),
        .description = COMPOUND_STRING("どうぐが なくなると すばやさが あがる"),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("たいねつ"),
        .description = COMPOUND_STRING("ほのおと やけどの ダメージを へらす"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("たんじゅん"),
        .description = COMPOUND_STRING("のうりょく へんかが ばいになる"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("かんそうはだ"),
        .description = COMPOUND_STRING("あつさに よわいが みずで かいふく"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("ダウンロード"),
        .description = COMPOUND_STRING("あいて によって のうりょくを かえる"),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("てつのこぶし"),
        .description = COMPOUND_STRING("パンチの わざの いりょくが あがる"),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("ポイズンヒール"),
        .description = COMPOUND_STRING("どくで HPを かいふくする"),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("てきおうりょく"),
        .description = COMPOUND_STRING("じぶんの タイプの いりょくが あがる"),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("スキルリンク"),
        .description = COMPOUND_STRING("れんぞくわざを さいだいまで だせる"),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("うるおいボディ"),
        .description = COMPOUND_STRING("あめのとき じょうたいいじょうを なおす"),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("サンパワー"),
        .description = COMPOUND_STRING("はれで HPがへるが とくこうがあがる"),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("はやあし"),
        .description = COMPOUND_STRING("じょうたいいじょうで すばやさが あがる"),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("ノーマルスキン"),
        .description = COMPOUND_STRING("わざが すべて ノーマルタイプに なる"),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("スナイパー"),
        .description = COMPOUND_STRING("きゅうしょで あたえるダメージが ふえる"),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("マジックガード"),
        .description = COMPOUND_STRING("こうげき いがいで ダメージを うけない"),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("ノーガード"),
        .description = COMPOUND_STRING("おたがいの わざが かならず あたる"),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("あとだし"),
        .description = COMPOUND_STRING("あいてより こうどうが おそくなる"),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("テクニシャン"),
        .description = COMPOUND_STRING("よわい わざの いりょくが あがる"),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("リーフガード"),
        .description = COMPOUND_STRING("はれで じょうたいいじょうを ふせぐ"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("ぶきよう"),
        .description = COMPOUND_STRING("もっている どうぐを つかえない"),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("かたやぶり"),
        .description = COMPOUND_STRING("あいての とくせいを むしする"),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("きょううん"),
        .description = COMPOUND_STRING("わざが きゅうしょに あたりやすくなる"),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("ゆうばく"),
        .description = COMPOUND_STRING("たおされると ふれた あいてに ダメージ"),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("きけんよち"),
        .description = COMPOUND_STRING("きけんな わざを さっちする"),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("よちむ"),
        .description = COMPOUND_STRING("あいての わざを ひとつ よみとる"),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("てんねん"),
        .description = COMPOUND_STRING("あいての のうりょく へんかを むしする"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("いろめがね"),
        .description = COMPOUND_STRING("いまひとつで あたえる ダメージがふえる"),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("フィルター"),
        .description = COMPOUND_STRING("ばつぐんで うける ダメージが へる"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("スロースタート"),
        .description = COMPOUND_STRING("しばらく こうげきと すばやさが さがる"),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("きもったま"),
        .description = COMPOUND_STRING("ゴーストタイプに わざが あたる"),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("よびみず"),
        .description = COMPOUND_STRING("みずタイプの わざが じぶんにくる"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("アイスボディ"),
        .description = COMPOUND_STRING("あられのとき まいターン HPをかいふく"),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("ハードロック"),
        .description = COMPOUND_STRING("ばつぐんで うける ダメージが へる"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("ゆきふらし"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("せんとうに でると ゆきを ふらす"),
    #else
        .description = COMPOUND_STRING("せんとうに でると あられを ふらす"),
    #endif
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("みつあつめ"),
        .description = COMPOUND_STRING("あまいミツを ひろってくる ことがある"),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("おみとおし"),
        .description = COMPOUND_STRING("あいての もちものを みとおす"),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("すてみ"),
        .description = COMPOUND_STRING("はんどうを うけるわざが つよくなる"),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("マルチタイプ"),
        .description = COMPOUND_STRING("もっている プレートで タイプが かわる"),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = B_UPDATED_ABILITY_DATA >= GEN_5,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("フラワーギフト"),
        .description = COMPOUND_STRING("はれのとき みかたがわが つよくなる"),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_5,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("ナイトメア"),
        .description = COMPOUND_STRING("ねむっている あいてに ダメージ"),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("わるいてぐせ"),
        .description = COMPOUND_STRING("さわられると あいての どうぐを ぬすむ"),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("ちからずく"),
        .description = COMPOUND_STRING("ついかこうかを なくして わざをつよめる"),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("あまのじゃく"),
        .description = COMPOUND_STRING("のうりょく へんかが ぎゃくになる"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("きんちょうかん"),
        .description = COMPOUND_STRING("あいてが きのみを たべられなくなる"),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("まけんき"),
        .description = COMPOUND_STRING("のうりょくが さがると こうげきをあげる"),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("よわき"),
        .description = COMPOUND_STRING("ピンチで こうげき とくこうがさがる"),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("のろわれボディ"),
        .description = COMPOUND_STRING("うけた わざを ふうじる ことがある"),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("いやしのこころ"),
        .description = COMPOUND_STRING("みかたの じょうたい いじょうを なおす"),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("フレンドガード"),
        .description = COMPOUND_STRING("みかたの うける ダメージを へらす"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("くだけるよろい"),
        .description = COMPOUND_STRING("ぶつりで ぼうぎょがさがるが はやくなる"),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("ヘヴィメタル"),
        .description = COMPOUND_STRING("たいじゅうが おもくなる"),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("ライトメタル"),
        .description = COMPOUND_STRING("たいじゅうが かるくなる"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("マルチスケイル"),
        .description = COMPOUND_STRING("HPまんたんで うける ダメージが へる"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("どくぼうそう"),
        .description = COMPOUND_STRING("どくのとき こうげきが あがる"),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("ねつぼうそう"),
        .description = COMPOUND_STRING("やけどのとき とくこうが あがる"),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("しゅうかく"),
        .description = COMPOUND_STRING("つかった きのみを ふっかつさせる"),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("テレパシー"),
        .description = COMPOUND_STRING("みかたの こうげきが あたらない"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("ムラっけ"),
        .description = COMPOUND_STRING("のうりょくが ランダムに かわる"),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("ぼうじん"),
        .description = COMPOUND_STRING("こなと てんきの ダメージを ふせぐ"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("どくしゅ"),
        .description = COMPOUND_STRING("こうげきした あいてを どくにする"),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("さいせいりょく"),
        .description = COMPOUND_STRING("ひっこむと HPが かいふくする"),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("はとむね"),
        .description = COMPOUND_STRING("あいてに ぼうぎょを さげられない"),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("すなかき"),
        .description = COMPOUND_STRING("すなあらしのとき すばやさが はやくなる"),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("ミラクルスキン"),
        .description = COMPOUND_STRING("へんかわざを うけにくい"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("アナライズ"),
        .description = COMPOUND_STRING("さいごに わざをだすと つよくなる"),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("イリュージョン"),
        .description = COMPOUND_STRING("てもちの ポケモンに ばける"),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("かわりもの"),
        .description = COMPOUND_STRING("あいての ポケモンに へんしんする"),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("すりぬけ"),
        .description = COMPOUND_STRING("かべや みがわりの えいきょうをうけない"),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("ミイラ"),
        .description = COMPOUND_STRING("ふれられると とくせいを ミイラに する"),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("じしんかじょう"),
        .description = COMPOUND_STRING("あいてを たおすと こうげきが あがる"),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("せいぎのこころ"),
        .description = COMPOUND_STRING("あくわざを うけると こうげきが あがる"),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("びびり"),
        .description = COMPOUND_STRING("ゴースト むし あくで すばやさがあがる"),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("マジックミラー"),
        .description = COMPOUND_STRING("へんかわざを はねかえす"),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("そうしょく"),
        .description = COMPOUND_STRING("くさわざを うけると こうげきが あがる"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("いたずらごころ"),
        .description = COMPOUND_STRING("へんかわざが はやく だせる"),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("すなのちから"),
        .description = COMPOUND_STRING("すなで じめん いわ はがねがつよくなる"),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("てつのトゲ"),
        .description = COMPOUND_STRING("さわった あいてを キズつける"),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("ダルマモード"),
        .description = COMPOUND_STRING("ピンチに なると すがたが かわる"),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = B_UPDATED_ABILITY_DATA >= GEN_7,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
        .cantBeOverwritten = B_UPDATED_ABILITY_DATA >= GEN_7,
        .failsOnImposter = TRUE,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("しょうりのほし"),
        .description = COMPOUND_STRING("みかたがわの めいちゅうりつが あがる"),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("ターボブレイズ"),
        .description = COMPOUND_STRING("あいての とくせいを むしする"),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("テラボルテージ"),
        .description = COMPOUND_STRING("あいての とくせいを むしする"),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("アロマベール"),
        .description = COMPOUND_STRING("みかたがわの メンタルわざを ふせぐ"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("フラワーベール"),
        .description = COMPOUND_STRING("みかたの くさの へんかを ふせぐ"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("ほおぶくろ"),
        .description = COMPOUND_STRING("きのみを たべると HPも かいふくする"),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("へんげんじざい"),
        .description = COMPOUND_STRING("つかったわざの タイプに へんかする"),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("ファーコート"),
        .description = COMPOUND_STRING("ぶつりわざの ダメージを へらす"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("マジシャン"),
        .description = COMPOUND_STRING("こうげきを あてたとき どうぐを うばう"),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("ぼうだん"),
        .description = COMPOUND_STRING("たまや ばくだんの わざを うけない"),
        .breakable = TRUE,
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("かちき"),
        .description = COMPOUND_STRING("のうりょくが さがると とくこうをあげる"),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("がんじょうあご"),
        .description = COMPOUND_STRING("キバの わざの いりょくが あがる"),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("フリーズスキン"),
        .description = COMPOUND_STRING("ノーマルわざが こおりになり つよくなる"),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("スイートベール"),
        .description = COMPOUND_STRING("じぶんと みかたが ねむらない"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("バトルスイッチ"),
        .description = COMPOUND_STRING("こうげきじに すがたが かわる"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("はやてのつばさ"),
        .description = COMPOUND_STRING("ひこうわざを さきに だせる"),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("メガランチャー"),
        .description = COMPOUND_STRING("はどうの わざの いりょくが あがる"),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("くさのけがわ"),
        .description = COMPOUND_STRING("くさむらで ぼうぎょが あがる"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("きょうせい"),
        .description = COMPOUND_STRING("みかたに どうぐを わたす"),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("かたいツメ"),
        .description = COMPOUND_STRING("ちょくせつ こうげきが つよくなる"),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("フェアリースキン"),
        .description = COMPOUND_STRING("ノーマルわざが フェアリーになり つよい"),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("ぬめぬめ"),
        .description = COMPOUND_STRING("ふれた あいての すばやさを さげる"),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("スカイスキン"),
        .description = COMPOUND_STRING("ノーマルわざが ひこうになり つよくなる"),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("おやこあい"),
        .description = COMPOUND_STRING("おやこで 2かい こうげきする"),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("ダークオーラ"),
        .description = COMPOUND_STRING("ぜんいんの あくわざが つよくなる"),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("フェアリーオーラ"),
        .description = COMPOUND_STRING("ぜんいんの フェアリーわざが つよくなる"),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("オーラブレイク"),
        .description = COMPOUND_STRING("オーラの こうかを ぎゃくにする"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("はじまりのうみ"),
        .description = COMPOUND_STRING("てんきを つよいあめに する"),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("おわりのだいち"),
        .description = COMPOUND_STRING("ひざしを とても つよくする"),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("デルタストリーム"),
        .description = COMPOUND_STRING("てんきを らんきりゅうに する"),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("じきゅうりょく"),
        .description = COMPOUND_STRING("こうげきを うけると ぼうぎょが あがる"),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("にげごし"),
        .description = COMPOUND_STRING("HPが はんぶんに なると にげだす"),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("ききかいひ"),
        .description = COMPOUND_STRING("HPが はんぶんに なると にげだす"),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("みずがため"),
        .description = COMPOUND_STRING("みずで ぼうぎょが ぐーんと あがる"),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("ひとでなし"),
        .description = COMPOUND_STRING("どくの あいてには きゅうしょ になる"),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("リミットシールド"),
        .description = COMPOUND_STRING("HPが はんぶんに なると こわれる"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("はりこみ"),
        .description = COMPOUND_STRING("こうたいした てきに ダメージ2ばい"),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("すいほう"),
        .description = COMPOUND_STRING("ほのおわざの いりょくを さげる"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("はがねつかい"),
        .description = COMPOUND_STRING("はがねの わざの いりょくが あがる"),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("ぎゃくじょう"),
        .description = COMPOUND_STRING("HPが はんぶんになると つよくなる"),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("ゆきかき"),
        .description = COMPOUND_STRING("あられのとき すばやさが はやくなる"),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("えんかく"),
        .description = COMPOUND_STRING("わざを せっしょく しないで だす"),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("うるおいボイス"),
        .description = COMPOUND_STRING("おとわざが みずタイプに なる"),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("ヒーリングシフト"),
        .description = COMPOUND_STRING("かいふくわざを せんせい できる"),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("エレキスキン"),
        .description = COMPOUND_STRING("ノーマルわざが でんきになり つよくなる"),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("サーフテール"),
        .description = COMPOUND_STRING("エレキフィールドで はやくなる"),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("ぎょぐん"),
        .description = COMPOUND_STRING("HPが おおいと つよい"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("ばけのかわ"),
        .description = COMPOUND_STRING("こうげきを 1どだけ ふせぐ"),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("きずなへんげ"),
        .description = COMPOUND_STRING("あいてを たおすと へんげする"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
        .name = _("スワームチェンジ"),
        .description = COMPOUND_STRING("HPが はんぶんになると すがたをかえる"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("ふしょく"),
        .description = COMPOUND_STRING("だれでも どくに することが できる"),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("ぜったいねむり"),
        .description = COMPOUND_STRING("ゆめうつつで ぜったいに めざめない"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
        .name = _("じょおうのいげん"),
        .description = COMPOUND_STRING("あいては せんせいわざを だせない"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("とびだすなかみ"),
        .description = COMPOUND_STRING("たおされたとき ダメージを あたえる"),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("おどりこ"),
        .description = COMPOUND_STRING("おどりわざに つづいて おどりだす"),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("バッテリー"),
        .description = COMPOUND_STRING("みかたの とくしゅの いりょくをあげる"),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("もふもふ"),
        .description = COMPOUND_STRING("せっしょく わざを はんげんする"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("ビビッドボディ"),
        .description = COMPOUND_STRING("あいては せんせいわざを だせない"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("ソウルハート"),
        .description = COMPOUND_STRING("ひんしに なるたびに とくこうが あがる"),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("カーリーヘアー"),
        .description = COMPOUND_STRING("ふれた あいての すばやさを さげる"),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("レシーバー"),
        .description = COMPOUND_STRING("みかたの とくせいを うけつぐ"),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("かがくのちから"),
        .description = COMPOUND_STRING("みかたの とくせいを うけつぐ"),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("ビーストブースト"),
        .description = COMPOUND_STRING("たおしたとき のうりょくが あがる"),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("ARシステム"),
        .description = COMPOUND_STRING("メモリで じぶんの タイプが かわる"),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
        .name = _("エレキメイカー"),
        .description = COMPOUND_STRING("エレキフィールドを はりめぐらせる"),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("サイコメイカー"),
        .description = COMPOUND_STRING("サイコフィールドを はりめぐらせる"),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("ミストメイカー"),
        .description = COMPOUND_STRING("ミストフィールドを はりめぐらせる"),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("グラスメイカー"),
        .description = COMPOUND_STRING("グラスフィールドを はりめぐらせる"),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("メタルプロテクト"),
        .description = COMPOUND_STRING("あいてに のうりょくを さげられない"),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("ファントムガード"),
        .description = COMPOUND_STRING("HPまんたんで うける ダメージが へる"),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("プリズムアーマー"),
        .description = COMPOUND_STRING("ばつぐんになる わざを よわめる"),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("ブレインフォース"),
        .description = COMPOUND_STRING("こうかばつぐんで いりょくが あがる"),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("ふとうのけん"),
        .description = COMPOUND_STRING("とうじょうじに こうげきが あがる"),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("ふくつのたて"),
        .description = COMPOUND_STRING("とうじょうじに ぼうぎょが あがる"),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("リベロ"),
        .description = COMPOUND_STRING("つかったわざの タイプに へんかする"),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("たまひろい"),
        .description = COMPOUND_STRING("しっぱいした ボールを ひろってくる"),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("わたげ"),
        .description = COMPOUND_STRING("こうげきを うけると みんなをおそくする"),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("スクリューおびれ"),
        .description = COMPOUND_STRING("わざを ひきうける こうかを むしする"),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("ミラーアーマー"),
        .description = COMPOUND_STRING("のうりょくダウンの こうかを はねかえす"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("うのミサイル"),
        .description = COMPOUND_STRING("うみから えものを くわえてくる"),
        .aiRating = 3,
        .cantBeSwapped = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeCopied = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeTraced = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("すじがねいり"),
        .description = COMPOUND_STRING("わざを ひきうける こうかを むしする"),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("じょうききかん"),
        .description = COMPOUND_STRING("みずか ほのおを うけると すばやくなる"),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("パンクロック"),
        .description = COMPOUND_STRING("おとわざの いりょくが あがる"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("すなはき"),
        .description = COMPOUND_STRING("こうげきをうけると すなあらしを おこす"),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("こおりのりんぷん"),
        .description = COMPOUND_STRING("とくしゅこうげきを はんげん する"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("じゅくせい"),
        .description = COMPOUND_STRING("きのみの こうかが ばいに なる"),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("アイスフェイス"),
        .description = COMPOUND_STRING("あたまの こおりが みがわりに なる"),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("パワースポット"),
        .description = COMPOUND_STRING("じぶん いがいが つよくなる"),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("ぎたい"),
        .description = COMPOUND_STRING("フィールドに よって タイプが かわる"),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("バリアフリー"),
        .description = COMPOUND_STRING("すべての バリアを けしさる"),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("はがねのせいしん"),
        .description = COMPOUND_STRING("みかたの はがね こうげきが つよくなる"),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("ほろびのボディ"),
        .description = COMPOUND_STRING("わざをうけると 3ターンご ひんしになる"),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("さまようたましい"),
        .description = COMPOUND_STRING("せっしょくすると とくせいを いれかえる"),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("ごりむちゅう"),
        .description = COMPOUND_STRING("つよくなるが おなじ わざしか だせない"),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("かがくへんかガス"),
        .description = COMPOUND_STRING("すべての とくせいの こうかが きえる"),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("パステルベール"),
        .description = COMPOUND_STRING("じぶんも みかたも どくに ならない"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("はらぺこスイッチ"),
        .description = COMPOUND_STRING("ターンのおわりに すがたを かえる"),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("クイックドロウ"),
        .description = COMPOUND_STRING("さきに こうどう できることが ある"),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("ふかしのこぶし"),
        .description = COMPOUND_STRING("まもりを むしして こうげき する"),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("きみょうなくすり"),
        .description = COMPOUND_STRING("みかたの のうりょくを もとにもどす"),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("トランジスタ"),
        .description = COMPOUND_STRING("でんきの わざの いりょくが あがる"),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("りゅうのあぎと"),
        .description = COMPOUND_STRING("ドラゴンの わざの いりょくが あがる"),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("しろのいななき"),
        .description = COMPOUND_STRING("あいてを たおすと こうげきが あがる"),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("くろのいななき"),
        .description = COMPOUND_STRING("あいてを たおすと とくこうが あがる"),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("じんばいったい"),
        .description = COMPOUND_STRING("しろのいななきも あわせもつ"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("じんばいったい"),
        .description = COMPOUND_STRING("くろのいななきも あわせもつ"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
        .name = _("とれないにおい"),
        .description = COMPOUND_STRING("とれないにおいが あいてに うつる"),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("こぼれダネ"),
        .description = COMPOUND_STRING("わざをうけると グラスフィールドに なる"),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("ねつこうかん"),
        .description = COMPOUND_STRING("ほのおの わざを うけると つよくなる"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("いかりのこうら"),
        .description = COMPOUND_STRING("HPが はんぶんに なると つよくなる"),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("きよめのしお"),
        .description = COMPOUND_STRING("じょうたいいじょうに ならない"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("こんがりボディ"),
        .description = COMPOUND_STRING("ほのおの わざで ぼうぎょが あがる"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("かぜのり"),
        .description = COMPOUND_STRING("かぜで こうげきが あがる"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("ばんけん"),
        .description = COMPOUND_STRING("いかく されると つよくなる"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("いわはこび"),
        .description = COMPOUND_STRING("いわの わざの いりょくが あがる"),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("ふうりょくでんき"),
        .description = COMPOUND_STRING("かぜで じゅうでん する"),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("マイティチェンジ"),
        .description = COMPOUND_STRING("ひっこむと マイティチェンジ する"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("しれいとう"),
        .description = COMPOUND_STRING("ヘイラッシャが いると しれいを だす"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("でんきにかえる"),
        .description = COMPOUND_STRING("ダメージを うけると じゅうでん する"),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("こだいかっせい"),
        .description = COMPOUND_STRING("はれで のうりょくが あがる"),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("クォークチャージ"),
        .description = COMPOUND_STRING("エレキフィールドで のうりょくが あがる"),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("おうごんのからだ"),
        .description = COMPOUND_STRING("へんかわざを むこうか する"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("わざわいのうつわ"),
        .description = COMPOUND_STRING("じぶんいがいの とくこうが さがる"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("わざわいのつるぎ"),
        .description = COMPOUND_STRING("じぶんいがいの ぼうぎょが さがる"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("わざわいのおふだ"),
        .description = COMPOUND_STRING("じぶんいがいの こうげきが さがる"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("わざわいのたま"),
        .description = COMPOUND_STRING("じぶんいがいの とくぼうが さがる"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("ひひいろのこどう"),
        .description = COMPOUND_STRING("せんとうで ひざしを つよくする"),
        .aiRating = 8,
    },

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("ハドロンエンジン"),
        .description = COMPOUND_STRING("エレキフィールドを はりめぐらせる"),
        .aiRating = 8,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("びんじょう"),
        .description = COMPOUND_STRING("のうりょくが あがると じぶんも あがる"),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("はんすう"),
        .description = COMPOUND_STRING("きのみを もう1かい だけ たべる"),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("きれあじ"),
        .description = COMPOUND_STRING("きるわざの いりょくが あがる"),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("そうだいしょう"),
        .description = COMPOUND_STRING("たおされた みかたの かずで つよくなる"),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("きょうえん"),
        .description = COMPOUND_STRING("みかたの のうりょくを コピーする"),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("どくげしょう"),
        .description = COMPOUND_STRING("こうげきをうけると どくびしを ばらまく"),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("テイルアーマー"),
        .description = COMPOUND_STRING("あいては せんせいわざを だせない"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("どしょく"),
        .description = COMPOUND_STRING("じめんを うけると かいふくする"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("きんしのちから"),
        .description = COMPOUND_STRING("へんかわざを しっぱい しない"),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("おもてなし"),
        .description = COMPOUND_STRING("みかたの HPを すこし かいふく"),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("しんがん"),
        .description = COMPOUND_STRING("ゴーストタイプに わざが あたる"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("おもかげやどし"),
        .description = COMPOUND_STRING("じぶんの すばやさを あげる"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("おもかげやどし"),
        .description = COMPOUND_STRING("じぶんの こうげきを あげる"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("おもかげやどし"),
        .description = COMPOUND_STRING("じぶんの とくぼうを あげる"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("おもかげやどし"),
        .description = COMPOUND_STRING("じぶんの ぼうぎょを あげる"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("どくのくさり"),
        .description = COMPOUND_STRING("もうどくに することが ある"),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("かんろなミツ"),
        .description = COMPOUND_STRING("あいての かいひりつを さげる"),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("テラスチェンジ"),
        .description = COMPOUND_STRING("テラスタルフォルムに へんか する"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("テラスシェル"),
        .description = COMPOUND_STRING("HPが まんたんの とき ダメージが へる"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("ゼロフォーミング"),
        .description = COMPOUND_STRING("てんきと フィールドを すべてゼロにする"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("どくくぐつ"),
        .description = COMPOUND_STRING("どくに なった あいては こんらんする"),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_PIERCING_DRILL] =
    {
        .name = _("かんつうドリル"),
        .description = COMPOUND_STRING("まもりを むしして こうげき する"),
    },

    [ABILITY_DRAGONIZE] =
    {
        .name = _("ドラゴンスキン"),
        .description = COMPOUND_STRING("ノーマルわざが ドラゴンになり つよい"),
    },

    [ABILITY_EELEVATE] =
    {
        .name = _("うなぎのぼり"),
        .description = COMPOUND_STRING("たおすと のうりょくあがる ういてる"),
    },

    [ABILITY_314] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("とくせい なし"),
    },

    [ABILITY_MEGA_SOL] =
    {
        .name = _("メガソーラー"),
        .description = COMPOUND_STRING("にほんばれの じょうたいで わざをつかう"),
    },

    [ABILITY_FIRE_MANE] =
    {
        .name = _("ほのおのたてがみ"),
        .description = COMPOUND_STRING("ほのおわざが つよくなる"),
    },

    [ABILITY_317] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("とくせい なし"),
    },

    [ABILITY_SPICY_SPRAY] =
    {
        .name = _("とびだすハバネロ"),
        .description = COMPOUND_STRING("ダメージを うけたとき やけど させる"),
    },
};
