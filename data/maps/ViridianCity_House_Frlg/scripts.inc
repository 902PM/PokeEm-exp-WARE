ViridianCity_House_Frlg_MapScripts::
	.byte 0

ViridianCity_House_EventScript_BaldingMan::
	msgbox ViridianCity_House_Text_NicknamingIsFun, MSGBOX_NPC
	end

ViridianCity_House_EventScript_LittleGirl::
	msgbox ViridianCity_House_Text_MyDaddyLovesMonsToo, MSGBOX_NPC
	end

ViridianCity_House_EventScript_Speary::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
	msgbox ViridianCity_House_Text_Speary
	waitmoncry
	release
	end

ViridianCity_House_EventScript_NicknameSign::
	msgbox ViridianCity_House_Text_SpearowNameSpeary, MSGBOX_SIGN
	end

ViridianCity_House_Text_NicknamingIsFun::
	.string "ニックネームを かんがえることは\nたのしい…が むずかしい!\pこった ニックネームも いいが\nおぼえやすいのが いちばん やな!$"

ViridianCity_House_Text_MyDaddyLovesMonsToo::
	.string "うちの とうちゃんも\nポケモン だいすきなのよ!$"

ViridianCity_House_Text_Speary::
	.string "オニチャン『チュ チュン!$"

ViridianCity_House_Text_SpearowNameSpeary::
	.string "オニスズメ\nめいめい 「オニチャン」$"

