PokemonTower_3F_Frlg_MapScripts::
	.byte 0

PokemonTower_3F_EventScript_Patricia::
	trainerbattle_single TRAINER_CHANNELER_PATRICIA, PokemonTower_3F_Text_PatriciaIntro, PokemonTower_3F_Text_PatriciaDefeat
	msgbox PokemonTower_3F_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_3F_EventScript_Carly::
	trainerbattle_single TRAINER_CHANNELER_CARLY, PokemonTower_3F_Text_CarlyIntro, PokemonTower_3F_Text_CarlyDefeat
	msgbox PokemonTower_3F_Text_CarlyPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_3F_EventScript_Hope::
	trainerbattle_single TRAINER_CHANNELER_HOPE, PokemonTower_3F_Text_HopeIntro, PokemonTower_3F_Text_HopeDefeat
	msgbox PokemonTower_3F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_3F_Text_HopeIntro::
	.string "… グググッ…!$"

PokemonTower_3F_Text_HopeDefeat::
	.string "むう…!\nたすかった!$"

PokemonTower_3F_Text_HopePostBattle::
	.string "シルフ スコープなる マシンなら\nゆうれい ポケモンの\lしょうたいを みやぶる というが…$"

PokemonTower_3F_Text_CarlyIntro::
	.string "… … …\n… ケケーッ!$"

PokemonTower_3F_Text_CarlyDefeat::
	.string "…あれ?\nわしは なに してたのじゃ$"

PokemonTower_3F_Text_CarlyPostBattle::
	.string "すまぬ! あくりょうが\nのりうつって あばれてるのじゃ!$"

PokemonTower_3F_Text_PatriciaIntro::
	.string "ええい あくりょうめ!\n…うわっ! ヘゲ…ケケーッ!$"

PokemonTower_3F_Text_PatriciaDefeat::
	.string "ふう!…\n…あくりょうは にげたか$"

PokemonTower_3F_Text_PatriciaPostBattle::
	.string "く! うえに いる なかまも\nあくりょうに おそわれた ようだ!$"

