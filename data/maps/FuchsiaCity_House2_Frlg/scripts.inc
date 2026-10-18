FuchsiaCity_House2_Frlg_MapScripts::
	.byte 0

FuchsiaCity_House2_EventScript_FishingGurusBrother::
	lock
	faceplayer
	goto_if_set FLAG_GOT_GOOD_ROD, FuchsiaCity_House2_EventScript_AlreadyGotGoodRod
	msgbox FuchsiaCity_House2_Text_DoYouLikeToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House2_EventScript_GiveGoodRod
	msgbox FuchsiaCity_House2_Text_OhThatsDisappointing
	release
	end

FuchsiaCity_House2_EventScript_AlreadyGotGoodRod::
	msgbox FuchsiaCity_House2_Text_HowAreTheFishBiting
	release
	end

FuchsiaCity_House2_EventScript_GiveGoodRod::
	msgbox FuchsiaCity_House2_Text_LikeYourStyleTakeThis
	checkitemspace ITEM_GOOD_ROD
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_House2_EventScript_NoRoomForGoodRod
	giveitem_msg FuchsiaCity_House2_Text_ReceivedGoodRod, ITEM_GOOD_ROD
	msgbox FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons
	setflag FLAG_GOT_GOOD_ROD
	release
	end

FuchsiaCity_House2_EventScript_NoRoomForGoodRod::
	msgbox FuchsiaCity_House2_Text_YouHaveNoRoomForGift
	release
	end

FuchsiaCity_House2_Text_DoYouLikeToFish::
	.string "わしは つりおやじの あに じゃ!\pもう しぬほど\nつりが すき なんだが\pきみは つり すき かな?$"

FuchsiaCity_House2_Text_LikeYourStyleTakeThis::
	.string "そうか!\nきみとは きが あいそうだ!\pこれ あげるから\nきみも つり まくりなさいよ!$"

FuchsiaCity_House2_Text_ReceivedGoodRod::
	.string "{PLAYER}は つりおやじから\nいいつりざおを もらった!$"

FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons::
	.string "つり こそ\nさいこうの ロマン だ!\pへぼいつりざおは\nコイキングしか つれ なんだが\nこの いいつりざおなら\nもっと いいもんが つれるんじゃ!$"

FuchsiaCity_House2_Text_OhThatsDisappointing::
	.string "なんじゃ… がっかりだ$"

FuchsiaCity_House2_Text_HowAreTheFishBiting::
	.string "やー {PLAYER}{KUN}!\pつり まくっとる かね!$"

FuchsiaCity_House2_Text_YouHaveNoRoomForGift::
	.string "ありゃー!\pいいもの あげようと したのに\nにもつが いっぱいじゃ!$"

