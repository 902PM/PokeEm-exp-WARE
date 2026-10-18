ViridianCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ViridianCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
	end

ViridianCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

ViridianCity_PokemonCenter_1F_EventScript_Boy::
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC::
	.string "すみに ある パソコンは どうぞ\nごじゆうに おつかいください!\p…と うけつけの ねーちゃんが\nいっとった しんせつやのう$"

ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown::
	.string "ポケモンセンターは このさき\nどこの まちに いっても ある!\pなんびき あずけても ただ だし\nこまめに つかうと いいよ!$"

ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons::
	.string "ポケモンセンターに あずけると\nつかれて うごけない\lポケモンも げんきに なるよ!$"

