FuchsiaCity_WardensHouse_Frlg_MapScripts::
	.byte 0

FuchsiaCity_WardensHouse_EventScript_Warden::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HM04, FuchsiaCity_WardensHouse_EventScript_ExplainStrength
	goto_if_set FLAG_HIDE_SAFARI_ZONE_WEST_GOLD_TEETH, FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth
	msgbox FuchsiaCity_WardensHouse_Text_HifFuffHefifoo, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, FuchsiaCity_WardensHouse_EventScript_WardenYes
	call_if_eq VAR_RESULT, NO, FuchsiaCity_WardensHouse_EventScript_WardenNo
	release
	end

FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_OBTAIN_TMHM
	message FuchsiaCity_WardensHouse_Text_GaveGoldTeethToWarden
	waitmessage
	waitfanfare
	msgbox FuchsiaCity_WardensHouse_Text_WardenPoppedInHisTeeth
	call EventScript_RestorePrevTextColor
	checkplayergender
	call_if_eq VAR_RESULT, MALE, FuchsiaCity_WardensHouse_EventScript_WardenThanksMale
	call_if_eq VAR_RESULT, FEMALE, FuchsiaCity_WardensHouse_EventScript_WardenThanksFemale
	giveitem_msg FuchsiaCity_WardensHouse_Text_ReceivedHM04FromWarden, ITEM_HM04
	setflag FLAG_GOT_HM04
	removeitem ITEM_GOLD_TEETH
	release
	end

FuchsiaCity_WardensHouse_EventScript_WardenThanksMale::
	msgbox FuchsiaCity_WardensHouse_Text_ThanksSonGiveYouSomething
	return

FuchsiaCity_WardensHouse_EventScript_WardenThanksFemale::
	msgbox FuchsiaCity_WardensHouse_Text_ThanksLassieGiveYouSomething
	return

FuchsiaCity_WardensHouse_EventScript_WardenYes::
	msgbox FuchsiaCity_WardensHouse_Text_AhHowheeHoHoo
	return

FuchsiaCity_WardensHouse_EventScript_WardenNo::
	msgbox FuchsiaCity_WardensHouse_Text_HeOhayHeHaHoo
	return

FuchsiaCity_WardensHouse_EventScript_ExplainStrength::
	msgbox FuchsiaCity_WardensHouse_Text_ExplainStrength
	release
	end

FuchsiaCity_WardensHouse_EventScript_DisplaySign1::
	msgbox FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay, MSGBOX_SIGN
	end

FuchsiaCity_WardensHouse_EventScript_DisplaySign2::
	msgbox FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay, MSGBOX_SIGN
	end

FuchsiaCity_WardensHouse_Text_HifFuffHefifoo::
	.string "えんちょう『ふぁいへんひゃ\nふへほ はんひ\pひへは ほはへへ ひほうはッ!\nはッ はふへへ ふへ!$"

FuchsiaCity_WardensHouse_Text_AhHowheeHoHoo::
	.string "よほひふ はほひまふは!\nはふは はふぁりほーんひゃ!$"

FuchsiaCity_WardensHouse_Text_HeOhayHeHaHoo::
	.string "はひ?\nほは ほうは…\lひひ ほはへには はのはんはッ!$"

FuchsiaCity_WardensHouse_Text_GaveGoldTeethToWarden::
	.string "えんちょうは {PLAYER}から\nきんのいればを もらった!$"

FuchsiaCity_WardensHouse_Text_WardenPoppedInHisTeeth::
	.string "もらった いればを\nいそいで くちに はめた!$"

FuchsiaCity_WardensHouse_Text_ThanksSonGiveYouSomething::
	.string "えんちょう『すんまへん!\lほんま たすかったわあ!\lだれに なに いうても\lぜんぜん つうじへんし\pはずかしゅうて じむしょも\nかお だせへん かったんや\lそや ぼうず!\lあんがとな\lおれいに ええもん やるわ!$"

FuchsiaCity_WardensHouse_Text_ThanksLassieGiveYouSomething::
	.string "えんちょう『すんまへん!\lほんま たすかったわあ!\lだれに なに いうても\lぜんぜん つうじへんし\pはずかしゅうて じむしょも\nかお だせへん かったんや\lそや じょーちゃん!\lあんがとな\lおれいに ええもん やるわ!$"

FuchsiaCity_WardensHouse_Text_ReceivedHM04FromWarden::
	.string "{PLAYER}は えんちょうから\nひでんマシン04を もらった!$"

FuchsiaCity_WardensHouse_Text_ExplainStrength::
	.string "えんちょう『ひでんマシン04の\nなかみは かいりき やで!\pポケモンが\nちから もちに なってな\lたたかわん ときは\lいわを おすように なるで!\pそや… それから!\nサファリ ゾーンで\lトレジャー ハウスは みつけたか?$"

@ Unused
FuchsiaCity_WardensHouse_Text_YouHaveTooMuchStuff::
	.string "なんや にもつ\nいっぱいやんけ!$"

FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay::
	.string "ポケモンの カセキやら\nしゃしんが かざって ある!$"

FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay::
	.string "ふるい ポケモン グッズが\nかざって ある!$"

