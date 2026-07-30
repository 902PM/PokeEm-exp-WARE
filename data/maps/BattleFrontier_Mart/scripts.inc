BattleFrontier_Mart_MapScripts::
	.byte 0

BattleFrontier_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
BattleFrontier_Mart_Pokemart:
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_SPORT_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_LEVEL_BALL
	pokemartlistend

BattleFrontier_Mart_EventScript_OldMan::
	msgbox BattleFrontier_Mart_Text_ChaperonGrandson, MSGBOX_NPC
	end

BattleFrontier_Mart_EventScript_OldWoman::
	lock
	applymovement LOCALID_FRONTIER_MART_OLD_WOMAN, Common_Movement_FaceDown
	waitmovement 0
	msgbox BattleFrontier_Mart_Text_ProteinMakeNiceGift, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Mart_EventScript_Boy::
	msgbox BattleFrontier_Mart_Text_FacilitiesDontAllowItems, MSGBOX_NPC
	end

BattleFrontier_Mart_Text_ChaperonGrandson:
	.string "{JPN}わたしらは マゴの つきそいで\nここに きたんだが\lせっかく だから きねんに\lなにか おみやげをと おもってな$"

BattleFrontier_Mart_Text_ProteinMakeNiceGift:
	.string "{JPN}ネエ じいさん\nこれなんか いいんじゃ ないかねえ?\lた… う… タウリ……ソ って いうやつ\pなんだか おいしそうよ$"

BattleFrontier_Mart_Text_FacilitiesDontAllowItems:
	.string "{JPN}バトルフロンティアの しせつでは\nせんとうちゅうに どうぐが つかえない\lルールの ところが おおいんだよね\lきびしいなー$"

