LavenderTown_House2_Frlg_MapScripts::
	.byte 0

LavenderTown_House2_EventScript_NameRater::
	lock
	faceplayer
	msgbox LavenderTown_House2_Text_WantMeToRateNicknames, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseMon
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
	end

LavenderTown_House2_EventScript_ChooseMon::
	msgbox LavenderTown_House2_Text_CritiqueWhichMonsNickname
	special ChoosePartyMon
	goto_if_lt VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_CheckCanRateMon
	goto_if_ge VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_DontRateNickname
	end

LavenderTown_House2_EventScript_DontRateNickname::
	msgbox LavenderTown_House2_Text_ISeeComeVisitAgain
	release
	end

LavenderTown_House2_EventScript_CheckCanRateMon::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, LavenderTown_House2_EventScript_CantNicknameEgg
	special BufferMonNickname
	special IsMonOTIDNotPlayers
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
	specialvar VAR_RESULT, MonOTNameNotPlayer
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
	msgbox LavenderTown_House2_Text_GiveItANicerName, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseNewNickname
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
	end

LavenderTown_House2_EventScript_CantNicknameEgg::
	msgbox LavenderTown_House2_Text_ThatIsMerelyAnEgg
	release
	end

LavenderTown_House2_EventScript_CantNicknameTradeMon::
	msgbox LavenderTown_House2_Text_TrulyImpeccableName
	release
	end

LavenderTown_House2_EventScript_ChooseNewNickname::
	msgbox LavenderTown_House2_Text_WhatShallNewNicknameBe
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_ChoseNewNickname
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName
	release
	end

LavenderTown_House2_EventScript_ChoseNewNickname::
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsName
	release
	end

LavenderTown_House2_Text_WantMeToRateNicknames::
	.string "はい はい!\nわたしは せいめい はんだんし\lいうなれば なまえの うらないです\pはい あなたの ポケモンの\nニックネーム うらなって あげるよ$"

LavenderTown_House2_Text_CritiqueWhichMonsNickname::
	.string "どの ポケモンの\nニックネームを うらなうかね?$"

LavenderTown_House2_Text_GiveItANicerName::
	.string "うーむ {STR_VAR_1}か……\nなかなか\lいい ニックネームを つけたね\pでもねー\nもう すこしだけ いい なまえ\pわたしが つけて あげようか?\nどうかな?$"

LavenderTown_House2_Text_WhatShallNewNicknameBe::
	.string "そうか では\nどんな ニックネームに しようかな$"

LavenderTown_House2_Text_FromNowOnShallBeKnownAsName::
	.string "よし これから\nこの ポケモンは {STR_VAR_1}だ!\pまえより いい なまえ じゃないか\nよかったな!$"

LavenderTown_House2_Text_ISeeComeVisitAgain::
	.string "そうか\nわかった また きなさいよ$"

LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName::
	.string "よし これから\nこの ポケモンは {STR_VAR_1}だ!\pまえと おなじように みえるが\nこっちの ほうが だんぜん いいぞ!\lよかったな!$"

LavenderTown_House2_Text_TrulyImpeccableName::
	.string "うむ {STR_VAR_1}か!\nこれは すばらしい ニックネームだ\lけちの つけようもない!\pこれからも {STR_VAR_1}を\nかわいがって あげなさいよ!$"

LavenderTown_House2_Text_ThatIsMerelyAnEgg::
	.string "おいおい……\nそれは タマゴ じゃないか!$"

