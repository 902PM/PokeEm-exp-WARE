SixIsland_PatternBush_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PatternBush_OnTransition
	.byte 0

SixIsland_PatternBush_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_ge VAR_TEMP_1, 50, SixIsland_PatternBush_EventScript_SetEscapeRightExit
	call_if_le VAR_TEMP_1, 49, SixIsland_PatternBush_EventScript_SetEscapeLeftExit
	end

SixIsland_PatternBush_EventScript_SetEscapeRightExit::
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 64, 10
	return

SixIsland_PatternBush_EventScript_SetEscapeLeftExit::
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 45, 10
	return

SixIsland_PatternBush_EventScript_Bethany::
	trainerbattle_single TRAINER_PKMN_BREEDER_BETHANY, SixIsland_PatternBush_Text_BethanyIntro, SixIsland_PatternBush_Text_BethanyDefeat
	msgbox SixIsland_PatternBush_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Allison::
	trainerbattle_single TRAINER_PKMN_BREEDER_ALLISON, SixIsland_PatternBush_Text_AllisonIntro, SixIsland_PatternBush_Text_AllisonDefeat
	msgbox SixIsland_PatternBush_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Garret::
	trainerbattle_single TRAINER_BUG_CATCHER_GARRET, SixIsland_PatternBush_Text_GarretIntro, SixIsland_PatternBush_Text_GarretDefeat
	msgbox SixIsland_PatternBush_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Jonah::
	trainerbattle_single TRAINER_BUG_CATCHER_JONAH, SixIsland_PatternBush_Text_JonahIntro, SixIsland_PatternBush_Text_JonahDefeat
	msgbox SixIsland_PatternBush_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Vance::
	trainerbattle_single TRAINER_BUG_CATCHER_VANCE, SixIsland_PatternBush_Text_VanceIntro, SixIsland_PatternBush_Text_VanceDefeat
	msgbox SixIsland_PatternBush_Text_VancePostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Nash::
	trainerbattle_single TRAINER_YOUNGSTER_NASH, SixIsland_PatternBush_Text_NashIntro, SixIsland_PatternBush_Text_NashDefeat
	msgbox SixIsland_PatternBush_Text_NashPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Cordell::
	trainerbattle_single TRAINER_YOUNGSTER_CORDELL, SixIsland_PatternBush_Text_CordellIntro, SixIsland_PatternBush_Text_CordellDefeat
	msgbox SixIsland_PatternBush_Text_CordellPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Dalia::
	trainerbattle_single TRAINER_LASS_DALIA, SixIsland_PatternBush_Text_DaliaIntro, SixIsland_PatternBush_Text_DaliaDefeat
	msgbox SixIsland_PatternBush_Text_DaliaPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Joana::
	trainerbattle_single TRAINER_LASS_JOANA, SixIsland_PatternBush_Text_JoanaIntro, SixIsland_PatternBush_Text_JoanaDefeat
	msgbox SixIsland_PatternBush_Text_JoanaPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Riley::
	trainerbattle_single TRAINER_CAMPER_RILEY, SixIsland_PatternBush_Text_RileyIntro, SixIsland_PatternBush_Text_RileyDefeat
	msgbox SixIsland_PatternBush_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Marcy::
	trainerbattle_single TRAINER_PICNICKER_MARCY, SixIsland_PatternBush_Text_MarcyIntro, SixIsland_PatternBush_Text_MarcyDefeat
	msgbox SixIsland_PatternBush_Text_MarcyPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Layton::
	trainerbattle_single TRAINER_RUIN_MANIAC_LAYTON, SixIsland_PatternBush_Text_LaytonIntro, SixIsland_PatternBush_Text_LaytonDefeat
	msgbox SixIsland_PatternBush_Text_LaytonPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_Text_BethanyIntro::
	.string "あなたは どんな ふうに\nポケモンを そだてて いるの?$"

SixIsland_PatternBush_Text_BethanyDefeat::
	.string "あいじょう たっぷりね!$"

SixIsland_PatternBush_Text_BethanyPostBattle::
	.string "あなたのママが\nあなたを そだてた ように\lあなたも ポケモンを そだてるのよ$"

SixIsland_PatternBush_Text_AllisonIntro::
	.string "この はやしで ポケモンの\nしぜんほごを おこなって いるの$"

SixIsland_PatternBush_Text_AllisonDefeat::
	.string "わかいのに すごいのねえ$"

