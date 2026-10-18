VermilionCity_House1_Frlg_MapScripts::
	.byte 0

VermilionCity_House1_EventScript_FishingGuru::
	lock
	faceplayer
	goto_if_set FLAG_GOT_OLD_ROD, VermilionCity_House1_EventScript_AlreadyGotOldRod
	msgbox VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, VermilionCity_House1_EventScript_GiveOldRod
	msgbox VermilionCity_House1_Text_OhThatsSoDisappointing
	release
	end

VermilionCity_House1_EventScript_AlreadyGotOldRod::
	msgbox VermilionCity_House1_Text_HowAreTheFishBiting
	release
	end

VermilionCity_House1_EventScript_GiveOldRod::
	checkitemspace ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_House1_EventScript_NoRoomForOldRod
	additem ITEM_OLD_ROD
	msgbox VermilionCity_House1_Text_TakeThisAndFish
	msgreceiveditem VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru, ITEM_OLD_ROD
	setflag FLAG_GOT_OLD_ROD
	msgbox VermilionCity_House1_Text_FishingIsAWayOfLife
	release
	end

VermilionCity_House1_EventScript_NoRoomForOldRod::
	msgbox VermilionCity_House1_Text_NoRoomForNiceGift
	release
	end

VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish::
	.string "わしは つりおやじ じゃ!\pもう しぬほど\nつりが すき なんだが\pきみは つり すき かな?$"

VermilionCity_House1_Text_TakeThisAndFish::
	.string "そうか!\nきみとは きが あいそうだ!\pこれ あげるから\nきみも つり まくりなさいよ!$"

VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru::
	.string "{PLAYER}は つりおやじから\nボロのつりざおを もらった!$"

VermilionCity_House1_Text_FishingIsAWayOfLife::
	.string "つり こそ\nさいこうの ロマン だ!\pうみでも かわでも!\pえんりょ なく\nつりざおを つかって くれい!$"

VermilionCity_House1_Text_OhThatsSoDisappointing::
	.string "なんじゃ… がっかりだ$"

VermilionCity_House1_Text_HowAreTheFishBiting::
	.string "やー {PLAYER}{KUN}!\pつり まくっとる かね!$"

VermilionCity_House1_Text_NoRoomForNiceGift::
	.string "ありゃー!\pいいもの あげようと したのに\nにもつが いっぱいじゃ!$"

