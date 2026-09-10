#include "global.h"
#include "main.h"
#include "text.h"
#include "sound.h"
#include "window.h"

// This file handles the braille font.
// For printing braille messages, see ScrCmd_braillemessage

static const u16 sFont_Braille[] = INCGFX_U16("graphics/fonts/braille.png", ".fwjpnfont");

static void DecompressGlyph_Braille(u16);
struct BrailleGlyph
{
    u8 glyph[2];
    u8 count;
};

static const u8 sJapaneseBraille[] =
{
    [0x01] = 0x01, // あ
    [0x02] = 0x05, // い
    [0x03] = 0x03, // う
    [0x04] = 0x07, // え
    [0x05] = 0x06, // お
    [0x06] = 0x21, // か
    [0x07] = 0x25, // き
    [0x08] = 0x23, // く
    [0x09] = 0x27, // け
    [0x0A] = 0x26, // こ
    [0x0B] = 0x29, // さ
    [0x0C] = 0x2D, // し
    [0x0D] = 0x2B, // す
    [0x0E] = 0x2F, // せ
    [0x0F] = 0x2E, // そ
    [0x10] = 0x19, // た
    [0x11] = 0x1D, // ち
    [0x12] = 0x1B, // つ
    [0x13] = 0x1F, // て
    [0x14] = 0x1E, // と
    [0x15] = 0x11, // な
    [0x16] = 0x15, // に
    [0x17] = 0x13, // ぬ
    [0x18] = 0x17, // ね
    [0x19] = 0x16, // の
    [0x1A] = 0x31, // は
    [0x1B] = 0x35, // ひ
    [0x1C] = 0x33, // ふ
    [0x1D] = 0x37, // へ
    [0x1E] = 0x36, // ほ
    [0x1F] = 0x39, // ま
    [0x20] = 0x3D, // み
    [0x21] = 0x3B, // む
    [0x22] = 0x3F, // め
    [0x23] = 0x3E, // も
    [0x24] = 0x12, // や
    [0x25] = 0x32, // ゆ
    [0x26] = 0x1A, // よ
    [0x27] = 0x09, // ら
    [0x28] = 0x0D, // り
    [0x29] = 0x0B, // る
    [0x2A] = 0x0F, // れ
    [0x2B] = 0x0E, // ろ
    [0x2C] = 0x10, // わ
    [0x2D] = 0x14, // ゐ
    [0x2E] = 0x1C, // ゑ
    [0x2F] = 0x18, // を
    [0x30] = 0x38, // ん
};

static struct BrailleGlyph GetJapaneseBraille(u16 char_)
{
    struct BrailleGlyph result = {0};

    switch (char_)
    {
    case 0x01 ... 0x2E:
        result.glyph[0] = sJapaneseBraille[char_];
        result.count = 1;
        break;

    case 0x37: // が
        result.glyph[0] = 0x21;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x38: // ぎ
        result.glyph[0] = 0x25;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x39: // ぐ
        result.glyph[0] = 0x23;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x3A: // げ
        result.glyph[0] = 0x27;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x3B: // ご
        result.glyph[0] = 0x26;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x3C: // ざ
        result.glyph[0] = 0x29;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x3D: // じ
        result.glyph[0] = 0x2D;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x3E: // ず
        result.glyph[0] = 0x2B;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x3F: // ぜ
        result.glyph[0] = 0x2F;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x40: // ぞ
        result.glyph[0] = 0x2E;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x41: // だ
        result.glyph[0] = 0x19;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x42: // ぢ
        result.glyph[0] = 0x1D;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x43: // づ
        result.glyph[0] = 0x1B;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x44: // で
        result.glyph[0] = 0x1F;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x45: // ど
        result.glyph[0] = 0x1E;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x46: // ば
        result.glyph[0] = 0x31;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x47: // び
        result.glyph[0] = 0x35;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x48: // ぶ
        result.glyph[0] = 0x33;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x49: // べ
        result.glyph[0] = 0x37;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x4A: // ぼ
        result.glyph[0] = 0x36;
        result.glyph[1] = 0x08;
        result.count = 2;
        break;

    case 0x4B: // ぱ
        result.glyph[0] = 0x31;
        result.glyph[1] = 0x22;
        result.count = 2;
        break;

    case 0x4C: // ぴ
        result.glyph[0] = 0x35;
        result.glyph[1] = 0x22;
        result.count = 2;
        break;

    case 0x4D: // ぷ
        result.glyph[0] = 0x33;
        result.glyph[1] = 0x22;
        result.count = 2;
        break;

    case 0x4E: // ぺ
        result.glyph[0] = 0x37;
        result.glyph[1] = 0x22;
        result.count = 2;
        break;

    case 0x4F: // ぽ
        result.glyph[0] = 0x36;
        result.glyph[1] = 0x22;
        result.count = 2;
        break;

    case 0x50: // っ
        result.glyph[0] = 0x04;
        result.count = 1;
        break;

    case 0xAE: // ー
        result.glyph[0] = 0x0C;
        result.count = 1;
        break;
    }
    return result;
}

