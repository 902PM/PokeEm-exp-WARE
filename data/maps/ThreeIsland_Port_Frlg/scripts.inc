ThreeIsland_Port_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_Port_OnTransition
	.byte 0

ThreeIsland_Port_OnTransition::
	clearflag FLAG_SYS_PC_STORAGE_DISABLED
	setflag FLAG_SEVII_DETOUR_FINISHED
	end

ThreeIsland_Port_EventScript_Woman::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, ThreeIsland_Port_EventScript_WomanLostelleFound
	goto_if_ge VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_Port_EventScript_WomanBikersGone
	msgbox ThreeIsland_Port_Text_IllCallThePolice
	release
	end

ThreeIsland_Port_EventScript_WomanLostelleFound::
	msgbox ThreeIsland_Port_Text_EverythingTurnedOutForBest
	release
	end

ThreeIsland_Port_EventScript_WomanBikersGone::
	msgbox ThreeIsland_Port_Text_ThankGoodnessBikersGone
	release
	end

ThreeIsland_Port_EventScript_Biker1::
	msgbox ThreeIsland_Port_Text_WereKantoRiderFederation, MSGBOX_NPC
	end

ThreeIsland_Port_EventScript_Biker2::
	lock
	msgbox ThreeIsland_Port_Text_ForkOverMoney
	release
	end

ThreeIsland_Port_Text_WereKantoRiderFederation::
	.string "おれたち カントーれんごう!\nパララ パララ パラリラー\pホーンが ないから\nくちで いってるぜえ!$"

ThreeIsland_Port_Text_ForkOverMoney::
	.string "よー よー おばちゃん\nこづかい くれよ!$"

ThreeIsland_Port_Text_IllCallThePolice::
	.string "あれーっ!\pあんたたち どこから きたの!\nけ…けいさつを よぶわよッ!$"

ThreeIsland_Port_Text_ThankGoodnessBikersGone::
	.string "ぼうそうぞく でて いったの?\pまー よかった!\nさっきは キモ ひやしたわよ$"

ThreeIsland_Port_Text_EverythingTurnedOutForBest::
	.string "ぼうそうぞくも でて いったし\nマヨちゃんも ぶじ だったし\lほんと よかったわー$"

