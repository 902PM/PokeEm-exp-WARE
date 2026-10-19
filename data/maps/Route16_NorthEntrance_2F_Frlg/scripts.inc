.equ REQUIRED_CAUGHT_MONS, 40

Route16_NorthEntrance_2F_Frlg_MapScripts::
	.byte 0

Route16_NorthEntrance_2F_EventScript_LittleBoy::
	msgbox Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend, MSGBOX_NPC
	end

Route16_NorthEntrance_2F_EventScript_LittleGirl::
	msgbox Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes, MSGBOX_NPC
	end

Route16_NorthEntrance_2F_EventScript_LeftBinoculars::
	msgbox Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore, MSGBOX_SIGN
	end

Route16_NorthEntrance_2F_EventScript_RightBinoculars::
	msgbox Route16_NorthEntrance_2F_Text_LongPathOverWater, MSGBOX_SIGN
	end

Route16_NorthEntrance_2F_EventScript_Aide::
	lock
	faceplayer
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
	goto_if_set FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE, Route16_NorthEntrance_2F_EventScript_AlreadyGotAmuletCoin
	msgbox Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetFrlgPokedexCount
	buffernumberstring STR_VAR_3, VAR_0x8006
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
	goto_if_lt VAR_0x8006, REQUIRED_CAUGHT_MONS, Aide_EventScript_HaventCaughtEnough
	msgbox Route16_NorthEntrance_2F_Text_GreatHereYouGo
	checkitemspace ITEM_AMULET_COIN
	goto_if_eq VAR_RESULT, FALSE, Route10_PokemonCenter_1F_EventScript_NoRoomForItem
	giveitem_msg Route16_NorthEntrance_2F_Text_ReceivedAmuletCoinFromAide, ITEM_AMULET_COIN
	setflag FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
	release
	end

Route16_NorthEntrance_2F_EventScript_AlreadyGotAmuletCoin::
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
	release
	end

Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo::
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
	bufferitemname STR_VAR_2, ITEM_AMULET_COIN
	return

Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend::
	.string "じてんしゃで\nかのじょと サイクリングさ!$"

Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes::
	.string "しんぴん じてんしゃで\nうふふ!\lこれから サイクリングに いくの$"

Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore::
	.string "ぼうえんきょうを のぞいた!\pタマムシ デパートが みえる!$"

Route16_NorthEntrance_2F_Text_LongPathOverWater::
	.string "ぼうえんきょうを のぞいた!\pむこうに うみの うえを とおる\nながーい みちが みえる!$"

Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40::
	.string "ぼく おぼえてます?\nほら…!\lオーキド はかせの じょしゅ です\pポケモンずかんが 40しゅるい\nあつまってる ようなら\lおまもりこばんを わたす よう\lはかせに いわれ ました\p…… それでは さっそく\n{PLAYER}{KUN}!\lつかまえた ポケモンは\l40しゅるい より おおい かな?$"

Route16_NorthEntrance_2F_Text_GreatHereYouGo::
	.string "… … なるほど!\nつかまえた ポケモンは…\l{STR_VAR_3}しゅるい ですね!\nおめでとう!\pそれでは\nこれを おわたし します!$"

Route16_NorthEntrance_2F_Text_ReceivedAmuletCoinFromAide::
	.string "{PLAYER}は じょしゅ から\nおまもりこばんを もらった!$"

Route16_NorthEntrance_2F_Text_ExplainAmuletCoin::
	.string "おまもりこばんを もった ポケモンを\nトレーナーとの たたかいに だせば\pかったときに いつもより\nおおく おかねが もらえますよ!$"

