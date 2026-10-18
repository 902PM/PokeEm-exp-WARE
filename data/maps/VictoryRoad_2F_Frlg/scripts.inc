VictoryRoad_2F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_2F_OnLoad
	.byte 0

VictoryRoad_2F_OnLoad::
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_SetRockBarrier1
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_SetRockBarrier2
	end

VictoryRoad_2F_EventScript_SetRockBarrier1::
	setmetatile 13, 10, METATILE_Cave_RockBarrier_Top, 1
	setmetatile 13, 11, METATILE_Cave_RockBarrier_Bottom, 1
	return

VictoryRoad_2F_EventScript_SetRockBarrier2::
	setmetatile 33, 16, METATILE_Cave_RockBarrier_Top, 1
	setmetatile 33, 17, METATILE_Cave_RockBarrier_Bottom, 1
	return

VictoryRoad_2F_EventScript_FloorSwitch1::
	lockall
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed
	setmetatile 13, 10, METATILE_Cave_Floor_Ledge_Top, 0
	setmetatile 13, 11, METATILE_Cave_Floor_Ledge_Bottom, 0
	playse SE_ICE_BREAK
	special DrawWholeMapView
	waitse
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER1
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
	releaseall
	end

VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed::
	releaseall
	end

VictoryRoad_2F_EventScript_FloorSwitch2::
	lockall
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed
	setmetatile 33, 16, METATILE_Cave_Floor_Ledge_Top, 0
	setmetatile 33, 17, METATILE_Cave_Floor_Ledge_Bottom, 0
	playse SE_ICE_BREAK
	special DrawWholeMapView
	waitse
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER2
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
	releaseall
	end

VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed::
	releaseall
	end

VictoryRoad_2F_EventScript_Dawson::
	trainerbattle_single TRAINER_POKEMANIAC_DAWSON, VictoryRoad_2F_Text_DawsonIntro, VictoryRoad_2F_Text_DawsonDefeat
	msgbox VictoryRoad_2F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_EventScript_Daisuke::
	trainerbattle_single TRAINER_BLACK_BELT_DAISUKE, VictoryRoad_2F_Text_DaisukeIntro, VictoryRoad_2F_Text_DaisukeDefeat
	msgbox VictoryRoad_2F_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_EventScript_Nelson::
	trainerbattle_single TRAINER_JUGGLER_NELSON, VictoryRoad_2F_Text_NelsonIntro, VictoryRoad_2F_Text_NelsonDefeat
	msgbox VictoryRoad_2F_Text_NelsonPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_EventScript_Gregory::
	trainerbattle_single TRAINER_JUGGLER_GREGORY, VictoryRoad_2F_Text_GregoryIntro, VictoryRoad_2F_Text_GregoryDefeat
	msgbox VictoryRoad_2F_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_EventScript_Vincent::
	trainerbattle_single TRAINER_TAMER_VINCENT, VictoryRoad_2F_Text_VincentIntro, VictoryRoad_2F_Text_VincentDefeat
	msgbox VictoryRoad_2F_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_Text_DawsonIntro::
	.string "ここを ぶじに ぬければ\nしてんのうに あえるぞ!$"

VictoryRoad_2F_Text_DawsonDefeat::
	.string "… ありー!$"

VictoryRoad_2F_Text_DawsonPostBattle::
	.string "ポケモンの ちしき だったら\nぼくは まけないと おもうぞ!$"

VictoryRoad_2F_Text_DaisukeIntro::
	.string "ここがッ!\nトレーナー さいごの しれん!\lチャンピオン ロード だあ!$"

VictoryRoad_2F_Text_DaisukeDefeat::
	.string "チェストー!$"

VictoryRoad_2F_Text_DaisukePostBattle::
	.string "ここも いたる ところに\nしかけが ある! こまったときは\lいわを おして みろ!$"

VictoryRoad_2F_Text_NelsonIntro::
	.string "ここに きた から には\nしてんのうに いどむ つもりだな!$"

VictoryRoad_2F_Text_NelsonDefeat::
	.string "… できるッ!$"

VictoryRoad_2F_Text_NelsonPostBattle::
	.string "そうだ! {RIVAL}も\nここを ぬけてったぜ!$"

VictoryRoad_2F_Text_VincentIntro::
	.string "ピシッ ピシーッ!\nムチが しなるぜーッ!$"

VictoryRoad_2F_Text_VincentDefeat::
	.string "ひゅーッ!$"

VictoryRoad_2F_Text_VincentPostBattle::
	.string "さすが チャンピオン ロードに\nくる だけの ことは あるな…!$"

VictoryRoad_2F_Text_GregoryIntro::
	.string "どうだ!\nチャンピオン ロードは きついか?$"

VictoryRoad_2F_Text_GregoryDefeat::
	.string "よし ごうかくだ!$"

VictoryRoad_2F_Text_GregoryPostBattle::
	.string "ここで へばって\nひきかえす やつも おおいぜ!$"

@ Unused, old text for Moltres
VictoryRoad_2F_Text_Gyaoo::
	.string "ギヤーオ!$"

Text_DoubleEdgeTeach::
	.string "きみは すてみで\nこの チャンピオンロードを\lぬけて きたのだな!\pがんばりを みとめて\nすてみタックルを おしえよう!\pどうだ おしえて ほしいか?$"

Text_DoubleEdgeDeclined::
	.string "きみには いつでも おしえよう\nまた くるがいい$"

Text_DoubleEdgeWhichMon::
	.string "どの ポケモンに\nおしえさせて みるか?$"

Text_DoubleEdgeTaught::
	.string "ポケモンリーグでも その いきだ!\nすてみで ぶつかって いけ!$"

