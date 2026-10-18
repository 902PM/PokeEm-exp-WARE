SSAnne_CaptainsOffice_Frlg_MapScripts::
	.byte 0

SSAnne_CaptainsOffice_EventScript_Captain::
	lock
	goto_if_set FLAG_GOT_HM01, SSAnne_CaptainsOffice_EventScript_AlreadyGotCut
	msgbox SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick
	textcolor NPC_TEXT_COLOR_NEUTRAL
	message SSAnne_CaptainsOffice_Text_RubbedCaptainsBack
	waitmessage
	playfanfare MUS_HEAL
	waitfanfare
	call EventScript_RestorePrevTextColor
	delay 50
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut
	giveitem_msg SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain, ITEM_HM01, 1, MUS_RG_OBTAIN_KEY_ITEM
	msgbox SSAnne_CaptainsOffice_Text_ExplainCut
	setflag FLAG_GOT_HM01
	setvar VAR_MAP_SCENE_VERMILION_CITY, 1
	release
	end

@ Unused
SSAnne_CaptainsOffice_EventScript_NoRoomForCut::
	msgbox SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis
	closemessage
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SSAnne_CaptainsOffice_EventScript_AlreadyGotCut::
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon
	release
	end

SSAnne_CaptainsOffice_EventScript_TrashCan::
	msgbox SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked, MSGBOX_SIGN
	end

SSAnne_CaptainsOffice_EventScript_Book::
	msgbox SSAnne_CaptainsOffice_Text_HowToConquerSeasickness, MSGBOX_SIGN
	end

SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick::
	.string "せんちょう『おえー…!\nふなよいで… すっかり ダウンだ\lくるしい… … うえ!$"

SSAnne_CaptainsOffice_Text_RubbedCaptainsBack::
	.string "{PLAYER}は せんちょうの\nせなかを さすって あげた!\pすりすり… すりすり…\nすりすり… すりすり…$"

SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut::
	.string "せんちょう『ふう… ありがとう\nだいぶ ラクに なった みたいだ\p…なになに なんだ\nひでんの わざを みに きたのか\pげんきな ときなら じまんの\nいあいぎりを みせるんだがなあ…\pそうだ!\nかわりに これを あげよう!\pこれを きみの\nポケモンに おしえれば\lたたかって いない ときでも\lいつでも いあいぎりが みられる!$"

SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain::
	.string "{PLAYER}は せんちょう から\nひでんマシン01を もらった!$"

SSAnne_CaptainsOffice_Text_ExplainCut::
	.string "いあいぎりを つかえば\nほそい きも きれる!\pためしに… クチバシティに ある\nきでも きって みたまえ$"

SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon::
	.string "せんちょう『…ふう!\pらくに なったし…\nそろそろ じかんだ!\pもうすぐ サント・アンヌは\nしゅっぱつ するよ!\pまた クチバに くる ときまで\nごきげんよう!$"

SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis::
	.string "なんとー!\nにもつが いっぱいだ!$"

SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked::
	.string "あんまり みないほうが\nいい みたいだ…$"

SSAnne_CaptainsOffice_Text_HowToConquerSeasickness::
	.string "ふなよい しない\nふなのり にゅうもん…\l…これは\lせんちょうが よんでいる ほんだ!$"

