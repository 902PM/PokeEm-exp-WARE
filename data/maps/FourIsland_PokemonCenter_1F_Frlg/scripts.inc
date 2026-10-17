FourIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FourIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_FOUR_ISLAND
	end

FourIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

FourIsland_PokemonCenter_1F_EventScript_Man::
	msgbox FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave, MSGBOX_NPC
	end

FourIsland_PokemonCenter_1F_EventScript_Woman::
	msgbox FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore, MSGBOX_NPC
	end

FourIsland_PokemonCenter_1F_EventScript_Gentleman::
	msgbox FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived, MSGBOX_NPC
	end

@ The 5 texts below are supposed to be in FourIsland_House1
Text_BodySlamTeach::
	.string "そーれ ぼよーん!\nどっちが さきに へたばるか?\lのしかかり しょうぶ してるんだ\pきみは なかまに はいったら\nつぶれそうだな…\lかわりに きみの ポケモンに\lのしかかり おしえて やろっか?$"

Text_BodySlamDeclined::
	.string "また おいで ぼよーん!$"

Text_BodySlamWhichMon::
	.string "どの ポケモンに\nおしえたい かい?$"

Text_BodySlamTaught::
	.string "ぼよよーん!$"

FourIsland_House1_Text_FatMan::
	.string "それ ぼよーん!\nおまえ おもいなあー!$"

FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave::
	.string "どうくつには めずらしい\nこおりの ポケモンが いましてね\pそれが めあてで\nくる ひとも おおいんです$"

FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore::
	.string "え ポケモンの タマゴ?\n…さあ\pあ でも そういえば\nそとに ある そだてやさんで\lタマゴが みつかったって\lきいた ことが あるわよ$"

FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived::
	.string "おや?\nあたらしい ポケモンジャーナル\lこの しまには\lとどいて いないのかな?$"