static bool8 GetJapaneseYouon(
    const u8 *currentChar,
    u8 *glyph1,
    u8 *glyph2)
{
    switch (currentChar[0])
    {
    case 0x07: // き
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x21;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x23;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x26;
            return TRUE;
        }
        break;

    case 0x37: // が
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x21;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x23;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x26;
            return TRUE;
        }
        break;

    case 0x0C: // し
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x29;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x2B;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x2E;
            return TRUE;
        }
        break;

    case 0x3D: // じ
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x29;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x2B;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x2E;
            return TRUE;
        }
        break;

    case 0x11: // ち
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x19;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x1B;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x1E;
            return TRUE;
        }
        break;

    case 0x42: // ぢ
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x19;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x1B;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x1E;
            return TRUE;
        }
        break;

    case 0x16: // に
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x11;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x13;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x16;
            return TRUE;
        }
        break;

    case 0x1B: // ひ
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x31;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x33;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x36;
            return TRUE;
        }
        break;

    case 0x47: // び
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x31;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x33;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x0A;
            *glyph2 = 0x36;
            return TRUE;
        }
        break;

    case 0x4C: // ぴ
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x22;
            *glyph2 = 0x31;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x22;
            *glyph2 = 0x33;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x22;
            *glyph2 = 0x36;
            return TRUE;
        }
        break;

    case 0x20: // み
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x39;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x3B;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x3E;
            return TRUE;
        }
        break;

    case 0x28: // り
        if (currentChar[1] == 0x34)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x09;
            return TRUE;
        }

        if (currentChar[1] == 0x35)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x0B;
            return TRUE;
        }

        if (currentChar[1] == 0x36)
        {
            *glyph1 = 0x02;
            *glyph2 = 0x0E;
            return TRUE;
        }
        break;
    }

    return FALSE;
}

