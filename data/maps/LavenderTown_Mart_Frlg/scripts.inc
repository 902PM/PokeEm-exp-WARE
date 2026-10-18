LavenderTown_Mart_Frlg_MapScripts::
	.byte 0

LavenderTown_Mart_EventScript_BaldingMan::
	msgbox LavenderTown_Mart_Text_SearchingForStatRaiseItems, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Rocker::
	msgbox LavenderTown_Mart_Text_DidYouBuyRevives, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Youngster::
	msgbox LavenderTown_Mart_Text_TrainerDuosCanChallengeYou, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LavenderTown_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
LavenderTown_Mart_Items::
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
	release
	end

LavenderTown_Mart_Text_SearchingForStatRaiseItems::
	.string "おじさんが さがしてる のは…\pポケモンが たたかってる とき\nのうりょくを いちじ てきに\lあげる どうぐ なんだが…\pプラスパワー ディフェンダー\nスピーダー スペシャルアップ…\p…という\nなまえ なんだが しらんかな?$"

LavenderTown_Mart_Text_DidYouBuyRevives::
	.string "げんきのかけらは かった?\nひんしじょうたいの ポケモンを\lげんきに する べんりな どうぐさ$"

LavenderTown_Mart_Text_TrainerDuosCanChallengeYou::
	.string "たまに ふたりぐみの トレーナーが\nいっぺんに ポケモンを\lだして くるときが あるよ\pその ときは こっちも\nポケモンを 2ひき だして\lたたかったら いいんだ$"

LavenderTown_Mart_Text_SoldNuggetFromMountainsFor5000::
	.string "この あいだ やまおくで\nきんのたまを ひろい ましてね!\pつかえない しなもの ですが\nうったら なんと 5000円でした$"

