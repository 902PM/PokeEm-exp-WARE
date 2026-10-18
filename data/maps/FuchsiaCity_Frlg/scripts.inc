FuchsiaCity_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_OnTransition
	.byte 0

FuchsiaCity_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_FUCHSIA_CITY
	call_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_SetOmanyteGfx
	call_if_unset FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_SetKabutoGfx
	end

FuchsiaCity_EventScript_SetOmanyteGfx::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OMANYTE
	return

FuchsiaCity_EventScript_SetKabutoGfx::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_KABUTO
	return

FuchsiaCity_EventScript_LittleBoy::
	msgbox FuchsiaCity_Text_DidYouTrySafariGame, MSGBOX_NPC
	end

FuchsiaCity_EventScript_OldMan::
	msgbox FuchsiaCity_Text_SafariZoneZooInFront, MSGBOX_NPC
	end

FuchsiaCity_EventScript_Erik::
	msgbox FuchsiaCity_Text_WheresSara, MSGBOX_NPC
	end

FuchsiaCity_EventScript_Youngster::
	msgbox FuchsiaCity_Text_ItemBallInThere, MSGBOX_NPC
	end

FuchsiaCity_EventScript_Lass::
	lock
	faceplayer
	famechecker FAMECHECKER_KOGA, 3
	msgbox FuchsiaCity_Text_MyFatherIsGymLeader
	release
	end

FuchsiaCity_EventScript_CitySign::
	msgbox FuchsiaCity_Text_CitySign, MSGBOX_SIGN
	end

FuchsiaCity_EventScript_SafariZoneSign::
	msgbox FuchsiaCity_Text_SafariZoneSign, MSGBOX_SIGN
	end

FuchsiaCity_EventScript_SafariGameSign::
	msgbox FuchsiaCity_Text_SafariGameSign, MSGBOX_SIGN
	end

FuchsiaCity_EventScript_WardensHomeSign::
	msgbox FuchsiaCity_Text_WardensHomeSign, MSGBOX_SIGN
	end

@ Unused
FuchsiaCity_EventScript_SafariZoneOfficeSign::
	msgbox FuchsiaCity_Text_SafariZoneOfficeSign, MSGBOX_SIGN
	end

FuchsiaCity_EventScript_GymSign::
	lockall
	famechecker FAMECHECKER_KOGA, 0
	msgbox FuchsiaCity_Text_GymSign
	releaseall
	end

FuchsiaCity_EventScript_ChanseySign::
	lockall
	setvar VAR_0x8004, SPECIES_CHANSEY
	special SetSeenMon
	showmonpic SPECIES_CHANSEY, 10, 3
	msgbox FuchsiaCity_Text_ChanseySign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_VoltorbSign::
	lockall
	setvar VAR_0x8004, SPECIES_VOLTORB
	special SetSeenMon
	showmonpic SPECIES_VOLTORB, 10, 3
	msgbox FuchsiaCity_Text_VoltorbSign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_KangaskhanSign::
	lockall
	setvar VAR_0x8004, SPECIES_KANGASKHAN
	special SetSeenMon
	showmonpic SPECIES_KANGASKHAN, 10, 3
	msgbox FuchsiaCity_Text_KangaskhanSign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_SlowpokeSign::
	lockall
	setvar VAR_0x8004, SPECIES_SLOWPOKE
	special SetSeenMon
	showmonpic SPECIES_SLOWPOKE, 10, 3
	msgbox FuchsiaCity_Text_SlowpokeSign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_LaprasSign::
	lockall
	setvar VAR_0x8004, SPECIES_LAPRAS
	special SetSeenMon
	showmonpic SPECIES_LAPRAS, 10, 3
	msgbox FuchsiaCity_Text_LaprasSign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_FossilMonSign::
	lockall
	goto_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_OmanyteSign
	setvar VAR_0x8004, SPECIES_KABUTO
	special SetSeenMon
	showmonpic SPECIES_KABUTO, 10, 3
	msgbox FuchsiaCity_Text_KabutoSign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_OmanyteSign::
	setvar VAR_0x8004, SPECIES_OMANYTE
	special SetSeenMon
	showmonpic SPECIES_OMANYTE, 10, 3
	msgbox FuchsiaCity_Text_OmanyteSign
	hidemonpic
	releaseall
	end

