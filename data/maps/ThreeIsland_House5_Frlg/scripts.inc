ThreeIsland_House5_Frlg_MapScripts::
	.byte 0

ThreeIsland_House5_EventScript_LittleGirl::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_House5_EventScript_LittleGirlLostelleFound
	msgbox ThreeIsland_House5_Text_ImNotLostelle
	release
	end

ThreeIsland_House5_EventScript_LittleGirlLostelleFound::
	msgbox ThreeIsland_House5_Text_IllGoPlayWithLostelle
	release
	end

ThreeIsland_House5_Text_ImNotLostelle::
	.string "え? あたし\nマヨちゃんじゃ ないよ\pマヨちゃんなら たぶん\nおべんとうに つかう きのみを\lもりで ひろってるよ$"

ThreeIsland_House5_Text_IllGoPlayWithLostelle::
	.string "マヨちゃん とこ\nあそびに いこっかなー$"

