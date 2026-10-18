SevenIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SevenIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
	end

SevenIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

SevenIsland_PokemonCenter_1F_EventScript_OldMan::
	msgbox SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections, MSGBOX_NPC
	end

SevenIsland_PokemonCenter_1F_EventScript_Sailor::
	msgbox SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere, MSGBOX_NPC
	end

SevenIsland_PokemonCenter_1F_EventScript_Beauty::
	msgbox SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower, MSGBOX_NPC
	end

SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections::
	.string "この しまでは\nつながりに よって\lさまざまなことが おきる…!\pその つながり とは なにか?\pぜひ ごじぶんで さがされよ$"

SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere::
	.string "シーギャロップに のって\nここまで きたのか?\pあれは ぜんぶで\n10しゅるい いじょう あるんだぜ\lどこにいく ふねかは しらんが$"

SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower::
	.string "うでに おぼえが あるなら\nトレーナータワーに いってみたら?$"

