ViridianCity_Gym_Frlg_MapScripts::
	.byte 0

ViridianCity_Gym_EventScript_Giovanni::
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	trainerbattle_single TRAINER_LEADER_GIOVANNI, ViridianCity_Gym_Text_GiovanniIntro, ViridianCity_Gym_Text_GiovanniDefeat, ViridianCity_Gym_EventScript_DefeatedGiovanni, NO_MUSIC
	goto_if_unset FLAG_GOT_TM26_FROM_GIOVANNI, ViridianCity_Gym_EventScript_GiveTM26
	msgbox ViridianCity_Gym_Text_GiovanniPostBattle
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_VIRIDIAN_GIOVANNI
	fadescreen FADE_FROM_BLACK
	release
	end

ViridianCity_Gym_EventScript_DefeatedGiovanni::
	famechecker FAMECHECKER_GIOVANNI, 3
	setflag FLAG_HIDE_MISC_KANTO_ROCKETS
	setflag FLAG_DEFEATED_LEADER_GIOVANNI
	setflag FLAG_BADGE08_GET
	setvar VAR_MAP_SCENE_ROUTE22, 3
	set_gym_trainers_frlg 8
	goto ViridianCity_Gym_EventScript_GiveTM26
	end

ViridianCity_Gym_EventScript_GiveTM26::
	msgbox ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis
	checkitemspace ITEM_TM26
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_Gym_EventScript_NoRoomForTM26
	giveitem_msg ViridianCity_Gym_Text_ReceivedTM26FromGiovanni, ITEM_TM26
	setflag FLAG_GOT_TM26_FROM_GIOVANNI
	msgbox ViridianCity_Gym_Text_ExplainTM26
	release
	end

ViridianCity_Gym_EventScript_NoRoomForTM26::
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
	release
	end

ViridianCity_Gym_EventScript_Jason::
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Cole::
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Text_ColeIntro, ViridianCity_Gym_Text_ColeDefeat
	msgbox ViridianCity_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Atsushi::
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Kiyo::
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Takashi::
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Samuel::
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Yuji::
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Warren::
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_EventScript_GymGuyPostVictory
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
	release
	end

ViridianCity_Gym_EventScript_GymGuyPostVictory::
	famechecker FAMECHECKER_GIOVANNI, 4
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
	release
	end

ViridianCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
	msgbox ViridianCity_Gym_Text_GymStatue
	releaseall
	end

ViridianCity_Gym_EventScript_GymStatuePostVictory::
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

ViridianCity_Gym_Text_GiovanniIntro::
	.string "ははははーッ!\nここは おれの かくれが だ!\pロケットだん ふっかつの ひ まで\nこの ジムで\lたいせいを たてなおすのだ!\pしかし… きみに\nみつかって しまっては\lしょうがない!\lこんどは てかげん なしだ!\lでは…\pいま いちど!\nさいきょうの トレーナー\lサカキの うでまえを みよ!{PLAY_BGM}{MUS_RG_ENCOUNTER_ROCKET}$"

ViridianCity_Gym_Text_GiovanniDefeat::
	.string "はー はーッ!\nはげしい たたかい だった!\lきみの かちだ!\lいま…\lその あかしに\lグリーン バッジを わたそう!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

ViridianCity_Gym_Text_GiovanniPostBattle::
	.string "このような まけかたを しては\nぶかたちに しめしが つかない!\lロケットだんは…\lほんじつを もって かいさんする!\pわたしは\nポケモンの しゅぎょうを\lいちから しなおす つもりだ!\pいつの ひか…\nまた あおう!\l… さらばだ!$"

ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis::
	.string "グリーンバッジさえ あれば\nどんなに レベルの たかい\lポケモンも いうことを きく!\pきみが いちにんまえの\nトレーナーに なった あかしだ!\pこれで ポケモンリーグに\nいどむ ことが できるだろう\pこの わざマシンは…!\nポケモンリーグへ いどむ\lきみへ せんべつだ!$"

ViridianCity_Gym_Text_ReceivedTM26FromGiovanni::
	.string "{PLAYER}は サカキから\nわざマシン26を もらった!$"

ViridianCity_Gym_Text_ExplainTM26::
	.string "わざマシン26は じしん だ!\nじめんを つよく ゆらし\lてきに だいダメージを あたえる!\lきょうりょくな わざだ!\pおれが むかし… ここで\nポケモン ジムを やってる とき\lつくった ものだ…$"

