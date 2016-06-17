/* drivers/sharp/shdisp/data/shdisp_smite_data_dl40.h (Display Driver)
 *
 * Copyright (C) 2013 SHARP CORPORATION
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef SHDISP_SMITE_DATA_H
#define SHDISP_SMITE_DATA_H

#define SHDISP_CLMR_SMITE_CONFIG_TBL_SIZE_128           65
#define SHDISP_CLMR_SMITE_CONFIG_TBL_SIZE_64            33
#define SHDISP_CLMR_SMITE_CONFIG_TBL_SIZE_32            17

static const unsigned short smite_config_common[SHDISP_CLMR_SMITE_CONFIG_TBL_SIZE_128] = {
    0x0000,
    0x0A20, 0x0012, 0x0000, 0x0000, 0x0003, 0x0003, 0x0002, 0x0002, 0x0018, 0x0000, 0x0002, 0x0000, 0x0190, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0421, 0x0000, 0x0000, 0x07D0, 0x0000, 0x0000, 0x0000, 0x0020, 0xFFF6, 0x0000, 0x0000, 0x0008, 0x0000, 0x0000, 0x0000,
    0x0AAA, 0x0D27, 0x0000, 0x0003, 0x0005, 0x0000, 0x0000, 0x0000, 0x0280, 0x0140, 0xFEC0, 0xFC40, 0xF9C0, 0xFEC0, 0x03C0, 0x0640,
    0x0004, 0x0004, 0x0004, 0x0004, 0x0004, 0x0004, 0x0004, 0x0007, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xCECF
};

const unsigned short smite_config_dbc[SHDISP_CLMR_SMITE_CONFIG_TBL_SIZE_32] = {
    0x0040,
    0x0002, 0xFFFF, 0x0000, 0x0015, 0x0007, 0x0001, 0x0020, 0x0000, 0x01E0, 0x00F7, 0x0100, 0x0084, 0x0100, 0x0033, 0x0000, 0xFA34
};

const unsigned short smite_config_acc0[SHDISP_CLMR_SMITE_CONFIG_TBL_SIZE_32] = {
    0x0060,
    0x0000, 0x0000, 0x0020, 0x0016, 0x0012, 0x0010, 0x0060, 0x0000, 0x5941, 0x184C, 0x0000, 0x0000, 0x0002, 0x0000, 0x0000, 0x8DB9
};

const unsigned short smite_config_acc1[SHDISP_CLMR_SMITE_CONFIG_TBL_SIZE_32] = {
    0x0070,
    0x0000, 0x0000, 0x0020, 0x0016, 0x0000, 0x0000, 0x0018, 0x0000, 0x184C, 0x5941, 0x0000, 0x0000, 0x0002, 0x0000, 0x0000, 0x8E23
};

const unsigned short smite_config_lpmc_mode[NUM_SHDISP_LCDC_PIC_ADJ_AP] = {
    0, 1, 1, 1, 0
};

const unsigned short smite_config_lpmc[2][SHDISP_CLMR_SMITE_CONFIG_TBL_SIZE_32] = {
    {
        0x0080,
        0x0015, 0x0195, 0x0020, 0x0080, 0x0000, 0x032A, 0x0032, 0x0050, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x0000, 0x0000, 0xFA07
    },
    {
        0x0080,
        0x0011, 0x25F8, 0x0020, 0x0080, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0001, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0xD954
    }
};

const unsigned short smite_config_blr[SHDISP_CLMR_SMITE_CONFIG_TBL_SIZE_64] = {
    0x0100,
    0x0233, 0x0202, 0x01D4, 0x01AA, 0x0184, 0x0161, 0x0142, 0x0126, 0x010D, 0x00F6, 0x00E2, 0x00D0, 0x00BF, 0x00B0, 0x00A2, 0x0095,
    0x0088, 0x007D, 0x0072, 0x0067, 0x005D, 0x0053, 0x0049, 0x0040, 0x0038, 0x0030, 0x0028, 0x0021, 0x001A, 0x0013, 0x000C, 0xE8A4
};

const unsigned short smite_config_pwm[SHDISP_CLMR_SMITE_CONFIG_TBL_SIZE_64] = {
    0x0200,
    0x0196, 0x01C8, 0x01F9, 0x022B, 0x025D, 0x028E, 0x02C0, 0x02F2, 0x0324, 0x0356, 0x0388, 0x03B9, 0x03ED, 0x041F, 0x0451, 0x0482,
    0x04B5, 0x04E7, 0x051B, 0x054D, 0x057F, 0x05B0, 0x05E1, 0x0613, 0x0646, 0x0678, 0x06AC, 0x06DD, 0x070F, 0x0741, 0x0773, 0x7416
};

#endif /* SHDISP_SMITE_DATA_H */