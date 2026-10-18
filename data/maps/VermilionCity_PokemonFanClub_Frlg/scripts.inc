.set SPOKE_TO_WOMAN_LAST,   FLAG_TEMP_2
.set SPOKE_TO_FAT_MAN_LAST, FLAG_TEMP_3

VermilionCity_PokemonFanClub_Frlg_MapScripts::
	.byte 0

VermilionCity_PokemonFanClub_EventScript_Chairman::
	lock
	faceplayer
	goto_if_set FLAG_GOT_BIKE_VOUCHER, VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory
	msgbox VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, VermilionCity_PokemonFanClub_EventScript_ChairmanStory
	msgbox VermilionCity_PokemonFanClub_Text_ComeBackToHearStory
	release
	end

VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory::
	msgbox VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain
	release
	end

VermilionCity_PokemonFanClub_EventScript_ChairmanStory::
	msgbox VermilionCity_PokemonFanClub_Text_ChairmansStory
	checkitemspace ITEM_BIKE_VOUCHER
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher
	setflag FLAG_GOT_BIKE_VOUCHER
	giveitem_msg VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman, ITEM_BIKE_VOUCHER, 1, MUS_RG_OBTAIN_KEY_ITEM
	msgbox VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher
	release
	end

VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher::
	msgbox VermilionCity_PokemonFanClub_Text_MakeRoomForThis
	release
	end

VermilionCity_PokemonFanClub_EventScript_WorkerF::
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon
	release
	end

VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear::
	famechecker FAMECHECKER_DAISY, 1
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons
	release
	end

VermilionCity_PokemonFanClub_EventScript_Woman::
	lock
	faceplayer
	goto_if_set SPOKE_TO_FAT_MAN_LAST, VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan
	msgbox VermilionCity_PokemonFanClub_Text_AdoreMySeel
	closemessage
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag SPOKE_TO_WOMAN_LAST
	release
	end

VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan::
	msgbox VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive
	closemessage
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	clearflag SPOKE_TO_FAT_MAN_LAST
	release
	end

VermilionCity_PokemonFanClub_EventScript_FatMan::
	lock
	faceplayer
	goto_if_set SPOKE_TO_WOMAN_LAST, VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman
	msgbox VermilionCity_PokemonFanClub_Text_AdmirePikachusTail
	closemessage
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag SPOKE_TO_FAT_MAN_LAST
	release
	end

VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman::
	msgbox VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute
	closemessage
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	clearflag SPOKE_TO_WOMAN_LAST
	release
	end

VermilionCity_PokemonFanClub_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox VermilionCity_PokemonFanClub_Text_Pikachu
	waitmoncry
	release
	end

VermilionCity_PokemonFanClub_EventScript_Seel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SEEL, CRY_MODE_NORMAL
	msgbox VermilionCity_PokemonFanClub_Text_Seel
	waitmoncry
	release
	end

VermilionCity_PokemonFanClub_EventScript_RulesSign1::
	msgbox VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers, MSGBOX_SIGN
	end

VermilionCity_PokemonFanClub_EventScript_RulesSign2::
	msgbox VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack, MSGBOX_SIGN
	end

VermilionCity_PokemonFanClub_Text_AdmirePikachusTail::
	.string "みてよ! うちの ピカチュウ\nなんて かわいい しっぽ!$"

VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute::
	.string "なにを!\pうちの ピカチュウの ほうが\nその ばいは かわいい わい!$"

VermilionCity_PokemonFanClub_Text_AdoreMySeel::
	.string "あたしの いとしい パウワウ!\pだきしめると\nきゅー! って なくのよ!$"

VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive::
	.string "おほほ!\pあたしの パウワウの ほうが\nその ばいは かわいいわよ!$"

VermilionCity_PokemonFanClub_Text_Pikachu::
	.string "ピカチュウ『ちゅー ぴかちゅ$"

VermilionCity_PokemonFanClub_Text_Seel::
	.string "パウワウ『きゅー$"

VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons::
	.string "ポケモン だいすき クラブの\nかいちょうは わし じゃ!\pかってる ポケモンは\n1000ぴきを こえとる!\pポケモンに かんしては\nホント うるさい! ですぞ!\pで…\pきみは わしの ポケモン じまんを\nききに きたの かね?$"

VermilionCity_PokemonFanClub_Text_ChairmansStory::
	.string "そうか!\nでは さっそく はじめるか!\pあのな… わしの おきにいりの\nギャロップがな… …\p… でな… が…\l… … かわいくてな…\lたまらん… くう…\l… さらに… もう…\lすごすぎ… … で…\l… そう おもうか…\lどうして… … すき…\l… はー!\p… … だきしめて…\lねるときも…\l… じゃろ… …\l… … すばらし…!\l… うつくし…\l… … ありゃ!\lもう こんな じかんか!\lちょっと しゃべり すぎたわい\pわしの ポケモン じまんを\nおとなしく きいてた おれいに\l…これは きもち じゃ!$"

VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman::
	.string "{PLAYER}は かいちょうから\nひきかえけんを もらった!$"

VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher::
	.string "その ひきかえけんを\nハナダシティの\lミラクルサイクルに もっていくと\lタダで じてんしゃが もらえる!\pなに わしには おきにいりの\nとりポケモン オニドリルが おる\lいきたい ところへ ひとっとびじゃ\pだから じてんしゃ など いらん!\pじてんしゃは きみが\nすきに のったら ええ!$"

VermilionCity_PokemonFanClub_Text_ComeBackToHearStory::
	.string "なんじゃ… つまらん\nきく きに なったら きてくれい!$"

VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain::
	.string "やー やー {PLAYER}{KUN}!\pまた わしの ポケモン じまんを\nききに きたの かね!\p… え ちがう?\nなんじゃ… つまらん$"

VermilionCity_PokemonFanClub_Text_MakeRoomForThis::
	.string "にもつが いっぱい じゃ!$"

VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon::
	.string "うちの かいちょうは\nホント ポケモンに うるさいの!$"

VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers::
	.string "かいぬしの じまん ばなしには\nしずかに みみを かたむけよう!$"

VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack::
	.string "ひとの じまん ばなしは\n10ばい にして かえそう!$"

VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons::
	.string "うちの かいちょうは ほんとうに\nポケモンが だいすきだけど…\pポケモンに いちばん\nすかれている ひとと いえば\lやっぱり ナナミさんかしら!$"
