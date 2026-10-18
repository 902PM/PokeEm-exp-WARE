PokemonTower_6F_Frlg_MapScripts::
	.byte 0

PokemonTower_6F_EventScript_MarowakGhost::
	lockall
	textcolor NPC_TEXT_COLOR_MON
	msgbox PokemonTower_6F_Text_BeGoneIntruders
	setwildbattle SPECIES_MAROWAK, 30
	special StartMarowakBattle
	waitstate
	goto_if_eq VAR_RESULT, FALSE, PokemonTower_6F_EventScript_DefeatedMarowakGhost  @ VAR_RESULT set by CB2_EndMarowakBattle
	applymovement LOCALID_PLAYER, PokemonTower_6F_Movement_ForcePlayerUp
	waitmovement 0
	releaseall
	end

PokemonTower_6F_EventScript_DefeatedMarowakGhost::
	message PokemonTower_6F_Text_GhostWasCubonesMother
	waitmessage
	waitse
	playmoncry SPECIES_MAROWAK, CRY_MODE_NORMAL
	waitbuttonpress
	waitmoncry
	msgbox PokemonTower_6F_Text_MothersSpiritWasCalmed
	setvar VAR_MAP_SCENE_POKEMON_TOWER_6F, 1
	releaseall
	end

PokemonTower_6F_Movement_ForcePlayerUp::
	walk_up
	step_end

PokemonTower_6F_EventScript_Angelica::
	trainerbattle_single TRAINER_CHANNELER_ANGELICA, PokemonTower_6F_Text_AngelicaIntro, PokemonTower_6F_Text_AngelicaDefeat
	msgbox PokemonTower_6F_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_6F_EventScript_Emilia::
	trainerbattle_single TRAINER_CHANNELER_EMILIA, PokemonTower_6F_Text_EmiliaIntro, PokemonTower_6F_Text_EmiliaDefeat
	msgbox PokemonTower_6F_Text_EmiliaPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_6F_EventScript_Jennifer::
	trainerbattle_single TRAINER_CHANNELER_JENNIFER, PokemonTower_6F_Text_JenniferIntro, PokemonTower_6F_Text_JenniferDefeat
	msgbox PokemonTower_6F_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_6F_Text_AngelicaIntro::
	.string "… チ… ニ… ウエッ!\n… テ… ルッ…!$"

PokemonTower_6F_Text_AngelicaDefeat::
	.string "…ううーむ$"

PokemonTower_6F_Text_AngelicaPostBattle::
	.string "ああ…! クラクラ する!\nひんけつ かも しれん…$"

PokemonTower_6F_Text_EmiliaIntro::
	.string "… カッ… ナ… シッ!\n… バ… リッ!$"

PokemonTower_6F_Text_EmiliaDefeat::
	.string "…なにかが\nわしの からだから ぬけてく$"

PokemonTower_6F_Text_EmiliaPostBattle::
	.string "わしの からだ から ぬけたもの…\nそれは かみのけ では ない!\lあくりょう じゃ$"

PokemonTower_6F_Text_JenniferIntro::
	.string "…ヒヒ… ヒ… ヒッ!\n… ヒ… ヒヒ…ヒヒッ!$"

PokemonTower_6F_Text_JenniferDefeat::
	.string "ひいーっ!$"

PokemonTower_6F_Text_JenniferPostBattle::
	.string "…ヒ ヒヒ ぃっーくしょん!\nあれ わしは どうしてたんじゃ?$"

PokemonTower_6F_Text_BeGoneIntruders::
	.string "… タチサレ!\n… ココカラ タチサレ…$"

PokemonTower_6F_Text_GhostWasCubonesMother::
	.string "ゆうれいの しょうたいは…\pカラカラの おかあさんの\nまよえる たましい だった!$"

PokemonTower_6F_Text_MothersSpiritWasCalmed::
	.string "やさしい カラカラの おかあさんに\nもどった たましいは\lぶじ てんに のぼって…\p… …きえて いきました$"

