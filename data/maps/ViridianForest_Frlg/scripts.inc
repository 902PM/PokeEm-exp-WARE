ViridianForest_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_OnTransition
	.byte 0

ViridianForest_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
	end

ViridianForest_EventScript_Youngster::
	msgbox ViridianForest_Text_FriendsItchingToBattle, MSGBOX_NPC
	end

ViridianForest_EventScript_Boy::
	msgbox ViridianForest_Text_RanOutOfPokeBalls, MSGBOX_NPC
	end

ViridianForest_EventScript_TrainerTips1::
	msgbox ViridianForest_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips2::
	msgbox ViridianForest_Text_UseAntidoteForPoison, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips3::
	msgbox ViridianForest_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips4::
	msgbox ViridianForest_Text_CantCatchOwnedMons, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips5::
	msgbox ViridianForest_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
	end

ViridianForest_EventScript_ExitSign::
	msgbox ViridianForest_Text_LeavingViridianForest, MSGBOX_SIGN
	end

ViridianForest_EventScript_Rick::
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianForest_Text_RickIntro, ViridianForest_Text_RickDefeat
	msgbox ViridianForest_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Doug::
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianForest_Text_DougIntro, ViridianForest_Text_DougDefeat
	msgbox ViridianForest_Text_DougPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Sammy::
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianForest_Text_SammyIntro, ViridianForest_Text_SammyDefeat
	msgbox ViridianForest_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Anthony::
	trainerbattle_single TRAINER_BUG_CATCHER_ANTHONY, ViridianForest_Text_AnthonyIntro, ViridianForest_Text_AnthonyDefeat
	msgbox ViridianForest_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Charlie::
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianForest_Text_CharlieIntro, ViridianForest_Text_CharlieDefeat
	msgbox ViridianForest_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_Text_FriendsItchingToBattle::
	.string "ともだちと むし ポケモン\nとりに きてるんだ!\pポケモン しょうぶ したくて\nみんな ウズウズ してるよ!$"

ViridianForest_Text_RickIntro::
	.string "よーしッ!\nきみは ポケモン もってるな?\lしょうぶ しようぜ!$"

ViridianForest_Text_RickDefeat::
	.string "まけたあ!\nキャタピー なんか じゃ ダメか$"

ViridianForest_Text_RickPostBattle::
	.string "しッ…!\nむしが にげる から またな!$"

ViridianForest_Text_DougIntro::
	.string "おーいッ!\nポケモン トレーナーなら\lしょうぶは ことわれ ないぜ!$"

ViridianForest_Text_DougDefeat::
	.string "あれ?\nもう ポケモンが ないや$"

ViridianForest_Text_DougPostBattle::
	.string "くやしいな!\nつよいのを つかまえて こよう!$"

ViridianForest_Text_SammyIntro::
	.string "ちょっと まったあ!\nそんな いそいで どこに いく?$"

ViridianForest_Text_SammyDefeat::
	.string "まいった!\nきみは つよいな!$"

ViridianForest_Text_SammyPostBattle::
	.string "みえない ところ でも ホントは\nなにか おちてたり する!\pさっき おとしもの したんだ\nきみも さがして みて くれる?$"

ViridianForest_Text_AnthonyIntro::
	.string "ボクが ちいさい からって\nてかげんは いやだよ!$"

ViridianForest_Text_AnthonyDefeat::
	.string "あー だめだあ$"

ViridianForest_Text_AnthonyPostBattle::
	.string "おこづかいが へって しまったあ$"

ViridianForest_Text_CharlieIntro::
	.string "ポケモンが しんか するって\nきみ しってる?$"

ViridianForest_Text_CharlieDefeat::
	.string "まけちゃった$"

ViridianForest_Text_CharliePostBattle::
	.string "むしポケモンは しんかが\nはやくて たのしいよな!$"

ViridianForest_Text_RanOutOfPokeBalls::
	.string "ポケモン とろうとして\nモンスター ボール なげてたら\lすぐ なくなっちゃった\pきみも おおめに\nかって おくと いいよ$"

ViridianForest_Text_AvoidGrassyAreasWhenWeak::
	.string "… おとくな けいじばん!\pもってる ポケモンが よわって きて\nたたかわせたく ない ときは\lくさむらを よけて かえろう!$"

ViridianForest_Text_UseAntidoteForPoison::
	.string "どくを くらったら どくけし!\nフレンドリィ ショップで!$"

ViridianForest_Text_ContactOakViaPCToRatePokedex::
	.string "… おとくな けいじばん!\pポケモンずかんは\nパソコンつうしんで\lオーキドはかせに みてもらえる!$"

ViridianForest_Text_CantCatchOwnedMons::
	.string "… おとくな けいじばん!\pひとの ポケモンは ひとの もの!\nやせいの ポケモンに だけ\lモンスターボールを なげて\lつかまえよう!$"

ViridianForest_Text_WeakenMonsBeforeCapture::
	.string "… おとくな けいじばん!\pポケモンを つかまえる ときは\nなるべく よわらせてから!\pポケモンが げんきだと\nにげるかも しれないよ!$"

ViridianForest_Text_LeavingViridianForest::
	.string "トキワの もり … でぐち\nこのさき ニビ シティ$"

