/******************************************************************************

  Copyright (C), 2001-2011, Hisilicon Tech. Co., Ltd.

 ******************************************************************************
  File Name     : vou_coef_org.c
  Version       : Initial Draft
  Author        : Hisilicon multimedia software group
  Created       : 2011/07/24
  Description   : 
  History       :
  1.Date        : 2011/07/24
    Author      : n00168968
    Modification: Created file

******************************************************************************/

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* End of #ifdef __cplusplus */

#include "vou_coef.h"

//new coefficients
//---------------8 tap----------------------------
#if 0
const int coefficient_lanczos3[18][8] ={{4,-22,40,468,40,-22,4,0},{3,-18,26,468,54,-26,5,0},{2,-14,14,466,68,-30,6,0},
{2,-11,2,462,84,-34,7,0},{1,-7,-9,457,100,-38,8,0},{1,-4,-18,450,116,-42,9,0},
{1,-2,-27,443,133,-46,10,0},{0,2,-35,434,151,-50,10,0},{0,4,-42,425,168,-54,11,0},
{0,6,-49,414,186,-57,12,0},{0,8,-54,401,204,-60,13,0},{0,10,-58,387,222,-62,13,0},
{0,11,-62,374,240,-65,14,0},{0,12,-65,359,258,-66,14,0},{0,13,-67,344,276,-68,14,0},
{0,14,-68,327,293,-68,14,0},{0,14,-68,310,310,-68,14,0},{0,0,0,0,0,0,0,0}};//normalized ok

const int coefficient8_cubic[18][8] = {{ 0,  0,0, 511,   0,   0,  0,  0}, {-1,  3, -12, 511,  14,-4,  1,  0},
{-2,  6, -23, 509,  28,  -8,  2,  0}, {-2,  9, -33, 503,  44, -12,  3,  0}, {-3, 11,-41, 496,61, -16,4,  0},
{-3, 13, -48, 488,  79, -21,  5, -1}, {-3, 14, -54, 477,  98, -25,  7, -2}, {-4, 16,-59, 465,118, -30,8, -2},
{-4, 17, -63, 451, 138, -35,  9, -1}, {-4, 18, -66, 437, 158, -39, 10, -2}, {-4, 18,-68, 421,180, -44,11, -2},
{-4, 18, -69, 404, 201, -48, 13, -3}, {-4, 18, -70, 386, 222, -52, 14, -2}, {-4, 18,-70, 368,244, -56,15, -3},
{-4, 18, -69, 348, 265, -59, 16, -3}, {-4, 18, -67, 329, 286, -63, 16, -3}, {-3, 17,-65, 307,307, -65,17, -3},
{ 0,  0,0,   0,   0,   0,  0,  0}};//normalized ok

const int coefficient8_lanczos2_8tap[18][8] = {{-16,0,145,254,145,0,-16,0},{-16,-2,140,253,151,3,-17,0},
{-15,-5,135,253,157,5,-18,0},{-14,-7,129,252,162,8,-18,0},{-13,-9,123,252,167,11,-19,0},
{-13,-11,118,250,172,15,-19,0},{-12,-12,112,250,177,18,-20,-1},{-11,-14,107,247,183,21,-20,-1},
{-10,-15,101,245,188,25,-21,-1},{-9,-16,96,243,192,29,-21,-2},{-8,-18,90,242,197,33,-22,-2},
{-8,-19,85,239,202,37,-22,-2},{-7,-19,80,236,206,41,-22,-3},{-7,-20,75,233,210,46,-22,-3},
{-6,-21,69,230,215,50,-22,-3},{-5,-21,65,226,219,55,-22,-5},{-5,-21,60,222,222,60,-21,-5},
{0,0,0,0,0,0,0,0}};//normalized ok

