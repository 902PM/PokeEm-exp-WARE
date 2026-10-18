ViridianCity_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
	.byte 0

ViridianCity_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_CITY
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_SetOldManBlockingRoad
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_SetOldManStandingByRoad
	call_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_SetOldManNormal
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0, ViridianCity_EventScript_TryUnlockGym
	end

ViridianCity_EventScript_SetOldManNormal::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
	return

ViridianCity_EventScript_SetOldManStandingByRoad::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 8
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_LOOK_AROUND
	return

ViridianCity_EventScript_SetOldManBlockingRoad::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_LYING_DOWN
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 11
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_FACE_DOWN
	return

ViridianCity_EventScript_TryUnlockGym::
	goto_if_unset FLAG_BADGE02_GET, Common_EventScript_NopReturn
	goto_if_unset FLAG_BADGE03_GET, Common_EventScript_NopReturn
	goto_if_unset FLAG_BADGE04_GET, Common_EventScript_NopReturn
	goto_if_unset FLAG_BADGE05_GET, Common_EventScript_NopReturn
	goto_if_unset FLAG_BADGE06_GET, Common_EventScript_NopReturn
	goto_if_unset FLAG_BADGE07_GET, Common_EventScript_NopReturn
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
	return

ViridianCity_EventScript_GymDoorLocked::
	lockall
	textcolor NPC_TEXT_COLOR_NEUTRAL
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 20
	msgbox ViridianCity_Text_GymDoorsAreLocked
	closemessage
	applymovement LOCALID_PLAYER, ViridianCity_Movement_JumpDownLedge
	waitmovement 0
	releaseall
	end

ViridianCity_Movement_JumpDownLedge::
	jump_2_down
	step_end

ViridianCity_EventScript_CitySign::
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
	end

ViridianCity_EventScript_TrainerTips1::
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
	end

ViridianCity_EventScript_TrainerTips2::
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
	end

ViridianCity_EventScript_GymSign::
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
	end

ViridianCity_EventScript_GymDoor::
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
	end

ViridianCity_EventScript_Boy::
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
	end

@ Other old man, not the tutorial old man
ViridianCity_EventScript_OldMan::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1, ViridianCity_EventScript_OldManGymLeaderReturned
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
	closemessage
	applymovement LOCALID_VIRIDIAN_OLD_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

ViridianCity_EventScript_OldManGymLeaderReturned::
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
	release
	end

ViridianCity_EventScript_TutorialOldMan::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, ViridianCity_EventScript_AskIfTeachyTVHelpful
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_TutorialCompleted
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_TutorialStart
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_TutorialNotReady
	end

ViridianCity_EventScript_AskIfTeachyTVHelpful::
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_TeachyTVNotHelpful
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
	release
	end

ViridianCity_EventScript_TeachyTVNotHelpful::
	msgbox ViridianCity_Text_TooBusyForTeachyTV
	release
	end

ViridianCity_EventScript_TutorialCompleted::
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
	release
	end

ViridianCity_EventScript_TutorialStart::
	call ViridianCity_EventScript_DoTutorialBattle
	release
	end

@ Unused
ViridianCity_EventScript_WatchToLearnBasics::
	msgbox ViridianCity_Text_WatchThatToLearnBasics
	release
	end

@ Unused. Starts battle after the post battle text, which is odd.
ViridianCity_EventScript_TutorialUnused::
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
	special StartOldManTutorialBattle
	waitstate
	release
	end

ViridianCity_EventScript_TutorialNotReady::
	msgbox ViridianCity_Text_ThisIsPrivateProperty
	closemessage
	release
	end

ViridianCity_EventScript_Youngster::
	lock
	faceplayer
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, ViridianCity_EventScript_YoungsterExplainCaterpillars
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_YoungsterDeclineExplanation
	end

ViridianCity_EventScript_YoungsterExplainCaterpillars::
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
	release
	end

ViridianCity_EventScript_YoungsterDeclineExplanation::
	msgbox ViridianCity_Text_OhOkayThen
	release
	end

ViridianCity_EventScript_Woman::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_WomanRoadBlocked
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
	release
	end

ViridianCity_EventScript_WomanRoadBlocked::
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
	closemessage
	applymovement LOCALID_VIRIDIAN_WOMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

ViridianCity_EventScript_DreamEaterTutor::
	goto EventScript_DreamEaterTutor
	end

ViridianCity_EventScript_RoadBlocked::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	msgbox ViridianCity_Text_ThisIsPrivateProperty
	closemessage
	applymovement LOCALID_PLAYER, ViridianCity_Movement_WalkDown
	waitmovement 0
	releaseall
	end

ViridianCity_Movement_WalkDown::
	walk_down
	step_end

ViridianCity_EventScript_TutorialTriggerLeft::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	call ViridianCity_EventScript_DoTutorialBattle
	release
	end

ViridianCity_EventScript_TutorialTriggerRight::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	call ViridianCity_EventScript_DoTutorialBattle
	release
	end

