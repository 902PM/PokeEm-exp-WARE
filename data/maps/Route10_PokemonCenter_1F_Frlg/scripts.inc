.equ REQUIRED_OWNED_MONS, 20

Route10_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Route10_PokemonCenter_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
	setrespawn HEAL_LOCATION_ROUTE10
	end

Route10_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

Route10_PokemonCenter_1F_EventScript_FatMan::
	msgbox Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_EventScript_Gentleman::
	msgbox Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_EventScript_Youngster::
	msgbox Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_EventScript_Aide::
	lock
	faceplayer
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
	goto_if_set FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE, Route10_PokemonCenter_1F_EventScript_AlreadyGotEviolite
	msgbox Route10_PokemonCenter_1F_Text_GiveEvioliteIfCaught20Mons, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetFrlgPokedexCount
	buffernumberstring STR_VAR_3, VAR_0x8006
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
	goto_if_lt VAR_0x8006, REQUIRED_OWNED_MONS, Aide_EventScript_HaventCaughtEnough
	msgbox Route10_PokemonCenter_1F_Text_GreatHereYouGo
	checkitemspace ITEM_EVIOLITE
	goto_if_eq VAR_RESULT, FALSE, Route10_PokemonCenter_1F_EventScript_NoRoomForItem
	giveitem_msg Route10_PokemonCenter_1F_Text_ReceivedEvioliteFromAide, ITEM_EVIOLITE
	setflag FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE
	msgbox Route10_PokemonCenter_1F_Text_ExplainEviolite
	release
	end

Route10_PokemonCenter_1F_EventScript_NoRoomForItem::
	msgbox Route10_PokemonCenter_1F_Text_NoRoomForItem
	release
	end

Route10_PokemonCenter_1F_EventScript_AlreadyGotEviolite::
	msgbox Route10_PokemonCenter_1F_Text_ExplainEviolite
	release
	end

Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo::
	buffernumberstring STR_VAR_1, REQUIRED_OWNED_MONS
	bufferitemname STR_VAR_2, ITEM_EVIOLITE
	return

Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers::
	.string "ポケモンは タイプに よって\nゆうりに たたかえる あいてと\lにがてな あいてが いるのだ$"

Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000::
	.string "つかいみち ないから きんのたまを\nうったら 5000円で うれた!$"

Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender::
	.string "シオン タウンで\nゆうれい ポケモンが でるって\lみんな さわいでるよ$"

Route10_PokemonCenter_1F_Text_GiveEvioliteIfCaught20Mons::
	.string "あ… {PLAYER}{KUN}\nさがして いたんですよ!\lぼく まいど おなじみ\lオーキドはかせの じょしゅです!\pポケモンずかんが 20しゅるい\nあつまってる ようなら\lはかせから しんかのきせきを\lわたすように いわれて います!\p{PLAYER}{KUN} どうですか?\nつかまえた ポケモンは\l20しゅるい より おおい かな?$"

Route10_PokemonCenter_1F_Text_GreatHereYouGo::
	.string "… … なるほど!\nつかまえた ポケモンは…\l{STR_VAR_3}しゅるい ですね!\nおめでとう!\pそれでは\nこれを おわたし します!$"

Route10_PokemonCenter_1F_Text_ReceivedEvioliteFromAide::
	.string "{PLAYER}は じょしゅ から\nしんかのきせきを もらった!$"

Route10_PokemonCenter_1F_Text_ExplainEviolite::
	.string "ポケモンを しんか させても\nずかんは ふえる けど…\pあえて しんか させないで\nたたかわせる ときに\lこれが ゆうこうだって\lはかせが いって いました$"

Route10_PokemonCenter_1F_Text_NoRoomForItem::
	.string "{PLAYER}{KUN}の バッグ\nいっぱい みたい だね$"