//2.426M
const int coefficient8_3M_a19[18][8] = {{-18,18,144,226,144,19,-17,-4},{-17,16,139,226,148,21,-17,-4},
{-17,13,135,227,153,24,-18,-5},{-17,11,131,226,157,27,-18,-5},{-17,9,126,225,161,30,-17,-5},
{-16,6,122,225,165,33,-17,-6},{-16,4,118,224,169,37,-17,-7},{-16,2,113,224,173,40,-17,-7},
{-15,0,109,222,177,43,-17,-7},{-15,-1,104,220,181,47,-16,-8},{-14,-3,100,218,185,51,-16,-9},
{-14,-5,96,217,188,54,-15,-9},{-14,-6,91,214,192,58,-14,-9},{-13,-7,87,212,195,62,-14,-10},
{-13,-9,83,210,198,66,-13,-10},{-12,-10,79,207,201,70,-12,-11},{-12,-11,74,205,205,74,-11,-12},
{0,0,0,0,0,0,0,0}};//normalized ok

const HI_S32 coefficient8_2M_a05[18][8] = {                            
	{14,66,113,133,113,66,14,-7},
	{12,65,112,133,114,68,15,-7},
	{11,63,111,132,115,70,17,-7},
	{10,62,110,132,116,71,18,-7},
	{8,60,108,132,118,73,20,-7}, 
	{7,58,107,132,119,75,21,-7}, 
	{6,56,106,132,120,76,23,-7}, 
	{5,55,105,131,121,78,24,-7}, 
	{4,53,103,131,122,80,26,-7}, 
	{3,51,102,131,122,81,28,-6}, 
	{2,50,101,130,123,83,29,-6}, 
	{1,48,99,131,124,84,31,-6},
	{0,46,98,129,125,86,33,-5},
	{-1,45,97,128,126,88,34,-5}, 
	{-2,43,95,130,126,89,36,-5}, 
	{-3,41,94,128,127,91,38,-4}, 
	{-3,39,92,128,128,92,39,-3}, 
};//normalized ok 

const HI_S32 coefficient8_1_5M_a05[18][8] = 
{
	{39,69,93,102,93,69,39,8},//511
	{38,68,92,102,93,70,40,9},//511
	{37,67,91,102,93,71,41,10},//511
	{36,66,91,101,94,71,42,11},//512
	{35,65,90,102,94,72,43,11},//511
	{34,64,89,102,94,73,44,12},//510
	{33,63,88,101,95,74,45,13},//511
	{32,62,88,100,95,75,46,14},//512
	{31,62,87,100,95,75,47,15},//512
	{30,61,86,99,96,76,48,16},//513
	{29,60,86,98,96,77,49,17},//513
	{28,59,85,98,96,78,50,18},//513
	{27,58,84,99,97,78,50,19},//512
	{26,57,83,99,97,79,51,20},//512
	{25,56,83,98,97,80,52,21},//512
	{24,55,82,97,98,81,53,22},//513
	{23,54,81,98,98,81,54,23},//512
};

//---------------6 tap----------------------------
//4.667M
const int coefficient6_6M_a25[18][6] = {{-34,78,415,78,-34,9},{-32,66,415,90,-36,9},
{-29,54,413,103,-38,9},{-26,43,411,116,-41,9},{-23,33,406,129,-42,9},{-21,24,401,143,-44,9},
{-18,14,396,157,-46,9},{-16,6,389,171,-47,9},{-14,-2,382,185,-48,9},{-11,-9,374,199,-49,8},
{-9,-16,365,213,-49,8},{-7,-21,354,228,-49,7},{-5,-27,345,242,-49,6},{-3,-32,333,256,-48,6},
{-1,-36,322,269,-46,4},{0,-39,309,283,-44,3},{2,-42,296,296,-42,2},{0,0,0,0,0,0}};//normalized ok

const int coefficient6_cubic[18][6] = {{0,0,511,0,0,0},{3,-12,511,13,-3,0},{6,-22,507,28,-7,0},
{8,-32,502,44,-11,1},{10,-40,495,61,-15,1},{11,-47,486,79,-19,2},{12,-53,476,98,-24,3},
{13,-58,464,117,-28,4},{14,-62,451,137,-33,5},{15,-65,437,157,-38,6},{15,-67,420,179,-42,7},
{15,-68,404,200,-46,7},{14,-68,386,221,-50,9},{14,-68,367,243,-54,10},{14,-67,348,264,-58,11},
{13,-66,328,286,-61,12},{13,-63,306,306,-63,13},{0,0,0,0,0,0}};//normalized ok

