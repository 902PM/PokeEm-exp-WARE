.equ RECEIVED_TOWN_MAP, VAR_TEMP_1

PalletTown_RivalsHouse_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_OnTransition
	.byte 0

PalletTown_RivalsHouse_OnTransition::
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_MoveDaisyToTable
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap
	end

PalletTown_RivalsHouse_EventScript_MoveDaisyToTable::
	setobjectmovementtype LOCALID_DAISY, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_DAISY, 5, 4
	return

PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap::
	setvar RECEIVED_TOWN_MAP, TRUE
	return

PalletTown_RivalsHouse_EventScript_Daisy::
	lock
	faceplayer
	famechecker FAMECHECKER_DAISY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_RivalsHouse_EventScript_GroomMon
	goto_if_eq RECEIVED_TOWN_MAP, TRUE, PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_ExplainTownMap
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_GiveTownMap
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_RivalsHouse_EventScript_HeardBattledRival
	msgbox PalletTown_RivalsHouse_Text_HiBrothersAtLab
	closemessage
	applymovement LOCALID_DAISY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PalletTown_RivalsHouse_EventScript_HeardBattledRival::
	msgbox PalletTown_RivalsHouse_Text_HeardYouBattledRival
	release
	end

PalletTown_RivalsHouse_EventScript_GroomMon::
	goto_if_lt VAR_MASSAGE_COOLDOWN_STEP_COUNTER, 500, PalletTown_RivalsHouse_EventScript_RateMonFriendship
	msgbox PalletTown_RivalsHouse_Text_LikeMeToGroomMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PalletTown_RivalsHouse_EventScript_DeclineGrooming
	msgbox PalletTown_RivalsHouse_Text_GroomWhichOne
	special ChoosePartyMon
	lock
	faceplayer
	goto_if_ge VAR_0x8004, PARTY_SIZE, PalletTown_RivalsHouse_EventScript_DeclineGrooming
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, PalletTown_RivalsHouse_EventScript_CantGroomEgg
	msgbox PalletTown_RivalsHouse_Text_LookingNiceInNoTime
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special DaisyMassageServices
	fadescreen FADE_FROM_BLACK
	special BufferMonNickname
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDone
	release
	end

PalletTown_RivalsHouse_EventScript_CantGroomEgg::
	msgbox PalletTown_RivalsHouse_Text_CantGroomAnEgg
	release
	end

PalletTown_RivalsHouse_EventScript_DeclineGrooming::
	msgbox PalletTown_RivalsHouse_Text_DontNeedAnyGrooming
	release
	end

PalletTown_RivalsHouse_EventScript_RateMonFriendship::
	msgbox PalletTown_RivalsHouse_Text_MayISeeFirstMon
	specialvar VAR_RESULT, GetLeadMonFriendship
	switch VAR_RESULT
	case 0, PalletTown_RivalsHouse_EventScript_MonFriendshipLowest
	case 1, PalletTown_RivalsHouse_EventScript_MonFriendshipLower
	case 2, PalletTown_RivalsHouse_EventScript_MonFriendshipLow
	case 3, PalletTown_RivalsHouse_EventScript_MonFriendshipMid
	case 4, PalletTown_RivalsHouse_EventScript_MonFriendshipHigh
	case 5, PalletTown_RivalsHouse_EventScript_MonFriendshipHigher
	case 6, PalletTown_RivalsHouse_EventScript_MonFriendshipHighest
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipLowest::
	msgbox PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipLower::
	msgbox PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipLow::
	msgbox PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipMid::
	msgbox PalletTown_RivalsHouse_Text_ItsWarmingUpToYou
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipHigh::
	msgbox PalletTown_RivalsHouse_Text_ItsQuiteFriendly
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipHigher::
	msgbox PalletTown_RivalsHouse_Text_ItLooksVeryHappy
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipHighest::
	msgbox PalletTown_RivalsHouse_Text_CouldntLoveYouMore
	release
	end

PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest::
	msgbox PalletTown_RivalsHouse_Text_PleaseGiveMonsRest
	release
	end

PalletTown_RivalsHouse_EventScript_GiveTownMap::
	msgbox PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp
	closemessage
	checkitemspace ITEM_TOWN_MAP
	goto_if_eq VAR_RESULT, FALSE, PalletTown_RivalsHouse_EventScript_NoRoomForTownMap
	applymovement LOCALID_DAISY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	removeobject LOCALID_TOWN_MAP
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	delay 15
	applymovement LOCALID_DAISY, Common_Movement_FacePlayer
	waitmovement 0
	delay 12
	giveitem_msg PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
	release
	end

PalletTown_RivalsHouse_EventScript_NoRoomForTownMap::
	msgbox PalletTown_RivalsHouse_Text_DontHaveSpaceForThis
	release
	end

