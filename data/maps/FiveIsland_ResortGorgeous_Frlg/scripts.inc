FiveIsland_ResortGorgeous_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FiveIsland_ResortGorgeous_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_ResortGorgeous_OnFrame
	.byte 0

FiveIsland_ResortGorgeous_OnWarp::
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth
	.2byte 0

FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

FiveIsland_ResortGorgeous_OnFrame::
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene
	.2byte 0

FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene::
	lockall
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow
	closemessage
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	opendoor 39, 8
	waitdooranim
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, FiveIsland_ResortGorgeous_Movement_SelphyEnterHome
	waitmovement 0
	closedoor 39, 8
	waitdooranim
	removeobject LOCALID_RESORT_GORGEOUS_SELPHY
	clearflag FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 2
	releaseall
	end

FiveIsland_ResortGorgeous_Movement_SelphyEnterHome::
	walk_up
	set_invisible
	step_end

FiveIsland_ResortGorgeous_EventScript_SelphysHouseSign::
	msgbox FiveIsland_ResortGorgeous_Text_SelphysHouse, MSGBOX_SIGN
	end

FiveIsland_ResortGorgeous_Text_DaisyIntro::
	.string "このてで しょうりを えがくわ!$"

FiveIsland_ResortGorgeous_Text_DaisyDefeat::
	.string "くやしくて\nかおが まっかだわ!$"

FiveIsland_ResortGorgeous_Text_DaisyPostBattle::
	.string "やだ\nえのぐが とんじゃった$"

FiveIsland_ResortGorgeous_Text_CelinaIntro::
	.string "ちょっと!\nえを かいてるのよ\lしかいに はいって こないで!$"

FiveIsland_ResortGorgeous_Text_CelinaDefeat::
	.string "まけたわ…\nめのまえが まっしろに…$"

FiveIsland_ResortGorgeous_Text_CelinaPostBattle::
	.string "ユキノさーん\nすこし くびを かたむけて…\lあっ ステキですー!$"

FiveIsland_ResortGorgeous_Text_RaynaIntro::
	.string "うーん\nアングルが いまいち$"

FiveIsland_ResortGorgeous_Text_RaynaDefeat::
	.string "ああ\nいまの きもちは ブルー…$"

FiveIsland_ResortGorgeous_Text_RaynaPostBattle::
	.string "うみ とか そらって\nすぐに かたちが かわるから\lかきにくいわ$"

FiveIsland_ResortGorgeous_Text_JackiIntro::
	.string "おともだちの べっそうに\nきて いますの$"

FiveIsland_ResortGorgeous_Text_JackiDefeat::
	.string "おつよいん ですのね$"

FiveIsland_ResortGorgeous_Text_JackiPostBattle::
	.string "しおかぜに ふかれ ながら\nのんびり ポケモン というのも\lすてき ですわね$"

FiveIsland_ResortGorgeous_Text_GillianIntro::
	.string "おにわに ポケモン せんようの\nプールを つくろうかしら…?$"

FiveIsland_ResortGorgeous_Text_GillianDefeat::
	.string "まあ すごい!$"

FiveIsland_ResortGorgeous_Text_GillianPostBattle::
	.string "プールも いいけど\nサンルームも いいわねえ…$"

FiveIsland_ResortGorgeous_Text_DestinIntro::
	.string "ぼく かけっこ\nこんなに はやいんだ!$"

FiveIsland_ResortGorgeous_Text_DestinDefeat::
	.string "いきおい つけすぎた かな?$"

FiveIsland_ResortGorgeous_Text_DestinPostBattle::
	.string "かぜに のって\nはしってたら とべそう!$"

FiveIsland_ResortGorgeous_Text_TobyIntro::
	.string "リゾートちでの マリンライフを\nエンジョイ してるのさ$"

FiveIsland_ResortGorgeous_Text_TobyDefeat::
	.string "ショック!\nそりゃ ないぜ$"

FiveIsland_ResortGorgeous_Text_TobyPostBattle::
	.string "そんなに むきに なるのは\nナンセンスだな$"

FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow::
	.string "アキホ『ありがとう\pもう おかえりに なっても\nよろしくてよ$"

FiveIsland_ResortGorgeous_Text_SelphysHouse::
	.string "ここは アキホの おうち$"