//3.888M
const int coefficient6_5M_a25[18][6] = {{-31,104,362,104,-31,4},{-30,94,362,114,-32,4},
{-29,84,361,125,-32,3},{-28,75,359,136,-33,3},{-27,66,356,147,-33,3},{-25,57,353,158,-33,2},
{-24,49,349,169,-33,2},{-22,41,344,180,-32,1},{-20,33,339,191,-31,0},{-19,26,333,203,-30,-1},
{-17,19,327,214,-29,-2},{-16,13,320,225,-27,-3},{-14,7,312,236,-25,-4},{-13,1,305,246,-22,-5},
{-11,-4,295,257,-19,-6},{-10,-8,286,267,-16,-7},{-9,-12,277,277,-12,-9},{0,0,0,0,0,0}};//normalized ok
//3.216M
const int coefficient6_4M_a20[18][6] = {{-20,130,297,130,-20,-5},{-21,122,298,138,-19,-6},
{-22,115,297,146,-17,-7},{-22,108,296,153,-16,-7},{-23,101,295,161,-14,-8},{-23,93,294,169,-12,-9},
{-24,87,292,177,-10,-10},{-24,80,289,185,-7,-11},{-24,73,286,193,-4,-12},{-23,66,283,200,-1,-13},
{-23,60,279,208,2,-14},{-23,54,276,215,5,-15},{-22,48,271,222,9,-16},{-21,42,266,229,13,-17},
{-21,37,261,236,17,-18},{-21,32,255,242,22,-18},{-20,27,249,249,27,-20},{0,0,0,0,0,0}};//normalized ok
//2.16M
const int coefficient6_3M_a15[18][6] = {{16,136,217,136,16,-9},{13,132,217,141,18,-9},
{11,128,217,145,21,-10},{9,124,216,149,24,-10},{7,119,216,153,27,-10},{5,115,216,157,30,-11},
{3,111,215,161,33,-11},{1,107,214,165,36,-11},{0,102,213,169,39,-11},{-2,98,211,173,43,-11},
{-3,94,209,177,46,-11},{-4,90,207,180,50,-11},{-5,85,206,184,53,-11},{-6,81,203,187,57,-10},
{-7,77,201,190,61,-10},{-8,73,198,193,65,-9},{-9,69,196,196,69,-9},{0,0,0,0,0,0}};//normalized ok

const HI_S32 coefficient6_2M_a05[18][6] = 
{
	{66,115,138,115,66,12},//510
	{64,114,136,116,68,14},//511
	{63,113,134,117,70,15},//513
	{61,111,135,118,71,16},//512
	{59,110,133,119,73,18},//513
	{57,108,134,120,74,19},//512
	{55,107,133,121,76,20},//512
	{53,105,133,121,78,22},//512
	{51,104,133,122,79,23},//512
	{49,102,132,123,81,25},//512
	{47,101,132,124,82,26},//512
	{45,99,131,125,84,28},//512
	{44,98,130,125,85,30},//512
	{42,96,130,126,87,31},//512
	{40,95,128,127,89,33},//513
	{38,93,129,127,90,35},//512
	{36,92,128,128,92,36},//512
};//normalize

const HI_S32 coefficient6_1_5M_a05[18][6] = 
{
	{80,105,116,105,80,26},//512
	{79,104,115,105,81,28},//513
	{77,103,116,106,81,29},//511
	{76,102,115,106,82,31},//512
	{74,101,115,106,83,33},//512
	{73,100,114,106,84,35},//512
	{71,99,114,107,84,37},//512
	{70,98,113,107,85,39},//512
	{68,98,113,107,86,40},//512
	{67,97,112,108,86,42},//512
	{65,96,112,108,87,44},//512
	{63,95,112,108,88,46},//512
	{62,94,112,108,88,48},//511
	{60,93,111,109,89,50},//512
	{58,93,111,109,90,51},//512
	{57,92,110,110,90,53},//512
	{55,91,110,110,91,55},//512
};

