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
    MAGIC_LOGICAL_AND = SWAP_UINT16(0xC600), // Intrinsic
    MAGIC_LOGICAL_OR = SWAP_UINT16(0xC700), // Intrinsic
    MAGIC_SCOPE_BEGIN = SWAP_UINT16(0xC800), // Intrinsic
    MAGIC_SCOPE_END = SWAP_UINT16(0xC900), // Intrinsic
    MAGIC_GET_MODULE_FILE_NAME = SWAP_UINT16(0x6800), // FMDM, SG
    MAGIC_CLEAR_PARAMS = SWAP_UINT16(0x8E00), // Intrinsic
    MAGIC_RESET = SWAP_UINT16(0x5B00), // CH, SG
    MAGIC_LOGICAL_NOT_EQUAL = SWAP_UINT16(0xC100), // Intrinsic
    MAGIC_ADD = SWAP_UINT16(0xA500), // Intrinsic
    MAGIC_ASSIGN = SWAP_UINT16(0xB000), // SG
    MAGIC_GET = SWAP_UINT16(0xD100), // Intrinsic
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
    MAGIC_PLACEHOLDER_PARAM = SWAP_UINT16(0x9100), // param is an expression?
    MAGIC_NEGATIVE = SWAP_UINT16(0xD200), // Intrinsic
    MAGIC_SET_VOLUME = SWAP_UINT16(0x4300), // CH
    MAGIC_SHAKE = SWAP_UINT16(0x2800), // CH
    MAGIC_ARRAY_READ = SWAP_UINT16(0xDE00), // Intrinsic
    MAGIC_UNK27 = SWAP_UINT16(0xE400), // phone related
    MAGIC_CREATE_WINDOW = SWAP_UINT16(0x1400), // CH
    MAGIC_SET_ALIAS = SWAP_UINT16(0x2B00), // CH, SG
    MAGIC_CREATE_MOVIE = SWAP_UINT16(0x1200), // CH
    MAGIC_SET_VERTEX = SWAP_UINT16(0x2C00), // CH, SG
    MAGIC_APPLY_BLUR = SWAP_UINT16(0x2D00),
    MAGIC_CREATE_RENDER_TEXTURE = SWAP_UINT16(0x1B00),
    MAGIC_DRAW_TO_TEXTURE = SWAP_UINT16(0x3000),
    MAGIC_LOGICAL_EQUAL = SWAP_UINT16(0xC000), // Intrinsic
    MAGIC_FUNCTION_BEGIN = SWAP_UINT16(0x9700), // Intrinsic
    MAGIC_FUNCTION_END = SWAP_UINT16(0xD700), // Intrinsic
    MAGIC_UNK38 = SWAP_UINT16(0x0401), // phone/message related
    MAGIC_UNK39 = SWAP_UINT16(0x0501), // phone/message related
    MAGIC_VARIABLE_VALUE = SWAP_UINT16(0x7500), // GCLX, FMDM, SG (GetVariableValue)
    MAGIC_CREATE_TEXTURE = SWAP_UINT16(0x0D00), // CH
    MAGIC_IMAGE_HORIZON = SWAP_UINT16(0x6100), // FMDM, CH, SG (GetImageHorizon)
    MAGIC_DIVIDE = SWAP_UINT16(0xA800), // Intrinsic
    MAGIC_MULTIPLY = SWAP_UINT16(0xA700), // Intrinsic
    MAGIC_LOGICAL_NOT = SWAP_UINT16(0xAC00), // Intrinsic
    MAGIC_WHILE = SWAP_UINT16(0x9900), // SG
    MAGIC_REMAIN_TIME = SWAP_UINT16(0x5E00), // GCLX, FMDM, CH, SG
    MAGIC_BREAK = SWAP_UINT16(0x9D00), // SG
    MAGIC_LOGICAL_LESS_EQUAL = SWAP_UINT16(0xC200), // Intrinsic
    MAGIC_CREATE_EFFECT = SWAP_UINT16(0x0B00), // GCLX, FMDM, CH, SG
    MAGIC_UNK51 = SWAP_UINT16(0x0700), // called after handle is MAGIC_DESTROYed UNK51(handle (bgbuf), unk, 0, 0, false);
    MAGIC_UNK52 = SWAP_UINT16(0x2F00), // called after unk51 UNK52(handle (from unk50), handle (bgbuf));
    MAGIC_ALLOW_PHONE_CALL = SWAP_UINT16(0xFC00),
    MAGIC_INCREMENT = SWAP_UINT16(0xBE00), // Intrinsic
    MAGIC_LOGICAL_LESS = SWAP_UINT16(0xC400), // Intrinsic
    MAGIC_DRAW_TRANSITION = SWAP_UINT16(0x3800), // CH
    MAGIC_LOGICAL_GREATER_EQUAL = SWAP_UINT16(0xC300), // Intrinsic
    MAGIC_SUBSTRACT = SWAP_UINT16(0xA600), // Intrinsic
    MAGIC_UNK59 = SWAP_UINT16(0xEB00), // FM_From_DAR0203 (.ogg)
    MAGIC_UNK60 = SWAP_UINT16(0xEA00),
    MAGIC_ADD_ASSIGN = SWAP_UINT16(0xB100), // SG
    MAGIC_UNK62 = SWAP_UINT16(0xFB00),
    MAGIC_SUB_ASSIGN = SWAP_UINT16(0xB200), // SG
    MAGIC_LOGICAL_GREATER = SWAP_UINT16(0xC500), // Intrinsic
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
    MAGIC_UNK79 = SWAP_UINT16(0x3500),
    MAGIC_UNK80 = SWAP_UINT16(0x1C01),
    MAGIC_UNK81 = SWAP_UINT16(0xA900),
    MAGIC_UNK82 = SWAP_UINT16(0x6E00),
    MAGIC_STRING = SWAP_UINT16(0x6500), // GCLX, FMDM, CH, SG
    MAGIC_UNK84 = SWAP_UINT16(0x8A00),
    MAGIC_SELECT = SWAP_UINT16(0x9A00), // SG
    MAGIC_CALL_CHAPTER = SWAP_UINT16(0xA200), // SG
    MAGIC_CASE_BEGIN = SWAP_UINT16(0x9B00), // Intrinsic
    MAGIC_CASE_END = SWAP_UINT16(0xDD00), // Intrinsic
    MAGIC_SELECT_END = SWAP_UINT16(0xE000), // Intrisic
    MAGIC_UNK90 = SWAP_UINT16(0x0101),
    MAGIC_CURSOR_POSITION = SWAP_UINT16(0x5400), // GCLX, FMDM, SG (GetMousePosition)
    MAGIC_MOVE_CURSOR = SWAP_UINT16(0x5500), // GCLX, FMDM, SG (SetMousePosition)
    MAGIC_SCROLLBAR_VALUE = SWAP_UINT16(0x6B00), // CH
    MAGIC_UNK94 = SWAP_UINT16(0x0001),
    MAGIC_CREATE_PROCESS = SWAP_UINT16(0x0900), // CH
    MAGIC_ZOOM = SWAP_UINT16(0x2600), // CH
    MAGIC_TIME = SWAP_UINT16(0x6C00), // CH
    MAGIC_SET_NEXT_FOCUS = SWAP_UINT16(0x3400),
    MAGIC_RETURN = SWAP_UINT16(0x9C00), // SG
    MAGIC_UNK100 = SWAP_UINT16(0xF700),
    MAGIC_UNK101 = SWAP_UINT16(0xF800),
    MAGIC_SET_SHORTCUT = SWAP_UINT16(0x5800), // FMDM, SG
    MAGIC_SAVE = SWAP_UINT16(0x4F00), // FMDM, CH, SG
    MAGIC_DELETE_SAVE_FILE = SWAP_UINT16(0x5100), // FMDM, SG
    MAGIC_DURATION_TIME = SWAP_UINT16(0x5F00), // GCLX, FMDM, CH, SG
    MAGIC_CLEAR_SCORE = SWAP_UINT16(0x4C00), // CH
    MAGIC_CLEAR_BACKLOG = SWAP_UINT16(0x4A00), // CH
    MAGIC_EXIST_SAVE = SWAP_UINT16(0x5200), // CH
    MAGIC_WAIT_ACTION = SWAP_UINT16(0x4000),
    MAGIC_UNK110 = SWAP_UINT16(0xBF00),
    MAGIC_MOVIE_PLAY = SWAP_UINT16(0x4B00), // FMDM, CH, SG
    MAGIC_SET_STREAM = SWAP_UINT16(0x3200), // GCLX, FMDM, CH, SG
    MAGIC_WAIT_PLAY = SWAP_UINT16(0x4100), // GCLX, FMDM, CH, SG
    MAGIC_SYSTEM = SWAP_UINT16(0x5C00), // GCLX, FMDM, CH, SG
    MAGIC_UNK115 = SWAP_UINT16(0x1801),
    MAGIC_UNK116 = SWAP_UINT16(0xAA00),
    MAGIC_UNK117 = SWAP_UINT16(0xE800),
    MAGIC_UNK118 = SWAP_UINT16(0x1301),
    MAGIC_UNK119 = SWAP_UINT16(0x1D01), // Phone related, Highest value? 0x11D
    MAGIC_UNK120 = SWAP_UINT16(0x1201),
    MAGIC_UNK121 = SWAP_UINT16(0x1101),
    MAGIC_UNK122 = SWAP_UINT16(0xF100),
    MAGIC_UNK123 = SWAP_UINT16(0x1601),
    MAGIC_UNK124 = SWAP_UINT16(0xE500),
    MAGIC_UNK125 = SWAP_UINT16(0xE600), // Phone related
    MAGIC_UNK126 = SWAP_UINT16(0xF600), // Phone related
    MAGIC_UNK127 = SWAP_UINT16(0xED00), // see UNK59
    MAGIC_UNK128 = SWAP_UINT16(0xFA00), // Phone related
    MAGIC_UNK129 = SWAP_UINT16(0x0F01), // Phone related
    MAGIC_SEND_MAIL_EDIT = SWAP_UINT16(0xE700),
    MAGIC_UNK131 = SWAP_UINT16(0x5D00),
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
    MAGIC_UNK145 = SWAP_UINT16(0xFE00), // time leap
    MAGIC_UNK146 = SWAP_UINT16(0xAE00),
    MAGIC_UNK147 = SWAP_UINT16(0x1401),
    MAGIC_UNK148 = SWAP_UINT16(0x1501),
    MAGIC_UNK149 = SWAP_UINT16(0xB900),
    MAGIC_UNK150 = SWAP_UINT16(0xAB00),
    MAGIC_LOAD_TEXTURE_CLIP = SWAP_UINT16(0x0E00),
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
    MAGIC_LOAD_TEXT = SWAP_UINT16(0x1D00), // CH, SG
    MAGIC_WAIT_TEXT = SWAP_UINT16(0x4200), // FMDM, CH, SG
    MAGIC_SET_BACKLOG = SWAP_UINT16(0x4900), // GCLX, FMDM, CH, SG
    MAGIC_UNK167 = SWAP_UINT16(0x5900),
    MAGIC_PASSAGE_TIME = SWAP_UINT16(0x6000), // GCLX, FMDM, CH, SG
    MAGIC_UNK169 = SWAP_UINT16(0x0300),
    MAGIC_WAIT_FADE = SWAP_UINT16(0x3C00), // GCLX, FMDM, CH, SG
    MAGIC_POSITION = SWAP_UINT16(0x5300), // GCLX, FMDM, SG (GetPosition)
    MAGIC_SOUND_AMPLITUDE = SWAP_UINT16(0x6F00), // GCLX, CH, SG
    MAGIC_READ_FILE = SWAP_UINT16(0x6700), // CH
    MAGIC_DATE_TIME = SWAP_UINT16(0x5600), // GCLX, FMDM, CH, SG
    MAGIC_WRITE_FILE = SWAP_UINT16(0x5700), // GCLX, FMDM, CH, SG
    MAGIC_LOAD = SWAP_UINT16(0x5000), // CH
    MAGIC_MESSAGE_BOX = SWAP_UINT16(0x7100), // SG
    MAGIC_UNK178 = SWAP_UINT16(0x3600),
    MAGIC_UNK179 = SWAP_UINT16(0xF200),
    MAGIC_UNK180 = SWAP_UINT16(0xEF00),
    MAGIC_UNK181 = SWAP_UINT16(0x1700),
    MAGIC_UNK182 = SWAP_UINT16(0x4800),
    MAGIC_UNK183 = SWAP_UINT16(0xE300),
    MAGIC_UNK184 = SWAP_UINT16(0x6600),
    MAGIC_UNK185 = SWAP_UINT16(0x1A01),
    MAGIC_EXIT = SWAP_UINT16(0x5A00), // CH, SG
    MAGIC_UNK187 = SWAP_UINT16(0xFF00), // UnlockTip (from function.TipsOn)
    MAGIC_UNK188 = SWAP_UINT16(0xD900),
    MAGIC_ROTATE = SWAP_UINT16(0x2700), // GCLX, FMDM, CH, SG
    MAGIC_UNK190 = SWAP_UINT16(0x2E00),
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
