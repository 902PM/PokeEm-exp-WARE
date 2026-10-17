CeruleanCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CeruleanCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_CERULEAN_CITY
	end

CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

CeruleanCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_1F_EventScript_Rocker::
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_1F_EventScript_Youngster::
	lock
	faceplayer
	famechecker FAMECHECKER_BILL, 1
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons
	release
	end

CeruleanCity_PokemonCenter_1F_EventScript_Lass::
	msgbox CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons::
	.string "マサキの ヤツ!\pめずらしい ポケモンを\nてに いれる ためには…\pあんな ことも こんな ことも\nへいきで するって きいたよ!$"

CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac::
	.string "きみも\nマサキの うわさ きいてるか?\pみんなが あいつを\nポケモン マニアと よんでるよ!\pでも ものを あつめたり\nじまん したい きもちは\lだれでも ある!\pみんなも うらやましいんだな!$"

CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons::
	.string "マサキ にいちゃん\nポケモン いっぱい もってるよ!\pめずらしい ポケモンも\nあつめてるって$"

CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs::
	.string "おともだちと 2かいへ いって\nもってない ポケモン\lこうかんして もらったら\lたくさん あつまるわよ!\pひとから もらった ポケモンは\nはやく そだつしね!$"

