RocketHideout_B3F_Frlg_MapScripts::
	.byte 0

RocketHideout_B3F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_14, RocketHideout_B3F_Text_Grunt1Intro, RocketHideout_B3F_Text_Grunt1Defeat
	msgbox RocketHideout_B3F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B3F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_15, RocketHideout_B3F_Text_Grunt2Intro, RocketHideout_B3F_Text_Grunt2Defeat
	msgbox RocketHideout_B3F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B3F_Text_Grunt1Intro::
	.string "あまり ロケットだんの\nじゃまを しない ほうが\lみの ため だぜ!$"

RocketHideout_B3F_Text_Grunt1Defeat::
	.string "くッ やられた!$"

RocketHideout_B3F_Text_Grunt1PostBattle::
	.string "… シルフスコープ? ああ!\nボスが シルフ カンパニーで\lぬすんで きた マシンの ことか!\l… どこかに ある はず だぜ$"

RocketHideout_B3F_Text_Grunt2Intro::
	.string "… きたな?\nうえの フロア から\lれんらくが きてるぜ!$"

RocketHideout_B3F_Text_Grunt2Defeat::
	.string "まけた… ばかな!$"

RocketHideout_B3F_Text_Grunt2PostBattle::
	.string "いく なら いって みろ!\nしかし エレベータは\lカギが ないと つかえないぜ!$"

