/******************************************************************************
 *
 * Copyright(c) 2019 Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 *****************************************************************************/
#ifndef _PHL_CUSTOM_DEF_H_
#define _PHL_CUSTOM_DEF_H_

#define PRIVATE_EVT_START (BIT15)
#define MAX_DATA_SIZE	(512)

enum rtw_customer_feature_id {
	CUS_ID_NONE = 0,
	CUS_ID_FB = 1,
	CUS_ID_XH = 2,
	CUS_ID_VR = 3,

	CUS_ID_ANT_TOOL = 4,
	CUS_ID_MAX
};

enum rtw_msg_custom_evt_id {
	/* Reserved for Custom Feature
	* be aware that the order of the following id are also used in
	* upper layer application, thus, it shall not be changed to
	* avoid mismatch error!!
	*/
	MSG_EVT_CUSTOME_NONE = PRIVATE_EVT_START,
	MSG_EVT_CUSTOME_FEATURE_ENABLE = PRIVATE_EVT_START + 1,
	MSG_EVT_CUSTOME_FEATURE_QUERY = PRIVATE_EVT_START + 2,
	MSG_EVT_CUSTOME_TESTMODE_PARAM = PRIVATE_EVT_START + 3,
	MSG_EVT_CUSTOME_SET_WIFI_ROLE = PRIVATE_EVT_START + 4,
	MSG_EVT_EDCA_ADJUST = PRIVATE_EVT_START + 5,
	MSG_EVT_EDCA_QUERY = PRIVATE_EVT_START + 6,
	MSG_EVT_NAV_PADDING = PRIVATE_EVT_START + 7,
	MSG_EVT_NAV_PADDING_QUERY = PRIVATE_EVT_START + 8,
	MSG_EVT_CUSTOM_CMD_DONE = PRIVATE_EVT_START + 9,
	MSG_EVT_AMPDU_CFG = PRIVATE_EVT_START + 10,
	MSG_EVT_AMPDU_QUERY = PRIVATE_EVT_START + 11,
	MSG_EVT_COLDBOOT_CALI = PRIVATE_EVT_START + 12,
	MSG_EVT_PDTHR_CFG = PRIVATE_EVT_START + 13,
	MSG_EVT_PDTHR_QUERY = PRIVATE_EVT_START + 14,
	MSG_EVT_POP_CFG = PRIVATE_EVT_START + 15,
	MSG_EVT_POP_QUERY = PRIVATE_EVT_START + 16,
	MSG_EVT_STATS_RPT_CFG = PRIVATE_EVT_START + 17,
	MSG_EVT_STATS_RPT_NOTIFY = PRIVATE_EVT_START + 18,
	MSG_EVT_CHNL_SW = PRIVATE_EVT_START + 19,
	MSG_EVT_STA_ASOC_NOTIFY = PRIVATE_EVT_START + 20,
	MSG_EVT_BCN_OPT_IES_CFG = PRIVATE_EVT_START + 21,
	MSG_EVT_BCN_VDR_IE_CFG = PRIVATE_EVT_START + 22,
	MSG_EVT_SET_AP_START_CHNL = PRIVATE_EVT_START + 23,
	MSG_EVT_SET_CUS_CHNL_LIST = PRIVATE_EVT_START + 24,
	MSG_EVT_GET_CUS_CHNL_LIST = PRIVATE_EVT_START + 25,
	MSG_EVT_ACS_GET_PREF_CHNL = PRIVATE_EVT_START + 26,
	MSG_EVT_AMSDU_CFG = PRIVATE_EVT_START + 27,
	MSG_EVT_AMSDU_QUERY = PRIVATE_EVT_START + 28,
	MSG_EVT_SET_USB_SWITCH_MODE = PRIVATE_EVT_START + 29,
	MSG_EVT_GET_USB_SWITCH_MODE = PRIVATE_EVT_START + 30,
	MSG_EVT_SET_ROLE_CAP = PRIVATE_EVT_START + 31,
	MSG_EVT_GET_ROLE_CAP = PRIVATE_EVT_START + 32,
	MSG_EVT_SET_TX_RATE_MASKING = PRIVATE_EVT_START + 33,
	MSG_EVT_GET_TX_RATE_MASKING = PRIVATE_EVT_START + 34,
	MSG_EVT_SET_TX_RATE_RTY_TBL = PRIVATE_EVT_START + 35,
	MSG_EVT_GET_TX_RATE_RTY_TBL = PRIVATE_EVT_START + 36,
	MSG_EVT_TSF_CFG = PRIVATE_EVT_START + 37,
	MSG_EVT_TSF_QUERY = PRIVATE_EVT_START + 38,
	MSG_EVT_TSF_NOTIFY = PRIVATE_EVT_START + 39,
	MSG_EVT_SET_MAX_SCAN_TIME = PRIVATE_EVT_START + 40,
	MSG_EVT_SET_SCAN_ENABLE = PRIVATE_EVT_START + 41,
	MSG_EVT_SET_SCAN_COMPLETE = PRIVATE_EVT_START + 42,
	MSG_EVT_GET_MAX_SCAN_TIME = PRIVATE_EVT_START + 43,
	MSG_EVT_HOSTQ_FLUSH_CFG = PRIVATE_EVT_START + 44,
	MSG_EVT_HOSTQ_FLUSHED_NOTIFY = PRIVATE_EVT_START + 45,
	MSG_EVT_CSA_RESET_ACS_PREF_CH = PRIVATE_EVT_START + 46,
	MSG_EVT_ACS_SET_CH_TABLE_MASK = PRIVATE_EVT_START + 47,
	MSG_EVT_LPS_DIG_CFG = PRIVATE_EVT_START + 48,
	MSG_EVT_LPS_DIG_QUERY = PRIVATE_EVT_START + 49,
	MSG_EVT_LPS_DIG_NOTIFY = PRIVATE_EVT_START + 50,
	MSG_EVT_CSA_BCN_FILL_TIM = PRIVATE_EVT_START + 51,
	MSG_EVT_GET_DRIVER_VERSION = PRIVATE_EVT_START + 52,
	MSG_EVT_GET_CH_UT_STATS = PRIVATE_EVT_START + 53,
	MSG_EVT_SET_AP_HID_SSID = PRIVATE_EVT_START + 54,
	MSG_EVT_GET_AP_HID_SSID = PRIVATE_EVT_START + 55,
	MSG_EVT_CFG_START_AP_CAP = PRIVATE_EVT_START + 56,
	MSG_EVT_RUN_PRE_RFK = PRIVATE_EVT_START + 57,
	MSG_EVT_QUERY_PRE_RFK_STATUS = PRIVATE_EVT_START + 58,
	MSG_EVT_CFG_REGULATORY_DOMAIN = PRIVATE_EVT_START + 59,
	MSG_EVT_CFG_LED_LIGHTING = PRIVATE_EVT_START + 60,
	MSD_EVT_SET_ECSA_START = PRIVATE_EVT_START + 61,
	MSG_EVT_ANT_TOOL_OP_HDLR = PRIVATE_EVT_START + 62,
	MSG_EVT_SET_SPATIAL_REUSE = PRIVATE_EVT_START + 63,
	MSG_EVT_GET_SPATIAL_REUSE = PRIVATE_EVT_START + 64
};

enum custom_type {
	CUSTOM_CORE = 0,
	CUSTOM_PHL = 1,
	CUSTOM_MAX
};

/*
 * #pragma pack(1) would set the structure as 1-byte alignment .
 */
#pragma pack(1)
struct rtw_custom_decrpt {
	u32 evt_id;
	u32 customer_id;
	enum custom_type type;
	u32 len;
	u8 data[MAX_DATA_SIZE];
};
#pragma pack()

enum rtw_phl_vr_test_mode
{
	VR_TEST_MODE_FAKE_TX_CYCLE = BIT0,
	VR_TEST_MODE_USE_STA_MAC = BIT1,
	VR_TEST_MODE_OP_CH_BY_PASS = BIT2,
	VR_TEST_MODE_MAX = BIT16
};

struct rtw_phl_custom_ampdu_cfg {
	u32 max_agg_time_32us;
	u32 max_agg_num;
};

#endif /*_PHL_CUSTOM_DEF_H_*/
