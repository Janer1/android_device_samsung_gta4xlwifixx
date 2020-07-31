#ifndef __HX83102E_PARAM_H__
#define __HX83102E_PARAM_H__
#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

struct lcd_seq_info {
	const unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

#if defined(CONFIG_SEC_AOT)
extern int aot_enabled;
#endif

static const unsigned char SEQ_SET_B9_PW[] = {
	0xB9,
	0x83, 0x10, 0x2E,
};

static const unsigned char SEQ_SET_E9_OTP_SETTING[] = {
	0xE9,
	0xCD,
};

static const unsigned char SEQ_SET_BB_OTP_SETTING[] = {
	0xBB,
	0x01,
};

static const unsigned char SEQ_SET_E9_OTP_SETTING2[] = {
	0xE9,
	0x00,
};

static const unsigned char SEQ_HX83102E_BL[] = {
	0x51,
	0x00, 0x00,
};

static const unsigned char SEQ_HX83102E_BLON[] = {
	0x53,
	0x24,
};

static const unsigned char SEQ_HX83102E_BL_PWM_PREQ[] = {
	0xC9,
	0x04, 0x0B, 0x5D,
};

static const unsigned char SEQ_SET_CABC_PRIORITY_SETTING[] = {
	0xCE,
	0x00, 0x50, 0xF0,
};

static const unsigned char SEQ_SET_D2_VOP[] = {
	0xD2,
	0xE8, 0xE8,
};

static const unsigned char SEQ_HX83102E_BL_PAD[] = {
	0xD9,
	0x04, 0x01, 0x02,
};

static const unsigned char SEQ_SET_D5_GIP_FORWARD[] = {
	0xD5,
	0x03, 0x02, 0x01, 0x00, 0x07, 0x06, 0x05, 0x04,
	0x18, 0x18, 0x24, 0x24, 0x19, 0x19, 0x18, 0x18,
	0x19, 0x19, 0x21, 0x20, 0x23, 0x22, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18,
};

static const unsigned char SEQ_SET_D6_GIP_BACKWARD[] = {
	0xD6,
	0x04, 0x05, 0x06, 0x07, 0x00, 0x01, 0x02, 0x03,
	0x18, 0x18, 0x24, 0x24, 0x19, 0x19, 0x19, 0x19,
	0x18, 0x18, 0x22, 0x23, 0x20, 0x21, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18,
};

static const unsigned char SEQ_SET_B4_TIMING[] = {
	0xB4,
	0x80, 0x60, 0x01, 0x01, 0x80, 0x60, 0x68, 0x50,
	0x01, 0x8E, 0x01, 0x58, 0x00, 0xFF, 0x00, 0xFF,
};

static const unsigned char SEQ_SET_D3_GIP0[] = {
	0xD3,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x00, 0x08,
	0x08, 0x27, 0x27, 0x22, 0x2F, 0x23, 0x23, 0x04,
	0x04, 0x32, 0x10, 0x21, 0x00, 0x21, 0x32, 0x10,
	0x1F, 0x00, 0x02, 0x32, 0x17, 0xFD, 0x00, 0x10,
	0x00, 0x00, 0x20, 0x30, 0x01, 0x55, 0x21, 0x38,
	0x01, 0x55,
};

static const unsigned char SEQ_SET_D1_TP_CTRL[] = {
	0xD1,
	0x67, 0x0C, 0xFF, 0x05,
};

static const unsigned char SEQ_SET_B1_POWER[] = {
	0xB1,
	0x10, 0xFA, 0xAF, 0xAF, 0x29, 0x2D, 0xB2, 0x57,
	0x4D, 0x36, 0x36, 0x36, 0x36, 0x22, 0x21, 0x15,
	0x00,
};

static const unsigned char SEQ_SET_B2_RESOLUTION[] = {
	0xB2,
	0x00, 0xB0, 0x47, 0xD0, 0x00, 0x14, 0x3C, 0x2E,
};

static const unsigned char SEQ_SET_E0_ANALOG_GAMMA[] = {
	0xE0,
	0x00, 0x01, 0x0A, 0x11, 0x19, 0x2B, 0x44, 0x4C,
	0x55, 0x53, 0x71, 0x76, 0x7D, 0x8C, 0x89, 0x91,
	0x9A, 0xAD, 0xAC, 0x56, 0x5E, 0x68, 0x73, 0x00,
	0x09, 0x12, 0x19, 0x1F, 0x37, 0x4E, 0x54, 0x5B,
	0x57, 0x6F, 0x74, 0x79, 0x86, 0x83, 0x89, 0x90,
	0xA3, 0xA2, 0x50, 0x58, 0x64, 0x73,
};

static const unsigned char SEQ_SET_C0_GAMMA_OPT[] = {
	0xC0,
	0x23, 0x23, 0x22, 0x11, 0xA2, 0x13, 0x00, 0x80,
	0x00, 0x00, 0x08, 0x00, 0x63, 0x63,
};

static const unsigned char SEQ_SET_CC_NORMALLY_BLACK[] = {
	0xCC,
	0x02,
};

static const unsigned char SEQ_SET_C8_CP[] = {
	0xC8,
	0x00, 0x04, 0x04, 0x00, 0x00, 0x82,
};

static const unsigned char SEQ_SET_BF_GAS[] = {
	0xBF,
	0xFC, 0x85, 0x80,
};

static const unsigned char SEQ_SET_D0_CASCADE[] = {
	0xD0,
	0x07, 0x04, 0x05,
};

static const unsigned char SEQ_SET_BD_BANK01[] = {
	0xBD,
	0x01,
};

static const unsigned char SEQ_SET_D3_GIP1[] = {
	0xD3,
	0x01, 0x00, 0xFC, 0x00, 0x00, 0x11, 0x10, 0x00,
	0x0E,
};

static const unsigned char SEQ_SET_BD_BANK02[] = {
	0xBD,
	0x02,
};

static const unsigned char SEQ_SET_B4_GAMMA_BIAS[] = {
	0xB4,
	0x4E,
};

static const unsigned char SEQ_SET_BF_VCOM[] = {
	0xBF,
	0xF2,
};

static const unsigned char SEQ_SET_D8_GIP[] = {
	0xD8,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xF0,
};

static const unsigned char SEQ_SET_BD_BANK00[] = {
	0xBD,
	0x00,
};

static const unsigned char SEQ_SET_E7_TOUCH_BANK0[] = {
	0xE7,
	0x12, 0x13, 0x02, 0x02, 0x2B, 0x00, 0x0E, 0x0E,
	0x00, 0x02, 0x27, 0x76, 0x1E, 0x76, 0x01, 0x27,
	0x00, 0x00, 0x00, 0x00, 0x17, 0x00,
};

static const unsigned char SEQ_SET_E7_TOUCH_BANK1[] = {
	0xE7,
	0x02, 0x30, 0x01, 0x94, 0x0D, 0xB8, 0x0E,
};

static const unsigned char SEQ_SET_E7_TOUCH_BANK2[] = {
	0xE7,
	0xFF, 0x01, 0xFD, 0x01, 0x00, 0x00, 0x22, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x81, 0x00, 0x02, 0x40,
};

static const unsigned char SEQ_SET_HX83102E_CABC_ON[] = {
	0x55,
	0x01,
};

static const unsigned char SEQ_SET_E4_CABC_BANK0[] = {
	0xE4,
	0x25, 0x41, 0x2C, 0x33, 0x4C, 0x66, 0x81, 0x99,
	0xB2, 0xCC, 0xE5, 0xFF, 0xFF, 0xFF, 0x03, 0x1E,
	0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x05, 0x01, 0x14,
};

static const unsigned char SEQ_SET_E4_CABC_BANK1[] = {
	0xE4,
	0xE1, 0xE1, 0xE1, 0xE1, 0xE1, 0xE1, 0xE1, 0xE1,
	0xC7, 0xB2, 0xA0, 0x90, 0x81, 0x75, 0x69, 0x5F,
	0x55, 0x4C, 0x44, 0x3D, 0x36, 0x2F, 0x2A, 0x24,
	0x1E, 0x19, 0x14, 0x10, 0x0D, 0x0B, 0x09, 0x54,
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
};

static const unsigned char SEQ_SET_C1_DGC_ON[] = {
	0xC1,
	0x01,
};

static const unsigned char SEQ_SET_C1_DGC_GAMMA1[] = {
	0xC1,
	0x01, 0x04, 0x08, 0x0C, 0x10, 0x14, 0x18, 0x1C,
	0x20, 0x24, 0x27, 0x2C, 0x30, 0x34, 0x38, 0x3C,
	0x40, 0x44, 0x48, 0x4C, 0x54, 0x5C, 0x63, 0x6B,
	0x73, 0x7B, 0x83, 0x8A, 0x92, 0x9A, 0xA2, 0xAA,
	0xB3, 0xBA, 0xC1, 0xCA, 0xD1, 0xD9, 0xE1, 0xE9,
	0xF1, 0xF5, 0xF7, 0xF8, 0xFA, 0xFC, 0x00, 0x40,
	0x4C, 0x0B, 0xE4, 0x5F, 0xF7, 0xF5, 0x08, 0x95,
	0x03, 0xC0,
};

static const unsigned char SEQ_SET_C1_DGC_GAMMA2[] = {
	0xC1,
	0x00, 0x04, 0x08, 0x0C, 0x10, 0x14, 0x18, 0x1C,
	0x20, 0x24, 0x28, 0x2C, 0x30, 0x34, 0x39, 0x3D,
	0x41, 0x45, 0x48, 0x4C, 0x55, 0x5C, 0x64, 0x6C,
	0x74, 0x7C, 0x84, 0x8B, 0x93, 0x9B, 0xA3, 0xAB,
	0xB4, 0xBB, 0xC3, 0xCB, 0xD3, 0xDB, 0xE3, 0xEB,
	0xF3, 0xF7, 0xF9, 0xFB, 0xFE, 0xFF, 0x01, 0x45,
	0x92, 0xA1, 0x5F, 0x3B, 0xF7, 0xFB, 0x13, 0x9B,
	0xFF, 0x00,
};

static const unsigned char SEQ_SET_BD_BANK03[] = {
	0xBD,
	0x03,
};

static const unsigned char SEQ_SET_C1_DGC_GAMMA3[] = {
	0xC1,
	0x00, 0x04, 0x08, 0x0C, 0x10, 0x14, 0x18, 0x1C,
	0x20, 0x24, 0x28, 0x2D, 0x31, 0x35, 0x3A, 0x3E,
	0x42, 0x46, 0x49, 0x4E, 0x56, 0x5E, 0x66, 0x6E,
	0x76, 0x7E, 0x85, 0x8D, 0x95, 0x9D, 0xA4, 0xAC,
	0xB5, 0xBC, 0xC4, 0xCC, 0xD4, 0xDB, 0xE4, 0xEC,
	0xF3, 0xF7, 0xF9, 0xFC, 0xFE, 0xFF, 0x15, 0x9A,
	0xFC, 0x21, 0x5C, 0x40, 0x18, 0x0B, 0x01, 0x30,
	0xFC, 0x00,
};

static const unsigned char SEQ_SET_E1_BANK00[] = {
	0xE1,
	0x06, 0x00,
};

static const unsigned char SEQ_SET_B9_CLOSE_PW[] = {
	0xB9,
	0x00, 0x00, 0x00,
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

static const unsigned char SEQ_SET_HX83102E_CABC_OFF[] = {
	0x55,
	0x00,
};

static const unsigned char SEQ_SET_E9_VSOM_SOFT1[] = {
	0xE9,
	0xFF,
};

static const unsigned char SEQ_SET_BF_VSOM_SOFT[] = {
	0xBF,
	0x02,
};

static const unsigned char SEQ_SET_E9_VSOM_SOFT2[] = {
	0xE9,
	0x00,
};

static const unsigned char SEQ_SET_E4_CABC_BANK0_REWRITE[] = {
	0xE4,
	0x2D,
};

/* platform brightness <-> bl reg */
static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	0, 30, 40, 51, 62, 73, 84, 95, 106, 116, /* 2: 30 */
	127, 138, 149, 160, 171, 182, 193, 203, 214, 225,
	236, 247, 258, 269, 280, 290, 301, 312, 323, 334,
	345, 356, 367, 377, 388, 399, 410, 421, 432, 443,
	454, 464, 475, 486, 497, 508, 519, 530, 541, 551,
	562, 573, 584, 595, 606, 617, 628, 638, 649, 660,
	671, 682, 693, 704, 715, 725, 736, 747, 758, 769,
	780, 791, 801, 812, 823, 834, 845, 856, 867, 878,
	888, 899, 910, 921, 932, 943, 954, 965, 975, 986,
	997, 1008, 1019, 1030, 1041, 1052, 1062, 1073, 1084, 1095,
	1106, 1117, 1128, 1139, 1149, 1160, 1171, 1182, 1193, 1204,
	1215, 1226, 1236, 1247, 1258, 1269, 1280, 1291, 1302, 1313,
	1323, 1334, 1345, 1356, 1367, 1378, 1389, 1400, 1412, 1425, /* 128: 1400 */
	1438, 1451, 1464, 1477, 1489, 1502, 1515, 1528, 1541, 1554,
	1566, 1579, 1592, 1605, 1618, 1631, 1643, 1656, 1669, 1682,
	1695, 1708, 1720, 1733, 1746, 1759, 1772, 1785, 1797, 1810,
	1823, 1836, 1849, 1862, 1874, 1887, 1900, 1913, 1926, 1939,
	1951, 1964, 1977, 1990, 2003, 2016, 2028, 2041, 2054, 2067,
	2080, 2093, 2105, 2118, 2131, 2144, 2157, 2170, 2182, 2195,
	2208, 2221, 2234, 2247, 2259, 2272, 2285, 2298, 2311, 2324,
	2336, 2349, 2362, 2375, 2388, 2401, 2413, 2426, 2439, 2452,
	2465, 2478, 2490, 2503, 2516, 2529, 2542, 2555, 2567, 2580,
	2593, 2606, 2619, 2632, 2644, 2657, 2670, 2683, 2696, 2709,
	2721, 2734, 2747, 2760, 2773, 2786, 2798, 2811, 2824, 2837,
	2850, 2863, 2875, 2888, 2901, 2914, 2927, 2940, 2952, 2965,
	2978, 2991, 3004, 3017, 3030, 3030, 3030, 3030, 3030, 3030, /* 255: 3030 */
	3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030,
	3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030,
	3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030,
	3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030, 3030,
	3030, 3030, 3030, 3030, 3030, 3445,
};
#endif /* __HX83102E_PARAM_H__ */
