FiveIsland_MemorialPillar_Frlg_MapScripts::
	.byte 0

FiveIsland_MemorialPillar_EventScript_MemorialMan::
	lock
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
	closemessage
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
	waitmovement 0
	delay 45
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
	release
	end

FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
	release
	end

FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
	giveitem ITEM_TM42
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
	release
	end

FiveIsland_MemorialPillar_EventScript_Memorial::
	lockall
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
	checkitem ITEM_LEMONADE
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FiveIsland_MemorialPillar_EventScript_PlaceLemonade
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
	removeitem ITEM_LEMONADE
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
	closemessage
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 45
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
	giveitem ITEM_TM42
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
	return

FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
	releaseall
	end

FiveIsland_MemorialPillar_Text_MiloIntro::
	.string "おれ とりきょうだい ちょうなん!\pトリは やっぱり\nあの クチバシが いいんだよなあ$"

FiveIsland_MemorialPillar_Text_MiloDefeat::
	.string "うーん するどいっ!$"

FiveIsland_MemorialPillar_Text_MiloPostBattle::
	.string "ここから だと\n4のしまに とんで いけるぞ$"

FiveIsland_MemorialPillar_Text_ChazIntro::
	.string "おれ とりきょうだい じなん!\pトリは やっぱり\nあの つばさが いいんだよなあ$"

FiveIsland_MemorialPillar_Text_ChazDefeat::
	.string "ばさ ばさっ!$"

FiveIsland_MemorialPillar_Text_ChazPostBattle::
	.string "むこうに\nくらい おとこが いたぞ$"

FiveIsland_MemorialPillar_Text_HaroldIntro::
	.string "おれ とりきょうだい すえっこ!\pトリは やっぱり\nあの うもうが いいんだよなあ$"

FiveIsland_MemorialPillar_Text_HaroldDefeat::
	.string "うもう ふわふわ…\nねむーい$"

FiveIsland_MemorialPillar_Text_HaroldPostBattle::
	.string "とりポケモンに あまえ られると\nしあわせ…$"

FiveIsland_MemorialPillar_Text_ScrubScrub::
	.string "よいしょ よいしょ$"

FiveIsland_MemorialPillar_Text_YourMonsLookHealthy::
	.string "こんにちは…\nきみの ポケモン げんきそうだね$"

FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix::
	.string "これは ボクの イワークの…\nイワキチの おはか なんだ$"

FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering::
	.string "『イワキチ ここに ねむる』と\nほってある\pおはかの まえには\nミックスオレが おいてある$"

FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering::
	.string "ミックスオレを もうひとつ\nおそなえして あげますか?$"

FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade::
	.string "{PLAYER}は おはかに\nミックスオレを おそなえした$"

FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis::
	.string "あ… ありがとう……\pそれ イワキチが だいすきな\nのみもの だったんだ\pみずしらずの きみに\nやさしく して もらって\lすこし げんきが でたよ\pおれいに これを もらってください$"

FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo::
	.string "きみも ポケモンを\nだいじに して あげてね$"

FiveIsland_MemorialPillar_Text_DontHaveRoomForIt::
	.string "いっぱい なら\nつぎに あった ときまで\lとって おくね$"

FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks::
	.string "あ このまえの…\pこの おれい\nうけとって ください$"

FiveIsland_MemorialPillar_Text_ScrubScrubTectonix::
	.string "よいしょ よいしょ\p………\nイワキチ……$"

FiveIsland_MemorialPillar_Text_HereLiesTectonix::
	.string "ていねいに いしが つまれている\p『イワキチ ここに ねむる』と\nほってある$"

