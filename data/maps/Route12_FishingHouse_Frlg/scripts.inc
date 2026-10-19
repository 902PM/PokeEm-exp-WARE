Route12_FishingHouse_Frlg_MapScripts::
	.byte 0

Route12_FishingHouse_EventScript_FishingGuruBrother::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SUPER_ROD, Route12_FishingHouse_EventScript_CheckMagikarpRecord
	msgbox Route12_FishingHouse_Text_DoYouLikeToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route12_FishingHouse_EventScript_GiveSuperRod
	msgbox Route12_FishingHouse_Text_OhThatsDisappointing
	release
	end

Route12_FishingHouse_EventScript_GiveSuperRod::
	checkitemspace ITEM_SUPER_ROD
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoRoomForSuperRod
	additem ITEM_SUPER_ROD
	msgbox Route12_FishingHouse_Text_TakeThisAndFish
	msgreceiveditem Route12_FishingHouse_Text_ReceivedSuperRod, ITEM_SUPER_ROD
	setflag FLAG_GOT_SUPER_ROD
	msgbox Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe
	release
	end

Route12_FishingHouse_EventScript_NoRoomForSuperRod::
	msgbox Route12_FishingHouse_Text_NoRoomForGift
	release
	end

Route12_FishingHouse_EventScript_CheckMagikarpRecord::
	setvar VAR_0x8004, SPECIES_MAGIKARP
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoMagikarpInParty
	special GetMagikarpSizeRecordInfo
	msgbox Route12_FishingHouse_Text_OhMagikarpAllowMeToSee
	special ChoosePartyMon
	copyvar VAR_RESULT, VAR_0x8004
	goto_if_ge VAR_RESULT, PARTY_SIZE, Route12_FishingHouse_EventScript_CancelShowMon
	special CompareMagikarpSize
	goto_if_eq VAR_RESULT, 1, Route12_FishingHouse_EventScript_NotMagikarp
	goto_if_eq VAR_RESULT, 2, Route12_FishingHouse_EventScript_NotRecordMagikarp
	goto_if_eq VAR_RESULT, 3, Route12_FishingHouse_EventScript_NewRecordMagikarp
	goto_if_eq VAR_RESULT, 4, Route12_FishingHouse_EventScript_TieRecordMagikarp
	release
	end

Route12_FishingHouse_EventScript_NoMagikarpInParty::
	msgbox Route12_FishingHouse_Text_TryFishingBringMeMagikarp
	release
	end

Route12_FishingHouse_EventScript_CancelShowMon::
	release
	end

Route12_FishingHouse_EventScript_NotMagikarp::
	msgbox Route12_FishingHouse_Text_DoesntLookLikeMagikarp
	release
	end

Route12_FishingHouse_EventScript_NotRecordMagikarp::
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NewRecordMagikarp
	msgbox Route12_FishingHouse_Text_HmmXSizeDoesntMeasureUp
	release
	end

Route12_FishingHouse_EventScript_TieRecordMagikarp::
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NewRecordMagikarp
	msgbox Route12_FishingHouse_Text_HuhXSizeSameSizeAsLast
	release
	end

Route12_FishingHouse_EventScript_NewRecordMagikarp::
	setflag FLAG_GOT_RECORD_SETTING_MAGIKARP
	msgbox Route12_FishingHouse_Text_WhoaXSizeTakeThis
	giveitem ITEM_NET_BALL
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoRoomForNetBall
	msgbox Route12_FishingHouse_Text_LookForwardToGreaterRecords
	release
	end

Route12_FishingHouse_EventScript_NoRoomForNetBall::
	msgbox Route12_FishingHouse_Text_NoRoomForGift
	release
	end

Route12_FishingHouse_EventScript_MagikarpRecordSign::
	lockall
	goto_if_set FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet
	msgbox Route12_FishingHouse_Text_BlankChartOfSomeSort
	releaseall
	end

Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet::
	special GetMagikarpSizeRecordInfo
	msgbox Route12_FishingHouse_Text_MostGiganticMagikarpXSize
	releaseall
	end

Route12_FishingHouse_Text_DoYouLikeToFish::
	.string "わしは\nつりおやじの おとうと じゃ!\pもう たまらん ほど\nつりが すき なんだが\pきみは つり すき かな?$"

Route12_FishingHouse_Text_TakeThisAndFish::
	.string "そうか!\nきみとは きが あいそうだ!\pこれ あげるから\nきみも つり まくりなさいよ!$"

Route12_FishingHouse_Text_ReceivedSuperRod::
	.string "{PLAYER}は つりおやじから\nすごいつりざおを もらった!$"

Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe::
	.string "つり こそ\nさいこうの ロマン だ!\pうみでも かわでも!\pえんりょ なく\nつりざおを つかって くれい!\pで そのつりざおで\nでっかい コイキング つったら\lわしに みせに こないか?\pわしは つりも だいすきだが\nでっかい コイキングを みるのも\lたまらんほど すきなんじゃ!$"

Route12_FishingHouse_Text_OhThatsDisappointing::
	.string "なんじゃ… がっかりだ$"

Route12_FishingHouse_Text_TryFishingBringMeMagikarp::
	.string "やー {PLAYER}{KUN}!\pすごいつりざおは\nばしょを かえると\lつれる ポケモンも かわる!\pあっちこっちで\nつり まくって くれい!\pでっかい コイキング\nみせて くれるのも わすれんでな!$"

Route12_FishingHouse_Text_OhMagikarpAllowMeToSee::
	.string "やや {PLAYER}{KUN}\nコイキングを もってる じゃないか\lさっそく みせて くれい!$"

Route12_FishingHouse_Text_WhoaXSizeTakeThis::
	.string "………おおっ! {STR_VAR_2}cm!\pキミは つりの ロマンの\nなんたるかを わかってるな!\lこれ あげるから もっていきなさい$"

Route12_FishingHouse_Text_LookForwardToGreaterRecords::
	.string "さらに いい きろく\nきたいしてるぞ!$"

Route12_FishingHouse_Text_HuhXSizeSameSizeAsLast::
	.string "あれっ! {STR_VAR_2}cm!\pこないだ みたのと\nおなじ おおきさ じゃないか?$"

Route12_FishingHouse_Text_HmmXSizeDoesntMeasureUp::
	.string "うーん… {STR_VAR_2}cmだな\pまえの {STR_VAR_3}cmの ほうが\nおおもの だったな$"

Route12_FishingHouse_Text_DoesntLookLikeMagikarp::
	.string "そ… それは ちょっと\nコイキングには みえないなあ$"

Route12_FishingHouse_Text_NoRoomForGift::
	.string "ありゃー!\pいいもの あげようと したのに\nにもつが いっぱいじゃ!$"

Route12_FishingHouse_Text_MostGiganticMagikarpXSize::
	.string "わしが これまでに みた\nいちばん でかい コイキング…\p{STR_VAR_3}cm$"

Route12_FishingHouse_Text_BlankChartOfSomeSort::
	.string "はりがみだ!\pなにかの きろくを\nかきこめる ように なっている$"

