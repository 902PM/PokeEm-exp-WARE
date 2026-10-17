.set REWARD_TYPE, VAR_0x8004
.set REWARD_ITEM, VAR_0x8008

CeruleanCity_House4_Frlg_MapScripts::
	.byte 0

CeruleanCity_House4_EventScript_WonderNewsBerryMan::
	lock
	specialvar REWARD_TYPE, WonderNews_GetRewardInfo
	copyvar REWARD_ITEM, VAR_RESULT
	goto_if_eq REWARD_TYPE, NEWS_REWARD_NONE,       CeruleanCity_House4_EventScript_NoNews
	goto_if_eq REWARD_TYPE, NEWS_REWARD_RECV_SMALL, CeruleanCity_House4_EventScript_Reward_RecvSmall
	goto_if_eq REWARD_TYPE, NEWS_REWARD_RECV_BIG,   CeruleanCity_House4_EventScript_Reward_RecvBig
	goto_if_eq REWARD_TYPE, NEWS_REWARD_WAITING,    CeruleanCity_House4_EventScript_Waiting
	goto_if_eq REWARD_TYPE, NEWS_REWARD_SENT_SMALL, CeruleanCity_House4_EventScript_Reward_SentSmall
	goto_if_eq REWARD_TYPE, NEWS_REWARD_SENT_BIG,   CeruleanCity_House4_EventScript_Reward_SentBig
	goto_if_eq REWARD_TYPE, NEWS_REWARD_AT_MAX,     CeruleanCity_House4_EventScript_AtMax
	end

@ Mystery Gift is not enabled, or the player has no saved Wonder News
CeruleanCity_House4_EventScript_NoNews::
	msgbox CeruleanCity_House4_Text_NothingEntertaining
	release
	end

@ Small reward for receiving Wonder News from friend
CeruleanCity_House4_EventScript_Reward_RecvSmall::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_NewNewsInformativeHaveThis
	giveitem REWARD_ITEM
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Big reward for receiving Wonder News from non-friend source
CeruleanCity_House4_EventScript_Reward_RecvBig::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_IncredibleNewsHaveBerries
	giveitem REWARD_ITEM, 4
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Player has not recently sent Wonder News
CeruleanCity_House4_EventScript_Waiting::
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox CeruleanCity_House4_Text_WishCouldShareNewsWithOthers
	release
	end

@ Small reward for sending Wonder News every 1-3 times
CeruleanCity_House4_EventScript_Reward_SentSmall::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis
	giveitem REWARD_ITEM
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Big reward for sending Wonder News every 4th time
CeruleanCity_House4_EventScript_Reward_SentBig::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries
	giveitem REWARD_ITEM, 4
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Player has hit reward limit and must wait to receive new rewards
CeruleanCity_House4_EventScript_AtMax::
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews
	release
	end

CeruleanCity_House4_EventScript_MovementReactionToNews::
	playse SE_PIN
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_Delay48
	waitmovement 0
	return

CeruleanCity_House4_EventScript_NoRoomForBerries::
	msgbox CeruleanCity_House4_Text_YourBerryPouchIsFull
	release
	end

CeruleanCity_House4_Text_NothingEntertaining::
	.string "うーむ\nひま じゃのう……\pさいきん なにか おもしろい ことは\nおこって ないかのう$"

CeruleanCity_House4_Text_NewNewsInformativeHaveThis::
	.string "おお!\nあたらしい ニュースじゃ!\pうーむ……\pなるほど!\pいや ためになった わい!\nわかいのに ニュースに きょうみが\lあるとは かんしん じゃのう\pわしに ニュースを みせてくれた\nおれいに これを やろう!$"

CeruleanCity_House4_Text_IncredibleNewsHaveBerries::
	.string "おお!\nこっこのニュースは!\p……ふーむ\pすごい!\nすごい ニュースじゃ!\pこんな すごい ニュースを\nみたのは ひさしぶり じゃわい!\pいいニュースを みせてくれた\nおれいに たくさん きのみをやろう!$"

CeruleanCity_House4_Text_WishCouldShareNewsWithOthers::
	.string "うーむ こんな いいニュース\nひとりじめ するには もったいない\pだれかにも しらせたいのう\nみせて やりたいのう$"

CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis::
	.string "おお! ニュースを\nひろめて くれたのか!\pいいニュースと いうものは\nいろんなひとに よまれてこそ\lほんとうの かちが でるものじゃ!\pうむ! ニュースを ひろめてくれた\nおれいに これをやろう!$"

CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries::
	.string "すばらしい! またニュースを\nひろめて くれたのか!\pニュースも たくさんの ひとに\nよんでもらえて うれしかろう!\pうむ!\pこれは ニュースと わしからの\nかんしゃの しるしじゃ!\pいつもより たくさん\nきのみを やろう!$"

CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews::
	.string "いろんな ニュースが\nよめて おもしろいのう\pうむ まんぞくじゃ!\nしばらくは あきんわい$"

CeruleanCity_House4_Text_YourBerryPouchIsFull::
	.string "むう!? きのみが いっぱいじゃな!\nじゃあ これは わしの ものじゃ$"

