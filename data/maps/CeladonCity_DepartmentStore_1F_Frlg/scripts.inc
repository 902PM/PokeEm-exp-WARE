CeladonCity_DepartmentStore_1F_Frlg_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_1F_EventScript_Receptionist::
	msgbox CeladonCity_DepartmentStore_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_1F_EventScript_LayoutSign::
	msgbox CeladonCity_DepartmentStore_1F_Text_FloorDescriptions, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_1F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_1F_Text_ServiceCounter, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_1F_Text_WelcomeToDeptStore::
	.string "いらっしゃいませ!\nタマムシ デパートに ようこそ!\pかく フロアの あんないは\nみぎの ボードを ごらん ください$"

CeladonCity_DepartmentStore_1F_Text_FloorDescriptions::
	.string "1かい…サービス・カウンター\p2かい…トレーナーズ・マーケット\p3かい…テレビ ゲーム ショップ\p4かい…ワイズマン・ギフト\p5かい…ドラッグ ストア\pおくじょう…じどう はんばいき$"

CeladonCity_DepartmentStore_1F_Text_ServiceCounter::
	.string "1かい…サービス・カウンター$"


