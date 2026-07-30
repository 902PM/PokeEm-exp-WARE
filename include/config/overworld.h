#ifndef GUARD_CONFIG_OVERWORLD_H
#define GUARD_CONFIG_OVERWORLD_H

// Movement config
#define OW_RUNNING_INDOORS          GEN_LATEST  // In Gen4+, players are allowed to run indoors.
#define SLOW_MOVEMENT_ON_STAIRS     FALSE       // If enabled, the player will move slower up/down stairs like in FR

// Other settings
#define OW_HIDE_REPEAT_MAP_POPUP        FALSE      // If enabled, map popups will not appear if entering a map with the same Map Section Id as the last.
#define OW_WHITEOUT_CUTSCENE            GEN_LATEST // In Gen4+, whiting out shows an additional message and post whiteout event script cutscene with a healing NPC. (While this change was also in FRLG, for the sake of simplicity, setting this to GEN_3 will result in RSE behavior.)
#define OW_DEFOG_FIELD_MOVE             FALSE      // If enabled, Defog can be used as a Field Move as seen in DPPt.
#define OW_ROCK_CLIMB_FIELD_MOVE        FALSE      // If enabled, Rock Climb can be used as a Field Move as seen in DPPt.

// Item Obtain Description Box
#define OW_ITEM_DESCRIPTIONS_OFF        0   // never show descriptions
#define OW_ITEM_DESCRIPTIONS_FIRST_TIME 1   // show first time (** SAVE-BREAKING - see struct SaveBlock3 **)
#define OW_ITEM_DESCRIPTIONS_ALWAYS     2   // always show description

// These generational defines only make a distinction for Berries and the OW_PC_MOVE_ORDER
#define GEN_6_XY GEN_6
#define GEN_6_ORAS GEN_COUNT + 1

// PC settings
#define OW_PC_JAPAN_WALDA_ICONS     TRUE       // In the US release of Emerald, the Cross, Bolt, and Plusle icons for Walda's wallpapers were left blank from the Japan release. Setting this to TRUE will restore them.
#define OW_PC_HEAL                  GEN_LATEST // In Gen8+, Pokémon are not healed when deposited in the PC.
#define OW_PC_MOVE_ORDER            GEN_LATEST // Starting in Gen4, the order of options in the PC menu change.
#define OW_PC_HEAL                  GEN_7 // In Gen8+, Pokemon are not healed when deposited in the PC.
#define OW_PC_MOVE_ORDER            GEN_3 // Starting in Gen4, the order of options in the PC menu change.

#define OW_BERRY_MUTATIONS             FALSE      // If enabled, Berry plants can mutate based on berries planted next to them.
#define OW_BERRY_MUTATION_CHANCE       25         // Determines the % chance of a mutation.
#define OW_BERRY_MOISTURE              FALSE      // If enabled, Berry watering is not a matter of watering it once per stage, but rather of keeping the soil moist.
#define OW_BERRY_ALWAYS_WATERABLE      FALSE      // If OW_BERRY_MOISTURE is enabled, this setting allows the player to continuously water soil; dry soil will cause a decrease in Berry Yield (like Gen4). When off, soil can only be watered when dry and watering increases yield (like Gen6).
#define OW_BERRY_MULCH_USAGE           FALSE      // If enabled, Mulch can be used on soil to fertilize it. Otherwise, it is considered unusable. Note that moisture effects only work with OW_BERRY_MOISTURE enabled!
#define OW_BERRY_WEEDS                 FALSE      // If enabled, weeds may grow on Berry plants that the player needs to take care of. Without OW_BERRY_MOISTURE, weeding bonuses are rounded down.
#define OW_BERRY_PESTS                 FALSE      // If enabled, pests may approach Berry plants that the player needs to take care of. Without OW_BERRY_MOISTURE, pest bonuses are rounded down.
#define OW_BERRY_SIX_STAGES            FALSE      // In XY, Berries go through six stages instead of four. This toggle does not affect the time it takes for a tree to be ready for harvest. Without OW_BERRY_MOISTURE, the two extra stages count as BERRY_STAGE_TALLER for watering purposes.

