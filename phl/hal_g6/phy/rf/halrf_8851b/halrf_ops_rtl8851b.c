/******************************************************************************
 *
 * Copyright(c) 2007 - 2023  Realtek Corporation.
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
#include "../halrf_precomp.h"
#ifdef RF_8851B_SUPPORT

static struct halrf_rfk_ops rfk_ops_8851b= {
	.halrf_ops_rx_dck = halrf_rx_dck_8851b,
//	TBD
	.halrf_ops_do_txgapk = halrf_do_txgapk_8851b,
	.halrf_ops_tssi_disable = halrf_tssi_disable_8851b,
	.halrf_ops_do_tssi = halrf_do_tssi_8851b,
	.halrf_ops_dpk = halrf_dpk_8851b,
	.halrf_ops_dack = halrf_dac_cal_8851b,
	.halrf_ops_lck = halrf_lck_8851b,
	.halrf_ops_lck_tracking = halrf_lck_tracking_8851b,
	.halrf_ops_lo_test = halrf_lo_test_8851b,
	.halrf_config_radio_to_fw = halrf_config_8851b_radio_to_fw,	
	.halrf_ops_txgapk_w_table_default = halrf_txgapk_write_table_default_8851b,
	.halrf_ops_txgapk_enable = halrf_txgapk_enable_8851b,
	.halrf_ops_txgapk_init = halrf_txgapk_init_8851b,
};

void rf_set_ops_8851b(struct rf_info *rf) {

	rf->rfk_iqk_info = &rf_iqk_hwspec_8851b;
	rf->rf_rfk_ops = &rfk_ops_8851b;
}

#endif
