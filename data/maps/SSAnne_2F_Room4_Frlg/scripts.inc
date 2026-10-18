SSAnne_2F_Room4_Frlg_MapScripts::
	.byte 0

SSAnne_2F_Room4_EventScript_Lamar::
	trainerbattle_single TRAINER_GENTLEMAN_LAMAR, SSAnne_2F_Room4_Text_LamarIntro, SSAnne_2F_Room4_Text_LamarDefeat
	msgbox SSAnne_2F_Room4_Text_LamarPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_2F_Room4_EventScript_Dawn::
	trainerbattle_single TRAINER_LASS_DAWN, SSAnne_2F_Room4_Text_DawnIntro, SSAnne_2F_Room4_Text_DawnDefeat
	msgbox SSAnne_2F_Room4_Text_DawnPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_2F_Room4_Text_LamarIntro::
	.string "きみは… つよい ポケモンと\nめずらしい ポケモン\lどっちに かちを かんじるかね?$"

SSAnne_2F_Room4_Text_LamarDefeat::
	.string "やる ものだね!$"

SSAnne_2F_Room4_Text_LamarPostBattle::
	.string "わたしは… めずらしくて\nつよい ポケモンが ほしいねえ$"

SSAnne_2F_Room4_Text_DawnIntro::
	.string "あら せんじょう パーティでは\nみかけ なかった けど…?$"

SSAnne_2F_Room4_Text_DawnDefeat::
	.string "てかげん してよ$"

SSAnne_2F_Room4_Text_DawnPostBattle::
	.string "いいな つよい ポケモン!\nいいな… いいな…!$"

