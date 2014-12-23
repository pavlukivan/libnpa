#include <string>
#include <cstdint>
#include <map>
#include "nsbconstants.hpp"

namespace Nsb
{
    std::map<std::string, int32_t> Constants =
    {
        {"FM_From_XXX0001", 0},
        {"FM_From_XXX0002", 1},
        {"FM_To_DAR0001_0", 2},
        {"FM_To_DAR0001_1", 3},
        {"FM_To_DAR0001_2", 4},
        {"FM_To_DAR0001_3", 5},
        {"FM_To_DAR0001_4", 6},
        {"FM_To_DAR0001_5", 7},
        {"FM_To_DAR0001", 8},
        {"FM_To_DAR0102", 9},
        {"FM_From_DAR0102", 10},
        {"FM_From_DAR0103", 11},
        {"FM_To_DAR0101", 12},
        {"FM_To_XXX0101", 13},
        {"FM_To_MAY0101", 14},
        {"FM_To_RUK101", 15},
        {"FM_To_FEI0101", 16},
        {"FM_To_MOE0101", 17},
        {"FM_From_MOE0101", 18},
        {"FM_To_MOE0102_0", 19},
        {"FM_To_MOE0102_1", 20},
        {"FM_To_MOE0102_2", 21},
        {"FM_To_MOE0102_3", 22},
        {"FM_To_MOE0102_4", 23},
        {"FM_To_MOE0102", 24},
        {"FM_From_MOE0102", 25},
        {"FM_From_DAR0203", 26},
        {"FM_From_DAR0202", 27},
        {"FM_From_MOE0201", 28},
        {"FM_From_MOE0202", 29},
        {"FM_From_MOE0203", 30},
        {"FM_From_MOE0204", 31},
        {"FM_From_MOE0205", 32},
        {"FM_From_MOE0206", 33},
        {"FM_From_MOE0207", 34},
        {"FM_From_MOE0208", 35},
        {"FM_To_TIT0201_0", 36},
        {"FM_To_TIT0201_1", 37},
        {"FM_To_TIT0201_2", 38},
        {"FM_To_TIT0201_3", 39},
        {"FM_To_TIT0201_4", 40},
        {"FM_To_TIT0201_5", 41},
        {"FM_To_TIT0201_6", 42},
        {"FM_To_TIT0201_7", 43},
        {"FM_To_TIT0201_8", 44},
        {"FM_To_TIT0201_9", 45},
        {"FM_To_TIT0201_10", 46},
        {"FM_To_TIT0201_11", 47},
        {"FM_To_TIT0201_12", 48},
        {"FM_To_TIT0201", 49},
        {"FM_From_TIT0201", 50},
        {"FM_To_TIT0202", 51},
        {"FM_From_TIT0202", 52},
        {"FM_From_MOE0210", 53},
        {"FM_To_MOE0201_0", 54},
        {"FM_To_MOE0201", 55},
        {"FM_From_MOE0209", 56},
        {"FM_From_MOE0211", 57},
        {"FM_To_MOE0202", 58},
        {"FM_From_MOE0212", 59},
        {"FM_From_MOE0213", 60},
        {"FM_To_MOE0203", 61},
        {"FM_From_MOE0214", 62},
        {"FM_To_MOE0204", 63},
        {"FM_From_MOE0215", 64},
        {"FM_From_MOE0216", 65},
        {"FM_From_MOE0217", 66},
        {"FM_From_MOE0218", 67},
        {"FM_From_MOE0219", 68},
        {"FM_To_MAY0201", 69},
        {"FM_From_MAY0201", 70},
        {"FM_From_MOE0220", 71},
        {"FM_From_MOE0223", 72},
        {"FM_To_MOE0205", 73},
        {"FM_From_MOE0221", 74},
        {"FM_From_MOE0224", 75},
        {"FM_To_MOE0206", 76},
        {"FM_From_MOE0222", 77},
        {"FM_To_MOE0207_0", 78},
        {"FM_To_MOE0207_1", 79},
        {"FM_To_MOE0207", 80},
        {"FM_To_MOE0208_0", 81},
        {"FM_To_MOE0208_1", 82},
        {"FM_To_MOE0208", 83},
        {"FM_From_CRS0302", 84},
        {"FM_From_CRS0301", 85},
        {"FM_From_CRS0305", 86},
        {"FM_From_CRS0304", 87},
        {"FM_From_CRS0303", 88},
        {"FM_From_CRS0307", 89},
        {"FM_From_CRS0306", 90},
        {"FM_From_CRS0310", 91},
        {"FM_From_CRS0309", 92},
        {"FM_From_CRS0308", 93},
        {"FM_From_CRS0313", 94},
        {"FM_From_CRS0312", 95},
        {"FM_From_CRS0311", 96},
        {"FM_From_CRS0316", 97},
        {"FM_From_CRS0315", 98},
        {"FM_From_CRS0314", 99},
        {"FM_From_CRS0318", 100},
        {"FM_From_CRS0317", 101},
        {"FM_From_CRS0321", 102},
        {"FM_From_CRS0320", 103},
        {"FM_From_CRS0319", 104},
        {"FM_From_CRS0324", 105},
        {"FM_From_CRS0323", 106},
        {"FM_From_CRS0322", 107},
        {"FM_From_CRS0325", 108},
        {"FM_From_CRS0327", 109},
        {"FM_From_CRS0326", 110},
        {"FM_From_CRS0328", 111},
        {"FM_From_CRS0329", 112},
        {"FM_From_CRS0331", 113},
        {"FM_From_CRS0330", 114},
        {"FM_From_CRS0332", 115},
        {"FM_From_CRS0333", 116},
        {"FM_From_MOE0301", 117},
        {"FM_From_MOE0302", 118},
        {"FM_From_MOE0303", 119},
        {"FM_From_MOE0304", 120},
        {"FM_From_MOE0305", 121},
        {"FM_From_MOE0306", 122},
        {"FM_From_MOE0307", 123},
        {"FM_From_MOE0308", 124},
        {"FM_From_MOE0309", 125},
        {"FM_From_MOE0310", 126},
        {"FM_From_MOE0311", 127},
        {"FM_From_MOE0313", 128},
        {"FM_From_MOE0312", 129},
        {"FM_From_MOE0314", 130},
        {"FM_From_MOE0315", 131},
        {"FM_From_MOE0316", 132},
        {"FM_From_MOE0317", 133},
        {"FM_From_MAY0302", 134},
        {"FM_From_MAY0301", 135},
        {"FM_To_OKA0301", 136},
        {"FM_From_OKA0303", 137},
        {"FM_From_OKA0302", 138},
        {"FM_From_OKA0301", 139},
        {"FM_From_MOE0318", 140},
        {"FM_From_MOE0319", 141},
        {"FM_From_MOE0320", 142},
        {"FM_From_MOE0321", 143},
        {"FM_From_MOE0322", 144},
        {"FM_From_MOE0323", 145},
        {"FM_From_MOE0324", 146},
        {"FM_From_MOE0325", 147},
        {"FM_From_MOE0326", 148},
        {"FM_From_MOE0327", 149},
        {"FM_From_MOE0328", 150},
        {"FM_From_MOE0329", 151},
        {"FM_To_TIT0301_0", 152},
        {"FM_To_TIT0301_1", 153},
        {"FM_To_TIT0301_2", 154},
        {"FM_To_TIT0301_3", 155},
        {"FM_To_TIT0301_4", 156},
        {"FM_To_TIT0301_5", 157},
        {"FM_To_TIT0301_6", 158},
        {"FM_To_TIT0301", 159},
        {"FM_From_TIT0301", 160},
        {"FM_To_TIT0302_0", 161},
        {"FM_To_TIT0302_1", 162},
        {"FM_To_TIT0302_2", 163},
        {"FM_To_TIT0302_3", 164},
        {"FM_To_TIT0302_4", 165},
        {"FM_To_TIT0302_5", 166},
        {"FM_To_TIT0302_6", 167},
        {"FM_To_TIT0302", 168},
        {"FM_From_TIT0302", 169},
        {"FM_To_TIT0303_0", 170},
        {"FM_To_TIT0303_1", 171},
        {"FM_To_TIT0303_2", 172},
        {"FM_To_TIT0303_3", 173},
        {"FM_To_TIT0303_4", 174},
        {"FM_To_TIT0303", 175},
        {"FM_From_TIT0303", 176},
        {"FM_To_TIT0304_0", 177},
        {"FM_To_TIT0304_1", 178},
        {"FM_To_TIT0304", 179},
        {"FM_From_TIT0304", 180},
        {"FM_From_TIT0305", 181},
        {"FM_To_TIT0305_0", 182},
        {"FM_To_TIT0305_1", 183},
        {"FM_To_TIT0305", 184},
        {"FM_From_TIT0306", 185},
        {"FM_To_TIT0306_0", 186},
        {"FM_To_TIT0306_1", 187},
        {"FM_To_TIT0306", 188},
        {"FM_From_TIT0307", 189},
        {"FM_From_TIT0308", 190},
        {"FM_From_MOE0401", 191},
        {"FM_From_MOE0402", 192},
        {"FM_From_MOE0403", 193},
        {"FM_To_MOE0401", 194},
        {"FM_From_MOE0404", 195},
        {"FM_From_MOE0405", 196},
        {"FM_From_MOE0406", 197},
        {"FM_From_MOE0407", 198},
        {"FM_From_MOE0408", 199},
        {"FM_From_MOE0409", 200},
        {"FM_To_MOE0403", 201},
        {"FM_From_MOE0410", 202},
        {"FM_To_CRS0401", 203},
        {"FM_To_MOE0402", 204},
        {"FM_From_MOE0411", 205},
        {"FM_From_MOE0412", 206},
        {"FM_From_XXX0401", 207},
        {"FM_From_DAR0402", 208},
        {"FM_From_SUZ0401", 209},
        {"FM_From_SUZ0402", 210},
        {"FM_To_OKA0401", 211},
        {"FM_From_OKA0401", 212},
        {"FM_To_OKA0402", 213},
        {"FM_From_OKA0404", 214},
        {"FM_From_OKA0403", 215},
        {"FM_From_OKA0402", 216},
        {"FM_From_DAR0401", 217},
        {"FM_From_MAY0401", 218},
        {"FM_To_TIT0501", 219},
        {"FM_From_MOE0501", 220},
        {"FM_From_MOE0502", 221},
        {"FM_From_MOE0503", 222},
        {"FM_From_MOE0504", 223},
        {"FM_From_MOE0505", 224},
        {"FM_From_XXX0501", 225},
        {"FM_From_MOE0601", 226},
        {"FM_To_MOE0601", 227},
        {"FM_From_CRS0601", 228},
        {"FM_To_CRS0601", 229},
        {"FM_From_SUZ0601", 230},
        {"FM_To_OKA0601_0", 231},
        {"FM_To_OKA0601_1", 232},
        {"FM_To_OKA0601_2", 233},
        {"FM_To_OKA0601", 234},
        {"FM_From_OKA0703", 235},
        {"FM_From_OKA0702", 236},
        {"FM_From_OKA0701", 237},
        {"FM_To_FEI0701_0", 238},
        {"FM_To_FEI0701_1", 239},
        {"FM_To_FEI0701_2", 240},
        {"FM_To_FEI0701_3", 241},
        {"FM_To_FEI0701", 242},
        {"FM_To_FEI0702", 243},
        {"FM_To_FEI0703", 244},
        {"FM_To_FEI0704", 245},
        {"FM_To_DAR0701_0", 246},
        {"FM_To_DAR0701_1", 247},
        {"FM_To_DAR0701_2", 248},
        {"FM_To_DAR0701_3", 249},
        {"FM_To_DAR0701_4", 250},
        {"FM_To_DAR0701_5", 251},
        {"FM_To_DAR0701_6", 252},
        {"FM_To_DAR0701", 253},
        {"FM_To_FEI0705", 254},
        {"FM_From_RUK0802", 255},
        {"FM_From_RUK0801", 256},
        {"FM_From_RUK0803", 257},
        {"FM_To_RUK0801_0", 258},
        {"FM_To_RUK0801", 259},
        {"FM_To_MOE0901", 260},
        {"FM_From_MAY0901", 261},
        {"FM_From_CRS0901", 262},
        {"FM_From_CRS0902", 263},
        {"FM_To_XXX0901", 264},
        {"FM_To_MOE0904_0", 265},
        {"FM_To_MOE0904_1", 266},
        {"FM_To_MOE0904", 267},
        {"FM_To_MOE0905_0", 268},
        {"FM_To_MOE0905_1", 269},
        {"FM_To_MOE0905", 270},
        {"FM_To_MOE0906_0", 271},
        {"FM_To_MOE0906_1", 272},
        {"FM_To_MOE0906", 273},
        {"FM_To_MOE0907_0", 274},
        {"FM_To_MOE0907_1", 275},
        {"FM_To_MOE0907", 276},
        {"FM_To_DAR0901", 277},
        {"FM_From_DAR0901", 278},
        {"FM_From_TEN0901", 279},
        {"FM_To_MOE0902", 280},
        {"FM_From_MOE0901", 281},
        {"FM_From_MOE0902", 282},
        {"FM_From_MOE0903", 283},
        {"FM_To_MOE0903_0", 284},
        {"FM_To_MOE0903_1", 285},
        {"FM_To_MOE0903_2", 286},
        {"FM_To_MOE0903", 287},
        {"FM_From_MOE0904", 288},
        {"FM_From_MOE0905", 289},
        {"FM_From_MOE0906", 290},
        {"FM_From_MAY1001", 291},
        {"FM_To_MAY1001", 292},
        {"FM_To_MAY1002", 293},
        {"FM_To_DAR1001", 294},
        {"FM_From_CRS1001", 295},
        {"FM_From_XXX1101", 296},
        {"FM_From_XXX1102", 297},
        {"RM_From_CRS04_01_A", 298},
        {"RM_Res_CRS04_01_A1", 299},
        {"RM_Res_CRS04_01_A2", 300},
        {"RM_Res_CRS04_01_A3", 301},
        {"RM_From_CRS04_02_A", 302},
        {"RM_Res_CRS04_02_A1", 303},
        {"RM_Res_CRS04_02_A2", 304},
        {"RM_From_CRS04_03_A", 305},
        {"RM_From_CRS04_03_B", 306},
        {"RM_Res_CRS04_03_A1", 307},
        {"RM_From_CRS04_04_A", 308},
        {"RM_From_CRS04_04_B", 309},
        {"RM_From_CRS04_04_C", 310},
        {"RM_Res_CRS04_04_A1", 311},
        {"RM_Res_CRS04_04_A2", 312},
        {"RM_Res_CRS04_04_B1", 313},
        {"RM_Res_CRS04_04_B2", 314},
        {"RM_Res_CRS04_04_C1", 315},
        {"RM_Res_CRS04_04_C2", 316},
        {"RM_From_CRS04_05_A", 317},
        {"RM_From_CRS04_05_B", 318},
        {"RM_Res_CRS04_05_A1", 319},
        {"RM_Res_CRS04_05_B1", 320},
        {"RM_From_CRS04_06_A", 321},
        {"RM_From_CRS04_06_B", 322},
        {"RM_From_CRS04_06_C", 323},
        {"RM_From_CRS04_06_D", 324},
        {"RM_From_CRS04_06_E", 325},
        {"RM_Res_CRS04_06_A1", 326},
        {"RM_Res_CRS04_06_A2", 327},
        {"RM_Res_CRS04_06_B1", 328},
        {"RM_Res_CRS04_06_C1", 329},
        {"RM_Res_CRS04_06_E1", 330},
        {"RM_Res_CRS04_06_E2", 331},
        {"RM_From_CRS04_07_A", 332},
        {"RM_From_CRS04_07_B", 333},
        {"RM_Res_CRS04_07_B1", 334},
        {"RM_From_CRS04_08_A", 335},
        {"RM_From_CRS05_01_A", 336},
        {"RM_Res_CRS05_01_A1", 337},
        {"RM_Res_CRS05_01_A2", 338},
        {"RM_From_CRS05_02_A", 339},
        {"RM_From_CRS05_02_B", 340},
        {"RM_From_CRS05_03_A", 341},
        {"RM_From_CRS07_01_A", 342},
        {"RM_Res_CRS07_01_A1", 343},
        {"RM_Res_CRS07_01_A2", 344},
        {"RM_From_CRS07_02_A", 345},
        {"RM_From_CRS07_02_B", 346},
        {"RM_Res_CRS07_02_A1", 347},
        {"RM_Res_CRS07_02_A2", 348},
        {"RM_Res_CRS07_02_A3", 349},
        {"RM_Res_CRS07_02_A4", 350},
        {"RM_Res_CRS07_02_B1", 351},
        {"RM_Res_CRS07_02_B2", 352},
        {"RM_Res_CRS07_02_B3", 353},
        {"RM_From_CRS07_03_A", 354},
        {"RM_From_CRS07_04_A", 355},
        {"RM_From_CRS07_04_B", 356},
        {"RM_From_CRS07_04_C", 357},
        {"RM_From_CRS07_04_D", 358},
        {"RM_From_CRS07_04_E", 359},
        {"RM_From_CRS07_04_F", 360},
        {"RM_Res_CRS07_04_A1", 361},
        {"RM_Res_CRS07_04_A2", 362},
        {"RM_Res_CRS07_04_A3", 363},
        {"RM_Res_CRS07_04_C1", 364},
        {"RM_Res_CRS07_04_C2", 365},
        {"RM_Res_CRS07_04_E1", 366},
        {"RM_Res_CRS07_04_E2", 367},
        {"RM_Res_CRS07_04_F1", 368},
        {"RM_Res_CRS07_04_F2", 369},
        {"RM_From_CRS07_05_A", 370},
        {"RM_From_CRS07_05_B", 371},
        {"RM_From_CRS07_05_C", 372},
        {"RM_From_CRS07_05_D", 373},
        {"RM_From_CRS07_05_E", 374},
        {"RM_From_CRS07_05_F", 375},
        {"RM_From_CRS07_05_G", 376},
        {"RM_From_CRS07_05_H", 377},
        {"RM_From_CRS08_01_A", 378},
        {"RM_Res_CRS08_01_A1", 379},
        {"RM_From_CRS08_02_A", 380},
        {"RM_From_CRS08_03_A", 381},
        {"RM_From_CRS09_01_A", 382},
        {"RM_Res_CRS09_01_A1", 383},
        {"RM_Res_CRS09_01_A2", 384},
        {"RM_From_CRS09_02_A", 385},
        {"RM_From_CRS09_02_B", 386},
        {"RM_From_CRS10_01_A", 387},
        {"RM_Res_CRS10_01_A1", 388},
        {"RM_From_MAY01_01_A", 389},
        {"RM_Res_MAY01_01_A1", 390},
        {"RM_Res_MAY01_01_A2", 391},
        {"RM_From_MAY01_02_A", 392},
        {"RM_From_MAY01_02_B", 393},
        {"RM_Res_MAY01_02_A1", 394},
        {"RM_Res_MAY01_02_A2", 395},
        {"RM_Res_MAY01_02_B1", 396},
        {"RM_Res_MAY01_02_B2", 397},
        {"RM_From_MAY01_03_A", 398},
        {"RM_From_MAY01_03_B", 399},
        {"RM_From_MAY01_03_C", 400},
        {"RM_From_MAY01_03_D", 401},
        {"RM_From_MAY02_01_A", 402},
        {"RM_Res_MAY02_01_A1", 403},
        {"RM_Res_MAY02_01_A2", 404},
        {"RM_From_MAY02_02_A", 405},
        {"RM_From_MAY02_03_A", 406},
        {"RM_From_MAY02_03_B", 407},
        {"RM_Res_MAY02_03_A1", 408},
        {"RM_Res_MAY02_03_A2", 409},
        {"RM_Res_MAY02_03_B1", 410},
        {"RM_From_MAY02_04_A", 411},
        {"RM_From_MAY02_04_B", 412},
        {"RM_From_MAY02_04_C", 413},
        {"RM_Res_MAY02_04_B1", 414},
        {"RM_Res_MAY02_04_C1", 415},
        {"RM_From_MAY02_05_A", 416},
        {"RM_From_MAY02_05_B", 417},
        {"RM_Res_MAY02_05_B1", 418},
        {"RM_From_MAY03_01_A", 419},
        {"RM_Res_MAY03_01_A1", 420},
        {"RM_Res_MAY03_01_A2", 421},
        {"RM_Res_MAY03_01_A3", 422},
        {"RM_From_MAY03_02_A", 423},
        {"RM_From_MAY03_02_B", 424},
        {"RM_From_MAY03_02_C", 425},
        {"RM_From_MAY04_01_A", 426},
        {"RM_Res_MAY04_01_A1", 427},
        {"RM_Res_MAY04_01_A2", 428},
        {"RM_Res_MAY04_01_A3", 429},
        {"RM_From_MAY04_02_A", 430},
        {"RM_From_MAY04_02_B", 431},
        {"RM_From_MAY04_02_C", 432},
        {"RM_Res_MAY04_02_A1", 433},
        {"RM_Res_MAY04_02_B1", 434},
        {"RM_Res_MAY04_02_B2", 435},
        {"RM_Res_MAY04_02_C1", 436},
        {"RM_Res_MAY04_02_C2", 437},
        {"RM_From_MAY04_03_A", 438},
        {"RM_From_MAY04_03_B", 439},
        {"RM_From_MAY04_03_C", 440},
        {"RM_From_MAY04_03_D", 441},
        {"RM_Res_MAY04_03_A1", 442},
        {"RM_From_MAY04_04_A", 443},
        {"RM_From_MAY05_01_A", 444},
        {"RM_Res_MAY05_01_A1", 445},
        {"RM_Res_MAY05_01_A2", 446},
        {"RM_From_MAY05_02_A", 447},
        {"RM_From_MAY05_02_B", 448},
        {"RM_From_MAY07_01_A", 449},
        {"RM_Res_MAY07_01_A1", 450},
        {"RM_Res_MAY07_01_A2", 451},
        {"RM_From_MAY07_02_A", 452},
        {"RM_From_MAY07_02_B", 453},
        {"RM_From_MAY07_03_A", 454},
        {"RM_Res_MAY07_03_A1", 455},
        {"RM_Res_MAY07_03_A2", 456},
        {"RM_Res_MAY07_03_A3", 457},
        {"RM_From_MAY07_04_A", 458},
        {"RM_From_MAY07_04_B", 459},
        {"RM_From_MAY07_04_C", 460},
        {"RM_From_MAY08_01_A", 461},
        {"RM_Res_MAY08_01_A1", 462},
        {"RM_Res_MAY08_01_A2", 463},
        {"RM_Res_MAY08_01_A3", 464},
        {"RM_From_MAY08_02_A", 465},
        {"RM_From_MAY08_03_A", 466},
        {"RM_From_MAY08_03_B", 467},
        {"RM_From_MAY08_03_C", 468},
        {"RM_From_MAY09_01_A", 469},
        {"RM_Res_MAY09_01_A1", 470},
        {"RM_From_MAY09_02_A", 471},
        {"RM_Res_MAY09_02_A1", 472},
        {"RM_From_MAY09_03_A", 473},
        {"RM_From_RUK01_01_A", 474},
        {"RM_Res_RUK01_01_A1", 475},
        {"RM_Res_RUK01_01_A2", 476},
        {"RM_Res_RUK01_01_A3", 477},
        {"RM_From_RUK01_02_A", 478},
        {"RM_From_RUK01_02_B", 479},
        {"RM_From_RUK01_02_C", 480},
        {"RM_Res_RUK01_02_A1", 481},
        {"RM_Res_RUK01_02_C1", 482},
        {"RM_From_RUK01_03_A", 483},
        {"RM_From_RUK02_01_A", 484},
        {"RM_Res_RUK02_01_A1", 485},
        {"RM_Res_RUK02_01_A2", 486},
        {"RM_Res_RUK02_01_A3", 487},
        {"RM_From_RUK02_02_A", 488},
        {"RM_From_RUK02_02_B", 489},
        {"RM_From_RUK02_02_C", 490},
        {"RM_Res_RUK02_02_A1", 491},
        {"RM_Res_RUK02_02_A2", 492},
        {"RM_Res_RUK02_02_B1", 493},
        {"RM_Res_RUK02_02_B2", 494},
        {"RM_Res_RUK02_02_C1", 495},
        {"RM_Res_RUK02_02_C2", 496},
        {"RM_From_RUK02_03_A", 497},
        {"RM_From_RUK02_03_B", 498},
        {"RM_From_RUK02_03_C", 499},
        {"RM_From_RUK02_03_D", 500},
        {"RM_From_RUK02_03_E", 501},
        {"RM_Res_RUK02_03_C1", 502},
        {"RM_Res_RUK02_03_C2", 503},
        {"RM_From_RUK02_04_A", 504},
        {"RM_From_RUK03_01_A", 505},
        {"RM_Res_RUK03_01_A1", 506},
        {"RM_Res_RUK03_01_A2", 507},
        {"RM_Res_RUK03_01_A3", 508},
        {"RM_From_RUK03_02_A", 509},
        {"RM_From_RUK03_02_B", 510},
        {"RM_From_RUK03_02_C", 511},
        {"RM_Res_RUK03_02_B1", 512},
        {"RM_Res_RUK03_02_B2", 513},
        {"RM_Res_RUK03_02_B3", 514},
        {"RM_From_RUK03_03_A", 515},
        {"RM_From_RUK03_03_B", 516},
        {"RM_From_RUK03_03_C", 517},
        {"RM_Res_RUK03_03_C1", 518},
        {"RM_From_RUK04_01_A", 519},
        {"RM_Res_RUK04_01_A1", 520},
        {"RM_Res_RUK04_01_A2", 521},
        {"RM_From_RUK04_02_A", 522},
        {"RM_From_RUK05_01_A", 523},
        {"RM_Res_RUK05_01_A1", 524},
        {"RM_Res_RUK05_01_A2", 525},
        {"RM_From_RU05_02_A", 526},
        {"RM_From_RU05_02_B", 527},
        {"RM_From_SUZ02_01_A", 528},
        {"RM_Res_SUZ02_01_A1", 529},
        {"RM_Res_SUZ02_01_A2", 530},
        {"RM_Res_SUZ02_01_A3", 531},
        {"RM_From_SUZ02_02_A", 532},
        {"RM_From_SUZ02_02_B", 533},
        {"RM_From_SUZ02_02_C", 534},
        {"RM_Res_SUZ02_02_A1", 535},
        {"RM_Res_SUZ02_02_A2", 536},
        {"RM_Res_SUZ02_02_C1", 537},
        {"RM_Res_SUZ02_02_C2", 538},
        {"RM_Res_SUZ02_02_C3", 539},
        {"RM_From_SUZ02_03_A", 540},
        {"RM_From_SUZ02_03_B", 541},
        {"RM_From_SUZ02_03_C", 542},
        {"RM_From_SUZ02_03_D", 543},
        {"RM_From_SUZ02_03_E", 544},
        {"RM_Res_SUZ02_03_B1", 545},
        {"RM_From_SUZ03_01_A", 546},
        {"RM_Res_SUZ03_01_A1", 547},
        {"RM_Res_SUZ03_01_A2", 548},
        {"RM_From_SUZ03_02_A", 549},
        {"RM_From_SUZ03_02_B", 550},
        {"RM_From_SUZ04_01_A", 551},
        {"RM_Res_SUZ04_01_A1", 552},
        {"RM_Res_SUZ04_01_A2", 553},
        {"RM_Res_SUZ04_01_A3", 554},
        {"RM_From_SUZ04_02_A", 555},
        {"RM_From_SUZ04_02_B", 556},
        {"RM_From_SUZ04_02_C", 557},
        {"RM_Res_SUB04_02_A1", 558},
        {"RM_Res_SUB04_02_A2", 559},
        {"RM_Res_SUB04_02_A3", 560},
        {"RM_Res_SUB04_02_B1", 561},
        {"RM_Res_SUB04_02_B2", 562},
        {"RM_Res_SUB04_02_B3", 563},
        {"RM_Res_SUB04_02_C1", 564},
        {"RM_From_SUZ04_03_A", 565},
        {"RM_From_SUZ04_03_B", 566},
        {"RM_From_SUZ04_03_C", 567},
        {"RM_From_SUZ04_03_D", 568},
        {"RM_From_SUZ04_03_E", 569},
        {"RM_From_SUZ04_03_F", 570},
        {"RM_From_SUZ04_03_G", 571},
        {"RM_Res_SUZ04_03_A1", 572},
        {"RM_Res_SUZ04_03_F1", 573},
        {"RM_From_SUZ05_01_A", 574},
        {"RM_Res_SUZ05_01_A1", 575},
        {"RM_From_SUZ05_02_A", 576},
        {"RM_From_FEI01_01_A", 577},
        {"RM_Res_FEI01_01_A1", 578},
        {"RM_Res_FEI01_01_A2", 579},
        {"RM_Res_FEI01_01_A3", 580},
        {"RM_From_FEI01_02_A", 581},
        {"RM_From_FEI01_02_B", 582},
        {"RM_From_FEI01_02_C", 583},
        {"RM_From_FEI02_01_A", 584},
        {"RM_Res_FEI02_01_A1", 585},
        {"RM_Res_FEI02_01_A2", 586},
        {"RM_Res_FEI02_01_A3", 587},
        {"RM_Res_FEI02_01_A4", 588},
        {"RM_From_FEI02_02_A", 589},
        {"RM_From_FEI02_02_B", 590},
        {"RM_From_FEI02_02_C", 591},
        {"RM_From_FEI02_02_D", 592},
        {"RM_From_FEI03_01_A", 593},
        {"RM_Res_FEI03_01_A1", 594},
        {"RM_Res_FEI03_01_A2", 595},
        {"RM_Res_FEI03_01_A3", 596},
        {"RM_From_FEI03_02A", 597},
        {"RM_From_FEI03_02B", 598},
        {"RM_From_FE03_02C", 599},
        {"RM_Res_FEI03_02_A1", 600},
        {"RM_Res_FEI03_02_A2", 601},
        {"RM_Res_FEI03_02_A3", 602},
        {"RM_Res_FEI03_02_B1", 603},
        {"RM_Res_FEI03_02_B2", 604},
        {"RM_Res_FEI03_02_C1", 605},
        {"RM_Res_FEI03_02_C2", 606},
        {"RM_Res_FEI03_02_C3", 607},
        {"RM_From_FEI03_03_A", 608},
        {"RM_From_FEI03_03_B", 609},
        {"RM_From_FEI03_03_C", 610},
        {"RM_From_FEI03_03_D", 611},
        {"RM_From_FEI03_03_E", 612},
        {"RM_From_FEI03_03_F", 613},
        {"RM_From_FEI03_03_G", 614},
        {"RM_From_FEI04_01_A", 615},
        {"RM_Res_FEI04_01_A1", 616},
        {"RM_Res_FEI04_01_A2", 617},
        {"RM_From_FEI04_02_A", 618},
        {"RM_From_FEI04_02_B", 619},
        {"RM_Res_FEI04_02_A1", 620},
        {"RM_Res_FEI04_02_A2", 621},
        {"RM_Res_FEI04_02_A3", 622},
        {"RM_Res_FEI04_02_B1", 623},
        {"RM_From_FEI04_03_A", 624},
        {"RM_From_FEI04_03_B", 625},
        {"RM_From_FEI04_03_C", 626},
        {"RM_Res_FEI04_03_C1", 627},
        {"RM_From_FEI04_04_A", 628},
        {"RM_From_FEI05_01_A", 629},
        {"RM_Res_FEI05_01_A1", 630},
        {"RM_Res_FEI05_01_A2", 631},
        {"RM_Res_FEI05_01_A3", 632},
        {"RM_From_FEI05_02_A", 633},
        {"RM_From_FEI05_02_B", 634},
        {"RM_From_FEI05_02_C", 635},
        {"RM_Res_FEI05_02_B1", 636},

        {"PhID_MAY", 0},
        {"PhID_DAR", 1},
        {"PhID_RUK", 2},
        {"PhID_Oven", 3},
        {"PhID_MOE", 4},
        {"PhID_John", 5},
        {"PhID_CRS_0", 6},
        {"PhID_CRS", 7},
        {"PhID_SUZ", 8},
        {"PhID_FEI", 9},
        {"PhID_Master", 10},
        {"PhID_OKA", 11},
        {"PhID_SUZ_0", 12},

        {"null", -1},
        {"Null", -1},
        {"NULL", -1},
        {"true", 1},
        {"True", 1},
        {"TRUE", 1},
        {"false", 0},
        {"False", 0},
        {"FALSE", 0},

        {"Stop", STOP},
        {"Play", PLAY},
        {"Disused", DISUSED},
        {"AddRender", ADD_RENDER},
        {"Lock", LOCK},
        {"Erase", ERASE},
        {"UnClickable", UN_CLICKABLE},
        {"UnLock", UN_LOCK},
        {"Start", START},
        {"Enter", ENTER},
        {"Passive", PASSIVE},
        {"Smoothing", SMOOTHING},
        {"NoLog", NO_LOG},
        {"PushText", PUSH_TEXT},
        {"NoIcon", NO_ICON},
        {"Hideable", HIDEABLE},
        {"Pause", PAUSE},
        {"Resume", RESUME},
        {"EntrustSuspend", ENTRUST_SUSPEND},
        {"CompulsorySuspend", COMPULSORY_SUSPEND},
        {"SubRender", SUB_RENDER},
        {"FadeEnter", FADE_ENTER},

        {"Axl1", AXL_1},
        {"Axl2", AXL_2},
        {"Axl3", AXL_3},
        {"Dxl1", DXL_1},
        {"Dxl2", DXL_2},
        {"Dxl3", DXL_3},
        {"AxlDxl", AXL_DXL},
        {"DxlDxl", DXL_AXL},
        {"AxlAuto", AXL_AUTO},
        {"DxlAuto", DXL_AUTO},

        {"black", 0},
        {"Black", 0},
        {"BLACK", 0},
        {"white", 0xFFFFFFFF},
        {"White", 0xFFFFFFFF},
        {"WHITE", 0xFFFFFFFF},
        {"blue", 0xFF0000FF},
        {"Blue", 0xFF0000FF},
        {"BLUE", 0xFF0000FF},
        {"red", 0xFFFF0000},
        {"Red", 0xFFFF0000},
        {"RED", 0xFFFF0000},
        {"green", 0xFF00FF00},
        {"Green", 0xFF00FF00},
        {"GREEN", 0xFF00FF00}
    };

    bool IsValidConstant(const std::string& String)
    {
        return Constants.find(String) != Constants.end();
    }

    int32_t ConstantToValue(const std::string& String)
    {
        auto iter = Constants.find(String);
        if (iter != Constants.end())
            return iter->second;
        return -1;
    }
}