#define OW_BERRY_GROWTH_RATE           GEN_3      // Presets for how long each Berry plant takes to grow.
#define OW_BERRY_YIELD_RATE            GEN_3      // Presets for how many Berries each plant can yield.
#define OW_BERRY_DRAIN_RATE            GEN_6_ORAS // If OW_BERRY_MOISTURE is enabled, this setting changes how fast the soil dries out. GEN_4 uses a Berry-dependent drain rate, GEN_6_XY dries out in 24 hours (4 hours with the relevant Mulch) and GEN_6_ORAS dries out in 4 hours. Other values are illegal.
#define OW_BERRY_DRAIN_RATE            GEN_6_ORAS // OW_BERRY_MOISTUREが有効な場合、この設定は土壌が乾燥する速度を決定します。GEN_4ではきのみの種類に応じた乾燥速度が適用され、GEN_6_XYでは24時間（特定の「こやし」を使用している場合は4時間）で乾燥し、GEN_6_ORASでは4時間で乾燥します。これら以外の値は無効です。
#define OW_BERRY_IMMORTAL              FALSE      // If enabled, once a Berry tree has grown a Berry, the tree will not disappear until picked by the player.
#define OW_BERRY_COLORS                GEN_6_ORAS // If set to GEN_6_XY or GEN_6_ORAS, the Chesto, Wiki, Bluk, Cornn, Pamtre, Belue, Ganlon, Watmel, Qualot, Spelon, Kasib, Colbur, Lansat, Kee, Payapa, Roseli, Liechi, Enigma, and Maranga will use their colors from the stated game. Other values are illegal.

#define OW_POKEMON_OBJECT_EVENTS       TRUE       // Adds Object Event fields for every species. Can be used for NPCs using the OBJ_EVENT_GFX_SPECIES macro (eg. OBJ_EVENT_GFX_SPECIES(BULBASAUR))
#define OW_LARGE_OW_SUPPORT            TRUE       // If TRUE, adds a small amount of overhead to OW code so that large (48x48, 64x64) OWs will display correctly under bridges, etc.
#define OW_PKMN_OBJECTS_SHARE_PALETTES FALSE      // [WIP!! NOT ALL PALETTES HAVE BEEN ADJUSTED FOR THIS!!] If TRUE, follower palettes are taken from battle sprites.
                                                  // Compressed gfx are incompatible with non-power-of-two sprite sizes:
                                                  // (You should not use 48x48 sprites/tables for compressed gfx)
                                                  // 16x32, 32x32, 64x64 etc are fine
#define OW_FOLLOWERS_ENABLED           FALSE      // Enables follower Pokémon, HGSS style. Requires OW_POKEMON_OBJECT_EVENTS. Note that additional scripting may be required for them to be fully supported!
#define OW_FOLLOWERS_ENABLED           TRUE       // Enables follower Pokemon, HGSS style. Requires OW_POKEMON_OBJECT_EVENTS. Note that additional scripting may be required for them to be fully supported!
#define OW_FOLLOWERS_WEATHER_FORMS     FALSE      // If TRUE, Castform and Cherrim gain FORM_CHANGE_OVERWORLD_WEATHER, which will make them transform in the overworld based on the weather.
#define OW_BATTLE_ONLY_FORMS           TRUE       // If TRUE, loads overworld sprites for battle-only forms like Mega Evos. Requires OW_POKEMON_OBJECT_EVENTS.
#define B_FLAG_FOLLOWERS_DISABLED      0          // Enables / Disables followers by using a flag. Helpful to disable followers for a period of time.
#define B_FLAG_FOLLOWERS_DISABLED      FLAG_EXPANSION_FOLLOWING_MON_DISABLED // Enables / Disables followers by using a flag. Helpful to disable followers for a period of time.
// For examples, see "docs/tutorials/how_to_new_pokemon.md"
#define OW_FOLLOWERS_ALLOWED_SPECIES (0)
#define OW_FOLLOWERS_ALLOWED_MET_LVL (0)
#define OW_FOLLOWERS_ALLOWED_MET_LOC (0)

// Out-of-battle Ability effects

// These defines only make a distinction for OW_ALTERED_TIME_RATIO
#define GEN_8_PLA                       GEN_COUNT + 2
#define TIME_DEBUG                      GEN_COUNT + 3