//---------------4 tap----------------------------
const int coefficient4_6M_a15[18][4] =  
{
    {78,392,78,-36},
    {67,393,89,-37},
    {56,393,102,-39},
    {46,392,115,-41},
    {36,391,128,-43},
    {27,387,142,-44},
    {18,384,155,-45},
    {10,378,170,-46},
    {3,372,184,-47},
    {-5,366,198,-47},
    {-11,357,213,-47},
    {-17,350,226,-47},
    {-23,340,241,-46},
    {-28,330,255,-45},
    {-32,319,269,-44},
    {-36,307,282,-41},
    {-39,295,295,-39},
    {0,0,0,0}
};//normalized ok
//4.272M
const int coefficient4_6M_a19[18][4] = {{77,386,77,-28},{66,387,88,-29},{56,387,100,-31},
{47,385,112,-32},{38,383,125,-34},{29,380,138,-35},{21,376,151,-36},{13,371,165,-37},{6,365,179,-38},
{0,358,192,-38},{-6,350,206,-38},{-12,342,220,-38},{-17,332,234,-37},{-22,322,248,-36},{-25,311,261,-35},
{-28,299,274,-33},{-31,287,287,-31},{0,0,0,0}};//normalized ok
//3.507M
const int coefficient4_5M_a15[18][4] = {{103,335,103,-29},{92,335,112,-27},{84,335,121,-28},
{75,334,131,-28},{67,332,141,-28},{59,329,152,-28},{51,326,162,-27},{43,323,173,-27},{36,319,183,-26},
{30,313,194,-25},{23,308,204,-23},{17,301,215,-21},{12,295,225,-20},{6,288,235,-17},{2,280,244,-14},
{-3,271,254,-10},{-7,263,263,-7},{0,0,0,0}};//normalized ok

const int coefficient4_cubic[18][4] = {{0, 511,0,0}, {-19, 511,  21,	-1}, {-37, 509,  42,  -2}, {-51, 504,  64,-5},
{-64, 499,  86,  -9}, {-74, 492, 108, -14}, {-82, 484, 129, -19}, {-89, 474, 152,-25}, {-94, 463,174, -31},
{-97, 451, 196, -38}, {-98, 438, 217, -45}, {-98, 424, 238, -52}, {-98, 409, 260,-59}, {-95, 392,280, -65},
{-92, 376, 300, -72}, {-88, 358, 320, -78}, {-83, 339, 339, -83}, {  0,   0,	0,   0}};//normalized ok

//2.657M
const int coefficient4_4M_a15[18][4] = {{120,281,120,-9},{113,281,127,-9},{106,280,134,-8},
{99,279,141,-7},{92,277,148,-5},{85,275,156,-4},{79,273,162,-2},{72,270,170,0},{66,267,177,2},
{61,263,184,4},{56,259,191,6},{50,255,198,9},{44,251,205,12},{40,246,211,15},{34,241,218,19},
{31,235,224,22},{26,230,230,26},{0,0,0,0}};//normalized ok

const HI_S32 coefficient4_2M_a05[18][4] =
{
	{148,171,148,45},//512
	{145,170,149,48},//512
	{142,170,149,51},//511
	{139,168,150,55},//512
	{136,167,151,58},//512
	{133,167,151,61},//511
	{130,165,152,65},//512
	{127,164,153,68},//512
	{124,164,153,71},//511
	{121,162,154,75},//513
	{118,162,154,78},//512
	{115,160,155,82},//513
	{111,161,155,85},//511
	{108,160,156,88},//512
	{105,159,156,92},//512
	{102,158,157,95},//512
	{98,158,158,98},//512
};//normalized ok

const HI_S32 coefficient4_1_5M_a05[18][4] =
{
	{150,158,150,54},//513
	{147,157,150,58},//513
	{145,156,150,61},//512
	{143,156,149,64},//511
	{140,155,149,68},//512
	{138,154,149,71},//512
	{135,153,149,75},//512
	{133,152,149,78},//512
	{130,152,149,81},//511
	{128,150,149,85},//513
	{125,150,149,88},//512
	{122,150,149,91},//512
	{119,150,148,95},//512
	{116,150,148,98},//511
	{113,150,148,101},//511
	{110,149,149,104},//512
	{107,149,149,107},//512
};//normalized ok

