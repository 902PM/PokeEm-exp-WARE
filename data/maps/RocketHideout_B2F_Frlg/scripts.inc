RocketHideout_B2F_Frlg_MapScripts::
	.byte 0

RocketHideout_B2F_EventScript_Grunt::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_13, RocketHideout_B2F_Text_GruntIntro, RocketHideout_B2F_Text_GruntDefeat
	msgbox RocketHideout_B2F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B2F_Text_GruntIntro::
	.string "シルフスコープを つかうと\nみえない ゆうれいも みえるって\lボスが いってたぞ$"

RocketHideout_B2F_Text_GruntDefeat::
	.string "まいった!$"

RocketHideout_B2F_Text_GruntPostBattle::
	.string "ロケットだんの ほんぶは\nちか 4かい まで ある\lボスまで たどり つけるかな?$"

