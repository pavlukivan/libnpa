#ifndef NSB_MAGIC_HPP
#define NSB_MAGIC_HPP

#include <cstdint>
#define SWAP_UINT16(x) ((uint16_t)(((x) >> 8) | ((x) << 8)))

/*
 * SG - Steins;Gate
 * CH - Chaos;Head
 * FMDM - Full Metal Daemon: Muramasa
 * GCLX - Guilty Crown: Lost Christmas
 * */
enum /* Magic */ : uint16_t
{
    MAGIC_FWN_UNK = 0, // Fuwanovel eof extension?

    MAGIC_PARSE_TEXT = SWAP_UINT16(0xD800), // Intrinsic
    MAGIC_LITERAL = SWAP_UINT16(0xD000), // SG
    MAGIC_CHAPTER_DECLARATION = SWAP_UINT16(0x9400), // SG
    MAGIC_IF = SWAP_UINT16(0x9800), // SG
    MAGIC_JUMP = SWAP_UINT16(0xCF00), // SG
    MAGIC_CALL_FUNCTION = SWAP_UINT16(0xCE00), // SG
    MAGIC_CMP_LOGICAL_AND = SWAP_UINT16(0xC600), // SG
    MAGIC_CMP_LOGICAL_OR = SWAP_UINT16(0xC700), // SG
    MAGIC_SCOPE_BEGIN = SWAP_UINT16(0xC800), // Intrinsic
    MAGIC_SCOPE_END = SWAP_UINT16(0xC900), // Intrinsic
    MAGIC_MODULE_FILE_NAME = SWAP_UINT16(0x6800), // GCLX, FMDM, SG (GetModuleFileName)
    MAGIC_CLEAR_PARAMS = SWAP_UINT16(0x8E00), // Intrinsic
    MAGIC_RESET = SWAP_UINT16(0x5B00), // CH, SG
    MAGIC_LOGICAL_NOT_EQUAL = SWAP_UINT16(0xC100), // Intrinsic
    MAGIC_ADD_EXPRESSION = SWAP_UINT16(0xA500), // SG
    MAGIC_ASSIGN = SWAP_UINT16(0xB000), // SG
    MAGIC_VARIABLE = SWAP_UINT16(0xD100), // SG
    MAGIC_END_CHAPTER = SWAP_UINT16(0xD400), // SG
    MAGIC_SCENE_DECLARATION = SWAP_UINT16(0x9500), // SG
    MAGIC_CALL_SCENE = SWAP_UINT16(0xA300), // SG
    MAGIC_END_SCENE = SWAP_UINT16(0xD500), // SG
    MAGIC_MOVE = SWAP_UINT16(0x2000), // CH, SG
    MAGIC_REQUEST = SWAP_UINT16(0x2300), // CH, SG
    MAGIC_DELETE = SWAP_UINT16(0x2400), // CH, SG
    MAGIC_FADE = SWAP_UINT16(0x2500), // CH, SG
    MAGIC_WAIT = SWAP_UINT16(0x3900), // GCLX, FMDM, CH, SG
    MAGIC_WAIT_KEY = SWAP_UINT16(0x3A00), // GCLX, FMDM, CH, SG
    MAGIC_AT_EXPRESSION = SWAP_UINT16(0x9100), // SG
    MAGIC_NEGA_EXPRESSION = SWAP_UINT16(0xD200), // SG
    MAGIC_SET_VOLUME = SWAP_UINT16(0x4300), // CH
    MAGIC_SHAKE = SWAP_UINT16(0x2800), // CH
    MAGIC_SUB_SCRIPT = SWAP_UINT16(0xDE00), // SG
    MAGIC_UNK27 = SWAP_UINT16(0xE400), // phone related
    MAGIC_CREATE_WINDOW = SWAP_UINT16(0x1400), // CH
    MAGIC_SET_ALIAS = SWAP_UINT16(0x2B00), // CH, SG
    MAGIC_CREATE_MOVIE = SWAP_UINT16(0x1200), // CH
    MAGIC_SET_VERTEX = SWAP_UINT16(0x2C00), // CH, SG
    MAGIC_SET_SHADE = SWAP_UINT16(0x2D00), // GCLX, FMDM, CH, SG
    MAGIC_CREATE_RENDER_TEXTURE = SWAP_UINT16(0x1B00),
    MAGIC_DRAW_TO_TEXTURE = SWAP_UINT16(0x3000),
    MAGIC_CMP_EQUAL = SWAP_UINT16(0xC000), // SG
    MAGIC_FUNCTION_DECLARATION = SWAP_UINT16(0x9700), // SG
    MAGIC_END_FUNCTION = SWAP_UINT16(0xD700), // SG
    MAGIC_UNK38 = SWAP_UINT16(0x0401), // phone/message related
    MAGIC_UNK39 = SWAP_UINT16(0x0501), // phone/message related
    MAGIC_VARIABLE_VALUE = SWAP_UINT16(0x7500), // GCLX, FMDM, SG (GetVariableValue)
    MAGIC_CREATE_TEXTURE = SWAP_UINT16(0x0D00), // CH
    MAGIC_IMAGE_HORIZON = SWAP_UINT16(0x6100), // FMDM, CH, SG (GetImageHorizon)
    MAGIC_DIV_EXPRESSION = SWAP_UINT16(0xA800), // SG
    MAGIC_MUL_EXPRESSION = SWAP_UINT16(0xA700), // SG
    MAGIC_LOGICAL_NOT = SWAP_UINT16(0xAC00), // Intrinsic
    MAGIC_WHILE = SWAP_UINT16(0x9900), // SG
    MAGIC_REMAIN_TIME = SWAP_UINT16(0x5E00), // GCLX, FMDM, CH, SG
    MAGIC_BREAK = SWAP_UINT16(0x9D00), // SG
    MAGIC_LOGICAL_LESS_EQUAL = SWAP_UINT16(0xC200), // Intrinsic
    MAGIC_CREATE_EFFECT = SWAP_UINT16(0x0B00), // GCLX, FMDM, CH, SG
    MAGIC_UNK51 = SWAP_UINT16(0x0700), // called after handle is MAGIC_DESTROYed UNK51(handle (bgbuf), unk, 0, 0, false);
    MAGIC_UNK52 = SWAP_UINT16(0x2F00), // called after unk51 UNK52(handle (from unk50), handle (bgbuf));
    MAGIC_ALLOW_PHONE_CALL = SWAP_UINT16(0xFC00),
    MAGIC_INCREMENT = SWAP_UINT16(0xBE00), // SG
    MAGIC_CMP_LESS = SWAP_UINT16(0xC400), // SG
    MAGIC_DRAW_TRANSITION = SWAP_UINT16(0x3800), // CH
    MAGIC_LOGICAL_GREATER_EQUAL = SWAP_UINT16(0xC300), // Intrinsic
    MAGIC_SUB_EXPRESSION = SWAP_UINT16(0xA600), // SG
    MAGIC_UNK59 = SWAP_UINT16(0xEB00), // FM_From_DAR0203 (.ogg)
    MAGIC_UNK60 = SWAP_UINT16(0xEA00),
    MAGIC_ADD_ASSIGN = SWAP_UINT16(0xB100), // SG
    MAGIC_UNK62 = SWAP_UINT16(0xFB00),
    MAGIC_SUB_ASSIGN = SWAP_UINT16(0xB200), // SG
    MAGIC_CMP_GREATER = SWAP_UINT16(0xC500), // SG
    MAGIC_WHILE_END = SWAP_UINT16(0xDF00), // SG
    MAGIC_LOCK_VIDEO = SWAP_UINT16(0x7A00), // FMDM, SG
    MAGIC_LOAD_FONT = SWAP_UINT16(0x1C00), // CH, SG
    MAGIC_LOAD_IMAGE = SWAP_UINT16(0x1900), // CH, SG
    MAGIC_ARRAY = SWAP_UINT16(0x7200), // FMDM, SG
    MAGIC_ASSOC_ARRAY = SWAP_UINT16(0x7300), // FMDM, SG
    MAGIC_CREATE_CHOICE = SWAP_UINT16(0x1600),
    MAGIC_IMAGE_VERTICAL = SWAP_UINT16(0x6200), // FMDM, CH, SG (GetImageVertical)
    MAGIC_COUNT = SWAP_UINT16(0x7400), // FMDM, SG
    MAGIC_SET_FONT = SWAP_UINT16(0x4E00), // CH, SG
    MAGIC_CREATE_TEXT = SWAP_UINT16(0x1300), // CH, SG
    MAGIC_CREATE_COLOR = SWAP_UINT16(0x0A00), // GCLX, FMDM, CH, SG
    MAGIC_CREATE_NAME = SWAP_UINT16(0x0800), // GCLX, FMDM, SG
    MAGIC_CREATE_SCROLLBAR = SWAP_UINT16(0x1800), // CH
    MAGIC_SET_SCROLL_SPEED = SWAP_UINT16(0x3500), // SG
    MAGIC_SET_SCROLLBAR_WHEEL_AREA = SWAP_UINT16(0x1C01), // SG
    MAGIC_MOD_EXPRESSION = SWAP_UINT16(0xA900), // SG
    MAGIC_INTEGER = SWAP_UINT16(0x6E00), // CH, SG
    MAGIC_STRING = SWAP_UINT16(0x6500), // GCLX, FMDM, CH, SG
    MAGIC_SET_SCROLLBAR_VALUE = SWAP_UINT16(0x8A00), // SG
    MAGIC_SELECT = SWAP_UINT16(0x9A00), // SG
    MAGIC_CALL_CHAPTER = SWAP_UINT16(0xA200), // SG
    MAGIC_CASE = SWAP_UINT16(0x9B00), // SG
    MAGIC_CASE_END = SWAP_UINT16(0xDD00), // SG
    MAGIC_SELECT_END = SWAP_UINT16(0xE000), // SG
    MAGIC_SELECT_BREAK_END = SWAP_UINT16(0x0101), // SG
    MAGIC_CURSOR_POSITION = SWAP_UINT16(0x5400), // GCLX, FMDM, SG (GetMousePosition)
    MAGIC_MOVE_CURSOR = SWAP_UINT16(0x5500), // GCLX, FMDM, SG (SetMousePosition)
    MAGIC_SCROLLBAR_VALUE = SWAP_UINT16(0x6B00), // CH, SG (GetScrollBarValue)
    MAGIC_UNK94 = SWAP_UINT16(0x0001), // maybe SetAchievement?
    MAGIC_CREATE_PROCESS = SWAP_UINT16(0x0900), // GCLX, FMDM, CH, SG
    MAGIC_ZOOM = SWAP_UINT16(0x2600), // GCLX, FMDM, CH, SG
    MAGIC_TIME = SWAP_UINT16(0x6C00), // CH, SG
    MAGIC_SET_NEXT_FOCUS = SWAP_UINT16(0x3400), // SG
    MAGIC_RETURN = SWAP_UINT16(0x9C00), // SG
    MAGIC_UNK100 = SWAP_UINT16(0xF700),
    MAGIC_UNK101 = SWAP_UINT16(0xF800),
    MAGIC_SET_SHORTCUT = SWAP_UINT16(0x5800), // FMDM, SG
    MAGIC_SAVE = SWAP_UINT16(0x4F00), // FMDM, CH, SG
    MAGIC_DELETE_SAVE_FILE = SWAP_UINT16(0x5100), // FMDM, SG
    MAGIC_DURATION_TIME = SWAP_UINT16(0x5F00), // GCLX, FMDM, CH, SG
    MAGIC_CLEAR_SCORE = SWAP_UINT16(0x4C00), // CH, SG
    MAGIC_CLEAR_BACKLOG = SWAP_UINT16(0x4A00), // CH, SG
    MAGIC_EXIST_SAVE = SWAP_UINT16(0x5200), // CH
    MAGIC_WAIT_ACTION = SWAP_UINT16(0x4000), // GCLX, FMDM, CH, SG
    MAGIC_DECREMENT = SWAP_UINT16(0xBF00), // SG
    MAGIC_MOVIE_PLAY = SWAP_UINT16(0x4B00), // FMDM, CH, SG
    MAGIC_SET_STREAM = SWAP_UINT16(0x3200), // GCLX, FMDM, CH, SG
    MAGIC_WAIT_PLAY = SWAP_UINT16(0x4100), // GCLX, FMDM, CH, SG
    MAGIC_SYSTEM = SWAP_UINT16(0x5C00), // GCLX, FMDM, CH, SG
    MAGIC_UNK115 = SWAP_UINT16(0x1801),
    MAGIC_UNK116 = SWAP_UINT16(0xAA00),
    MAGIC_UNK117 = SWAP_UINT16(0xE800),
    MAGIC_WAIT_FINISH_ATTACH_CG_VIEW = SWAP_UINT16(0x1301), // SG
    MAGIC_UNK119 = SWAP_UINT16(0x1D01), // Phone related, Highest value? 0x11D
    MAGIC_WAIT_FINISH_SEND_MAIL_EDIT = SWAP_UINT16(0x1201), // SG
    MAGIC_WAIT_FINISH_MAIL_VIEW = SWAP_UINT16(0x1101), // SG
    MAGIC_UNK122 = SWAP_UINT16(0xF100),
    MAGIC_UNK123 = SWAP_UINT16(0x1601),
    MAGIC_UNK124 = SWAP_UINT16(0xE500),
    MAGIC_UNK125 = SWAP_UINT16(0xE600), // Phone related
    MAGIC_UNK126 = SWAP_UINT16(0xF600), // Phone related
    MAGIC_UNK127 = SWAP_UINT16(0xED00), // see UNK59
    MAGIC_UNK128 = SWAP_UINT16(0xFA00), // Phone related
    MAGIC_UNK129 = SWAP_UINT16(0x0F01), // Phone related
    MAGIC_SEND_MAIL_EDIT = SWAP_UINT16(0xE700),
    MAGIC_RANDOM = SWAP_UINT16(0x5D00), // GCLX, FMDM, CH, SG (GetRandom)
    MAGIC_UNK132 = SWAP_UINT16(0xE900), // Phone related
    MAGIC_UNK133 = SWAP_UINT16(0x0C01), // Phone related
    MAGIC_UNK134 = SWAP_UINT16(0x0D01),
    MAGIC_UNK135 = SWAP_UINT16(0x1701),
    MAGIC_UNK136 = SWAP_UINT16(0x0701),
    MAGIC_UNK137 = SWAP_UINT16(0xF300),
    MAGIC_UNK138 = SWAP_UINT16(0xF000),
    MAGIC_UNK139 = SWAP_UINT16(0x1901),
    MAGIC_UNK140 = SWAP_UINT16(0x1001),
    MAGIC_UNK141 = SWAP_UINT16(0xF500),
    MAGIC_UNK142 = SWAP_UINT16(0xEC00), // see UNK127
    MAGIC_UNK143 = SWAP_UINT16(0xF900), // Phone related
    MAGIC_UNK144 = SWAP_UINT16(0x0A01), // Phone related
    MAGIC_TIME_LEAP_INIT = SWAP_UINT16(0xFE00), // SG
    MAGIC_UNK146 = SWAP_UINT16(0xAE00),
    MAGIC_DISP_ATTACH_CG = SWAP_UINT16(0x1401), // SG
    MAGIC_ERASE_ATTACH_CG = SWAP_UINT16(0x1501), // SG
    MAGIC_UNK149 = SWAP_UINT16(0xB900),
    MAGIC_UNK150 = SWAP_UINT16(0xAB00), // some kind of binary operation?
    MAGIC_CREATE_CLIP_TEXTURE = SWAP_UINT16(0x0E00), // SG
    MAGIC_CREATE_STENCIL = SWAP_UINT16(0x0600), // FMDM, SG
    MAGIC_UNK153 = SWAP_UINT16(0x0F00),
    MAGIC_UNK154 = SWAP_UINT16(0x3100),
    MAGIC_CREATE_SOUND = SWAP_UINT16(0x1100), // CH
    MAGIC_SET_LOOP_POINT = SWAP_UINT16(0x4700), // CH
    MAGIC_SET_FREQUENCY = SWAP_UINT16(0x4500), // CH
    MAGIC_SET_PAN = SWAP_UINT16(0x4400), // CH
    MAGIC_SET_LOOP = SWAP_UINT16(0x4600), // CH
    MAGIC_UNK160 = SWAP_UINT16(0x3700),
    MAGIC_CONQUEST = SWAP_UINT16(0x7000), // FMDM, SG
    MAGIC_STR_STR = SWAP_UINT16(0x6400), // SG
    MAGIC_SET_TEXTBOX_ATTRIBUTES = SWAP_UINT16(0x0E01), // SetTextboxAttributes(STRING handle, INT unk, STRING font, INT unk, STRING color1, STRING color2, INT unk, STRING unk)
    MAGIC_LOAD_TEXT = SWAP_UINT16(0x1D00), // GCLX, FMDM, CH, SG
    MAGIC_WAIT_TEXT = SWAP_UINT16(0x4200), // FMDM, CH, SG
    MAGIC_SET_BACKLOG = SWAP_UINT16(0x4900), // GCLX, FMDM, CH, SG
    MAGIC_UNK167 = SWAP_UINT16(0x5900),
    MAGIC_PASSAGE_TIME = SWAP_UINT16(0x6000), // GCLX, FMDM, CH, SG
    MAGIC_SET_COLOR = SWAP_UINT16(0x0300), // SG, GCLX
    MAGIC_WAIT_FADE = SWAP_UINT16(0x3C00), // GCLX, FMDM, CH, SG
    MAGIC_POSITION = SWAP_UINT16(0x5300), // GCLX, FMDM, SG (GetPosition)
    MAGIC_SOUND_AMPLITUDE = SWAP_UINT16(0x6F00), // GCLX, CH, SG
    MAGIC_READ_FILE = SWAP_UINT16(0x6700), // CH, SG
    MAGIC_DATE_TIME = SWAP_UINT16(0x5600), // GCLX, FMDM, CH, SG
    MAGIC_WRITE_FILE = SWAP_UINT16(0x5700), // GCLX, FMDM, CH, SG
    MAGIC_LOAD = SWAP_UINT16(0x5000), // CH, SG
    MAGIC_MESSAGE = SWAP_UINT16(0x7100), // GCLX, FMDM, SG (MessageBox)
    MAGIC_UNK178 = SWAP_UINT16(0x3600),
    MAGIC_UNK179 = SWAP_UINT16(0xF200),
    MAGIC_UNK180 = SWAP_UINT16(0xEF00),
    MAGIC_CREATE_BACKLOG = SWAP_UINT16(0x1700), // SG, CH
    MAGIC_UNK182 = SWAP_UINT16(0x4800),
    MAGIC_UNK183 = SWAP_UINT16(0xE300), // SetEnableBacklog? (takes a bool)
    MAGIC_ENABLE_BACKLOG = SWAP_UINT16(0x6600), // SG, CH
    MAGIC_UNK185 = SWAP_UINT16(0x1A01),
    MAGIC_EXIT = SWAP_UINT16(0x5A00), // CH, SG
    MAGIC_UNK187 = SWAP_UINT16(0xFF00), // UnlockTip (from function.TipsOn)
    MAGIC_UNK188 = SWAP_UINT16(0xD900), // occurs before Jumps
    MAGIC_ROTATE = SWAP_UINT16(0x2700), // GCLX, FMDM, CH, SG
    MAGIC_SET_TONE = SWAP_UINT16(0x2E00), // GCLX, FMDM, CH, SG
    MAGIC_UNK191 = SWAP_UINT16(0x0200),
    MAGIC_UNK192 = SWAP_UINT16(0x2E00),
    MAGIC_UNK193 = SWAP_UINT16(0xB800),
    MAGIC_UNK194 = SWAP_UINT16(0x3B00)
};

namespace Nsb
{
    bool IsValidMagic(uint16_t Magic);
    const char* StringifyMagic(uint16_t Magic);
    uint16_t MagicifyString(const char* String);
}

#endif