u16 FontFunc_Braille(struct TextPrinter *textPrinter)
{
    u16 char_;
    u32 scrollSpeed = GetPlayerTextScrollSpeed();

    switch (textPrinter->state)
    {
    case RENDER_STATE_HANDLE_CHAR:
        if (JOY_HELD(A_BUTTON | B_BUTTON) && textPrinter->hasPrintBeenSpedUp)
        {
            textPrinter->delayCounter = 0;
        }
        if (textPrinter->delayCounter && textPrinter->textSpeed)
        {
            textPrinter->delayCounter --;
            if (gTextFlags.canABSpeedUpPrint && JOY_NEW(A_BUTTON | B_BUTTON))
            {
                textPrinter->hasPrintBeenSpedUp = TRUE;
                textPrinter->delayCounter = 0;
            }
            return RENDER_UPDATE;
        }
        if (gTextFlags.autoScroll)
            textPrinter->delayCounter = 3;
        else
            textPrinter->delayCounter = textPrinter->textSpeed;

        char_ = *textPrinter->printerTemplate.currentChar++;
        switch (char_)
        {
        case EOS:
            return RENDER_FINISH;
        case CHAR_NEWLINE:
            textPrinter->printerTemplate.currentX = textPrinter->printerTemplate.x;
            textPrinter->printerTemplate.currentY += gFonts[textPrinter->printerTemplate.fontId].maxLetterHeight + textPrinter->printerTemplate.lineSpacing;
            return RENDER_REPEAT;
        case PLACEHOLDER_BEGIN:
            textPrinter->printerTemplate.currentChar++;
            return RENDER_REPEAT;
        case EXT_CTRL_CODE_BEGIN:
            char_ = *textPrinter->printerTemplate.currentChar++;
            switch (char_)
            {
            case EXT_CTRL_CODE_BACKGROUND:
                textPrinter->printerTemplate.color.background = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                GenerateFontHalfRowLookupTable(textPrinter->printerTemplate.color);
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_COLOR:
                textPrinter->printerTemplate.color.foreground = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                GenerateFontHalfRowLookupTable(textPrinter->printerTemplate.color);
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_SHADOW:
                textPrinter->printerTemplate.color.shadow = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                GenerateFontHalfRowLookupTable(textPrinter->printerTemplate.color);
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_ACCENT:
                textPrinter->printerTemplate.color.accent = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                GenerateFontHalfRowLookupTable(textPrinter->printerTemplate.color);
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_HIGHLIGHT:
                textPrinter->printerTemplate.color.background = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.color.accent = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                GenerateFontHalfRowLookupTable(textPrinter->printerTemplate.color);
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_COLOR_HIGHLIGHT_SHADOW:
                textPrinter->printerTemplate.color.foreground = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                textPrinter->printerTemplate.color.background = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.color.accent = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                textPrinter->printerTemplate.color.shadow = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                GenerateFontHalfRowLookupTable(textPrinter->printerTemplate.color);
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_TEXT_COLORS:
                textPrinter->printerTemplate.color.foreground = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                textPrinter->printerTemplate.color.shadow = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                textPrinter->printerTemplate.color.accent = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                GenerateFontHalfRowLookupTable(textPrinter->printerTemplate.color);
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_PALETTE:
                textPrinter->printerTemplate.currentChar++;
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_FONT:
                textPrinter->fontId = *textPrinter->printerTemplate.currentChar;
                textPrinter->printerTemplate.currentChar++;
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_RESET_FONT:
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_PAUSE:
                textPrinter->delayCounter = *textPrinter->printerTemplate.currentChar++;
                textPrinter->state = RENDER_STATE_PAUSE;
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_PAUSE_UNTIL_PRESS:
                textPrinter->state = RENDER_STATE_WAIT;
                if (gTextFlags.autoScroll)
                    textPrinter->autoScrollDelay = 0;
                return RENDER_UPDATE;
            case EXT_CTRL_CODE_WAIT_SE:
                textPrinter->state = RENDER_STATE_WAIT_SE;
                return RENDER_UPDATE;
            case EXT_CTRL_CODE_PLAY_BGM:
            case EXT_CTRL_CODE_PLAY_SE:
                textPrinter->printerTemplate.currentChar += 2;
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_ESCAPE:
                char_ = *++textPrinter->printerTemplate.currentChar;
                break;
            case EXT_CTRL_CODE_SHIFT_RIGHT:
                textPrinter->printerTemplate.currentX = textPrinter->printerTemplate.x + *textPrinter->printerTemplate.currentChar++;
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_SHIFT_DOWN:
                textPrinter->printerTemplate.currentY = textPrinter->printerTemplate.y + *textPrinter->printerTemplate.currentChar++;
                return RENDER_REPEAT;
            case EXT_CTRL_CODE_FILL_WINDOW:
                FillWindowPixelBuffer(textPrinter->printerTemplate.windowId, PIXEL_FILL(textPrinter->printerTemplate.color.background));
                return RENDER_REPEAT;
            }
            break;
        case CHAR_PROMPT_CLEAR:
            textPrinter->state = RENDER_STATE_CLEAR;
            TextPrinterInitDownArrowCounters(textPrinter);
            return RENDER_UPDATE;
        case CHAR_PROMPT_SCROLL:
            textPrinter->state = RENDER_STATE_SCROLL_START;
            TextPrinterInitDownArrowCounters(textPrinter);
            return RENDER_UPDATE;
        case CHAR_EXTRA_SYMBOL:
            char_ = *textPrinter->printerTemplate.currentChar++| 0x100;
            break;
        case CHAR_KEYPAD_ICON:
            textPrinter->printerTemplate.currentChar++;
            return RENDER_PRINT;
        }
        {
            struct BrailleGlyph braille;
            u8 glyph1;
            u8 glyph2;

            if (GetJapaneseYouon(
                    textPrinter->printerTemplate.currentChar,
                    &glyph1,
                    &glyph2))
            {
                textPrinter->printerTemplate.currentChar++;

                DecompressGlyph_Braille(glyph1);
                CopyGlyphToVRAM(textPrinter);

                textPrinter->printerTemplate.currentX +=
                    gCurGlyph.width + textPrinter->printerTemplate.letterSpacing;

                DecompressGlyph_Braille(glyph2);
                CopyGlyphToVRAM(textPrinter);

                textPrinter->printerTemplate.currentX +=
                    gCurGlyph.width + textPrinter->printerTemplate.letterSpacing;

                return RENDER_PRINT;
            }

            braille = GetJapaneseBraille(char_);

            if (braille.count != 0)
            {
                DecompressGlyph_Braille(braille.glyph[0]);
                CopyGlyphToVRAM(textPrinter);

                textPrinter->printerTemplate.currentX +=
                    gCurGlyph.width + textPrinter->printerTemplate.letterSpacing;

                if (braille.count == 2)
                {
                    DecompressGlyph_Braille(braille.glyph[1]);
                    CopyGlyphToVRAM(textPrinter);

                    textPrinter->printerTemplate.currentX +=
                        gCurGlyph.width + textPrinter->printerTemplate.letterSpacing;
                }

                return RENDER_PRINT;
            }

            DecompressGlyph_Braille(char_);
            CopyGlyphToVRAM(textPrinter);

            textPrinter->printerTemplate.currentX +=
                gCurGlyph.width + textPrinter->printerTemplate.letterSpacing;

            return RENDER_PRINT;
        }

    case RENDER_STATE_WAIT:
        if (TextPrinterWait(textPrinter))
            textPrinter->state = RENDER_STATE_HANDLE_CHAR;
        return RENDER_UPDATE;
    case RENDER_STATE_CLEAR:
        if (TextPrinterWaitWithDownArrow(textPrinter))
        {
            FillWindowPixelBuffer(textPrinter->printerTemplate.windowId, PIXEL_FILL(textPrinter->printerTemplate.color.background));
            textPrinter->printerTemplate.currentX = textPrinter->printerTemplate.x;
            textPrinter->printerTemplate.currentY = textPrinter->printerTemplate.y;
            textPrinter->state = RENDER_STATE_HANDLE_CHAR;
        }
        return RENDER_UPDATE;
    case RENDER_STATE_SCROLL_START:
        if (TextPrinterWaitWithDownArrow(textPrinter))
        {
            TextPrinterClearDownArrow(textPrinter);
            textPrinter->scrollDistance = gFonts[textPrinter->printerTemplate.fontId].maxLetterHeight + textPrinter->printerTemplate.lineSpacing;
            textPrinter->printerTemplate.currentX = textPrinter->printerTemplate.x;
            textPrinter->state = RENDER_STATE_SCROLL;
        }
        return RENDER_UPDATE;
    case RENDER_STATE_SCROLL:
        if (textPrinter->scrollDistance)
        {
            if (textPrinter->scrollDistance < scrollSpeed)
            {
                ScrollWindow(textPrinter->printerTemplate.windowId, 0, textPrinter->scrollDistance, PIXEL_FILL(textPrinter->printerTemplate.color.background));
                textPrinter->scrollDistance = 0;
            }
            else
            {
                ScrollWindow(textPrinter->printerTemplate.windowId, 0, scrollSpeed, PIXEL_FILL(textPrinter->printerTemplate.color.background));
                textPrinter->scrollDistance -= scrollSpeed;
            }
            CopyWindowToVram(textPrinter->printerTemplate.windowId, COPYWIN_GFX);
        }
        else
        {
            textPrinter->state = RENDER_STATE_HANDLE_CHAR;
        }
        return RENDER_UPDATE;
    case RENDER_STATE_WAIT_SE:
        if (!IsSEPlaying())
            textPrinter->state = RENDER_STATE_HANDLE_CHAR;
        return RENDER_UPDATE;
    case RENDER_STATE_PAUSE:
        if (textPrinter->delayCounter)
            textPrinter->delayCounter --;
        else
            textPrinter->state = RENDER_STATE_HANDLE_CHAR;
        return RENDER_UPDATE;
    }
    return RENDER_FINISH;
}

static void DecompressGlyph_Braille(u16 glyph)
{
    const u16 *glyphs = sFont_Braille + 0x100 * (glyph / 8) + 0x10 * (glyph % 8);
    DecompressGlyphTile(glyphs, gCurGlyph.gfxBufferTop);
    DecompressGlyphTile(glyphs + 0x8, gCurGlyph.gfxBufferTop + 8);
    DecompressGlyphTile(glyphs + 0x80, gCurGlyph.gfxBufferBottom);
    DecompressGlyphTile(glyphs + 0x88, gCurGlyph.gfxBufferBottom + 8);
    gCurGlyph.width = 16;
    gCurGlyph.height = 16;
}

u32 GetGlyphWidth_Braille(u16 glyphId, bool32 isJapanese)
{
    return 16;
}
