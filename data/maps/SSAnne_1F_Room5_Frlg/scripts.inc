SSAnne_1F_Room5_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room5_EventScript_Arthur::
	trainerbattle_single TRAINER_GENTLEMAN_ARTHUR, SSAnne_1F_Room5_Text_ArthurIntro, SSAnne_1F_Room5_Text_ArthurDefeat
	msgbox SSAnne_1F_Room5_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_1F_Room5_Text_ArthurIntro::
	.string "む きみは? だまって はいって\nしつれいな こどもだ!$"

SSAnne_1F_Room5_Text_ArthurDefeat::
	.string "ふん!\nれいぎを しらんよ きみは$"

SSAnne_1F_Room5_Text_ArthurPostBattle::
	.string "わたしは ひとりで いたいんだ\nでて いって くれ!$"

