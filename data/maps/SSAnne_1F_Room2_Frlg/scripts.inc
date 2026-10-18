SSAnne_1F_Room2_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room2_EventScript_Woman::
	msgbox SSAnne_1F_Room2_Text_CruisingAroundWorld, MSGBOX_NPC
	end

SSAnne_1F_Room2_EventScript_Ann::
	trainerbattle_single TRAINER_LASS_ANN, SSAnne_1F_Room2_Text_AnnIntro, SSAnne_1F_Room2_Text_AnnDefeat
	msgbox SSAnne_1F_Room2_Text_AnnPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_1F_Room2_EventScript_Tyler::
	trainerbattle_single TRAINER_YOUNGSTER_TYLER, SSAnne_1F_Room2_Text_TylerIntro, SSAnne_1F_Room2_Text_TylerDefeat
	msgbox SSAnne_1F_Room2_Text_TylerPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_1F_Room2_Text_TylerIntro::
	.string "ぼくは ポケモン だいすきだ!\nきみも ポケモン やるの!$"

SSAnne_1F_Room2_Text_TylerDefeat::
	.string "うわあ!\nつよいんだ きみって$"

SSAnne_1F_Room2_Text_TylerPostBattle::
	.string "ね ね!\nぼくと ともだちに なってよ!\pそれでね!\nポケモン こうかんとか しようよ$"

SSAnne_1F_Room2_Text_AnnIntro::
	.string "あたしが せかい じゅうから\nあつめた ポケモン みてー!$"

SSAnne_1F_Room2_Text_AnnDefeat::
	.string "いやーん!\nせかいの ポケモン なのに…$"

SSAnne_1F_Room2_Text_AnnPostBattle::
	.string "もう…! わたしの\nポケモン こんなに しちゃって!\pポケモン センターで\nげんきに してきて ほしいわ!$"

SSAnne_1F_Room2_Text_CruisingAroundWorld::
	.string "わたくし こども たちと\nせかいを まわって ますの おほほ$"

