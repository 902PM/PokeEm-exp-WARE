SSAnne_B1F_Room4_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room4_EventScript_Leonard::
	trainerbattle_single TRAINER_SAILOR_LEONARD, SSAnne_B1F_Room4_Text_LeonardIntro, SSAnne_B1F_Room4_Text_LeonardDefeat
	msgbox SSAnne_B1F_Room4_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room4_EventScript_Duncan::
	trainerbattle_single TRAINER_SAILOR_DUNCAN, SSAnne_B1F_Room4_Text_DuncanIntro, SSAnne_B1F_Room4_Text_DuncanDefeat
	msgbox SSAnne_B1F_Room4_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room4_Text_LeonardIntro::
	.string "ふなのりに\nケンカは つきものだ やるか!$"

SSAnne_B1F_Room4_Text_LeonardDefeat::
	.string "おし!\nいい しょうぶ だった$"

SSAnne_B1F_Room4_Text_LeonardPostBattle::
	.string "ははは!\nおまえも ふなのりに ならんか?$"

SSAnne_B1F_Room4_Text_DuncanIntro::
	.string "そら こい!\nふなのり だましいに かけて かつ$"

SSAnne_B1F_Room4_Text_DuncanDefeat::
	.string "ふなのり だましいも\nおまえには まけた!$"

SSAnne_B1F_Room4_Text_DuncanPostBattle::
	.string "クチバの みなと といえば\nつりおやじは げんき かなー?$"