PalletTown_RivalsHouse_EventScript_ExplainTownMap::
	msgbox PalletTown_RivalsHouse_Text_ExplainTownMap
	release
	end

PalletTown_RivalsHouse_EventScript_TownMap::
	msgbox PalletTown_RivalsHouse_Text_ItsBigMapOfKanto, MSGBOX_NPC
	end

PalletTown_RivalsHouse_EventScript_Bookshelf::
	msgbox PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks, MSGBOX_SIGN
	end

PalletTown_RivalsHouse_EventScript_Picture::
	msgbox PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy, MSGBOX_SIGN
	end

PalletTown_RivalsHouse_Text_HiBrothersAtLab::
	.string "ナナミ『こんにちは\n{PLAYER}{KUN}!\pおとうとの {RIVAL}なら\nおじいちゃんの けんきゅうじょよ$"

PalletTown_RivalsHouse_Text_HeardYouBattledRival::
	.string "ナナミ『{PLAYER}{KUN}\n{RIVAL}と\lしょうぶ したんですってね\pみたかったわ!$"

PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp::
	.string "オーキドの おじいちゃん\nおしごと たのんだんだって?\lたいへんねー\lこれ あげるから つかって!$"

PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy::
	.string "{PLAYER}は ナナミから\nタウンマップを もらった!$"

PalletTown_RivalsHouse_Text_DontHaveSpaceForThis::
	.string "にもつ いっぱいよ$"

PalletTown_RivalsHouse_Text_ExplainTownMap::
	.string "じぶんの いる ばしょや\nまちの なまえが しりたいとき\lタウンマップ つかうと いいわよ$"

PalletTown_RivalsHouse_Text_PleaseGiveMonsRest::
	.string "ナナミ『にんげんと おなじように\nポケモンも いきてるの!\lたいりょくが ないときは\lやすませて あげて!$"

PalletTown_RivalsHouse_Text_ItsBigMapOfKanto::
	.string "カントー ちほうの ちずだ!\n…… もらえたら うれしい?$"

PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks::
	.string "ほんだなに ならんでいるのは\nポケモンの ほん ばかりだ$"

PalletTown_RivalsHouse_Text_LikeMeToGroomMon::
	.string "ナナミ『こんにちは {PLAYER}{KUN}\nちょうど よかったわ!\lこれから おちゃの じかんなの\pあら? あなたの ポケモン\nすこし よごれちゃってる みたい!\lけづくろい しましょうか?$"

PalletTown_RivalsHouse_Text_DontNeedAnyGrooming::
	.string "けづくろい しないの?\nじゃあ おちゃに しましょう$"

PalletTown_RivalsHouse_Text_GroomWhichOne::
	.string "どの ポケモンに する?$"

PalletTown_RivalsHouse_Text_LookingNiceInNoTime::
	.string "ナナミ『じゃあ\nけづくろい しましょうね!$"

PalletTown_RivalsHouse_Text_ThereYouGoAllDone::
	.string "{FONT_NORMAL}{STR_VAR_1}は\nとても きもちよさそう!\p{FONT_FEMALE}ナナミ『はい!\nとっても きれいに なったわ!\pうふふ\nかわいい ポケモンね!$"

PalletTown_RivalsHouse_Text_CantGroomAnEgg::
	.string "んー…\nタマゴは けづくろい できないわ$"

PalletTown_RivalsHouse_Text_MayISeeFirstMon::
	.string "ナナミ『ポケモンも\nたいせつに そだてて いると\lなついて くれるのよ\p{PLAYER}{KUN}の ポケモンは……$"

PalletTown_RivalsHouse_Text_CouldntLoveYouMore::
	.string "これいじょうは ない くらい\nなついて いるのね…!\lあなたの ポケモンは しあわせね!$"

PalletTown_RivalsHouse_Text_ItLooksVeryHappy::
	.string "しあわせそうに みえるわ\n{RIVAL}にも\lみならって ほしい くらいね$"

PalletTown_RivalsHouse_Text_ItsQuiteFriendly::
	.string "なかなか なついて いるのね\nその ちょうしで かわいがってね$"

PalletTown_RivalsHouse_Text_ItsWarmingUpToYou::
	.string "すこし なついてきた のね\nしんらいが うまれて きたみたい$"

PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet::
	.string "まだ あまり なれていない のね\nであった ときは\lだれでも このくらい なのよ$"

PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou::
	.string "{PLAYER}{KUN}の こと\nすこし にらんで いるみたい…\lもうすこし かわいがって\lあげられない かしら?$"

PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch::
	.string "……あの いいづらいん だけど\pポケモンに そんなに\nきらわれている のは\lなにか わけが あるのかしら……$"

PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy::
	.string "『ラブリー スウィート\nピッピ ちゃん』$"