FuchsiaCity_Text_DidYouTrySafariGame::
	.string "サファリ ゲーム もう やった?\nあそこでしか とれない\lめずらしい ポケモンも いるよ!$"

FuchsiaCity_Text_SafariZoneZooInFront::
	.string "サファリ ゾーンは\nいりぐち ふきんは どうぶつえんで\pおくに いくと ポケモンが\nとりほうだいの サファリ ゲームじゃ$"

FuchsiaCity_Text_WheresSara::
	.string "コージ『おかしいな? アツコと\nポケモンとりで まちあわせって…\lとりポケモンが みつからない!$"

FuchsiaCity_Text_ItemBallInThere::
	.string "あの アイテム ボール\nほしいって おもった?\l… … … ぼくもさ!\l… え あれ いきものなの?$"

FuchsiaCity_Text_CitySign::
	.string "ここは セキチク シティ\nセキチクは ピンク はなやかな いろ$"

FuchsiaCity_Text_SafariZoneSign::
	.string "いろんな ポケモン いっぱい!\n… サファリ ゾーンに ようこそ!$"

FuchsiaCity_Text_SafariGameSign::
	.string "めいぶつ! サファリ ゲーム!\n… … ポケモン とりほうだい!$"

FuchsiaCity_Text_WardensHomeSign::
	.string "サファリ ゾーン\nえんちょうの いえ$"

FuchsiaCity_Text_SafariZoneOfficeSign::
	.string "いろんな ポケモン いっぱい!\nサファリ ゾーンに ようこそ!\nサファリ ゾーン じむ きょく$"

FuchsiaCity_Text_GymSign::
	.string "セキチク シティ ポケモン ジム\nリーダー キョウ\lどくの ことなら なんでも ござれ$"

FuchsiaCity_Text_ChanseySign::
	.string "なまえ ラッキー\nつかまえたら スーパー ラッキー!$"

FuchsiaCity_Text_VoltorbSign::
	.string "なまえ ビリリダマ\nモンスター ボールに そっくり!$"

FuchsiaCity_Text_KangaskhanSign::
	.string "なまえ ガルーラ\nなかの よい おやこ ポケモン!\pおなかに こどもを いれて\nそだてて います!$"

FuchsiaCity_Text_SlowpokeSign::
	.string "なまえ ヤドン\nひとなつこい せいかくが にんき!\lうごきが のろい ポケモン!$"

FuchsiaCity_Text_LaprasSign::
	.string "なまえ ラプラス\nシー ドラゴン とも よばれる\lうみの おうじゃ です!$"

FuchsiaCity_Text_OmanyteSign::
	.string "なまえ オムナイト\nカセキ から いき かえった\lめずらしい ポケモン!$"

FuchsiaCity_Text_KabutoSign::
	.string "なまえ カブト\nカセキ から いき かえった\lめずらしい ポケモン!$"

@ 赤緑は展示されているポケモンに話かけると、メッセージが表示される。それの名残。
FuchsiaCity_Text_Ellipsis::
	.string "……$"

Text_SubstituteTeach::
	.string "いいな いいな\pガルーラの こどもの\nみがわりに なって\lあの おなかの ふくろに\lはいって みたいな!\lみがわり つかえる のは\lポケモンだけ だけどね…\pみがわり おしえて あげようか?$"

Text_SubstituteDeclined::
	.string "みがわり おもしろそう なのにー$"

Text_SubstituteWhichMon::
	.string "どの ポケモンが いい?$"

Text_SubstituteTaught::
	.string "でも やっぱり\nガルーラの ふくろに\lはいって みたーい!$"

FuchsiaCity_Text_MyFatherIsGymLeader::
	.string "ちちうえは このまちの\nジムリーダー なんだ!\pあたいも ちちうえ みたいに\nうまく どくポケモンを\lつかえる ように なるんだ!$"

