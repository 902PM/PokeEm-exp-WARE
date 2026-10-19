Route12_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route12_OnResume
	.byte 0

Route12_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route12_EventScript_TryRemoveSnorlax
	end

Route12_EventScript_TryRemoveSnorlax::
	removeobject VAR_LAST_TALKED
	return

Route12_EventScript_Snorlax::
	lock
	faceplayer
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route12_EventScript_SnorlaxNoPokeFlute
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route12_EventScript_DontUsePokeFlute
	call EventScript_AwakenSnorlax
	setwildbattle SPECIES_SNORLAX, 30
	waitse
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_HIDE_ROUTE_12_SNORLAX
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_WOKE_UP_ROUTE_12_SNORLAX
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route12_EventScript_FoughtSnorlax
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route12_EventScript_FoughtSnorlax
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route12_EventScript_FoughtSnorlax
	release
	end

Route12_EventScript_DontUsePokeFlute::
	release
	end

Route12_EventScript_FoughtSnorlax::
	msgbox Text_SnorlaxReturnedToMountains
	release
	end

Route12_EventScript_SnorlaxNoPokeFlute::
	msgbox Route12_Text_MonSprawledOutInSlumber
	release
	end

Route12_EventScript_RouteSign::
	msgbox Route12_Text_RouteSign, MSGBOX_SIGN
	end

Route12_EventScript_FishingSign::
	msgbox Route12_Text_SportfishingArea, MSGBOX_SIGN
	end

Route12_Text_MonSprawledOutInSlumber::
	.string "ポケモンが とても\nきもち よさそうに ねてます$"

Text_SnorlaxWokeUp::
	.string "カビゴンが めを さました!\pカビゴンは\nねぼけて おそってきた!$"

Text_SnorlaxReturnedToMountains::
	.string "カビゴンは おとなしく なった\nおおきな あくびを すると…\lやまおくへ さって いった!$"

Text_WantToUsePokeFlute::
	.string "ポケモンのふえを つかいますか?$"

Text_PlayedPokeFlute::
	.string "{PLAYER}は\nポケモンのふえを つかった!$"

Route12_Text_NedIntro::
	.string "おっ おーッ!\nひいてる ひいてる!$"

Route12_Text_NedDefeat::
	.string "ちッ!\nげどう だったか$"

Route12_Text_NedPostBattle::
	.string "まって くれ!\nつりいとが こんがらがった!$"

Route12_Text_ChipIntro::
	.string "… あわてるな!\nまつ ことも また!\lつりの たのしみ である$"

Route12_Text_ChipDefeat::
	.string "おっと…!\nちょっと まって くれ$"

Route12_Text_ChipPostBattle::
	.string "いい つりざおを つかえば\nいい ポケモンが つれるんだが…$"

Route12_Text_JustinIntro::
	.string "つきのいし さがしてるんだ けど\nきみ もって ない?$"

Route12_Text_JustinDefeat::
	.string "ありゃりゃ…!$"

Route12_Text_JustinPostBattle::
	.string "つきのいしが あれば\nポケモンが しんか して\lぼく かってた かも しれないよ$"

Route12_Text_LucaIntro::
	.string "ぼくの せんもん でんき だから\nうみ ポケモンは くわしく ないよ$"

Route12_Text_LucaDefeat::
	.string "ふにゃ ふにゃ…$"

Route12_Text_LucaPostBattle::
	.string "うーん… たしか みずは\nでんきを よく とおす から\lわざが きく はず だよね…$"

Route12_Text_HankIntro::
	.string "おうッ! つり バカ\nポケモン バカに であう!$"

Route12_Text_HankDefeat::
	.string "さすが つよい!$"

Route12_Text_HankPostBattle::
	.string "すき こそ\nものの じょうず なれ… だな!\lぼくも つり なら まけないぞ!$"

Route12_Text_ElliotIntro::
	.string "つり ばっかり して ないで\nもっと しごとも できれば\lさいこう なんだが…$"

Route12_Text_ElliotDefeat::
	.string "なかなか…\nうまく いかん もの じゃ$"

Route12_Text_ElliotPostBattle::
	.string "ははは… だいじょうぶ!\nまけた くらいで はらは たてんよ$"

Route12_Text_AndrewIntro::
	.string "… なにが つれるかって?\nそりゃ つって みなけりゃ\lわからんよ!$"

Route12_Text_AndrewDefeat::
	.string "しくじったな$"

Route12_Text_AndrewPostBattle::
	.string "ああ コイキング… ね\nよく つれる けど\lよわすぎるんだよなあ…$"

Route12_Text_RouteSign::
	.string "ここは 12ばん どうろ\nきた … シオン タウン$"

Route12_Text_SportfishingArea::
	.string "ここは つりの めいしょ$"

Route12_Text_JesIntro::
	.string "シゲ『か かったら\nアユに プロポーズ するぞ…!$"

Route12_Text_JesDefeat::
	.string "シゲ『たのむよ\nかたせて くれよお$"

Route12_Text_JesPostBattle::
	.string "シゲ『アユ ごめんね ごめんね$"

Route12_Text_JesNotEnoughMons::
	.string "シゲ『ぼくと アユは\nずーーーっと いっしょ なんだ!\lだから ポケモンも\l2たい2 じゃないと やらないよ$"

Route12_Text_GiaIntro::
	.string "アユ『ねえ シゲ…\pもし かてたら\nけっこん して あげる!$"

Route12_Text_GiaDefeat::
	.string "アユ『あーん なんでー?$"

Route12_Text_GiaPostBattle::
	.string "アユ『シゲの バカバカあー!$"

Route12_Text_GiaNotEnoughMons::
	.string "アユ『シゲと べつべつに なんて\nしょうぶ できない!\lポケモン もう1ぴき いない?$"

