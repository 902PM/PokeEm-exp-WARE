ThreeIsland_House1_Frlg_MapScripts::
	.byte 0

ThreeIsland_House1_EventScript_Lostelle::
	lock
	faceplayer
	special GetPlayerBigGuyGirlString
	msgbox ThreeIsland_House1_Text_YoureAlwaysSoCool
	release
	end

ThreeIsland_House1_EventScript_DisplayCase::
	msgbox ThreeIsland_House1_Text_RareRocksGemsDisplayed, MSGBOX_SIGN
	end

ThreeIsland_House1_Text_YoureAlwaysSoCool::
	.string "マヨ『わー {STR_VAR_1}だ\nいっつも かっこいいねえ\pいつか {STR_VAR_1} にも\nおべんとう つくって あげる!$"

ThreeIsland_House1_Text_RareRocksGemsDisplayed::
	.string "めずらしい いしが かざってある!$"

