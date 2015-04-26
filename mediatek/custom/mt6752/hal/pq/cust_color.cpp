#include "cust_color.h"

const DISP_PQ_PARAM pqparam_standard =
{
    u4SHPGain:2,
    u4SatGain:4,
    u4HueAdj:{9,9,12,12},
    u4SatAdj:{0,2,6,6},
    u4Contrast:4,
    u4Brightness:4
};

const DISP_PQ_PARAM pqparam_vivid =
{
    u4SHPGain:2,
    u4SatGain:4,
    u4HueAdj:{9,9,12,12},
    u4SatAdj:{12,12,12,12},
    u4Contrast:4,
    u4Brightness:4
};

const DISP_PQ_PARAM pqparam_camera =
{
    u4SHPGain:2,
    u4SatGain:4,
    u4HueAdj:{9,9,9,9},
    u4SatAdj:{0,0,0,0},
    u4Contrast:4,
    u4Brightness:4
};



const DISPLAY_PQ_T pqindex =
{
GLOBAL_SAT   :
{0x70,0x74,0x78,0x7C,0x80,0x84,0x88,0x8C,0x90,0x94}, //0~9

CONTRAST   :
{0x70,0x74,0x78,0x7C,0x80,0x84,0x88,0x8C,0x90,0x94}, //0~9

BRIGHTNESS   :
{0x3C0,0x3D0,0x3E0,0x3F0,0x400,0x410,0x420,0x430,0x440,0x450}, //0~9

PARTIAL_Y    :
{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},

PURP_TONE_S  :
{//hue 0~10
    {//0 disable
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//1
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//2
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//3
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//4
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//5
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//6
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {// 7
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80}
    },

    {// 8
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80}
    },
    // 9
    {
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80}
    },

    {// 10
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x14, 0x14, 0x14},
        {0x32, 0x32, 0x32}
    },

    {// 11
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x1a, 0x1e, 0x18},
        {0x36, 0x3c, 0x30}
    },

    {// 12
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x14, 0x14, 0x14},
        {0x32, 0x32, 0x32}
    },

    {// 13
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x18, 0x1e, 0x13},
        {0x30, 0x3c, 0x26}
    },

    {// 14
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x18, 0x1e, 0x13},
        {0x30, 0x3c, 0x26}
    },

    {// 15
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x18, 0x1e, 0x13},
        {0x30, 0x3c, 0x26}
    },

    {// 16
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x18, 0x1e, 0x13},
        {0x30, 0x3c, 0x26}
    },

    {// 17
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80}
    },

    {// 18
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80}
    }
},
SKIN_TONE_S:
{
    {//0 disable
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x14, 0x14,  0x14, 0x14,  0x14,  0x14,  0x14, 0x14},
        {0x32, 0x32,  0x32, 0x32,  0x32,  0x32,  0x32, 0x32}
    },

    {//1
        {0x89, 0x89,  0x89, 0x89,  0x89,  0x89,  0x89, 0x80},
        {0x86, 0x86,  0x86, 0x86,  0x86,  0x86,  0x86, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//2
        {0x8b, 0x8e,  0x8e, 0x8e,  0x8e,  0x8e,  0x8e, 0x80},
        {0x8b, 0x8c,  0x8c, 0x8c,  0x8c,  0x8c,  0x8c, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//3
        {0x8d, 0x92,  0x92, 0x92,  0x92,  0x92,  0x92, 0x80},
        {0x8b, 0x8e,  0x8e, 0x8e,  0x8e,  0x8e,  0x8e, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//4
        {0x8f, 0x93,  0x97, 0x97,  0x97,  0x97,  0x97, 0x80},
        {0x8b, 0x8e,  0x8f, 0x8f,  0x8f,  0x8f,  0x8f, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//5
        {0x8f, 0x97,  0x9d, 0x9d,  0x9d,  0x9d,  0x98, 0x80},
        {0x8b, 0x90,  0x92, 0x92,  0x92,  0x92,  0x92, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },
    {//6
        {0x95, 0x9e,  0xa3, 0xa3,  0xa3,  0xa3,  0xa0, 0x80},
        {0x8b, 0x93,  0x95, 0x95,  0x95,  0x95,  0x95, 0x80},
        {0x78, 0x76,  0x76, 0x76,  0x76,  0x76,  0x77, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//7
        {0x99, 0xa3,  0xa8, 0xa8,  0xa8,  0xa8,  0xa6, 0x80},
        {0x90, 0x97,  0x99, 0x99,  0x99,  0x99,  0x99, 0x80},
        {0x75, 0x72,  0x72, 0x73,  0x73,  0x73,  0x73, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//8
        {0x9c, 0xaa,  0xae, 0xae,  0xae,  0xae,  0xa7, 0x80},
        {0x92, 0x99,  0x9d, 0x9d,  0x9d,  0x9d,  0x9a, 0x80},
        {0x75, 0x6f,  0x6f, 0x6f,  0x6f,  0x6f,  0x6f, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//9
        {0x9e, 0xab,  0xb4, 0xb4,  0xb4,  0xb4,  0xa9, 0x80},
        {0x92, 0x9b,  0xa0, 0xa0,  0xa0,  0xa0,  0x9a, 0x80},
        {0x73, 0x6c,  0x6b, 0x6b,  0x6b,  0x6b,  0x6b, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//10
        {0x9f, 0xae,  0xb9, 0xb9,  0xb9,  0xb9,  0xab, 0x80},
        {0x92, 0x9d,  0xa3, 0xa3,  0xa3,  0xa3,  0x9c, 0x80},
        {0x71, 0x69,  0x68, 0x68,  0x68,  0x68,  0x68, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//11
        {0xa1, 0xb2,  0xbf, 0xbf,  0xbf,  0xbf,  0xae, 0x80},
        {0x95, 0xa0,  0xa7, 0xa7,  0xa7,  0xa7,  0x9e, 0x80},
        {0x6f, 0x67,  0x66, 0x66,  0x66,  0x66,  0x66, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//12
        {0xa1, 0xb2,  0xc5, 0xc5,  0xc5,  0xc5,  0xae, 0x80},
        {0x98, 0xa6,  0xab, 0xab,  0xab,  0xab,  0xa3, 0x80},
        {0x6c, 0x65,  0x63, 0x63,  0x63,  0x63,  0x63, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//13
        {0xa1, 0xb8,  0xcb, 0xcb,  0xcb,  0xcb,  0xb0, 0x80},
        {0x9b, 0xa9,  0xaf, 0xaf,  0xaf,  0xaf,  0xa5, 0x80},
        {0x69, 0x62,  0x60, 0x60,  0x60,  0x60,  0x60, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//14
        {0xa6, 0xbd,  0xd0, 0xd0,  0xd0,  0xd0,  0xbb, 0x80},
        {0xa0, 0xab,  0xb1, 0xb1,  0xb1,  0xb1,  0xa7, 0x80},
        {0x67, 0x60,  0x5e, 0x5e,  0x5e,  0x5e,  0x5e, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//15
        {0xa7, 0xc0,  0xd6, 0xd6,  0xd6,  0xd6,  0xbb, 0x80},
        {0xa0, 0xb0,  0xb5, 0xb5,  0xb5,  0xb5,  0xa7, 0x80},
        {0x66, 0x5f,  0x5c, 0x5c,  0x5c,  0x5c,  0x5c, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//16
        {0xa7, 0xc3,  0xdc, 0xdc,  0xdc,  0xdc,  0xbb, 0x80},
        {0xa3, 0xb3,  0xb9, 0xb9,  0xb9,  0xb9,  0xa9, 0x80},
        {0x60, 0x5a,  0x5a, 0x5a,  0x5a,  0x5a,  0x5a, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//17
        {0xa7, 0xc3,  0xe2, 0xe2,  0xe2,  0xe2,  0xbb, 0x80},
        {0xa7, 0xb6,  0xbd, 0xbd,  0xbd,  0xbd,  0xa9, 0x80},
        {0x5f, 0x57,  0x57, 0x57,  0x57,  0x57,  0x57, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    },

    {//18
        {0xa7, 0xc3,  0xe7, 0xe7,  0xe7,  0xe7,  0xbb, 0x80},
        {0xa7, 0xb6,  0xc0, 0xc0,  0xc0,  0xc0,  0xa9, 0x80},
        {0x5f, 0x55,  0x55, 0x55,  0x55,  0x55,  0x55, 0x80},
        {0x1e, 0x1e,  0x1e, 0x1e,  0x1e,  0x1e,  0x1e, 0x1e},
        {0x3c, 0x3c,  0x3c, 0x3c,  0x3c,  0x3c,  0x3c, 0x3c}
    }
},
GRASS_TONE_S:
{
    {//0 disable
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80}
    },

    {//1
        {0x89, 0x89, 0x89, 0x89, 0x89, 0x80},
        {0x86, 0x86, 0x86, 0x86, 0x86, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//2
        {0x8e, 0x8e, 0x8e, 0x8e, 0x8b, 0x80},
        {0x8c, 0x8c, 0x8c, 0x8c, 0x8b, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//3
        {0x92, 0x92, 0x92, 0x92, 0x8c, 0x80},
        {0x8e, 0x8e, 0x8e, 0x8e, 0x8b, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//4
        {0x97, 0x97, 0x97, 0x97, 0x90, 0x80},
        {0x8f, 0x8f, 0x8f, 0x8f, 0x8b, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//5
        {0x9d, 0x9d, 0x9d, 0x99, 0x91, 0x80},
        {0x92, 0x92, 0x92, 0x92, 0x8d, 0x80},
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//6
        {0xa0, 0xa3, 0xa3, 0x9e, 0x95, 0x80},
        {0x95, 0x95, 0x95, 0x95, 0x8f, 0x80},
        {0x76, 0x76, 0x77, 0x78, 0x79, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//7
        {0xa6, 0xa8, 0xa8, 0xa3, 0x9b, 0x80},
        {0x99, 0x99, 0x99, 0x99, 0x91, 0x80},
        {0x74, 0x72, 0x72, 0x72, 0x79, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//8
        {0xaa, 0xae, 0xae, 0xa8, 0x9b, 0x80},
        {0x99, 0x9d, 0x9d, 0x9d, 0x94, 0x80},
        {0x71, 0x6f, 0x6f, 0x71, 0x77, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//9
        {0xab, 0xb4, 0xb4, 0xab, 0x9b, 0x80},
        {0x9e, 0xa0, 0xa0, 0x9d, 0x95, 0x80},
        {0x6c, 0x6b, 0x6b, 0x71, 0x76, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//10
        {0xad, 0xb9, 0xb9, 0xad, 0x9c, 0x80},
        {0x9f, 0xa3, 0xa3, 0x9f, 0x97, 0x80},
        {0x69, 0x68, 0x68, 0x6f, 0x74, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//11
        {0xb0, 0xbf, 0xbf, 0xb2, 0xa0, 0x80},
        {0xa0, 0xa7, 0xa7, 0xa2, 0x9b, 0x80},
        {0x67, 0x66, 0x66, 0x6d, 0x72, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//12
        {0xb8, 0xc5, 0xc5, 0xb8, 0xa3, 0x80},
        {0xa3, 0xab, 0xab, 0xa5, 0x9b, 0x80},
        {0x67, 0x63, 0x63, 0x6a, 0x71, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//13
        {0xbd, 0xcb, 0xcb, 0xbf, 0xa9, 0x80},
        {0xa7, 0xaf, 0xaf, 0xaa, 0x9e, 0x80},
        {0x63, 0x60, 0x60, 0x67, 0x6e, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//14
        {0xc1, 0xd0, 0xd0, 0xc5, 0xb2, 0x80},
        {0xa9, 0xb1, 0xb1, 0xac, 0xa0, 0x80},
        {0x62, 0x5e, 0x5e, 0x65, 0x6c, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//15
        {0xc5, 0xd6, 0xd6, 0xcd, 0xba, 0x80},
        {0xad, 0xb5, 0xb5, 0xb1, 0xa4, 0x80},
        {0x60, 0x5c, 0x5c, 0x63, 0x6c, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//16
        {0xc6, 0xdc, 0xdc, 0xd6, 0xbd, 0x80},
        {0xb0, 0xb9, 0xb9, 0xb3, 0xa7, 0x80},
        {0x5d, 0x5a, 0x5a, 0x61, 0x6a, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//17
        {0xc6, 0xe2, 0xe2, 0xdb, 0xbd, 0x80},
        {0xb2, 0xbd, 0xbd, 0xb6, 0xab, 0x80},
        {0x5c, 0x57, 0x57, 0x5f, 0x6a, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    },

    {//18
        {0xc6, 0xe7, 0xe7, 0xdb, 0xbd, 0x80},
        {0xb2, 0xc0, 0xc0, 0xb6, 0xab, 0x80},
        {0x5a, 0x55, 0x55, 0x5f, 0x6a, 0x80},
        {0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c}
    }
},
SKY_TONE_S:
{
    {//0 disable
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },
    {//1
        {0x89, 0x89, 0x89},
        {0x86, 0x86, 0x86},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },
    {//2
        {0x8e, 0x8e, 0x8e},
        {0x8a, 0x8c, 0x8a},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//3
        {0x8f, 0x92, 0x8f},
        {0x8b, 0x8e, 0x8b},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },
    {//4
        {0x92, 0x97, 0x91},
        {0x8b, 0x8f, 0x8b},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//5
        {0x95, 0x9d, 0x95},
        {0x8d, 0x92, 0x8d},
        {0x80, 0x80, 0x80},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//6
        {0x97, 0xa3, 0x97},
        {0x8f, 0x95, 0x8f},
        {0x7b, 0x76, 0x7c},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//7
        {0x9c, 0xa8, 0x9c},
        {0x92, 0x99, 0x94},
        {0x79, 0x73, 0x7b},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//8
        {0x9e, 0xae, 0x9e},
        {0x95, 0x9d, 0x95},
        {0x78, 0x6f, 0x76},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//9
        {0xa1, 0xb4, 0xa1},
        {0x98, 0xa0, 0x98},
        {0x73, 0x6b, 0x73},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//10
        {0xa4, 0xb9, 0xa4},
        {0x9b, 0xa3, 0x9b},
        {0x70, 0x68, 0x70},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//11
        {0xa8, 0xbf, 0xa8},
        {0x9a, 0xa7, 0x9e},
        {0x6e, 0x66, 0x6e},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//12
        {0xab, 0xc5, 0xa9},
        {0x9d, 0xab, 0x9d},
        {0x6c, 0x63, 0x6c},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//13
        {0xb2, 0xcb, 0xb2},
        {0xa1, 0xaf, 0xa1},
        {0x69, 0x60, 0x69},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//14
        {0xb8, 0xd0, 0xb6},
        {0xa3, 0xb1, 0xa3},
        {0x67, 0x5e, 0x67},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//15
        {0xc0, 0xd6, 0xc0},
        {0xa8, 0xb5, 0xa8},
        {0x65, 0x5c, 0x65},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//16
        {0xc4, 0xdc, 0xc4},
        {0xad, 0xb9, 0xaf},
        {0x63, 0x5a, 0x63},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//17
        {0xc8, 0xe2, 0xc8},
        {0xb2, 0xbd, 0xb4},
        {0x60, 0x57, 0x60},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    },

    {//18
        {0xca, 0xe7, 0xca},
        {0xb2, 0xc0, 0xb4},
        {0x5f, 0x55, 0x5f},
        {0x1e, 0x1e, 0x1e},
        {0x3c, 0x3c, 0x3c}
    }
},

PURP_TONE_H :
{
//hue 0~2
    {0x80, 0x80, 0x80},//0
    {0x80, 0x80, 0x80},//1
    {0x80, 0x80, 0x80},//2
    {0x80, 0x80, 0x80},//3
    {0x80, 0x80, 0x80},//4
    {0x80, 0x80, 0x80},//5
    {0x80, 0x80, 0x80},//6
    {0x80, 0x80, 0x80},//7
    {0x80, 0x80, 0x80},//8
    {0x80, 0x80, 0x80},//9
    {0x80, 0x80, 0x80},//10
    {0x80, 0x80, 0x80},//11
    {0x80, 0x80, 0x80},//12
    {0x80, 0x80, 0x80},//13
    {0x80, 0x80, 0x80},//14
    {0x80, 0x80, 0x80},//15
    {0x80, 0x80, 0x80},//16
    {0x80, 0x80, 0x80},//17
    {0x80, 0x80, 0x80} //18
},

SKIN_TONE_H:
{
//hue 3~10
    {0x80, 0x80, 0x74, 0x6a, 0x63,0x67,  0x71, 0x80},//0   -9
    {0x80, 0x80, 0x74, 0x69, 0x66,0x69,  0x71, 0x80},//1   -8
    {0x80, 0x80, 0x75, 0x6b, 0x69,0x6b,  0x72, 0x80},//2   -7
    {0x80, 0x80, 0x76, 0x6e, 0x6c,0x6d,  0x73, 0x80},//3   -6
    {0x80, 0x80, 0x77, 0x70, 0x70,0x70,  0x76, 0x80},//4   -5
    {0x80, 0x80, 0x79, 0x73, 0x73,0x73,  0x77, 0x80},//5   -4
    {0x80, 0x80, 0x7a, 0x76, 0x76,0x76,  0x79, 0x80},//6  -3
    {0x80, 0x80, 0x7b, 0x79, 0x79,0x79,  0x7a, 0x80},//7   -2
    {0x80, 0x80, 0x7c, 0x7c, 0x7c,0x7c,  0x7d, 0x80},//8   -1
    {0x80, 0x80, 0x80, 0x80, 0x80,0x80,  0x80, 0x80},//9   +0
    {0x83, 0x83, 0x83, 0x83, 0x83,0x83,  0x83, 0x80},//10  +1
    {0x84, 0x85, 0x86, 0x86, 0x86,0x86,  0x86, 0x80},//11  +2
    {0x84, 0x87, 0x8a, 0x8a, 0x8a,0x8a,  0x8a, 0x80},//12  +3
    {0x86, 0x8a, 0x8d, 0x8d, 0x8d,0x8d,  0x8b, 0x80},//13  +4
    {0x87, 0x8c, 0x90, 0x90, 0x90,0x90,  0x8d, 0x80},//14   +5
    {0x89, 0x90, 0x93, 0x93, 0x93,0x93,  0x8f, 0x80},//15   +6
    {0x89, 0x90, 0x96, 0x96, 0x96,0x96,  0x8f, 0x80},//16 +7
    {0x89, 0x90, 0x99, 0x99, 0x99,0x99,  0x90, 0x80},//17 +8
    {0x8a, 0x90, 0x9c, 0x9c, 0x9c,0x99,  0x90, 0x80} //18 +9
},

GRASS_TONE_H :
{
    // hue 11~16
    {0x74,0x69, 0x64, 0x68, 0x6f, 0x80},//0 -9
    {0x76,0x6b, 0x66, 0x6b, 0x73, 0x80},//1 -8
    {0x78,0x6d, 0x69, 0x6d, 0x75, 0x80},//2 -7
    {0x79,0x6f, 0x6d, 0x70, 0x76, 0x80},//3 -6
    {0x79,0x71, 0x70, 0x71, 0x77, 0x80},//4 -5
    {0x7a,0x73, 0x73, 0x73, 0x78, 0x80},//5 -4
    {0x7b,0x76, 0x76, 0x76, 0x7a, 0x80},//6 -3
    {0x7c,0x7a, 0x7a, 0x7a, 0x7b, 0x80},//7 -2
    {0x7d,0x7d, 0x7d, 0x7d, 0x7d, 0x80},//8  -1
    {0x80,0x80, 0x80, 0x80, 0x80, 0x80},//9  +0
    {0x83,0x83, 0x83, 0x83, 0x83, 0x80},//10 +1
    {0x86,0x86, 0x86, 0x86, 0x85, 0x80},//11 +2
    {0x8a,0x8a, 0x8a, 0x8a, 0x86, 0x80},//12 +3
    {0x8d,0x8d, 0x8d, 0x8d, 0x88, 0x80},//13 +4
    {0x8d,0x90, 0x90, 0x8f, 0x8a, 0x80},//14 +5
    {0x8f,0x93, 0x93, 0x91, 0x8b, 0x80},//15 +6
    {0x90,0x96, 0x96, 0x93, 0x8d, 0x80},//16 +7
    {0x92,0x99, 0x99, 0x96, 0x8d, 0x80},//17 +8
    {0x92,0x9c, 0x9c, 0x98, 0x8d, 0x80}//18  +9
},

SKY_TONE_H:
{   //17 ~ 19
    {0x70, 0x60, 0x70},//0   -9
    {0x70, 0x63, 0x70},//1   -8
    {0x73, 0x69, 0x72},//2   -7
    {0x75, 0x6d, 0x74},//3   -6
    {0x77, 0x70, 0x76},//4   -5
    {0x7a, 0x73, 0x79},//5   -4
    {0x7b, 0x76, 0x7b},//6   -3
    {0x7c, 0x79, 0x7c},//7   -2
    {0x7e, 0x7c, 0x7e},//8    -1
    {0x80, 0x80, 0x80},//9    +0
    {0x83, 0x83, 0x83},//10   +1
    {0x85, 0x86, 0x85},//11   +2
    {0x86, 0x8a, 0x86},//12   +3
    {0x89, 0x8d, 0x89},//13   +4
    {0x8b, 0x90, 0x8b},//14   +5
    {0x8e, 0x93, 0x8e},//15   +6
    {0x91, 0x96, 0x91},//16   +7
    {0x93, 0x99, 0x93},//17   +8
    {0x95, 0x9c, 0x95}//18    +9
}

};