const HI_S32 *g_pOrgZoomCoef[VOU_ZOOM_COEF_BUTT][VOU_ZOOM_TAP_BUTT] =
{
	//VOU_ZOOM_TAP_8LH,                      VOU_ZOOM_TAP_4CH,                   VOU_ZOOM_TAP_6LV,              VOU_ZOOM_TAP_4LV,                 VOU_ZOOM_TAP_4CV,              
	{&coefficient_lanczos3[0][0],		&coefficient4_5M_a15[0][0],  &coefficient6_6M_a25[0][0],  &coefficient4_6M_a15[0][0],      &coefficient4_5M_a15[0][0]}, //>1
	{&coefficient8_cubic[0][0],			&coefficient4_cubic[0][0],   &coefficient6_cubic[0][0],	  &coefficient4_cubic[0][0],	   &coefficient4_cubic[0][0]},     //==1
	{&coefficient8_lanczos2_8tap[0][0], &coefficient4_5M_a15[0][0],  &coefficient6_5M_a25[0][0],  &coefficient4_5M_a15[0][0],      &coefficient4_5M_a15[0][0]},         //>=0.75   
	{&coefficient8_lanczos2_8tap[0][0], &coefficient4_5M_a15[0][0],  &coefficient6_4M_a20[0][0],  &coefficient4_5M_a15[0][0],      &coefficient4_5M_a15[0][0]},  //>=0.5
 	{&coefficient8_3M_a19[0][0],		&coefficient4_2M_a05[0][0],  &coefficient6_3M_a15[0][0],  &coefficient4_2M_a05[0][0],      &coefficient4_2M_a05[0][0]}, //>=0.33 
 	{&coefficient8_2M_a05[0][0],		&coefficient4_1_5M_a05[0][0],&coefficient6_2M_a05[0][0],  &coefficient4_1_5M_a05[0][0],    &coefficient4_1_5M_a05[0][0]}, //>=0.25 
 	{&coefficient8_1_5M_a05[0][0],		&coefficient4_1_5M_a05[0][0],&coefficient6_1_5M_a05[0][0],&coefficient4_1_5M_a05[0][0],    &coefficient4_1_5M_a05[0][0]}  //else
};
#endif

/* RGB->YUV601 */
#if 0
const CscCoef_S g_stCSC_RGB2YUV601_tv        
    = {
     /*csc*/
     257, 504, 98, -148, -291, 439, 439, -368, -71,
     /*csc(IDC)*/
     0, 0, 0,
     /*csc(ODC)*/
     16, 128, 128, 
    };
#endif
/* RGB->YUV601 */
const CscCoef_S g_stCSC_RGB2YUV601_pc        
    = {    
     /*csc*/
     299, 587, 114, -172, -339, 511, 511, -428, -83,
     /*csc(IDC)*/
     0, 0, 0,
     /*csc(ODC)*/
     0, 128, 128,
    };
/* RGB->YUV709 */
#if 0
const CscCoef_S g_stCSC_RGB2YUV709_tv
    = {
     /*csc*/
     183, 614, 62, -101, -338, 439, 439, -399, -40,
     /*csc=(IDC)*/
     0, 0, 0,
     /*csc(ODC)*/
     16, 128, 128,
    };
#endif
/* RGB->YUV709*/
const CscCoef_S g_stCSC_RGB2YUV709_pc
    = {
     /*csc*/
     213, 715, 72, -117, -394, 511, 511, -464, -47,
     /*csc(IDC)*/
     0, 0, 0,
     /*csc(ODC)*/
     0, 128, 128,
    };
/* YUV601->RGB*/
const CscCoef_S g_stCSC_YUV6012RGB_pc
    = {
     /*csc*/
     1164, 0, 1596, 1164, -391, -813, 1164, 2018, 0,
     /*csc(IDC)*/
     -16, -128, -128,
     /*csc(ODC)*/
     0, 0, 0,
    };
/* YUV709->RGB */
const CscCoef_S g_stCSC_YUV7092RGB_pc
    = {
     /*csc*/
     1164, 0, 1793, 1164, -213, -534, 1164, 2115, 0,
     /*csc(IDC)*/
     -16, -128, -128,
     /*csc(ODC)*/
     0, 0, 0,
    };

