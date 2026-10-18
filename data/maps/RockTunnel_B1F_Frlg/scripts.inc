RockTunnel_B1F_Frlg_MapScripts::
	.byte 0

RockTunnel_B1F_EventScript_Sofia::
	trainerbattle_single TRAINER_PICNICKER_SOFIA, RockTunnel_B1F_Text_SofiaIntro, RockTunnel_B1F_Text_SofiaDefeat
	msgbox RockTunnel_B1F_Text_SofiaPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Martha::
	trainerbattle_single TRAINER_PICNICKER_MARTHA, RockTunnel_B1F_Text_MarthaIntro, RockTunnel_B1F_Text_MarthaDefeat
	msgbox RockTunnel_B1F_Text_MarthaPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Dudley::
	trainerbattle_single TRAINER_HIKER_DUDLEY, RockTunnel_B1F_Text_DudleyIntro, RockTunnel_B1F_Text_DudleyDefeat
	msgbox RockTunnel_B1F_Text_DudleyPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Allen::
	trainerbattle_single TRAINER_HIKER_ALLEN, RockTunnel_B1F_Text_AllenIntro, RockTunnel_B1F_Text_AllenDefeat
	msgbox RockTunnel_B1F_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Eric::
	trainerbattle_single TRAINER_HIKER_ERIC, RockTunnel_B1F_Text_EricIntro, RockTunnel_B1F_Text_EricDefeat
	msgbox RockTunnel_B1F_Text_EricPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Cooper::
	trainerbattle_single TRAINER_POKEMANIAC_COOPER, RockTunnel_B1F_Text_CooperIntro, RockTunnel_B1F_Text_CooperDefeat
	msgbox RockTunnel_B1F_Text_CooperPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Steve::
	trainerbattle_single TRAINER_POKEMANIAC_STEVE, RockTunnel_B1F_Text_SteveIntro, RockTunnel_B1F_Text_SteveDefeat
	msgbox RockTunnel_B1F_Text_StevePostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Winston::
	trainerbattle_single TRAINER_POKEMANIAC_WINSTON, RockTunnel_B1F_Text_WinstonIntro, RockTunnel_B1F_Text_WinstonDefeat
	msgbox RockTunnel_B1F_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_Text_SofiaIntro::
	.string "やまで まよわない ためには\nめじるしの こえだを\lおって あるくと いいのよ!$"

RockTunnel_B1F_Text_SofiaDefeat::
	.string "やーん…!\nがんばったのに$"

RockTunnel_B1F_Text_SofiaPostBattle::
	.string "まけちゃったし\nきょうは おうちに かえろう$"

RockTunnel_B1F_Text_DudleyIntro::
	.string "はははーッ!\nおれの パワーに かてるか!$"

RockTunnel_B1F_Text_DudleyDefeat::
	.string "おっとっと!\nパワー まけ したか!$"

RockTunnel_B1F_Text_DudleyPostBattle::
	.string "パワーに こだわるのは\nかんがえながら たたかうのが\lにがて だからだ!$"

RockTunnel_B1F_Text_CooperIntro::
	.string "ポケモン ずかん つくってる?\nくそう! ぼくも やりたい!$"

RockTunnel_B1F_Text_CooperDefeat::
	.string "ああ もう! くやしい$"

RockTunnel_B1F_Text_CooperPostBattle::
	.string "… だからさ\nポケモン ずかん かんせい したら\lぼくに くれない?$"

RockTunnel_B1F_Text_SteveIntro::
	.string "あの…\nポケモン コスプレ しってます?$"

RockTunnel_B1F_Text_SteveDefeat::
	.string "しょうが ない ですね$"

RockTunnel_B1F_Text_StevePostBattle::
	.string "コスプレって いうのは\nピッピの きぐるみ とか つくって\lポケモンに なりきるんです$"

RockTunnel_B1F_Text_AllenIntro::
	.string "おれの\nポケモン テクニックで\lひーひー いわせるぜ!$"

RockTunnel_B1F_Text_AllenDefeat::
	.string "まいった!\nおまえの ほうが テクニシャンだ$"

RockTunnel_B1F_Text_AllenPostBattle::
	.string "そうだな…\nやまの ポケモン には\lいわ タイプが おおいぞ$"

RockTunnel_B1F_Text_MarthaIntro::
	.string "たたかっても いいけど…\nこの あたりには\lあまり きた こと ないの$"

RockTunnel_B1F_Text_MarthaDefeat::
	.string "まけちゃった$"

RockTunnel_B1F_Text_MarthaPostBattle::
	.string "ちっちゃい ポケモンが すき\nおっきいのは こわい から いや$"

RockTunnel_B1F_Text_EricIntro::
	.string "よしッ\nどーんと ぶつかって こい!$"

RockTunnel_B1F_Text_EricDefeat::
	.string "どーんと!\nこっちが やられた!$"

RockTunnel_B1F_Text_EricPostBattle::
	.string "おれも おまえに まけない\nポケモンを そだてて おくぜ!$"

RockTunnel_B1F_Text_WinstonIntro::
	.string "いえに いる ときは\nポケモンの イラスト とか かいてる$"

RockTunnel_B1F_Text_WinstonDefeat::
	.string "ああ…\nぼく くたびれた$"

RockTunnel_B1F_Text_WinstonPostBattle::
	.string "ぼくは たたかうの むいて ないな\nかえって イラスト でも かいてよう$"

Text_RockSlideTeach::
	.string "こんな いわやまに いたら\nいわが うえから\lゴロゴロ おちてきて ギャー!\pって なったら こわいな…\pきみは へいき そうな\nかお してるね\lいわなだれ… つかって みる?$"

Text_RockSlideDeclined::
	.string "やっぱ こわいの?$"

Text_RockSlideWhichMon::
	.string "どの ポケモンに\nいわなだれを おしえたら いい?$"

Text_RockSlideTaught::
	.string "この トンネルで\nつかったら こわいかも…$"

