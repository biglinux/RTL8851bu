/******************************************************************************
 *
 * Copyright(c) 2012 - 2020 Realtek Corporation.
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
 ******************************************************************************/
#ifdef PHL_FEATURE_NIC

#if defined(MAC_8851B_SUPPORT)
#ifdef MAC_FW_8851B_U1
#ifdef MAC_FW_CATEGORY_NICCE
#define FW_CONFIG_IO_OFFLOAD 1
#define FW_CONFIG_SWITCH_CHANNEL_OFFLOAD 1
#define FW_CONFIG_TWT_NIC 1
#define FW_CONFIG_NAN 1
#define FW_CONFIG_SCAN_OFFLOAD 1
#define FW_CONFIG_WIFI_SENSING_CSI 1
#define FW_CONFIG_EFUSE_DUMP_OFFLOAD 1
#define FW_CONFIG_RATE_ADAPTIVE 1
#endif /* MAC_FW_CATEGORY_NICCE */

#ifdef MAC_FW_CATEGORY_NIC_PLE
#define FW_CONFIG_IO_OFFLOAD 1
#define FW_CONFIG_SWITCH_CHANNEL_OFFLOAD 1
#define FW_CONFIG_PS_SUPPORT_CPU_PG 1
#define FW_CONFIG_TWT_NIC 1
#define FW_CONFIG_EFUSE_DUMP_OFFLOAD 1
#define FW_CONFIG_RATE_ADAPTIVE 1
#endif /* MAC_FW_CATEGORY_NIC_PLE */

#ifdef MAC_FW_CATEGORY_NIC
#define FW_CONFIG_IO_OFFLOAD 1
#define FW_CONFIG_PS_SUPPORT_CPU_PG 1
#define FW_CONFIG_EFUSE_DUMP_OFFLOAD 1
#define FW_CONFIG_RATE_ADAPTIVE 1
#endif /* MAC_FW_CATEGORY_NIC */

#ifdef MAC_FW_CATEGORY_WOWLAN_PLE
#define FW_CONFIG_IO_OFFLOAD 1
#define FW_CONFIG_PS_SUPPORT_CPU_PG 1
#define FW_CONFIG_SCAN_OFFLOAD 1
#define FW_CONFIG_EFUSE_DUMP_OFFLOAD 1
#endif /* MAC_FW_CATEGORY_WOWLAN_PLE */

#ifdef MAC_FW_CATEGORY_WOWLAN
#define FW_CONFIG_IO_OFFLOAD 1
#define FW_CONFIG_PS_SUPPORT_CPU_PG 1
#define FW_CONFIG_SCAN_OFFLOAD 1
#define FW_CONFIG_EFUSE_DUMP_OFFLOAD 1
#endif /* MAC_FW_CATEGORY_WOWLAN */

#endif /* MAC_FW_8851B_U1 */
#ifdef MAC_FW_8851B_U2
#ifdef MAC_FW_CATEGORY_NICCE
#define FW_CONFIG_IO_OFFLOAD 1
#define FW_CONFIG_SWITCH_CHANNEL_OFFLOAD 1
#define FW_CONFIG_TWT_NIC 1
#define FW_CONFIG_NAN 1
#define FW_CONFIG_SCAN_OFFLOAD 1
#define FW_CONFIG_WIFI_SENSING_CSI 1
#define FW_CONFIG_EFUSE_DUMP_OFFLOAD 1
#define FW_CONFIG_RATE_ADAPTIVE 1
#endif /* MAC_FW_CATEGORY_NICCE */

#ifdef MAC_FW_CATEGORY_NIC_PLE
#define FW_CONFIG_IO_OFFLOAD 1
#define FW_CONFIG_SWITCH_CHANNEL_OFFLOAD 1
#define FW_CONFIG_PS_SUPPORT_CPU_PG 1
#define FW_CONFIG_TWT_NIC 1
#define FW_CONFIG_EFUSE_DUMP_OFFLOAD 1
#define FW_CONFIG_RATE_ADAPTIVE 1
#endif /* MAC_FW_CATEGORY_NIC_PLE */

#ifdef MAC_FW_CATEGORY_NIC
#define FW_CONFIG_IO_OFFLOAD 1
#define FW_CONFIG_PS_SUPPORT_CPU_PG 1
#define FW_CONFIG_EFUSE_DUMP_OFFLOAD 1
#define FW_CONFIG_RATE_ADAPTIVE 1
#endif /* MAC_FW_CATEGORY_NIC */

#ifdef MAC_FW_CATEGORY_WOWLAN_PLE
#define FW_CONFIG_IO_OFFLOAD 1
#define FW_CONFIG_PS_SUPPORT_CPU_PG 1
#define FW_CONFIG_SCAN_OFFLOAD 1
#define FW_CONFIG_EFUSE_DUMP_OFFLOAD 1
#endif /* MAC_FW_CATEGORY_WOWLAN_PLE */

#ifdef MAC_FW_CATEGORY_WOWLAN
#define FW_CONFIG_IO_OFFLOAD 1
#define FW_CONFIG_PS_SUPPORT_CPU_PG 1
#define FW_CONFIG_SCAN_OFFLOAD 1
#define FW_CONFIG_EFUSE_DUMP_OFFLOAD 1
#endif /* MAC_FW_CATEGORY_WOWLAN */

#endif /* MAC_FW_8851B_U2 */
#endif /* #if MAC_XXXX_SUPPORT */
#endif /* PHL_FEATURE_NIC */
