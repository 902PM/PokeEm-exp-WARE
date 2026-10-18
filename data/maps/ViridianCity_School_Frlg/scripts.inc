ViridianCity_School_Frlg_MapScripts::
	.byte 0

ViridianCity_School_EventScript_Lass::
	lock
	faceplayer
	msgbox ViridianCity_School_Text_TryingToMemorizeNotes
	closemessage
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	release
	end

ViridianCity_School_EventScript_Woman::
	lock
	faceplayer
	msgbox ViridianCity_School_Text_ReadBlackboardCarefully
	closemessage
	applymovement LOCALID_SCHOOL_WOMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

ViridianCity_School_EventScript_Notebook::
	lockall
	msgbox ViridianCity_School_Text_NotebookFirstPage
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
	msgbox ViridianCity_School_Text_NotebookSecondPage
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
	msgbox ViridianCity_School_Text_NotebookThirdPage
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
	msgbox ViridianCity_School_Text_NotebookFourthPage
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox ViridianCity_School_Text_HeyDontLookAtMyNotes
	releaseall
	end

ViridianCity_School_EventScript_StopReadingNotebook::
	releaseall
	end

ViridianCity_School_EventScript_Blackboard::
	lockall
	msgbox ViridianCity_School_Text_BlackboardListsStatusProblems
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ChooseBlackboardTopic::
	message ViridianCity_School_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 7, 1, MULTI_STATUS_INFO, 3, FALSE
	switch VAR_RESULT
	case 0, ViridianCity_School_EventScript_ReadSleep
	case 1, ViridianCity_School_EventScript_ReadPoison
	case 2, ViridianCity_School_EventScript_ReadParalysis
	case 3, ViridianCity_School_EventScript_ReadBurn
	case 4, ViridianCity_School_EventScript_ReadFreeze
	case 5, ViridianCity_School_EventScript_ExitBlackboard
	case 127, ViridianCity_School_EventScript_ExitBlackboard
	end

ViridianCity_School_EventScript_ReadSleep::
	msgbox ViridianCity_School_Text_ExplainSleep
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ReadBurn::
	msgbox ViridianCity_School_Text_ExplainBurn
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ReadPoison::
	msgbox ViridianCity_School_Text_ExplainPoison
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ReadFreeze::
	msgbox ViridianCity_School_Text_ExplainFreeze
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ReadParalysis::
	msgbox ViridianCity_School_Text_ExplainParalysis
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ExitBlackboard::
	releaseall
	end

ViridianCity_School_Text_TryingToMemorizeNotes::
	.string "ふー\nノートの なかの こと\lわたし ぜんぶ おぼえるの$"

ViridianCity_School_Text_ReadBlackboardCarefully::
	.string "はい!\pこくばんに かかれてる こと\nちゃんと みて!$"

ViridianCity_School_Text_NotebookFirstPage::
	.string "ノートを のぞいた!\p1ページめ …\pポケモンは\nモンスターボールで つかまえて\l6つまで もち あるける\pポケモンを そだてて たたかわせる\nひとを ポケモン トレーナーという$"

ViridianCity_School_Text_NotebookSecondPage::
	.string "2ページめ …\pポケモンを つかまえる ときは\nまず よわらせてから!\lどくや やけどで\pよわらせても いいよ!\nげんきだと うまく とれないかも$"

ViridianCity_School_Text_NotebookThirdPage::
	.string "3ページめ …\pポケモンどうしを たたかわせ\nかつことは トレーナーに とって\lさいこうの よろこび である!\pかくちの ポケモン ジムでは\nいつも はげしい\lたたかいが くりひろげられてる!$"

ViridianCity_School_Text_NotebookFourthPage::
	.string "4ページめ …\pポケモントレーナーの もくひょうは\nかくちの ジムに いる\pつよい トレーナー\n8にんしゅうを たおすこと!\pさらに ポケモンリーグ ほんぶには\n… もうれつに つよい!\pしてんのうが くんりん してる!$"

ViridianCity_School_Text_TurnThePage::
	.string "つぎのページ あけちゃおうか?$"

ViridianCity_School_Text_HeyDontLookAtMyNotes::
	.string "おんなのこ『あー!\nノート みちゃ だめ!$"

ViridianCity_School_Text_BlackboardListsStatusProblems::
	.string "こくばんに\nポケモンが たたかってる とき\lおこる たいちょうの\lへんかに ついて かかれてる$"

ViridianCity_School_Text_ReadWhichTopic::
	.string "どの こうもくを みますか?$"

ViridianCity_School_Text_ExplainSleep::
	.string "ねてしまうと その あいだは\nこうげき できません!\pたたかい おわっても ねたまま\nねむけざましで めが さめます$"

ViridianCity_School_Text_ExplainBurn::
	.string "やけどは たいりょくが へって\nこうげきりょくが\lさがって しまいます!\pたたかい おわっても\nやけどは のこります\lまた やけどなおしで なおります$"

ViridianCity_School_Text_ExplainPoison::
	.string "どくを くらうと\nたいりょくが へって いきます\pたたかい おわっても\nどくは のこりますが\lどくけしで きえます!$"

ViridianCity_School_Text_ExplainFreeze::
	.string "こおって しまうと\nまったく うごけなく なります!\pたたかい おわっても こおってます\nこおりなおしで とかさないと\lポケモンが かわいそう$"

ViridianCity_School_Text_ExplainParalysis::
	.string "まひすると わざが\nときどき でなく なり\lすばやさも さがって しまいます!\pたたかい おわっても\nまひは のこります\lまた まひなおしで なおります$"

