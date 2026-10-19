.equ GAVE_PROFILE,  VAR_TEMP_1

MysteryEventClub_EventScript_Woman::
	lock
	faceplayer
	goto_if_eq GAVE_PROFILE, TRUE, EventScript_AlreadyGaveProfile
	goto_if_set FLAG_SYS_SET_TRAINER_CARD_PROFILE, EventScript_GivenProfileBefore
	msgbox Text_IdLoveToHearYourProfile
	goto EventScript_AskForProfile
	end

EventScript_AlreadyGaveProfile:
	msgbox Text_TellMoreNextTime
	release
	end

EventScript_AskForProfile:
	message Text_TellMeWhatsYourProfile
	waitmessage
	multichoice 18, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, EventScript_AcceptGiveProfile
	case 1, EventScript_DeclineGiveProfile
	case 2, EventScript_ProfileInfo
	case MULTI_B_PRESSED, EventScript_DeclineGiveProfile
	end

EventScript_ProfileInfo:
	msgbox Text_ExplainProfile
	goto EventScript_AskForProfile
	end

EventScript_AcceptGiveProfile:
	msgbox Text_WhatsYourProfile
	closemessage
	goto EventScript_GiveProfile
	end

EventScript_CancelGiveProfile:
	msgbox Text_DecidedNotTo
	release
	end

EventScript_GaveProfile:
	setvar GAVE_PROFILE, TRUE
	setvar VAR_0x8004, 0
	special ShowEasyChatProfile
	waitmessage
	delay 80
	msgbox Text_ProfileSaysSomethingAboutYou
	release
	end

EventScript_DeclineGiveProfile:
	msgbox Text_DontBeLikeThat
	release
	end

EventScript_GivenProfileBefore:
	msgbox Text_HiWeMeetAgain
	goto EventScript_AskForNewProfile
	end

EventScript_AskForNewProfile:
	message Text_ChangeYourProfile
	waitmessage
	multichoice 18, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, EventScript_AcceptGiveNewProfile
	case 1, EventScript_DeclineGiveNewProfile
	case 2, EventScript_ProfileInfo2
	@case MULTI_B_PRESSED, EventScript_DeclineGiveNewProfile
	end

EventScript_ProfileInfo2:
	msgbox Text_ExplainProfile
	goto EventScript_AskForNewProfile
	end

EventScript_AcceptGiveNewProfile:
	msgbox Text_WhatAreYouLikeNow
	closemessage
	goto EventScript_GiveProfile
	end

EventScript_DeclineGiveNewProfile:
	msgbox Text_LikeProfileWayItIs
	release
	end

EventScript_GaveSpecialProfile:
	setvar GAVE_PROFILE, TRUE
	setvar VAR_0x8004, 0
	special ShowEasyChatProfile
	waitmessage
	delay 80
	msgbox Text_HeardThatBefore
	release
	end

EventScript_GiveProfile:
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_0x8004, 0, EventScript_GaveSpecialProfile
	goto_if_eq VAR_RESULT, FALSE, EventScript_CancelGiveProfile
	goto_if_eq VAR_RESULT, TRUE, EventScript_GaveProfile
	end

Text_IdLoveToHearYourProfile:
	.string "ハーイ はじめまして!\p……って\nこっちが あいさつ したんだから\lあなただって あいさつ かえしてよ!\pそうよ せっかく だから\nじこしょうかい してほしいな\lなにか プロフィールを きかせて!$"

Text_TellMeWhatsYourProfile:
	.string "あなた らしい\nすてきな プロフィール きかせて!$"

Text_ExplainProfile:
	.string "プロフィールは すきな ことばを\n4つ くみあわせて つくるのよ\pくみあわせる ことばは\nたくさん あるの!\pあなたが わかりやすいように\nいくつかの グループに\lわけて あるから まず あなたは\lグループを えらんでから\lその なかの ことばを えらんでね!\p……むずかしいって かお してるわね\nとにかく やって みましょ!$"

Text_WhatsYourProfile:
	.string "どんな プロフィール なの?$"

Text_DontBeLikeThat:
	.string "えー\nおしえて くれても いいじゃないー$"

Text_DecidedNotTo:
	.string "あ やめちゃうの?\nけっこう きまぐれねー$"

Text_HiWeMeetAgain:
	.string "ハーイ また あったわね!$"

Text_ChangeYourProfile:
	.string "あたらしい プロフィールが\nできたのかな?$"

Text_WhatAreYouLikeNow:
	.string "いまの あなたは どんな かんじ?\nさっそく おしえて!$"

Text_LikeProfileWayItIs:
	.string "いまの ままが いいのね\pわたしも それがいいと おもうわ$"

Text_ProfileSaysSomethingAboutYou:
	.string "ふむふむ\pあなたって ひとが よく わかる\nすてきな じこしょうかいね!\lわたしたち これで\lもっと なかよしに なったわね!\lうふっ$"

Text_HeardThatBefore:
	.string "なんか きいた ことあるわ それ……\nとおくに すんでる いとこが\lいつも いっていた ような……?$"

Text_TellMoreNextTime:
	.string "またこんど あなたのこと\nもっと おしえてねっ!$"

