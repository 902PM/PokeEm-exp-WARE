.equ REQUIRED_CAUGHT_MONS, 50

Route15_WestEntrance_2F_Frlg_MapScripts::
	.byte 0

Route15_WestEntrance_2F_EventScript_LeftBinoculars::
	lockall
	msgbox Route15_WestEntrance_2F_Text_LargeShiningBird
	showmonpic SPECIES_ARTICUNO, 10, 3
	delay 20
	waitbuttonpress
	hidemonpic
	setvar VAR_0x8004, SPECIES_ARTICUNO
	special SetSeenMon
	releaseall
	end

Route15_WestEntrance_2F_EventScript_RightBinoculars::
	msgbox Route15_WestEntrance_2F_Text_SmallIslandOnHorizon, MSGBOX_SIGN
	end

Route15_WestEntrance_2F_EventScript_Aide::
	lock
	faceplayer
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
	goto_if_set FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE, Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare
	msgbox Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetFrlgPokedexCount
	buffernumberstring STR_VAR_3, VAR_0x8006
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
	goto_if_lt VAR_0x8006, REQUIRED_CAUGHT_MONS, Aide_EventScript_HaventCaughtEnough
	msgbox Route15_WestEntrance_2F_Text_GreatHereYouGo
	checkitemspace ITEM_EXP_CHARM
	goto_if_eq VAR_RESULT, FALSE, Route10_PokemonCenter_1F_EventScript_NoRoomForItem
	giveitem_msg Route15_WestEntrance_2F_Text_ReceivedItemFromAide, ITEM_EXP_CHARM
	setflag FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
	release
	end

Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare::
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
	release
	end

Route15_WestEntrance_2F_EventScript_GetAideRequestInfo::
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
	bufferitemname STR_VAR_2, ITEM_EXP_CHARM
	return

Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough::
	.string "ぼく おぼえてます?\nほら…!\lオーキド はかせの じょしゅ です\pポケモンずかんが {STR_VAR_1}しゅるい\nあつまってる ようなら\l{STR_VAR_2}を わたす よう\lはかせに いわれ ました\p…… それでは さっそく\n{PLAYER}{KUN}!\lつかまえた ポケモンは\l{STR_VAR_1}しゅるい より おおい かな?$"

Route15_WestEntrance_2F_Text_GreatHereYouGo::
	.string "… … なるほど!\nつかまえた ポケモンは…\l{STR_VAR_3}しゅるい ですね!\nおめでとう!\pそれでは\nこれを おわたし します!$"

Route15_WestEntrance_2F_Text_ReceivedItemFromAide::
	.string "{PLAYER}は じょしゅ から\n{STR_VAR_2}を もらった!$"

Route15_WestEntrance_2F_Text_ExplainExpShare::
	.string "けいけんおまもりは\nポケモンの えられる けいけんちが\lふえる おまもり です!\pこれで たくさん ポケモンを\nそだてましょう!$"

Route15_WestEntrance_2F_Text_LargeShiningBird::
	.string "ぼうえんきょうを のぞいた…\pおおきな とりが\nキラキラ ひかりながら\lうみの ほうへ とんでいく…$"

Route15_WestEntrance_2F_Text_SmallIslandOnHorizon::
	.string "ぼうえんきょうを のぞいた!\pうみの むこうに…\nちいさな しまが みえる!$"

