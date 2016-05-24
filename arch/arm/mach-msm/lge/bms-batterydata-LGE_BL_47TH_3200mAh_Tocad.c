#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20,0,25,40,60},
	.y		= {3121,3141,3146,3140,3126},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20,0,25,40,60},
	.percent	= {100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,16,13,11,10,9,8,7,6,5,4,3,2,1},
	.sf		= {
				{1195,345,101,79,75},
				{1195,345,101,79,75},
				{1197,348,102,80,75},
				{1177,348,104,81,76},
				{1152,352,106,83,76},
				{1132,349,110,84,78},
				{1125,342,118,89,79},
				{1128,332,129,94,83},
				{1147,325,124,102,88},
				{1163,321,105,84,79},
				{1184,321,102,81,75},
				{1206,327,102,81,77},
				{1268,342,103,83,79},
				{1386,367,105,84,81},
				{1556,390,108,83,79},
				{1873,412,110,82,76},
				{2384,429,113,82,76},
				{2985,438,115,82,78},
				{3638,433,121,86,79},
				{4253,427,127,90,81},
				{4607,433,133,91,81},
				{4994,425,138,93,82},
				{5271,401,140,95,83},
				{5921,406,144,101,92},
				{6967,418,145,110,97},
				{8389,439,143,116,101},
				{10398,481,144,118,106},
				{13200,559,157,125,113},
				{17344,767,188,140,125},
				{23019,1687,282,184,175}
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20,0,25,40,60},
	.percent	= {100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,16,13,11,10,9,8,7,6,5,4,3,2,1,0},
	.ocv		= {
				{4334,4332,4327,4322,4314},
				{4191,4244,4256,4254,4250},
				{4104,4180,4196,4195,4191},
				{4030,4122,4140,4138,4135},
				{3962,4068,4086,4086,4082},
				{3904,4014,4036,4036,4033},
				{3856,3960,3990,3992,3988},
				{3820,3912,3950,3950,3948},
				{3792,3872,3900,3908,3906},
				{3762,3838,3854,3858,3858},
				{3722,3808,3825,3828,3827},
				{3675,3788,3803,3806,3805},
				{3634,3774,3786,3788,3787},
				{3604,3762,3774,3774,3772},
				{3578,3745,3762,3760,3750},
				{3551,3722,3746,3742,3728},
				{3519,3690,3720,3715,3702},
				{3486,3656,3689,3688,3677},
				{3456,3621,3669,3672,3662},
				{3432,3590,3658,3664,3657},
				{3418,3574,3650,3658,3649},
				{3402,3558,3642,3650,3642},
				{3388,3535,3627,3634,3622},
				{3368,3505,3598,3606,3590},
				{3345,3466,3556,3568,3548},
				{3319,3420,3502,3518,3499},
				{3286,3366,3436,3454,3436},
				{3241,3300,3362,3378,3360},
				{3180,3221,3278,3296,3268},
				{3097,3126,3168,3179,3141},
				{3000,3000,3000,3000,3000}
	}
};


struct bms_battery_data LGE_BL_47TH_3200mAh_Tocad_data = {
	.fcc				= 3200,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 126
};