.equ SHOWN_REQUESTED_MON, FLAG_TEMP_2

FiveIsland_ResortGorgeous_House_Frlg_MapScripts::
	.byte 0

FiveIsland_ResortGorgeous_House_EventScript_Selphy::
	lock
	faceplayer
	goto_if_set SHOWN_REQUESTED_MON, FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest
	goto_if_eq VAR_RESORT_GORGEOUS_REQUESTED_MON, 0xFFFF, FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong
	goto_if_ne VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE, FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon
	msgbox FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end

FiveIsland_ResortGorgeous_House_EventScript_RequestMon::
	special SampleResortGorgeousMonAndReward
	msgbox FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease
	release
	end

FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong::
	msgbox FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end

FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon::
	copyvar VAR_0x8004, VAR_RESORT_GORGEOUS_REQUESTED_MON
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end

FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon::
	special SampleResortGorgeousMonAndReward
	msgbox FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou
	addobject LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerEnter
	waitmovement 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth
	call_if_eq VAR_FACING, DIR_SOUTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth
	call_if_eq VAR_FACING, DIR_EAST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast
	call_if_eq VAR_FACING, DIR_WEST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest
	copyobjectxytoperm LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks
	giveitem VAR_RESORT_GORGEOUS_REWARD
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward
	setflag SHOWN_REQUESTED_MON
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
	release
	end

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing
	setflag SHOWN_REQUESTED_MON
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
	release
	end

FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest::
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck
	release
	end

FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth::
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth::
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast::
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

@ Very odd. If the player is talking to Selphy facing West, then the player has clipped through the table
@ In this case rather than approach the player the Butler walks up, which clips the Butler into a wall
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest::
	walk_up
	step_end

FiveIsland_ResortGorgeous_House_Movement_ButlerEnter::
	walk_in_place_down
	step_end

@ Addressed as "Sebastian" but speaks only as "Butler"
FiveIsland_ResortGorgeous_House_EventScript_Butler::
	msgbox FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun, MSGBOX_NPC
	end

FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish::
	.string "アキホ『あら\nどなた だった かしら?\pどなたでも いいわ!\nわたくし たいくつ してますの\lおねがいを きいて くださいな$"

FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease::
	.string "あのね… わたくし\n{STR_VAR_1}が みたいの!\pいま すぐ みたいわ\nどうか おねがいね$"

FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting::
	.string "アキホ『ねえ もう\nまちくたびれて しまったわ!\pゆるして あげる けど…\nこんどこそ\lおねがいを きいて ちょうだいね$"

FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou::
	.string "アキホ『ごきげんよう\pまあ それは\nあなたが つかまえて くださった\l{STR_VAR_1}ね!\pうふふ… どことなく\nあなたに にて いませんこと?\lどうも ありがとう\p…… …… ……\nどうなさったの?\pもう おかえりに なっても\nよろしくてよ\p…… …… ……\nああ わかりましたわ\lセバスチャン ちょっと!$"

FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady::
	.string "しつじ『はっ\nおじょうさま$"

FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation::
	.string "アキホ『この かたに\nなにか おれいを さしあげて!$"

FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid::
	.string "しつじ『はっ\nかしこまり ました$"

FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks::
	.string "しつじ『このたびは アキホさまが\nおせわに なりました\lどうぞ こちらを…$"

FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull::
	.string "しつじ『おかばんが\nいっぱいの ようですよ$"

FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing::
	.string "あら…\nざんねん でしたわね$"

FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck::
	.string "アキホ『ごきげんよう!$"

FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun::
	.string "しつじ『アキホさまの ほほえみは\nたいようの かがやきにも\lおとりません\pどうぞ アキホさまを\nよろこばせて あげて ください$"