// Time
#define OW_TIMES_OF_DAY                 GEN_LATEST   // Different generations have the times of day change at different times.
#define OW_USE_FAKE_RTC                 FALSE        // When TRUE, seconds on the in-game clock will only advance once every 60 playTimeVBlanks (every 60 frames).
#define OW_ALTERED_TIME_RATIO           GEN_LATEST   // In GEN_8_PLA, the time in game moves forward 60 seconds for every second in the RTC. In GEN_9, it is 20 seconds. TIME_DEBUG is 1:1, and meant for debugging purposes. This has no effect if OW_USE_FAKE_RTC is FALSE.
#define OW_TIME_OF_DAY_ENCOUNTERS       FALSE        // If TRUE, will allow the user to define and use different encounter tables based on the time of day.
#define OW_TIME_OF_DAY_DISABLE_FALLBACK FALSE        // If TRUE, if the encounter table for a specific map and time is empty, the area will have no encounters instead of falling back to the vanilla map and time.
#define OW_TIME_OF_DAY_FALLBACK         TIME_MORNING // The time of day that encounter tables fall back to. If you set OW_TIMES_OF_DAY to GEN_3, change this to TIME_DAY or you won't have any encounters!
#define OW_TIMES_OF_DAY                 GEN_8   // 世代によって、時間帯が切り替わるタイミングが異なります。
#define OW_USE_FAKE_RTC                 FALSE        // TRUEの場合、ゲーム内時計の秒数は60 playTimeVBlanks（60フレーム）ごとに1秒進みます。
#define OW_ALTERED_TIME_RATIO           GEN_LATEST   // GEN_8_PLAでは、RTCの1秒に対してゲーム内の時間が60秒進みます。GEN_9では20秒です。TIME_DEBUGは1:1（リアルタイム同期）で、デバッグ用です。OW_USE_FAKE_RTCがFALSEの場合、この設定は無効です。
#define OW_TIME_OF_DAY_ENCOUNTERS       TRUE        // TRUEの場合、時間帯に応じて異なるエンカウントテーブルを定義・使用できるようになります。
#define OW_TIME_OF_DAY_DISABLE_FALLBACK FALSE       // TRUEの場合、特定のマップと時間帯のエンカウントテーブルが空だと、バニラ（標準）のマップ・時間帯のテーブルを参照する代わりに、そのエリアではエンカウントが発生しなくなります。
#define OW_TIME_OF_DAY_FALLBACK         TIME_MORNING // エンカウントテーブルがフォールバック（代替参照）する時間帯。OW_TIMES_OF_DAYをGEN_3に設定する場合、ここをTIME_DAYに変更しないとエンカウントが発生しません！

// Lighting
#define OW_SHADOW_INTENSITY             4       // Ranges from 0 to 16, where 0 is fully transparent and 16 is black.
#define OW_OBJECT_SUBPRIORITY           148     // The higher the value, the farther back compared to other sprites. Shadows should be behind object events.
#define OW_ENABLE_DNS                   TRUE    // If set to TRUE, the overworld will be tinted depending on time of day.
#define OW_SHADOW_INTENSITY             4       // 0から16の範囲で指定。0は完全透明、16は黒色。
#define OW_OBJECT_SUBPRIORITY           148     // 値が大きいほど、他のスプライトより奥（背面）に描画されます。影はオブジェクトイベントより奥に配置されるべきです。
#define OW_ENABLE_DNS                   TRUE    // TRUEに設定すると、時間帯に応じてオーバーワールド（フィールド）の色調が変化します。＝夜になると暗くなるってこと。

// Object Event Shadows
#define OW_OBJECT_VANILLA_SHADOWS      FALSE    // When FALSE, every object in the overworld has a shadow. WARNING: This means every object will take up two sprites instead of one. When TRUE, an object's shadow is only shown when jumping.
#define OW_OBJECT_VANILLA_SHADOWS      TRUE    // When FALSE, every object in the overworld has a shadow. WARNING: This means every object will take up two sprites instead of one. When TRUE, an object's shadow is only shown when jumping.

// Overworld flags
// To use the following features in scripting, replace the 0s with the flag ID you're assigning it to.
// Eg: Replace with FLAG_UNUSED_0x264 so you can use that flag to toggle the feature.
#define OW_FLAG_PAUSE_TIME          0  // If this flag is set and OW_USE_FAKE_RTC is enabled, seconds on the in-game clock will not advance.
#define OW_FLAG_NO_TRAINER_SEE      0  // If this flag is set, trainers will not battle the player unless they're talked to.
#define OW_FLAG_NO_COLLISION        0  // If this flag is set, the player will be able to walk over tiles with collision. Mainly intended for debugging purposes.
#define OW_FLAG_POKE_RIDER          0  // If this flag is set, the player will be able to use fly from the Pokenav Region Map and the Town Map key item by pressing 'R' on a city/location they are able to fly to.
#define OW_FLAG_PAUSE_TIME          0  // このフラグがセットされ、かつ OW_USE_FAKE_RTC が有効な場合、ゲーム内時計の秒数は進まなくなります。
#define OW_FLAG_NO_TRAINER_SEE      FLAG_EXPANSION_TRAINER_SEE_DISABLED  // このフラグがセットされていると、トレーナーは話しかけられない限りプレイヤーとバトルしません。
#define OW_FLAG_NO_COLLISION        FLAG_EXPANSION_COLLISION_DISABLED    // このフラグがセットされていると、プレイヤーは衝突判定（コリジョン）のあるタイル上を歩けるようになります。主にデバッグ用です。
#define OW_FLAG_POKE_RIDER          FLAG_EXPANSION_POKE_RIDER      // このフラグがセットされていると、ポケナビの地方マップや「タウンマップ」（重要アイテム）から、飛行可能な街や場所で「R」ボタンを押すことで「そらをとぶ」を使用できるようになります。

