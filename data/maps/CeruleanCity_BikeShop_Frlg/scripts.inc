CeruleanCity_BikeShop_Frlg_MapScripts::
	.byte 0

CeruleanCity_BikeShop_EventScript_Clerk::
	lock
	faceplayer
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_AlreadyGotBicycle
	goto_if_set FLAG_GOT_BIKE_VOUCHER, CeruleanCity_BikeShop_EventScript_ExchangeBikeVoucher
	showmoneybox 0, 0
	message CeruleanCity_BikeShop_Text_WelcomeToBikeShop
	waitmessage
	multichoice 11, 0, MULTI_BIKE_SHOP, FALSE
	hidemoneybox
	showmoneybox 0, 0
	switch VAR_RESULT
	case 0, CeruleanCity_BikeShop_EventScript_TryPurchaseBicycle
	case 1, CeruleanCity_BikeShop_EventScript_ClerkGoodbye
	case 127, CeruleanCity_BikeShop_EventScript_ClerkGoodbye
	end

@ The Bicycle price / players money is never actually checked
CeruleanCity_BikeShop_EventScript_TryPurchaseBicycle::
	msgbox CeruleanCity_BikeShop_Text_SorryYouCantAffordIt
	goto CeruleanCity_BikeShop_EventScript_ClerkGoodbye
	end

CeruleanCity_BikeShop_EventScript_ClerkGoodbye::
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
	hidemoneybox
	release
	end

CeruleanCity_BikeShop_EventScript_ExchangeBikeVoucher::
	msgbox CeruleanCity_BikeShop_Text_OhBikeVoucherHereYouGo
	msgreceiveditem CeruleanCity_BikeShop_Text_ExchangedVoucherForBicycle, ITEM_BICYCLE, 1, MUS_RG_OBTAIN_KEY_ITEM
	setflag FLAG_GOT_BICYCLE
	additem ITEM_BICYCLE
	removeitem ITEM_BIKE_VOUCHER
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
	release
	end

CeruleanCity_BikeShop_EventScript_AlreadyGotBicycle::
	msgbox CeruleanCity_BikeShop_Text_HowDoYouLikeNewBicycle
	release
	end

@ Unused
CeruleanCity_BikeShop_EventScript_NoRoomForBicycle::
	msgbox CeruleanCity_BikeShop_Text_MakeRoomForBicycle
	release
	end

CeruleanCity_BikeShop_EventScript_Woman::
	msgbox CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe, MSGBOX_NPC
	end

CeruleanCity_BikeShop_EventScript_Youngster::
	lock
	faceplayer
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_YoungsterHaveBike
	msgbox CeruleanCity_BikeShop_Text_BikesCoolButExpensive
	release
	end

CeruleanCity_BikeShop_EventScript_YoungsterHaveBike::
	msgbox CeruleanCity_BikeShop_Text_WowYourBikeIsCool
	release
	end

CeruleanCity_BikeShop_EventScript_Bicycle::
	msgbox CeruleanCity_BikeShop_Text_ShinyNewBicycle, MSGBOX_SIGN
	end

CeruleanCity_BikeShop_Text_WelcomeToBikeShop::
	.string "はい はい! いらっしゃい!\nここは ミラクル じてんしゃや!\pほりだしもの あるよー!\nかってくー?$"

CeruleanCity_BikeShop_Text_SorryYouCantAffordIt::
	.string "おきゃくさん!\nおかねが たりませんなー!$"

CeruleanCity_BikeShop_Text_OhBikeVoucherHereYouGo::
	.string "あー それは…!\pじてんしゃ ひきかえけん!\p…わかりました!\nささっ これを どうぞ!$"

CeruleanCity_BikeShop_Text_ExchangedVoucherForBicycle::
	.string "{PLAYER}は ひきかえけんで\nじてんしゃを もらった!$"

CeruleanCity_BikeShop_Text_ThankYouComeAgain::
	.string "また よろしく!\nありがとう ございました!$"

CeruleanCity_BikeShop_Text_HowDoYouLikeNewBicycle::
	.string "やあ こんちは! じてんしゃの\nのりごこちは いかが です?\pあの じてんしゃ なら\nサイクリング ロードは もちろん\lどうくつ だって はしれちゃうよ!$"

CeruleanCity_BikeShop_Text_MakeRoomForBicycle::
	.string "じてんしゃを もっていけないよ$"

CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe::
	.string "うーん…!\nやっぱり ママチャリ かしら?\pマウンテン バイクに\nかいものカゴ にあわない もん$"

CeruleanCity_BikeShop_Text_BikesCoolButExpensive::
	.string "この みせの じてんしゃ\nものは いいけど たかいよ!\lぼくには かえないね$"

CeruleanCity_BikeShop_Text_WowYourBikeIsCool::
	.string "きみの じてんしゃ かっこいい\nうらやましいなあ$"

@ Unused
CeruleanCity_BikeShop_Text_GermanFoldableBicyleFinallyOnMarket::
	.string "ついに はつばい!\pドイツ せい さいこうきゅう\nおりたたみ じてんしゃ!$"

CeruleanCity_BikeShop_Text_ShinyNewBicycle::
	.string "ピッカピカの じてんしゃだ!$"

