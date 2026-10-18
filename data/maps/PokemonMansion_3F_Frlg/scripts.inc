PokemonMansion_3F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_3F_OnLoad
	.byte 0

PokemonMansion_3F_OnLoad::
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_3F
	end

PokemonMansion_3F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 2
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end

PokemonMansion_3F_EventScript_DiaryFeb6th::
	msgbox PokemonMansion_3F_Text_MewGaveBirthToMewtwo, MSGBOX_SIGN
	end

PokemonMansion_3F_EventScript_Simon::
	trainerbattle_single TRAINER_BURGLAR_SIMON, PokemonMansion_3F_Text_SimonIntro, PokemonMansion_3F_Text_SimonDefeat
	msgbox PokemonMansion_3F_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_3F_EventScript_Braydon::
	trainerbattle_single TRAINER_SCIENTIST_BRAYDON, PokemonMansion_3F_Text_BraydonIntro, PokemonMansion_3F_Text_BraydonDefeat
	msgbox PokemonMansion_3F_Text_BraydonPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_3F_Text_SimonIntro::
	.string "それに しても\nでっけー やしき だねえ!$"

PokemonMansion_3F_Text_SimonDefeat::
	.string "どろどろ ぼーん!$"

PokemonMansion_3F_Text_SimonPostBattle::
	.string "… あいぼうが いたんだ\nどこ いったんだろ?$"

PokemonMansion_3F_Text_BraydonIntro::
	.string "ここは かつて\nわたしの せんせいが すんでいた$"

PokemonMansion_3F_Text_BraydonDefeat::
	.string "なんと つよい$"

PokemonMansion_3F_Text_BraydonPostBattle::
	.string "いきたい ばしょに いけなくて\nこまってるのか… そこから\lおもいきって とびおりて みろ!$"

PokemonMansion_3F_Text_MewGaveBirthToMewtwo::
	.string "にっき 2がつ6か\nミュウが こどもを うむ\pうまれた ばかりの ジュニアを\nミュウツーと よぶことに…$"

