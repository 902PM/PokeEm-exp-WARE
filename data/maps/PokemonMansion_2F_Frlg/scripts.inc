PokemonMansion_2F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_2F_OnLoad
	.byte 0

PokemonMansion_2F_OnLoad::
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_2F
	end

PokemonMansion_2F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 1
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end

PokemonMansion_2F_EventScript_DiaryJuly5th::
	msgbox PokemonMansion_2F_Text_NewMonDiscoveredInGuyanaJungle, MSGBOX_SIGN
	end

PokemonMansion_2F_EventScript_DiaryJuly10th::
	msgbox PokemonMansion_2F_Text_ChristenedDiscoveredMonMew, MSGBOX_SIGN
	end

PokemonMansion_2F_EventScript_Arnie::
	trainerbattle_single TRAINER_BURGLAR_ARNIE, PokemonMansion_2F_Text_ArnieIntro, PokemonMansion_2F_Text_ArnieDefeat
	msgbox PokemonMansion_2F_Text_ArniePostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_Text_PressSecretSwitch::
	.string "ひみつの スイッチが ある!\pおして みますか?$"

PokemonMansion_Text_WhoWouldnt::
	.string "おしてみよう! …ポチッとな$"

PokemonMansion_Text_NotQuiteYet::
	.string "おすのは あきらめた$"

PokemonMansion_2F_Text_ArnieIntro::
	.string "この やしき しかけが してあって\nなかなか すすめませんぜ!$"

PokemonMansion_2F_Text_ArnieDefeat::
	.string "わーッ!\nふろしきの なかみが$"

PokemonMansion_2F_Text_ArniePostBattle::
	.string "ひみつの スイッチを おすと\nふたつの とびらが\lたがい ちがいに ひらくんでさ$"

PokemonMansion_2F_Text_NewMonDiscoveredInGuyanaJungle::
	.string "にっき 7がつ5か\nここは みなみアメリカの ギアナ\pジャングルの おくちで\nしんしゅの ポケモンを はっけん$"

PokemonMansion_2F_Text_ChristenedDiscoveredMonMew::
	.string "にっき 7がつ10か\nしんはっけんの ポケモンを\lわたしは ミュウと なづけた$"

