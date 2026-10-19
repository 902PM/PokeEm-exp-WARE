Route1_Frlg_MapScripts::
	.byte 0

Route1_EventScript_MartClerk::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
	msgbox Route1_Text_WorkAtPokeMartTakeSample
	textcolor NPC_TEXT_COLOR_NEUTRAL
	checkitemspace ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	bufferitemname STR_VAR_2, ITEM_POTION
	playfanfare MUS_LEVEL_UP
	message gText_ObtainedTheItem
	waitmessage
	waitfanfare
	additem ITEM_POTION
	msgbox Route1_Text_PutPotionAway
	call EventScript_RestorePrevTextColor
	setflag FLAG_GOT_POTION_ON_ROUTE_1
	release
	end

Route1_EventScript_AlreadyGotPotion::
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
	release
	end

Route1_EventScript_Boy::
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
	end

Route1_EventScript_RouteSign::
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
	end

Route1_Text_WorkAtPokeMartTakeSample::
	.string "わたし フレンドリィ ショップの\nてんいん です\pべんりな どうぐや ですから\nトキワ シティで\lぜひ よって くださいね!\pそうだ!\nみほんを さしあげましょう\l… どうぞ!$"

Route1_Text_ComeSeeUsIfYouNeedPokeBalls::
	.string "ポケモンを つかまえる\nモンスターボール かう ときも\lショップへ いらして ください!$"

Route1_Text_PutPotionAway::
	.string "{PLAYER}は キズぐすりを バッグの\nどうぐポケットに しまった!$"

Route1_Text_CanJumpFromLedges::
	.string "みちに だんさが あるだろ!\pとび おりるのは\nちょっと こわいけど…\pマサラ タウンに かえる ときは\nはやく かえれて いいよ$"

Route1_Text_RouteSign::
	.string "ここは 1ばん どうろ\nマサラ タウン … トキワ シティ$"

