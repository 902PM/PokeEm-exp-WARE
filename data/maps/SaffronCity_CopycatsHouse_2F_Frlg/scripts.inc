SaffronCity_CopycatsHouse_2F_Frlg_MapScripts::
	.byte 0

SaffronCity_CopycatsHouse_2F_EventScript_Doduo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
	msgbox SaffronCity_CopycatsHouse_2F_Text_Doduo
	waitmoncry
	release
	end

SaffronCity_CopycatsHouse_2F_EventScript_Doll::
	lock
	msgbox SaffronCity_CopycatsHouse_2F_Text_RareMonOnlyDoll
	release
	end

SaffronCity_CopycatsHouse_2F_EventScript_Copycat::
	lock
	faceplayer
	checkitem ITEM_POKE_DOLL
	goto_if_eq VAR_RESULT, TRUE, EventScript_MimicTutor
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerMale
	call_if_eq VAR_RESULT, FEMALE, SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerFemale
	release
	end

SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerMale::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyMale
	return

SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerFemale::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyFemale
	return

SaffronCity_CopycatsHouse_2F_EventScript_Computer::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MySecrets, MSGBOX_SIGN
	end

SaffronCity_CopycatsHouse_2F_EventScript_Game::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MarioWearingABucket, MSGBOX_SIGN
	end

SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyMale::
	.string "{PLAYER}『やあ! こんにちは!\nきみ ポケモン すきかい?\p{PLAYER}『ぼく じゃなくって\nきみに きいてるんだ けど\p{PLAYER}『… えー なんだよ!\nヘンな やつ だなあ!\pモノマネむすめ『… なに?\nひとの マネ すんなって?\pだって あたし \nものまね しゅみ なんだ もん!$"

SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyFemale::
	.string "{PLAYER}『こんにちは!\nポケモン すきなのね?\p{PLAYER}『わたし じゃなくって\nあなたに きいてるんだ けど\p{PLAYER}『… えー なんなの!\nおかしなこ ねー!\pモノマネむすめ『… なに?\nひとの マネ すんなって?\pだって あたし\nものまね しゅみ なんだ もん!$"

Text_MimicTeach::
	.string "わあー!\nピッピにんぎょう くれるのー!\pうれしーい!\p… じゃあねー!\nわたし からは ものまねの わざ\lおしえて あげるー!$"

Text_MimicDeclined::
	.string "ものまね… キライ?$"

Text_MimicWhichMon::
	.string "わたしの だいすきな ものまね!\nだれが おぼえて くれるの?$"

Text_MimicTaughtMale::
	.string "{PLAYER}『やあ! さっきは\n ありがとう!\p{PLAYER}『… なーに?\p{PLAYER}『ぼくの まね して\nそんなに たのしい かい?\pモノマネむすめ『うん…!\nとっても たのしいー!$"

Text_MimicTaughtFemale::
	.string "{PLAYER}『あ! さっきは\n ありがとう!\p{PLAYER}『… なーに?\p{PLAYER}『わたしの まね して\nそんなに たのしい?\pモノマネむすめ『うん…!\nとっても たのしいー!$"

SaffronCity_CopycatsHouse_2F_Text_FullofBag::
	.string "にもつが いっぱいね!$"

SaffronCity_CopycatsHouse_2F_Text_Doduo::
	.string "ドードー『ギー ギーッ!\p… カガミ ヨ カガミ!\nセカイデ イチバン カワイイ\lオンナノコハ ダーレ?$"

SaffronCity_CopycatsHouse_2F_Text_RareMonOnlyDoll::
	.string "これは めずらしい ポケモン!?\n… あれ? ぬいぐるみ だった$"

SaffronCity_CopycatsHouse_2F_Text_MarioWearingABucket::
	.string "これは…!\nマリオが バケツを かぶって\lあるいて いく ゲームだ!$"

SaffronCity_CopycatsHouse_2F_Text_MySecrets::
	.string "… … …\pわたしの ひみつ…!\pとくいなもの … ものまね!\nしゅみ … ぬいぐるみ!\lすきなもの … ピッピ!\l… … …$"

SaffronCity_CopycatsHouse_2F_Text_Botsu::
	.string "? みえないぞ…$"

