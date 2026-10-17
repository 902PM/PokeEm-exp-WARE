FourIsland_Mart_Frlg_MapScripts::
	.byte 0

FourIsland_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FourIsland_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
FourIsland_Mart_Items::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_MAX_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

FourIsland_Mart_EventScript_Camper::
	msgbox FourIsland_Mart_Text_IcefallCaveIsFrigid, MSGBOX_NPC
	end

FourIsland_Mart_Text_LoreleiGrewUpOnThisIsland::
	.string "この しまから\nえらく つよい トレーナーが\lうまれたんだ!\pしってんだろ?\nしてんのうの カンナちゃん!\pおじいさん カンナちゃんが\nまだ ちーさい ときに\lポケモン おしえて やったんだよ$"

FourIsland_Mart_Text_IcefallCaveIsFrigid::
	.string "ナナシマは あたたかい ちほうだが\nいてだきのどうくつ だけは\lせいそく している ポケモンの\lれいきで とても さむいぞ\lきをつけろ!$"

