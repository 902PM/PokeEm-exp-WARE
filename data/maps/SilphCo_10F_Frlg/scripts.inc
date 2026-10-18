SilphCo_10F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_10F_OnLoad
	.byte 0

SilphCo_10F_OnLoad::
	call_if_unset FLAG_SILPH_10F_DOOR, EventScript_Close10FDoor
	end

SilphCo_10F_EventScript_WorkerF::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_10F_EventScript_WorkerFRocketsGone
	msgbox SilphCo_10F_Text_WaaaImScared
	release
	end

SilphCo_10F_EventScript_WorkerFRocketsGone::
	msgbox SilphCo_10F_Text_KeepMeCryingASecret
	release
	end

SilphCo_10F_EventScript_FloorSign::
	msgbox SilphCo_10F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_10F_EventScript_Travis::
	trainerbattle_single TRAINER_SCIENTIST_TRAVIS, SilphCo_10F_Text_TravisIntro, SilphCo_10F_Text_TravisDefeat
	msgbox SilphCo_10F_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_10F_EventScript_Grunt::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_39, SilphCo_10F_Text_GruntIntro, SilphCo_10F_Text_GruntDefeat
	msgbox SilphCo_10F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_10F_Text_GruntIntro::
	.string "10かいに ようこそ!\nよく ここまで たどり ついたな!$"

SilphCo_10F_Text_GruntDefeat::
	.string "なんてこった$"

SilphCo_10F_Text_GruntPostBattle::
	.string "ここまで きたのは ほめるが\nしゃちょう しつは\lさらに うえの かい だぜ$"

SilphCo_10F_Text_TravisIntro::
	.string "もう…\nあそびは おわりに しよう!$"

SilphCo_10F_Text_TravisDefeat::
	.string "あうーん$"

SilphCo_10F_Text_TravisPostBattle::
	.string "おれに かって まんぞくか\nじゃ おうちに かえんな$"

SilphCo_10F_Text_WaaaImScared::
	.string "うえーん!\lこわいよー!$"

SilphCo_10F_Text_KeepMeCryingASecret::
	.string "あたしが ないてた こと…\lないしょに してね$"

SilphCo_10F_Text_FloorSign::
	.string "シルフ カンパニー ほんしゃ\n10かい$"

