/******************************************************************************
 *
 * Copyright(c) 2007 - 2020  Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * The full GNU General Public License is included in this distribution in the
 * file called LICENSE.
 *
 * Contact Information:
 * wlanfae <wlanfae@realtek.com>
 * Realtek Corporation, No. 2, Innovation Road II, Hsinchu Science Park,
 * Hsinchu 300, Taiwan.
 *
 * Larry Finger <Larry.Finger@lwfinger.net>
 *
 *****************************************************************************/
#ifndef __HALRF_DPK_8851BH__
#define __HALRF_DPK_8851BH__
#ifdef RF_8851B_SUPPORT
/*--------------------------Define Parameters-------------------------------*/
#define DPK_VER_8851B 0x7
#define DPK_RF_PATH_MAX_8851B 1
#define DPK_KIP_REG_NUM_8851B 7
#define DPK_BB_REG_NUM_8851B 3
#define DPK_RF_REG_NUM_8851B 4
#define DPK_PATH_A_8851B 1
#define DPK_PATH_B_8851B 1
#define PATH_OFST_8851B 0x100
#define CH_OFST_8851B 0x4
#define PHY_OFST_8851B 0x80
#define DPK_BY_NCTL_8851B 1
#define DPK_RELOAD_EN_8851B 0
#define DPK_REG_DBG 0
#define DPK_RXSRAM_DBG_8851B 0


/*---------------------------End Define Parameters----------------------------*/

void halrf_dpk_8851b(struct rf_info *rf, enum phl_phy_idx phy_idx, bool force);

void halrf_dpk_onoff_8851b(struct rf_info *rf, enum rf_path path, bool off);

void halrf_dpk_track_8851b(struct rf_info *rf);

#endif
#endif /*  __HALRF_DPK_8851BH__ */