const CscCoef_S g_stCSC_YUV2YUV_601full_709full
    = {
     /*csc*/
     1000, -115, -208, 0, 1019, 114, 0, 75, 1025,
     /*csc(IDC)*/
     0, -128, -128,
     /*csc(ODC)*/
     0, 128, 128,
    };
const CscCoef_S g_stCSC_YUV2YUV_601limit_709full
    = {
     /*csc*/
     1164, -134, -242, 0, 1160, 130, 0, 85, 1166,
     /*csc(IDC)*/
     -16, -128, -128,
     /*csc(ODC)*/
     0, 128, 128,
    };
const CscCoef_S g_stCSC_YUV2YUV_709full_709full
    = {
     /*csc*/
     1000, 0, 0, 0, 1000, 0, 0, 0, 1000,
     /*csc(IDC)*/
     0, -128, -128,
     /*csc(ODC)*/
     0, 128, 128,
    };
const CscCoef_S g_stCSC_YUV2YUV_709limit_709full
    = {
     /*csc*/
     1164, 0, 0, 0, 1138, 0, 0, 0, 1138,
     /*csc(IDC)*/
     -16, -128, -128,
     /*csc(ODC)*/
     0, 128, 128,
    };  
const CscCoef_S g_stCSC_YUV2YUV_709full_709limit
    = {
     /*csc*/
     859, 0, 0, 0, 878, 0, 0, 0, 878,
     /*csc(IDC)*/
     0, -128, -128,
     /*csc(ODC)*/
     16, 128, 128,
    };  
const CscCoef_S g_stCSC_YUV2YUV_709full_601full
    = {
     /*csc*/
     1000, 100, 191, 0, 990, -110, 0, -72, 983,
     /*csc(IDC)*/
     0, -128, -128,
     /*csc(ODC)*/
     0, 128, 128,
    };  
const CscCoef_S g_stCSC_YUV2YUV_709full_601limit
    = {
     /*csc*/
     859, 88, 169, 0, 870, -97, 0, -63, 864,
     /*csc(IDC)*/
     0, -128, -128,
     /*csc(ODC)*/
     16, 128, 128,
    };     
    
    
/* YUV601->YUV709  */
const CscCoef_S g_stCSC_YUV2YUV_601_709
    = {
     /*csc*/
     1000, -115, -208, 0, 1019, 114, 0, 75, 1025,
     /*csc(IDC)*/
     -16, -128, -128,
     /*csc(ODC)*/
     16, 128, 128,
    };
/* YUV709->YUV601  */
const CscCoef_S g_stCSC_YUV2YUV_709_601
    = {
     /*csc*/
     1000, 100, 191, 0, 990, -110, 0, -72, 983,
     /*csc(IDC)*/
     -16, -128, -128,
     /*csc(ODC)*/
     16, 128, 128,
    };
/* YUV601->YUV709  */
const CscCoef_S g_stCSC_Init
    = {
     /*csc*/
     1000, 0, 0, 0, 1000, 0, 0, 0, 1000,
     /*csc(IDC)*/
     -16, -128, -128,
     /*csc(ODC)*/
     16, 128, 128,
    };


const int SIN_TABLE[61] = {
  -500,  -485,  -469,  -454,  -438,  -422,  -407,  -391,  -374,  -358,
  -342,  -325,  -309,  -292,  -276,  -259,  -242,  -225,  -208,  -191,
  -174,  -156,  -139,  -122,  -104,   -87,   -70,   -52,   -35,   -17,
     0,    17,    35,    52,    70,    87,   104,   122,   139,   156,
   174,   191,   208,   225,   242,   259,   276,   292,   309,   325,
   342,   358,   374,   391,   407,   422,   438,   454,   469,   485,
   500};

const int COS_TABLE[61] = {
   866,   875,   883,   891,   899,   906,   914,   921,   927,   934,
   940,   946,   951,   956,   961,   966,   970,   974,   978,   982,
   985,   988,   990,   993,   995,   996,   998,   999,   999,  1000,
  1000,  1000,   999,   999,   998,   996,   995,   993,   990,   988,
   985,   982,   978,   974,   970,   966,   961,   956,   951,   946,
   940,   934,   927,   921,   914,   906,   899,   891,   883,   875,
   866};


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* End of #ifdef __cplusplus */