ViridianCity_Gym_Text_YouDoNotHaveSpace::
	.string "にもつが いっぱいだ!$"

ViridianCity_Gym_Text_YujiIntro::
	.string "… さて!\nそろそろ…\lバテて きたんじゃないか$"

ViridianCity_Gym_Text_YujiDefeat::
	.string "… ちから つきた$"

ViridianCity_Gym_Text_YujiPostBattle::
	.string "たいりょくが ないと\nとても リーダーには かてないぜ!$"

ViridianCity_Gym_Text_AtsushiIntro::
	.string "うおーッ!\nおれの イカリは\lさいこうちょう だあッ!$"

ViridianCity_Gym_Text_AtsushiDefeat::
	.string "ぬうおーッ!$"

ViridianCity_Gym_Text_AtsushiPostBattle::
	.string "ウオースッ!\nまだまだ れんしゅう たりないッス$"

ViridianCity_Gym_Text_JasonIntro::
	.string "おれと ポケモンの\nコンビネーション!\lバツグン だぜ!$"

ViridianCity_Gym_Text_JasonDefeat::
	.string "… おまえと\nポケモンも いきが あってるな$"

ViridianCity_Gym_Text_JasonPostBattle::
	.string "おまえは ここの リーダーが\nだれか しって いるのか…?$"

ViridianCity_Gym_Text_KiyoIntro::
	.string "カラテ こそ!\nせかい さいきょうの かくとうぎ!$"

ViridianCity_Gym_Text_KiyoDefeat::
	.string "チェーストー!$"

ViridianCity_Gym_Text_KiyoPostBattle::
	.string "ウィオッス!\nポケモンが おれ くらい\lカラテ できれば いいんだが…$"

ViridianCity_Gym_Text_WarrenIntro::
	.string "しんに つよい トレーナーは\nかちかたも うつくしい ものだ!$"

ViridianCity_Gym_Text_WarrenDefeat::
	.string "てが すべった…!$"

ViridianCity_Gym_Text_WarrenPostBattle::
	.string "こんな まけかた したら…\n… リーダーに おこられる!$"

ViridianCity_Gym_Text_TakashiIntro::
	.string "キング オブ カラテ!\lここから さきへは\lいかせないぜ!$"

ViridianCity_Gym_Text_TakashiDefeat::
	.string "ドッセーッ!$"

ViridianCity_Gym_Text_TakashiPostBattle::
	.string "ウィース!\nポケモン リーグ めざしてるのか!\lませた こどもだ!$"

ViridianCity_Gym_Text_ColeIntro::
	.string "ピシ ピシッ!\nほら!\lビビってるんじゃないよ!$"

ViridianCity_Gym_Text_ColeDefeat::
	.string "… い いてて!$"

ViridianCity_Gym_Text_ColePostBattle::
	.string "まあ まて!\nゆだん した だけだ!$"

ViridianCity_Gym_Text_SamuelIntro::
	.string "トキワ ジムは\nずっと へいさ していたが\lリーダーが かえってきて\lきょうから ふっかつだ!$"

ViridianCity_Gym_Text_SamuelDefeat::
	.string "… さすがだ!$"

ViridianCity_Gym_Text_SamuelPostBattle::
	.string "きみが…\nトキワ リーダーに かてれば\lポケモンリーグに すすめる だろう$"

ViridianCity_Gym_Text_GymGuyAdvice::
	.string "おーす!\nみらいの チャンピオン!\pトキワ リーダーの しょうたいは\nおれにも わからん!\pたしかなのは\nいままでの リーダーの\lだれよりも つよいって ことだ!\pそれと…\nどうも この ジムには\lじめん タイプ ポケモンの\lつかいてが あつまってる らしい$"

ViridianCity_Gym_Text_GymGuyPostVictory::
	.string "たまげたぜ!\nトキワの リーダーが\lサカキ だったとは!$"

ViridianCity_Gym_Text_GymStatue::
	.string "トキワ ポケモン ジム\n??? にんてい トレーナー!\l{RIVAL}$"

ViridianCity_Gym_Text_GymStatuePlayerWon::
	.string "トキワ ポケモン ジム\nサカキ にんてい トレーナー!\l{RIVAL} {PLAYER}$"

