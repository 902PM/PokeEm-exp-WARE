VermilionCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VermilionCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_VERMILION_CITY
	end

VermilionCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

VermilionCity_PokemonCenter_1F_EventScript_Man::
	msgbox VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking, MSGBOX_NPC
	end

VermilionCity_PokemonCenter_1F_EventScript_Hiker::
	msgbox VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild, MSGBOX_NPC
	end

VermilionCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes, MSGBOX_NPC
	end

VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman::
	lock
	faceplayer
	goto_if_set FLAG_GOT_VS_SEEKER, VermilionCity_PokemonCenter_1F_EventScript_ExplainVSSeeker
	msgbox VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain
	setflag FLAG_GOT_VS_SEEKER
	giveitem ITEM_VS_SEEKER
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	msgbox VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches
	release
	end

VermilionCity_PokemonCenter_1F_EventScript_ExplainVSSeeker::
	msgbox VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker
	release
	end

VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild::
	.string "おなじ レベルの ポケモンでも\nつよさは まちまち らしい\pそれに ひとが そだてた\nポケモンの ほうが\lやせい より つよい らしい$"

VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking::
	.string "おれの ポケモン\nどく くらったまま あるいてたら\lちから つき おったで!$"

VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes::
	.string "たしかに レベルの たかい\nポケモンは つよい けど…\pポケモンの タイプに よって\nにがてな あいてが ある みたい\pぜったいに つよい ポケモンは\nなかなか いない みたいだ$"

VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain::
	.string "いちど たたかった トレーナーと\nまた しょうぶ してみたい!\p…なんて おもうこと ない?\nあるわよね?\pわたし いろんな トレーナーと\nなんども たたかい たくて\lこれ くばってるのよ\pもらって もらって!$"

VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches::
	.string "それを つかうと\nもういちど しょうぶ したい\lトレーナーが みつかるの!\pじゅうでん して つかってね!$"

VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker::
	.string "え バトルサーチャーの つかいかた?\nかんたんよ!\pピピピ!と つかえば\nそばの トレーナーに つたわるの\pもういちど しょうぶ したい\nトレーナーが いれば\lすぐに おしえて くれるわ!\pじゅうでん して\nどうろで つかってね!$"