ViridianCity_EventScript_DoTutorialBattle::
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
	closemessage
	special StartOldManTutorialBattle
	waitstate
	lock
	faceplayer
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
	giveitem ITEM_POKEMON_BOX_LINK
	msgbox ViridianCity_Text_WatchThatToLearnBasics
	return

ViridianCity_Text_CanCarryMonsAnywhere::
	.string "きみが こしに つけてる\nその モンスターボールは…!\lまさしく ポケモンだね!\pいつでも ポケモンの だしいれが\nじゆうに できる なんて\lべんりな よのなかだね$"

ViridianCity_Text_GymClosedWonderWhoLeaderIs::
	.string "いつ きても\nこの ポケモン ジムは しまっとる\pいったい どんな ヤツが\nリーダーを しとるんじゃろか?$"

ViridianCity_Text_ViridiansGymLeaderReturned::
	.string "トキワ ジムの リーダーが\nかえって きたぞ!$"

ViridianCity_Text_WantToKnowAboutCaterpillarMons::
	.string "いもむし ポケモンには\n2しゅるい いるって しらない?$"

ViridianCity_Text_OhOkayThen::
	.string "それなら いいんだ!$"

ViridianCity_Text_ExplainCaterpieWeedle::
	.string "キャタピーは どくが ないけど\nビードルには どくが あるよ\pポケモンが さされないように\nきを つけようね$"

ViridianCity_Text_GrandpaHasntHadCoffeeYet::
	.string "あらら じいちゃん!\nこんな ところで ねちゃって\lしょーが ないわね!\lよいが さめるまで まつしかないわ$"

ViridianCity_Text_GoShoppingInPewterOccasionally::
	.string "ときどき ニビシティまで\nおかいものに いきますけど\pトキワのもり って\nみちが まがり くねってるのよ$"

ViridianCity_Text_ThisIsPrivateProperty::
	.string "ういーっ! ひっく… まちやがれ!\nわしの はなしを きけ!\p… こら!\nいくな! と いっとろーが!$"

ViridianCity_Text_ShowYouHowToCatchMons::
	.string "うーん…\nよっぱらってた みたいじゃ!\pおや?\nその あかい はこは なんじゃ?\pほっほう!\nポケモンずかん つくっとるか\lなら わしから アドバイスじゃ!\pポケモンを つかまえて しらべれば\nじどうてきに ページが\lふえて いくんじゃよ!\pなんじゃー\nつかまえかたを しらんのか!\pでは… わしが\nおてほんを みせて やるかな!$"

ViridianCity_Text_ThatWasEducationalTakeThis::
	.string "どうじゃ!\nすこしは やくに たったじゃろう?\pあとは これを もっていけ$"

ViridianCity_Text_WatchThatToLearnBasics::
	.string "それを つかえば\nどこからでも ポケモンボックスに\lアクセス できるように なるぞ!$"

ViridianCity_Text_WeakenMonsFirstToCatch::
	.string "うーん…\nよっぱらってた みたいじゃ!\pあたまが いたい…\pときに…\nポケモンずかんは うまっとるかな?\pはじめの うちは\nポケモンを よわらせてから\lとるのが コツじゃぞ!$"

ViridianCity_Text_HowsTeachyTVHelping::
	.string "うーん…\nよっぱらってた みたいじゃ!\pあたまが いたい…\pときに…\nポケモンボックスは やくにたっとる?$"

ViridianCity_Text_MyGrandsonOnTheShow::
	.string "わっはっは!\nそうじゃろ! そうじゃろ!?$"

ViridianCity_Text_TooBusyForTeachyTV::
	.string "ふむ… いちど べんりボタンに\nとうろく してみると よいぞ!$"

ViridianCity_Text_CitySign::
	.string "ここは トキワシティ\nトキワは みどり えいえんのいろ$"

ViridianCity_Text_CatchMonsForEasierBattles::
	.string "… おとくな けいじばん!\pとにかく ポケモンを つかまえて\nドンドン ふやそう!\lトレーナーとの しょうぶも\lたくさん もってると ゆうり!$"

ViridianCity_Text_MovesLimitedByPP::
	.string "… おとくな けいじばん!\pポケモンには たいりょくの ほか\nわざを くりだす げんきの もと\lパワーポイントが あります\pわざ ごとの パワーポイントが\nなくなった ときも\lポケモンセンターで やすませて!$"

ViridianCity_Text_GymSign::
	.string "トキワ ポケモンジム$"

ViridianCity_Text_GymDoorsAreLocked::
	.string "トキワ ジムのドアには\nカギが かかって いた…!$"

Text_DreamEaterTeach::
	.string "ふあー!\nひなたぼっこ してて\lねむって しまった!\p… へんな ゆめを みた\nスリープが ゆめを くっていた!\pしかも… なぜか\nゆめの くいかたが\lわかって しまった\pうーん\nきみが わるい!\lきみの ポケモンに おしえて\lわすれさせて くれ!$"

Text_DreamEaterDeclined::
	.string "… ぐー…$"

Text_DreamEaterWhichMon::
	.string "どの ポケモンが\nゆめくいを おぼえたいん だい…?$"

Text_DreamEaterTaught::
	.string "もう……\nたべら…… れな…… い……\l…… ぐー……$"