#define BATTLE_PYRAMID_RANDOM_ENCOUNTERS    FALSE    // If set to TRUE, battle pyramid Pokemon will be generated randomly based on the round's challenge instead of hardcoded in src/data/battle_frontier/battle_pyramid_level_50_wild_mons.h (or open_level_wild_mons.h)

// Map pop-up config
#define OW_POPUP_GENERATION        GEN_3    // Different generations display location names in overworld pop-ups differently.
                                            // Only choices are GEN_3 and GEN_5, all others will default to Gen3 pop-ups.
                                            // Due to changes in project scope, as detailed in docs/team_procedures/scope.md,
                                            // no other overworld popups will be implemented in expansion.

// Gen5 map pop-up config
// Constants
#define OW_POPUP_BW_TIME_NONE      0   // Don't show the time
#define OW_POPUP_BW_TIME_12_HR     1   // Use 12 hour (AM/PM) time
#define OW_POPUP_BW_TIME_24_HR     2   // Use 24 hour time

#define OW_POPUP_BW_COLOR_BLACK    0   // Black pop-up from B2
#define OW_POPUP_BW_COLOR_WHITE    1   // White pop-up from W2

// Configuration
#define OW_POPUP_BW_COLOR          OW_POPUP_BW_COLOR_BLACK  // B2W2 use different colors for their map pop-ups.
#define OW_POPUP_BW_COLOR          OW_POPUP_BW_COLOR_WHITE  // B2W2 use different colors for their map pop-ups.
#define OW_POPUP_BW_TIME_MODE      OW_POPUP_BW_TIME_NONE    // Determines what type of time is shown.
#define OW_POPUP_BW_ALPHA_BLEND    FALSE                    // Enables alpha blending/transparency for the pop-ups. Mainly intended to be used with the black color option.
                                                            // Setting this to TRUE will cause graphical errors with the Day Night System enabled.
                                                            // It will also cause minor visual glitches of shadow and reflection sprites adjusting their transparency when the pop-up disappear


// Berry Blender
#define BERRY_BLENDER_THROW_ALL_BERRIES_AT_ONCE TRUE        // This is a small little addition, that basically speeds up the animation where all players' berries are thrown into the blender. Self-explanatory I hope!

// Trainer Rematches
#define OW_REMATCH_BADGE_COUNT      5 // Number of badges necessary before the match call or vs seeker features allow rematches

// Ambient Cries
// Constants
#define OW_AMBIENT_CRIES_NONE           0   // Do not play ambient cries.
#define OW_AMBIENT_CRIES_VANILLA        1   // Play ambient cries taken from encounter tables, as in vanilla.
#define OW_AMBIENT_CRIES_OWE_PRIORITY   2   // Play ambient cries based on active Overworld Wild Encounters, reverting to vanilla cries if none are present.
#define OW_AMBIENT_CRIES_OWE_ONLY       3   // Play ambient cries based on active Overworld Wild Encounters only.
                                            // Overworld Wild Encounters will play ambient cries based on their location relative to the player.

// Configuration
#define OW_AMBIENT_CRIES                OW_AMBIENT_CRIES_VANILLA // Selects how ambient cries are played, if at all. As in vanilla, no matter what is chosen, cries will not play if the player is not on a map with Land or Water encounter tables.
#define OW_AMBIENT_CRIES                OW_AMBIENT_CRIES_OWE_ONLY // Selects how ambient cries are played, if at all. As in vanilla, no matter what is chosen, cries will not play if the player is not on a map with Land or Water encounter tables.

#endif // GUARD_CONFIG_OVERWORLD_H
