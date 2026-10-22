MagmaHideout_3F_1R_MapScripts::
	.byte 0

MagmaHideout_3F_1R_EventScript_Grunt9::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_9, MagmaHideout_3F_1R_Text_Grunt9Intro, MagmaHideout_3F_1R_Text_Grunt9Defeat
	msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_1R_EventScript_Grunt16::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_16, MagmaHideout_3F_1R_Text_Grunt16Intro, MagmaHideout_3F_1R_Text_Grunt16Defeat
	msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_1R_Text_Grunt9Intro:
	.string "なんで オレは こんなところの\nたんとう なんだよ!\pひだりのみみ が あつい じゃねーか!$"

MagmaHideout_3F_1R_Text_Grunt9Defeat:
	.string "あつくて ヘロヘロ……$"

MagmaHideout_3F_1R_Text_Grunt9PostBattle:
	.string "こんな マグマだらけの かざんの なかで\nフードを かぶってる オレたち へん?$"

MagmaHideout_3F_1R_Text_Grunt16Intro:
	.string "ウフフ……!\pアタシたちは リーダーが めざしている\nすばらしい もくてきを\lじつげん するために あつまったの……\pそれを じゃまを しようとする\nおろかものは ぜったい ゆるさない!$"

MagmaHideout_3F_1R_Text_Grunt16Defeat:
	.string "ウフフ…… あなどれない ひと……$"

MagmaHideout_3F_1R_Text_Grunt16PostBattle:
	.string "ウフフ…… せいぜい あがいて みれば?\nさいごに わらうのは……\lアタシたち マグマだん なんだから……$"
