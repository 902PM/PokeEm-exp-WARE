PokemonTower_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonTower_1F_OnTransition
	.byte 0

PokemonTower_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_POKEMON_TOWER_1F
	end

PokemonTower_1F_EventScript_Channeler::
	msgbox PokemonTower_1F_Text_SenseSpiritsUpToMischief, MSGBOX_NPC
	end

PokemonTower_1F_EventScript_Woman1::
	msgbox PokemonTower_1F_Text_GrowlitheWhyDidYouDie, MSGBOX_NPC
	end

PokemonTower_1F_EventScript_BaldingMan::
	msgbox PokemonTower_1F_Text_CameToPrayForDepartedClefairy, MSGBOX_NPC
	end

PokemonTower_1F_EventScript_Woman2::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, PokemonTower_1F_EventScript_Woman2MalePlayer
	msgbox PokemonTower_1F_Text_ComeToPayRespectsGirl
	release
	end

PokemonTower_1F_EventScript_Woman2MalePlayer::
	msgbox PokemonTower_1F_Text_ComeToPayRespectsSon
	release
	end

PokemonTower_1F_EventScript_WorkerF::
	msgbox PokemonTower_1F_Text_ErectedInMemoryOfDeadMons, MSGBOX_NPC
	end

PokemonTower_1F_Text_ErectedInMemoryOfDeadMons::
	.string "ポケモン タワーは\nしんだ ポケモンを なぐさめるため\lたてられた とう です$"

PokemonTower_1F_Text_ComeToPayRespectsSon::
	.string "あなたも\nおはか まいりに きたの?\lポケモン おもいの おとこのこ ね$"

PokemonTower_1F_Text_ComeToPayRespectsGirl::
	.string "あなたも\nおはか まいりに きたの?\lポケモン おもいの おんなのこ ね$"

PokemonTower_1F_Text_CameToPrayForDepartedClefairy::
	.string "しんだ ピッピの コトが\nわすれられん…!\p…イカン!\nなみだが でて きおった…$"

PokemonTower_1F_Text_GrowlitheWhyDidYouDie::
	.string "ああ わたしの ガーディ…\nどうして しんで しまったの…$"

PokemonTower_1F_Text_SenseSpiritsUpToMischief::
	.string "わたしは きとうし!\nどうも うえの かいに\lまよえる たましいを かんじる$"

