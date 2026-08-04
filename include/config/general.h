#ifndef GUARD_CONFIG_GENERAL_H
#define GUARD_CONFIG_GENERAL_H

// In the Generation 3 games, Asserts were used in various debug builds.
// Ruby/Sapphire and Emerald do not have these asserts while Fire Red
// still has them in the ROM. This is because the developers forgot
// to define NDEBUG before release, however this has been changed as
// Ruby's actual debug build does not use the AGBPrint features.
//
// Use `make release` to automatically enable NDEBUG.
#ifdef RELEASE
#define NDEBUG
#endif

// printf debugging is now enabled by default. This allows
// the various AGBPrint functions to be used. (See include/gba/isagbprint.h).
// See below for enabling different pretty printing versions.
// To disable printf debugging, build a release build using `make release`.

#ifndef NDEBUG

#define PRETTY_PRINT_MINI_PRINTF (0)
#define PRETTY_PRINT_LIBC (1)

#define LOG_HANDLER_AGB_PRINT (0)
#define LOG_HANDLER_NOCASH_PRINT (1)
#define LOG_HANDLER_MGBA_PRINT (2)

// Use this switch to choose a handler for pretty printing.
// NOTE: mini_printf supports a custom pretty printing formatter to display preproc encoded strings. (%S)
//       some libc distributions (especially dkp arm-libc) will fail to link pretty printing.
#define PRETTY_PRINT_HANDLER (PRETTY_PRINT_MINI_PRINTF)

// Use this switch to choose a handler for printf output.
// NOTE: These will only work on the respective emulators and should not be used in a productive environment.
//       Some emulators or real hardware might (and is allowed to) crash if they are used.
//       AGB_PRINT is supported on respective debug units.

#define LOG_HANDLER (LOG_HANDLER_MGBA_PRINT)
#endif

// Uncomment to fix some identified minor bugs
#define BUGFIX

// Various undefined behavior bugs may or may not prevent compilation with
// newer compilers. So always fix them when using a modern compiler.
#if MODERN || defined(BUGFIX)
#ifndef UBFIX
#define UBFIX
#endif
#endif

// Compatibility definition for other projects to detect pokeemerald-expansion
#define RHH_EXPANSION

// 後方互換性のために、レガシーなブランチベースの定義が含まれています。
#define BATTLE_ENGINE
#define POKEMON_EXPANSION
#define ITEM_EXPANSION

// 動作を定義するために設定で使用される世代の定数。
#define GEN_1 0
#define GEN_2 1
#define GEN_3 2
#define GEN_4 3
#define GEN_5 4
#define GEN_6 5
#define GEN_7 6
#define GEN_8 7
#define GEN_9 8
#define GEN_COUNT 9
// GEN_LATESTの値を別の世代に変更すると、それを使用しているすべてのデフォルト設定が一括して変更されます。
#define GEN_LATEST GEN_9

// General settings
#define EXPANSION_INTRO              FALSE    // TRUEの場合、原作の著作権表示画面の後に、カスタムRHHイントロが再生されます。
#define PHONEMES_SHARED              FALSE   // TRUEの場合、ROM容量を節約するため、すべてのオヤジの音源は同一のサウンド（sound/direct_sound_samples/phonemes/shared.bin）を参照します。

// UNITSに使用する測定システムの定数
#define UNITS_IMPERIAL               0       // インチ、フィート、ポンド
#define UNITS_METRIC                 1       // メートル、キログラム

#define UNITS                        UNITS_METRIC
#define CHAR_DEC_SEPARATOR           CHAR_COMMA // CHAR_PERIODが小数点記号として使用されるのは、英国と米国のみです。それ以外の国ではCHAR_COMMAが使用されます。

// 名前入力画面
#define AUTO_LOWERCASE_KEYBOARD      GEN_LATEST  // 第6世代以降、最初の大文字を入力すると、キーボードは小文字入力に切り替わります。

#endif // GUARD_CONFIG_GENERAL_H