SixIsland_PatternBush_Text_AllisonPostBattle::
	.string "ポケモンを つかまえちゃ ダメって\nわけでは ないの\lつかまえたら だいじに そだててね$"

SixIsland_PatternBush_Text_GarretIntro::
	.string "このへんに しか いない\nむし ポケモン とったぞー$"

SixIsland_PatternBush_Text_GarretDefeat::
	.string "へへ…\nぼくの ポケモン いいでしょ$"

SixIsland_PatternBush_Text_GarretPostBattle::
	.string "ヘラクロスの おおきさを\nはかって くれる おねえさんが\lはやしの ちかくに いるんだよ$"

SixIsland_PatternBush_Text_JonahIntro::
	.string "やっぱ むしポケ じゃないと\nポケモン やってる きが しない!$"

SixIsland_PatternBush_Text_JonahDefeat::
	.string "いいよ! まけるのも\nポケモンの だいごみ だもん$"

SixIsland_PatternBush_Text_JonahPostBattle::
	.string "ところでさ\nだいごみ って なんだろ?\lでかいゴミの ことかな?$"

SixIsland_PatternBush_Text_VanceIntro::
	.string "うきゃ うきゃ!\nむしポケモンが いっぱい だあ!$"

SixIsland_PatternBush_Text_VanceDefeat::
	.string "よろこんでる うちに\nまけちまったい$"

SixIsland_PatternBush_Text_VancePostBattle::
	.string "こんど おとうとも\nつれてきて やろーっと!$"

SixIsland_PatternBush_Text_NashIntro::
	.string "ねえねえ!\nじめんに へんな もようが あるよ$"

SixIsland_PatternBush_Text_NashDefeat::
	.string "すげー!$"

SixIsland_PatternBush_Text_NashPostBattle::
	.string "じめんの へんな もよう…\pじいちゃんの きてる ふくの\nガラに にてるぞ…$"

SixIsland_PatternBush_Text_CordellIntro::
	.string "おまえ おれの こと\nいなかもん とか おもっただろ$"

SixIsland_PatternBush_Text_CordellDefeat::
	.string "いなかもんは よわい とか\nおもった だろ ちきしょー$"

SixIsland_PatternBush_Text_CordellPostBattle::
	.string "そんな カッコつけた ぼうし\nかぶっちゃってさー\pおれに くれよ!$"

SixIsland_PatternBush_Text_DaliaIntro::
	.string "しんこきゅう して みて\nくうきが おいしいよ!$"

SixIsland_PatternBush_Text_DaliaDefeat::
	.string "しんこきゅうの ほうほうを\nおしえて あげる!$"

SixIsland_PatternBush_Text_DaliaPostBattle::
	.string "まず おもいきり いきを はいて\pもうダメって ほど はきだしたら\nしんせんな くうきを\lおおきく すいこむの!\pすっきり した?$"

SixIsland_PatternBush_Text_JoanaIntro::
	.string "むし ポケモンが だいすきで\nここに よく くるんだ!\lこんな おんなのこ あたしだけ?$"

SixIsland_PatternBush_Text_JoanaDefeat::
	.string "まけたけど わらって いられるよ!\nこんな おんなのこ あたしだけ?$"

SixIsland_PatternBush_Text_JoanaPostBattle::
	.string "これからも むし ポケモン\nいっぱい あつめるんだー!\lこんな おんなのこ あたしだけ?$"

SixIsland_PatternBush_Text_RileyIntro::
	.string "きめたぞ\nここに テントを はろうっと$"

SixIsland_PatternBush_Text_RileyDefeat::
	.string "へなへな$"

SixIsland_PatternBush_Text_RileyPostBattle::
	.string "ここで よぞらの\nかんさつを するのさ$"

SixIsland_PatternBush_Text_MarcyIntro::
	.string "いやーん!\nムシに さされちゃった かな?$"

SixIsland_PatternBush_Text_MarcyDefeat::
	.string "ムシじゃ なくて\nくさで あしを きってた みたい$"

SixIsland_PatternBush_Text_MarcyPostBattle::
	.string "この くらいの キズ\nなめときゃ なおるわね!$"

SixIsland_PatternBush_Text_LaytonIntro::
	.string "きみ なにか\nきがついた ことは ないかね?$"

SixIsland_PatternBush_Text_LaytonDefeat::
	.string "あしもとに ちゅうもく\nして みたかい?$"

SixIsland_PatternBush_Text_LaytonPostBattle::
	.string "この はやし には\nくさが はえない ところが ある…\pどうして なんだろう?$"

