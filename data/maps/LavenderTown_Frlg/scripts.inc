LavenderTown_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
	.byte 0

LavenderTown_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_LAVENDER_TOWN
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
	setflag FLAG_HIDE_SS_ANNE_RIVAL
	end

LavenderTown_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox LavenderTown_Text_DoYouBelieveInGhosts, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LavenderTown_EventScript_LittleGirlBelieve
	msgbox LavenderTown_Text_JustImaginingWhiteHand
	release
	end

LavenderTown_EventScript_LittleGirlBelieve::
	msgbox LavenderTown_Text_SoThereAreBelievers
	release
	end

LavenderTown_EventScript_WorkerM::
	msgbox LavenderTown_Text_TownKnownAsMonGraveSite, MSGBOX_NPC
	end

LavenderTown_EventScript_Boy::
	msgbox LavenderTown_Text_GhostsAppearedInTower, MSGBOX_NPC
	end

LavenderTown_EventScript_TownSign::
	msgbox LavenderTown_Text_TownSign, MSGBOX_SIGN
	end

LavenderTown_EventScript_SilphScopeNotice::
	msgbox LavenderTown_Text_SilphScopeNotice, MSGBOX_SIGN
	end

LavenderTown_EventScript_VolunteerHouseSign::
	msgbox LavenderTown_Text_VolunteerPokemonHouse, MSGBOX_SIGN
	end

LavenderTown_EventScript_PokemonTowerSign::
	msgbox LavenderTown_Text_PokemonTowerSign, MSGBOX_SIGN
	end

LavenderTown_Text_DoYouBelieveInGhosts::
	.string "あなた\nゆうれいは いると おもう?$"

LavenderTown_Text_SoThereAreBelievers::
	.string "…ふーん\nしんじてる ひとって いるんだ$"

LavenderTown_Text_JustImaginingWhiteHand::
	.string "あはは そうよね!\pあなたの みぎかたに\nしろい てが おかれてる なんて\l…あたしの みまちがいよね$"

LavenderTown_Text_TownKnownAsMonGraveSite::
	.string "ここは ポケモンの おはかで\nゆうめいな タウンだ…\pかっていた ポケモンが しんだとき\nポケモン タワーに もっていって\lめいふくを いのるのさ…$"

LavenderTown_Text_GhostsAppearedInTower::
	.string "さいきん ポケモン タワーに\nゆうれいが でる らしいんだ…\pどうも ロケットだんに ころされた\nポケモンの ゆうれい らしい…$"

LavenderTown_Text_TownSign::
	.string "ここは シオン タウン\nシオンは むらさき とうとい いろ$"

LavenderTown_Text_SilphScopeNotice::
	.string "みえない ポケモンも よくみえる?\nしん せいひん! シルフスコープ!\p… シルフ カンパニー$"

LavenderTown_Text_VolunteerPokemonHouse::
	.string "ここは あいの ボランティア\nポケモン ハウス$"

LavenderTown_Text_PokemonTowerSign::
	.string "ここは ポケモンの れいはい とう\nポケモン タワー$"

