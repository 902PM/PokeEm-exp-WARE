SilphCo_3F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_3F_OnLoad
	.byte 0

SilphCo_3F_OnLoad::
	call_if_unset FLAG_SILPH_3F_DOOR_1, EventScript_Close3FDoor1
	call_if_unset FLAG_SILPH_3F_DOOR_2, EventScript_Close3FDoor2
	end

SilphCo_3F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_3F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_3F_Text_WhatAmIToDo
	release
	end

SilphCo_3F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_3F_Text_YouAndYourMonsSavedUs
	release
	end

SilphCo_3F_EventScript_FloorSign::
	msgbox SilphCo_3F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_3F_EventScript_Jose::
	trainerbattle_single TRAINER_SCIENTIST_JOSE, SilphCo_3F_Text_JoseIntro, SilphCo_3F_Text_JoseDefeat
	msgbox SilphCo_3F_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_3F_EventScript_Grunt::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_25, SilphCo_3F_Text_GruntIntro, SilphCo_3F_Text_GruntDefeat
	msgbox SilphCo_3F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_3F_Text_WhatAmIToDo::
	.string "ぼく シルフ カンパニーの\nしゃいんです… おろおろ$"

SilphCo_3F_Text_YouAndYourMonsSavedUs::
	.string "{PLAYER}{KUN}と\nポケモンの おかげで\lほんと たすかったよ$"

SilphCo_3F_Text_GruntIntro::
	.string "おれたちの じゃまを する\nやつは じゃま なのだ!$"

SilphCo_3F_Text_GruntDefeat::
	.string "まいった!$"

SilphCo_3F_Text_GruntPostBattle::
	.string "… では ヒントだ!\nしまってる ドアの カギは\lカード キーで あけられる$"

SilphCo_3F_Text_JoseIntro::
	.string "わたしは\nシルフ カンパニーより\lロケットだんに みかた する!$"

SilphCo_3F_Text_JoseDefeat::
	.string "やるねえ!$"

SilphCo_3F_Text_JosePostBattle::
	.string "… なに\pロケットだんの れんちゅうが\nおもう ぞんぶん\lポケモンの けんきゅうを\lさせて くれるって いったんでね$"

SilphCo_3F_Text_FloorSign::
	.string "シルフ カンパニー ほんしゃ\n3かい$"

