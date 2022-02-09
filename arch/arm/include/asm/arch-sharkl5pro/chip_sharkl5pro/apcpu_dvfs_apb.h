/*
 * Copyright (C) 2018 Unigroup Spreadtrum & RDA Technologies Co., Ltd.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 * updated at 2018-12-06 15:47:51
 *
 */

#ifndef APCPU_DVFS_APB_H
#define APCPU_DVFS_APB_H

#define CTL_BASE_APCPU_DVFS_APB 0x322A8000

#define REG_APCPU_DVFS_APB_APCPU_DVFS_HOLD_CTRL                           ( CTL_BASE_APCPU_DVFS_APB + 0x0000 )
#define REG_APCPU_DVFS_APB_APCPU_DVFS_WAIT_WINDOW_CFG1                    ( CTL_BASE_APCPU_DVFS_APB + 0x0008 )
#define REG_APCPU_DVFS_APB_APCPU_DVFS_WAIT_WINDOW_CFG2                    ( CTL_BASE_APCPU_DVFS_APB + 0x000C )
#define REG_APCPU_DVFS_APB_APCPU_CPU1_MIN_VOLTAGE_CFG0                    ( CTL_BASE_APCPU_DVFS_APB + 0x0010 )
#define REG_APCPU_DVFS_APB_APCPU_CPU0_MIN_VOLTAGE_CFG0                    ( CTL_BASE_APCPU_DVFS_APB + 0x0014 )
#define REG_APCPU_DVFS_APB_AUTO_TUNE_CFG                                  ( CTL_BASE_APCPU_DVFS_APB + 0x0018 )
#define REG_APCPU_DVFS_APB_DFS_IDLE_DISABLE_CFG                           ( CTL_BASE_APCPU_DVFS_APB + 0x001C )
#define REG_APCPU_DVFS_APB_APCPU_DCDC_CPU0_SW_DVFS_CTRL                   ( CTL_BASE_APCPU_DVFS_APB + 0x0020 )
#define REG_APCPU_DVFS_APB_APCPU_DCDC_CPU1_SW_DVFS_CTRL                   ( CTL_BASE_APCPU_DVFS_APB + 0x0024 )
#define REG_APCPU_DVFS_APB_APCPU_FREQ_UPDATE_BYPASS                       ( CTL_BASE_APCPU_DVFS_APB + 0x0028 )
#define REG_APCPU_DVFS_APB_CGM_APCPU_DVFS_CLK_GATE_CTRL                   ( CTL_BASE_APCPU_DVFS_APB + 0x002C )
#define REG_APCPU_DVFS_APB_APCPU_DVFS_VOLTAGE_DBG                         ( CTL_BASE_APCPU_DVFS_APB + 0x0030 )
#define REG_APCPU_DVFS_APB_APCPU_DVFS_VOLTAGE_DBG0                        ( CTL_BASE_APCPU_DVFS_APB + 0x0034 )
#define REG_APCPU_DVFS_APB_APCPU_DVFS_CGM_CFG_DBG0                        ( CTL_BASE_APCPU_DVFS_APB + 0x0038 )
#define REG_APCPU_DVFS_APB_APCPU_DVFS_CGM_CFG_DBG1                        ( CTL_BASE_APCPU_DVFS_APB + 0x003C )
#define REG_APCPU_DVFS_APB_APCPU_DVFS_CGM_CFG_DBG2                        ( CTL_BASE_APCPU_DVFS_APB + 0x0040 )
#define REG_APCPU_DVFS_APB_APCPU_CPU0_DVFS_STATE_DBG                      ( CTL_BASE_APCPU_DVFS_APB + 0x0044 )
#define REG_APCPU_DVFS_APB_APCPU_CPU1_DVFS_STATE_DBG                      ( CTL_BASE_APCPU_DVFS_APB + 0x004C )
#define REG_APCPU_DVFS_APB_ANANKE_LITE_PROMETHEUS_VOTE_DCDC_CPU0_CFG      ( CTL_BASE_APCPU_DVFS_APB + 0x0050 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX0                             ( CTL_BASE_APCPU_DVFS_APB + 0x0060 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX1                             ( CTL_BASE_APCPU_DVFS_APB + 0x0064 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX2                             ( CTL_BASE_APCPU_DVFS_APB + 0x0068 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX3                             ( CTL_BASE_APCPU_DVFS_APB + 0x006C )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX4                             ( CTL_BASE_APCPU_DVFS_APB + 0x0070 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX5                             ( CTL_BASE_APCPU_DVFS_APB + 0x0074 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX6                             ( CTL_BASE_APCPU_DVFS_APB + 0x0078 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX7                             ( CTL_BASE_APCPU_DVFS_APB + 0x007C )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX8                             ( CTL_BASE_APCPU_DVFS_APB + 0x0080 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX9                             ( CTL_BASE_APCPU_DVFS_APB + 0x0084 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX10                            ( CTL_BASE_APCPU_DVFS_APB + 0x0088 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX11                            ( CTL_BASE_APCPU_DVFS_APB + 0x008C )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX12                            ( CTL_BASE_APCPU_DVFS_APB + 0x0090 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX13                            ( CTL_BASE_APCPU_DVFS_APB + 0x0094 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX14                            ( CTL_BASE_APCPU_DVFS_APB + 0x0098 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX15                            ( CTL_BASE_APCPU_DVFS_APB + 0x009C )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX0                         ( CTL_BASE_APCPU_DVFS_APB + 0x00A0 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX1                         ( CTL_BASE_APCPU_DVFS_APB + 0x00A4 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX2                         ( CTL_BASE_APCPU_DVFS_APB + 0x00A8 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX3                         ( CTL_BASE_APCPU_DVFS_APB + 0x00AC )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX4                         ( CTL_BASE_APCPU_DVFS_APB + 0x00B0 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX5                         ( CTL_BASE_APCPU_DVFS_APB + 0x00B4 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX6                         ( CTL_BASE_APCPU_DVFS_APB + 0x00B8 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX7                         ( CTL_BASE_APCPU_DVFS_APB + 0x00BC )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX8                         ( CTL_BASE_APCPU_DVFS_APB + 0x00C0 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX9                         ( CTL_BASE_APCPU_DVFS_APB + 0x00C4 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX10                        ( CTL_BASE_APCPU_DVFS_APB + 0x00C8 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX11                        ( CTL_BASE_APCPU_DVFS_APB + 0x00CC )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX12                        ( CTL_BASE_APCPU_DVFS_APB + 0x00D0 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX13                        ( CTL_BASE_APCPU_DVFS_APB + 0x00D4 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX14                        ( CTL_BASE_APCPU_DVFS_APB + 0x00D8 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX15                        ( CTL_BASE_APCPU_DVFS_APB + 0x00DC )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX0                          ( CTL_BASE_APCPU_DVFS_APB + 0x0180 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX1                          ( CTL_BASE_APCPU_DVFS_APB + 0x0184 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX2                          ( CTL_BASE_APCPU_DVFS_APB + 0x0188 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX3                          ( CTL_BASE_APCPU_DVFS_APB + 0x018C )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX4                          ( CTL_BASE_APCPU_DVFS_APB + 0x0190 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX5                          ( CTL_BASE_APCPU_DVFS_APB + 0x0194 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX6                          ( CTL_BASE_APCPU_DVFS_APB + 0x0198 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX7                          ( CTL_BASE_APCPU_DVFS_APB + 0x019C )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX8                          ( CTL_BASE_APCPU_DVFS_APB + 0x01A0 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX9                          ( CTL_BASE_APCPU_DVFS_APB + 0x01A4 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX10                         ( CTL_BASE_APCPU_DVFS_APB + 0x01A8 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX11                         ( CTL_BASE_APCPU_DVFS_APB + 0x01AC )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX12                         ( CTL_BASE_APCPU_DVFS_APB + 0x01B0 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX13                         ( CTL_BASE_APCPU_DVFS_APB + 0x01B4 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX14                         ( CTL_BASE_APCPU_DVFS_APB + 0x01B8 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX15                         ( CTL_BASE_APCPU_DVFS_APB + 0x01BC )
#define REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX0                          ( CTL_BASE_APCPU_DVFS_APB + 0x01D4 )
#define REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX1                          ( CTL_BASE_APCPU_DVFS_APB + 0x01D8 )
#define REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX2                          ( CTL_BASE_APCPU_DVFS_APB + 0x01DC )
#define REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX3                          ( CTL_BASE_APCPU_DVFS_APB + 0x01E0 )
#define REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX4                          ( CTL_BASE_APCPU_DVFS_APB + 0x01E4 )
#define REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX5                          ( CTL_BASE_APCPU_DVFS_APB + 0x01E8 )
#define REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX6                          ( CTL_BASE_APCPU_DVFS_APB + 0x01EC )
#define REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX7                          ( CTL_BASE_APCPU_DVFS_APB + 0x01F0 )
#define REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX0                       ( CTL_BASE_APCPU_DVFS_APB + 0x01F4 )
#define REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX1                       ( CTL_BASE_APCPU_DVFS_APB + 0x01F8 )
#define REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX2                       ( CTL_BASE_APCPU_DVFS_APB + 0x01FC )
#define REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX3                       ( CTL_BASE_APCPU_DVFS_APB + 0x0200 )
#define REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX4                       ( CTL_BASE_APCPU_DVFS_APB + 0x0204 )
#define REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX5                       ( CTL_BASE_APCPU_DVFS_APB + 0x0208 )
#define REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX6                       ( CTL_BASE_APCPU_DVFS_APB + 0x020C )
#define REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX7                       ( CTL_BASE_APCPU_DVFS_APB + 0x0210 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX_CFG                          ( CTL_BASE_APCPU_DVFS_APB + 0x0214 )
#define REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX_IDLE_CFG                     ( CTL_BASE_APCPU_DVFS_APB + 0x0218 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX_CFG                      ( CTL_BASE_APCPU_DVFS_APB + 0x0224 )
#define REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX_IDLE_CFG                 ( CTL_BASE_APCPU_DVFS_APB + 0x0228 )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX_CFG                       ( CTL_BASE_APCPU_DVFS_APB + 0x022C )
#define REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX_IDLE_CFG                  ( CTL_BASE_APCPU_DVFS_APB + 0x0230 )
#define REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX_CFG                       ( CTL_BASE_APCPU_DVFS_APB + 0x0234 )
#define REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX_IDLE_CFG                  ( CTL_BASE_APCPU_DVFS_APB + 0x0238 )
#define REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX_CFG                    ( CTL_BASE_APCPU_DVFS_APB + 0x023C )
#define REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX_IDLE_CFG               ( CTL_BASE_APCPU_DVFS_APB + 0x0240 )
#define REG_APCPU_DVFS_APB_MPLL0_DVFS_CTRL_CFG                            ( CTL_BASE_APCPU_DVFS_APB + 0x0244 )
#define REG_APCPU_DVFS_APB_MPLL0_DVFS_DELAY_CFG0                          ( CTL_BASE_APCPU_DVFS_APB + 0x0248 )
#define REG_APCPU_DVFS_APB_MPLL0_DVFS_DELAY_CFG1                          ( CTL_BASE_APCPU_DVFS_APB + 0x024C )
#define REG_APCPU_DVFS_APB_MPLL0_DVFS_DELAY_CFG2                          ( CTL_BASE_APCPU_DVFS_APB + 0x0250 )
#define REG_APCPU_DVFS_APB_MPLL0_DVFS_DELAY_CFG3                          ( CTL_BASE_APCPU_DVFS_APB + 0x0254 )
#define REG_APCPU_DVFS_APB_MPLL1_DVFS_CTRL_CFG                            ( CTL_BASE_APCPU_DVFS_APB + 0x0258 )
#define REG_APCPU_DVFS_APB_MPLL1_DVFS_DELAY_CFG0                          ( CTL_BASE_APCPU_DVFS_APB + 0x025C )
#define REG_APCPU_DVFS_APB_MPLL1_DVFS_DELAY_CFG1                          ( CTL_BASE_APCPU_DVFS_APB + 0x0260 )
#define REG_APCPU_DVFS_APB_MPLL1_DVFS_DELAY_CFG2                          ( CTL_BASE_APCPU_DVFS_APB + 0x0264 )
#define REG_APCPU_DVFS_APB_MPLL1_DVFS_DELAY_CFG3                          ( CTL_BASE_APCPU_DVFS_APB + 0x0268 )
#define REG_APCPU_DVFS_APB_MPLL2_DVFS_CTRL_CFG                            ( CTL_BASE_APCPU_DVFS_APB + 0x026C )
#define REG_APCPU_DVFS_APB_MPLL2_DVFS_DELAY_CFG0                          ( CTL_BASE_APCPU_DVFS_APB + 0x0270 )
#define REG_APCPU_DVFS_APB_MPLL2_DVFS_DELAY_CFG1                          ( CTL_BASE_APCPU_DVFS_APB + 0x0274 )
#define REG_APCPU_DVFS_APB_MPLL2_DVFS_DELAY_CFG2                          ( CTL_BASE_APCPU_DVFS_APB + 0x0278 )
#define REG_APCPU_DVFS_APB_MPLL2_DVFS_DELAY_CFG3                          ( CTL_BASE_APCPU_DVFS_APB + 0x027C )
#define REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX0                          ( CTL_BASE_APCPU_DVFS_APB + 0x0280 )
#define REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX1                          ( CTL_BASE_APCPU_DVFS_APB + 0x0284 )
#define REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX2                          ( CTL_BASE_APCPU_DVFS_APB + 0x0288 )
#define REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX3                          ( CTL_BASE_APCPU_DVFS_APB + 0x028C )
#define REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX4                          ( CTL_BASE_APCPU_DVFS_APB + 0x0290 )
#define REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX5                          ( CTL_BASE_APCPU_DVFS_APB + 0x0294 )
#define REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX6                          ( CTL_BASE_APCPU_DVFS_APB + 0x0298 )
#define REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX7                          ( CTL_BASE_APCPU_DVFS_APB + 0x029C )
#define REG_APCPU_DVFS_APB_MPLL_DVFS_STATE_DEBUG                          ( CTL_BASE_APCPU_DVFS_APB + 0x02A0 )
#define REG_APCPU_DVFS_APB_APCPU_FREQ_UPDATE_STATE0                       ( CTL_BASE_APCPU_DVFS_APB + 0x02A4 )
#define REG_APCPU_DVFS_APB_CGM_RELOCK_BYP_CFG0                            ( CTL_BASE_APCPU_DVFS_APB + 0x02A8 )
#define REG_APCPU_DVFS_APB_APCPU_GFREE_WAIT_DELAY_CFG0                    ( CTL_BASE_APCPU_DVFS_APB + 0x02AC )
#define REG_APCPU_DVFS_APB_APCPU_GFREE_WAIT_DELAY_CFG1                    ( CTL_BASE_APCPU_DVFS_APB + 0x02B0 )
#define REG_APCPU_DVFS_APB_APCPU_GFREE_WAIT_DELAY_CFG2                    ( CTL_BASE_APCPU_DVFS_APB + 0x02B4 )
#define REG_APCPU_DVFS_APB_APCPU_GFREE_WAIT_DELAY_CFG3                    ( CTL_BASE_APCPU_DVFS_APB + 0x02B8 )
#define REG_APCPU_DVFS_APB_MPLL0_DVFS_DELAY_CFG4                          ( CTL_BASE_APCPU_DVFS_APB + 0x02BC )
#define REG_APCPU_DVFS_APB_MPLL1_DVFS_DELAY_CFG4                          ( CTL_BASE_APCPU_DVFS_APB + 0x02C0 )
#define REG_APCPU_DVFS_APB_MPLL2_DVFS_DELAY_CFG4                          ( CTL_BASE_APCPU_DVFS_APB + 0x02C4 )
#define REG_APCPU_DVFS_APB_CGM_RELOCK_BYP_CFG1                            ( CTL_BASE_APCPU_DVFS_APB + 0x02C8 )
#define REG_APCPU_DVFS_APB_APCPU_FREQ_UPD_TYPE_CFG                        ( CTL_BASE_APCPU_DVFS_APB + 0x02CC )
#define REG_APCPU_DVFS_APB_MPLL_INDEX_READ                                ( CTL_BASE_APCPU_DVFS_APB + 0x02D0 )
#define REG_APCPU_DVFS_APB_APCPU_FREQ_UPDATE_STATE1                       ( CTL_BASE_APCPU_DVFS_APB + 0x02D4 )
#define REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX_CFG                       ( CTL_BASE_APCPU_DVFS_APB + 0x02E0 )
#define REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX_IDLE_CFG                  ( CTL_BASE_APCPU_DVFS_APB + 0x02E4 )
#define REG_APCPU_DVFS_APB_APCPU_DVFS_RESERVED_REG_CFG0                   ( CTL_BASE_APCPU_DVFS_APB + 0x02F0 )
#define REG_APCPU_DVFS_APB_APCPU_DVFS_RESERVED_REG_CFG1                   ( CTL_BASE_APCPU_DVFS_APB + 0x02F4 )
#define REG_APCPU_DVFS_APB_APCPU_DVFS_RESERVED_REG_CFG2                   ( CTL_BASE_APCPU_DVFS_APB + 0x02F8 )
#define REG_APCPU_DVFS_APB_APCPU_DVFS_RESERVED_REG_CFG3                   ( CTL_BASE_APCPU_DVFS_APB + 0x02FC )

/* REG_APCPU_DVFS_APB_APCPU_DVFS_HOLD_CTRL */

#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_DVFS_HOLD              BIT(2)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_DVFS_HOLD              BIT(1)

/* REG_APCPU_DVFS_APB_APCPU_DVFS_WAIT_WINDOW_CFG1 */

#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_DVFS_UP_WINDOW(x)      (((x) & 0xFFFF) << 16)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_DVFS_DOWN_WINDOW(x)    (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_APCPU_DVFS_WAIT_WINDOW_CFG2 */

#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_DVFS_UP_WINDOW(x)      (((x) & 0xFFFF) << 16)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_DVFS_DOWN_WINDOW(x)    (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_APCPU_CPU1_MIN_VOLTAGE_CFG0 */

#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_MIN_VOLTAGE(x)         (((x) & 0x7))

/* REG_APCPU_DVFS_APB_APCPU_CPU0_MIN_VOLTAGE_CFG0 */

#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_MIN_VOLTAGE(x)         (((x) & 0x7))

/* REG_APCPU_DVFS_APB_AUTO_TUNE_CFG */

#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_AUTO_TUNE_EN             BIT(2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_AUTO_TUNE_EN             BIT(1)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_AUTO_TUNE_EN          BIT(0)

/* REG_APCPU_DVFS_APB_DFS_IDLE_DISABLE_CFG */

#define BIT_APCPU_DVFS_APB_APCPU_CORE7_DFS_IDLE_DISABLE           BIT(11)
#define BIT_APCPU_DVFS_APB_APCPU_CORE6_DFS_IDLE_DISABLE           BIT(10)
#define BIT_APCPU_DVFS_APB_APCPU_CORE5_DFS_IDLE_DISABLE           BIT(9)
#define BIT_APCPU_DVFS_APB_APCPU_CORE4_DFS_IDLE_DISABLE           BIT(8)
#define BIT_APCPU_DVFS_APB_APCPU_GIC_DFS_IDLE_DISABLE             BIT(7)
#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_DFS_IDLE_DISABLE          BIT(6)
#define BIT_APCPU_DVFS_APB_APCPU_ATB_GRP_DFS_IDLE_DISABLE         BIT(5)
#define BIT_APCPU_DVFS_APB_APCPU_SCU_GRP_DFS_IDLE_DISABLE         BIT(4)
#define BIT_APCPU_DVFS_APB_APCPU_CORE3_DFS_IDLE_DISABLE           BIT(3)
#define BIT_APCPU_DVFS_APB_APCPU_CORE2_DFS_IDLE_DISABLE           BIT(2)
#define BIT_APCPU_DVFS_APB_APCPU_CORE1_DFS_IDLE_DISABLE           BIT(1)
#define BIT_APCPU_DVFS_APB_APCPU_CORE0_DFS_IDLE_DISABLE           BIT(0)

/* REG_APCPU_DVFS_APB_APCPU_DCDC_CPU0_SW_DVFS_CTRL */

#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_DVFS_ACK               BIT(8)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_DVFS_VOLTAGE_SW(x)     (((x) & 0x7) << 4)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_CURRENT_VOLTAGE_SW(x)  (((x) & 0x7) << 1)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_DVFS_REQ_SW            BIT(0)

/* REG_APCPU_DVFS_APB_APCPU_DCDC_CPU1_SW_DVFS_CTRL */

#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_DVFS_ACK               BIT(8)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_DVFS_VOLTAGE_SW(x)     (((x) & 0x7) << 4)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_CURRENT_VOLTAGE_SW(x)  (((x) & 0x7) << 1)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_DVFS_REQ_SW            BIT(0)

/* REG_APCPU_DVFS_APB_APCPU_FREQ_UPDATE_BYPASS */

#define BIT_APCPU_DVFS_APB_REG_APCPU_GIC_FREQ_UPD_EN_BYP          BIT(11)
#define BIT_APCPU_DVFS_APB_REG_APCPU_PERIPH_FREQ_UPD_EN_BYP       BIT(10)
#define BIT_APCPU_DVFS_APB_REG_APCPU_ATB_FREQ_UPD_EN_BYP          BIT(9)
#define BIT_APCPU_DVFS_APB_REG_APCPU_SCU_FREQ_UPD_EN_BYP          BIT(8)
#define BIT_APCPU_DVFS_APB_REG_APCPU_CORE7_FREQ_UPD_EN_BYP        BIT(7)
#define BIT_APCPU_DVFS_APB_REG_APCPU_CORE6_FREQ_UPD_EN_BYP        BIT(6)
#define BIT_APCPU_DVFS_APB_REG_APCPU_CORE5_FREQ_UPD_EN_BYP        BIT(5)
#define BIT_APCPU_DVFS_APB_REG_APCPU_CORE4_FREQ_UPD_EN_BYP        BIT(4)
#define BIT_APCPU_DVFS_APB_REG_APCPU_CORE3_FREQ_UPD_EN_BYP        BIT(3)
#define BIT_APCPU_DVFS_APB_REG_APCPU_CORE2_FREQ_UPD_EN_BYP        BIT(2)
#define BIT_APCPU_DVFS_APB_REG_APCPU_CORE1_FREQ_UPD_EN_BYP        BIT(1)
#define BIT_APCPU_DVFS_APB_REG_APCPU_CORE0_FREQ_UPD_EN_BYP        BIT(0)

/* REG_APCPU_DVFS_APB_CGM_APCPU_DVFS_CLK_GATE_CTRL */

#define BIT_APCPU_DVFS_APB_CGM_APCPU_DVFS_FORCE_EN                BIT(1)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_DVFS_AUTO_GATE_SEL           BIT(0)

/* REG_APCPU_DVFS_APB_APCPU_DVFS_VOLTAGE_DBG */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_VOLTAGE(x)                   (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_VOLTAGE(x)                (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_APCPU_ATB_VOLTAGE(x)                   (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOLTAGE(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_APCPU_CORE3_VOLTAGE(x)                 (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_APCPU_CORE2_VOLTAGE(x)                 (((x) & 0x7) << 6)
#define BIT_APCPU_DVFS_APB_APCPU_CORE1_VOLTAGE(x)                 (((x) & 0x7) << 3)
#define BIT_APCPU_DVFS_APB_APCPU_CORE0_VOLTAGE(x)                 (((x) & 0x7))

/* REG_APCPU_DVFS_APB_APCPU_DVFS_VOLTAGE_DBG0 */

#define BIT_APCPU_DVFS_APB_APCPU_CORE7_VOLTAGE(x)                 (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_APCPU_CORE6_VOLTAGE(x)                 (((x) & 0x7) << 6)
#define BIT_APCPU_DVFS_APB_APCPU_CORE5_VOLTAGE(x)                 (((x) & 0x7) << 3)
#define BIT_APCPU_DVFS_APB_APCPU_CORE4_VOLTAGE(x)                 (((x) & 0x7))

/* REG_APCPU_DVFS_APB_APCPU_DVFS_CGM_CFG_DBG0 */

#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_DVFS(x)              (((x) & 0x7) << 25)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_DVFS(x)              (((x) & 0x7) << 22)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_DVFS(x)              (((x) & 0x3) << 20)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE3_DIV_DVFS(x)            (((x) & 0x7) << 17)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE3_SEL_DVFS(x)            (((x) & 0x3) << 15)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE2_DIV_DVFS(x)            (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE2_SEL_DVFS(x)            (((x) & 0x3) << 10)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE1_DIV_DVFS(x)            (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE1_SEL_DVFS(x)            (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE0_DIV_DVFS(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE0_SEL_DVFS(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_DVFS_CGM_CFG_DBG1 */

#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_DIV_DVFS(x)              (((x) & 0x7) << 14)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_SEL_DVFS(x)              (((x) & 0x3) << 12)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_DEBUG_APB_DIV_DVFS(x)        (((x) & 0x3) << 10)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_DIV_DVFS(x)              (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_SEL_DVFS(x)              (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_DIV_DVFS(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_SEL_DVFS(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_DVFS_CGM_CFG_DBG2 */

#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE7_DIV_DVFS(x)            (((x) & 0x7) << 17)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE7_SEL_DVFS(x)            (((x) & 0x3) << 15)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE6_DIV_DVFS(x)            (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE6_SEL_DVFS(x)            (((x) & 0x3) << 10)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE5_DIV_DVFS(x)            (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE5_SEL_DVFS(x)            (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE4_DIV_DVFS(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE4_SEL_DVFS(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_CPU0_DVFS_STATE_DBG */

#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_DVFS_WINDOW_CNT(x)     (((x) & 0xFFFF) << 9)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_CURRENT_VOLTAGE(x)     (((x) & 0x7) << 6)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_VOTE_VOL(x)            (((x) & 0x7) << 3)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU0_DVFS_STATE(x)          (((x) & 0x7))

/* REG_APCPU_DVFS_APB_APCPU_CPU1_DVFS_STATE_DBG */

#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_DVFS_WINDOW_CNT(x)     (((x) & 0xFFFF) << 9)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_CURRENT_VOLTAGE(x)     (((x) & 0x7) << 6)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_VOTE_VOL(x)            (((x) & 0x7) << 3)
#define BIT_APCPU_DVFS_APB_APCPU_DCDC_CPU1_DVFS_STATE(x)          (((x) & 0x7))

/* REG_APCPU_DVFS_APB_ANANKE_LITE_PROMETHEUS_VOTE_DCDC_CPU0_CFG */

#define BIT_APCPU_DVFS_APB_APCPU_CORE7_VOTE_DCDC_CPU0_EN          BIT(1)
#define BIT_APCPU_DVFS_APB_APCPU_CORE6_VOTE_DCDC_CPU0_EN          BIT(0)

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX0 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX0(x)              (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX0(x)                   (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX0(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX0(x)           (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX0(x)              (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX0(x)               (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX0(x)               (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX1 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX1(x)              (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX1(x)                   (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX1(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX1(x)           (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX1(x)              (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX1(x)               (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX1(x)               (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX2 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX2(x)              (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX2(x)                   (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX2(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX2(x)           (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX2(x)              (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX2(x)               (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX2(x)               (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX3 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX3(x)              (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX3(x)                   (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX3(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX3(x)           (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX3(x)              (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX3(x)               (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX3(x)               (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX4 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX4(x)              (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX4(x)                   (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX4(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX4(x)           (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX4(x)              (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX4(x)               (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX4(x)               (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX5 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX5(x)              (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX5(x)                   (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX5(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX5(x)           (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX5(x)              (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX5(x)               (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX5(x)               (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX6 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX6(x)              (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX6(x)                   (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX6(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX6(x)           (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX6(x)              (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX6(x)               (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX6(x)               (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX7 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX7(x)              (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX7(x)                   (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX7(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX7(x)           (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX7(x)              (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX7(x)               (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX7(x)               (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX8 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX8(x)              (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX8(x)                   (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX8(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX8(x)           (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX8(x)              (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX8(x)               (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX8(x)               (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX9 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX9(x)              (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX9(x)                   (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX9(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX9(x)           (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX9(x)              (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX9(x)               (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX9(x)               (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX10 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX10(x)             (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX10(x)                  (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX10(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX10(x)          (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX10(x)             (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX10(x)              (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX10(x)              (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX11 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX11(x)             (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX11(x)                  (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX11(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX11(x)          (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX11(x)             (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX11(x)              (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX11(x)              (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX12 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX12(x)             (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX12(x)                  (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX12(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX12(x)          (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX12(x)             (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX12(x)              (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX12(x)              (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX13 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX13(x)             (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX13(x)                  (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX13(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX13(x)          (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX13(x)             (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX13(x)              (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX13(x)              (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX14 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX14(x)             (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX14(x)                  (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX14(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX14(x)          (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX14(x)             (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX14(x)              (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX14(x)              (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX15 */

#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_GIC_INDEX15(x)             (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_ANANKE_VOL_INDEX15(x)                  (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_INDEX15(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_PERIPH_INDEX15(x)          (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_ANANKE_VOTE_SCU_INDEX15(x)             (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_DIV_INDEX15(x)              (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_ANANKE_SEL_INDEX15(x)              (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX0 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX0(x)          (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX0(x)     (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX0(x)               (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX0(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX0(x)       (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX0(x)          (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX0(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX0(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX1 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX1(x)          (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX1(x)     (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX1(x)               (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX1(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX1(x)       (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX1(x)          (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX1(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX1(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX2 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX2(x)          (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX2(x)     (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX2(x)               (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX2(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX2(x)       (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX2(x)          (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX2(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX2(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX3 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX3(x)          (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX3(x)     (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX3(x)               (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX3(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX3(x)       (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX3(x)          (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX3(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX3(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX4 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX4(x)          (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX4(x)     (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX4(x)               (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX4(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX4(x)       (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX4(x)          (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX4(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX4(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX5 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX5(x)          (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX5(x)     (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX5(x)               (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX5(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX5(x)       (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX5(x)          (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX5(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX5(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX6 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX6(x)          (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX6(x)     (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX6(x)               (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX6(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX6(x)       (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX6(x)          (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX6(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX6(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX7 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX7(x)          (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX7(x)     (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX7(x)               (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX7(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX7(x)       (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX7(x)          (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX7(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX7(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX8 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX8(x)          (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX8(x)     (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX8(x)               (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX8(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX8(x)       (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX8(x)          (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX8(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX8(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX9 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX9(x)          (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX9(x)     (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX9(x)               (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX9(x)                   (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX9(x)       (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX9(x)          (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX9(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX9(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX10 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX10(x)         (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX10(x)    (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX10(x)              (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX10(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX10(x)      (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX10(x)         (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX10(x)          (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX10(x)          (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX11 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX11(x)         (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX11(x)    (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX11(x)              (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX11(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX11(x)      (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX11(x)         (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX11(x)          (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX11(x)          (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX12 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX12(x)         (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX12(x)    (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX12(x)              (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX12(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX12(x)      (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX12(x)         (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX12(x)          (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX12(x)          (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX13 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX13(x)         (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX13(x)    (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX13(x)              (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX13(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX13(x)      (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX13(x)         (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX13(x)          (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX13(x)          (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX14 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX14(x)         (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX14(x)    (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX14(x)              (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX14(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX14(x)      (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX14(x)         (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX14(x)          (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX14(x)          (((x) & 0x3))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX15 */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_GIC_INDEX15(x)         (((x) & 0x7) << 21)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_DCDC_CPU0_VOL_INDEX15(x)    (((x) & 0x7) << 18)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOL_INDEX15(x)              (((x) & 0x7) << 15)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_INDEX15(x)                  (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_PERIPH_INDEX15(x)      (((x) & 0x7) << 9)
#define BIT_APCPU_DVFS_APB_PROMETHEUS_VOTE_SCU_INDEX15(x)         (((x) & 0xF) << 5)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_DIV_INDEX15(x)          (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_PROMETHEUS_SEL_INDEX15(x)          (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX0 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX0(x)                (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX0(x)                   (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX0(x)            (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX0(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX0(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX1 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX1(x)                (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX1(x)                   (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX1(x)            (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX1(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX1(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX2 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX2(x)                (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX2(x)                   (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX2(x)            (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX2(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX2(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX3 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX3(x)                (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX3(x)                   (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX3(x)            (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX3(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX3(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX4 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX4(x)                (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX4(x)                   (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX4(x)            (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX4(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX4(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX5 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX5(x)                (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX5(x)                   (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX5(x)            (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX5(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX5(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX6 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX6(x)                (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX6(x)                   (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX6(x)            (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX6(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX6(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX7 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX7(x)                (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX7(x)                   (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX7(x)            (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX7(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX7(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX8 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX8(x)                (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX8(x)                   (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX8(x)            (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX8(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX8(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX9 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX9(x)                (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX9(x)                   (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX9(x)            (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX9(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX9(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX10 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX10(x)               (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX10(x)                  (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX10(x)           (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX10(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX10(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX11 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX11(x)               (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX11(x)                  (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX11(x)           (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX11(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX11(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX12 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX12(x)               (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX12(x)                  (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX12(x)           (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX12(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX12(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX13 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX13(x)               (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX13(x)                  (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX13(x)           (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX13(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX13(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX14 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX14(x)               (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX14(x)                  (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX14(x)           (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX14(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX14(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX15 */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_VOL_INDEX15(x)               (((x) & 0x7) << 11)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_INDEX15(x)                  (((x) & 0x7) << 8)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_INDEX15(x)           (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_INDEX15(x)           (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_INDEX15(x)           (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX0 */

#define BIT_APCPU_DVFS_APB_APCPU_ATB_VOL_INDEX0(x)                (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_DEBUG_APB_DIV_INDEX0(x)      (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_DIV_INDEX0(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_SEL_INDEX0(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX1 */

#define BIT_APCPU_DVFS_APB_APCPU_ATB_VOL_INDEX1(x)                (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_DEBUG_APB_DIV_INDEX1(x)      (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_DIV_INDEX1(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_SEL_INDEX1(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX2 */

#define BIT_APCPU_DVFS_APB_APCPU_ATB_VOL_INDEX2(x)                (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_DEBUG_APB_DIV_INDEX2(x)      (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_DIV_INDEX2(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_SEL_INDEX2(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX3 */

#define BIT_APCPU_DVFS_APB_APCPU_ATB_VOL_INDEX3(x)                (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_DEBUG_APB_DIV_INDEX3(x)      (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_DIV_INDEX3(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_SEL_INDEX3(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX4 */

#define BIT_APCPU_DVFS_APB_APCPU_ATB_VOL_INDEX4(x)                (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_DEBUG_APB_DIV_INDEX4(x)      (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_DIV_INDEX4(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_SEL_INDEX4(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX5 */

#define BIT_APCPU_DVFS_APB_APCPU_ATB_VOL_INDEX5(x)                (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_DEBUG_APB_DIV_INDEX5(x)      (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_DIV_INDEX5(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_SEL_INDEX5(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX6 */

#define BIT_APCPU_DVFS_APB_APCPU_ATB_VOL_INDEX6(x)                (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_DEBUG_APB_DIV_INDEX6(x)      (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_DIV_INDEX6(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_SEL_INDEX6(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX7 */

#define BIT_APCPU_DVFS_APB_APCPU_ATB_VOL_INDEX7(x)                (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_DEBUG_APB_DIV_INDEX7(x)      (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_DIV_INDEX7(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_ATB_SEL_INDEX7(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX0 */

#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_VOL_INDEX0(x)             (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_DIV_INDEX0(x)         (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_SEL_INDEX0(x)         (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX1 */

#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_VOL_INDEX1(x)             (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_DIV_INDEX1(x)         (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_SEL_INDEX1(x)         (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX2 */

#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_VOL_INDEX2(x)             (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_DIV_INDEX2(x)         (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_SEL_INDEX2(x)         (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX3 */

#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_VOL_INDEX3(x)             (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_DIV_INDEX3(x)         (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_SEL_INDEX3(x)         (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX4 */

#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_VOL_INDEX4(x)             (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_DIV_INDEX4(x)         (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_SEL_INDEX4(x)         (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX5 */

#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_VOL_INDEX5(x)             (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_DIV_INDEX5(x)         (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_SEL_INDEX5(x)         (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX6 */

#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_VOL_INDEX6(x)             (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_DIV_INDEX6(x)         (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_SEL_INDEX6(x)         (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX7 */

#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_VOL_INDEX7(x)             (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_DIV_INDEX7(x)         (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_PERIPH_SEL_INDEX7(x)         (((x) & 0x3))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX_CFG */

#define BIT_APCPU_DVFS_APB_ANANKE_DVFS_INDEX(x)                   (((x) & 0xF))

/* REG_APCPU_DVFS_APB_ANANKE_DVFS_INDEX_IDLE_CFG */

#define BIT_APCPU_DVFS_APB_ANANKE_DVFS_INDEX_IDLE(x)              (((x) & 0xF))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX_CFG */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX(x)               (((x) & 0xF))

/* REG_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX_IDLE_CFG */

#define BIT_APCPU_DVFS_APB_PROMETHEUS_DVFS_INDEX_IDLE(x)          (((x) & 0xF))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX_CFG */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX(x)                (((x) & 0xF))

/* REG_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX_IDLE_CFG */

#define BIT_APCPU_DVFS_APB_APCPU_SCU_DVFS_INDEX_IDLE(x)           (((x) & 0xF))

/* REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX_CFG */

#define BIT_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX(x)                (((x) & 0x7))

/* REG_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX_IDLE_CFG */

#define BIT_APCPU_DVFS_APB_APCPU_ATB_DVFS_INDEX_IDLE(x)           (((x) & 0x7))

/* REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX_CFG */

#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX(x)             (((x) & 0x7))

/* REG_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX_IDLE_CFG */

#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_INDEX_IDLE(x)        (((x) & 0x7))

/* REG_APCPU_DVFS_APB_MPLL0_DVFS_CTRL_CFG */

#define BIT_APCPU_DVFS_APB_MPLL0_POWER_OFF_CNT_EN                 BIT(2)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_AUTO_RELOCK_EN              BIT(1)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_AUTO_PD_EN                  BIT(0)

/* REG_APCPU_DVFS_APB_MPLL0_DVFS_DELAY_CFG0 */

#define BIT_APCPU_DVFS_APB_MPLL0_RELOCK_DELAY(x)                  (((x) & 0xFFFF) << 16)
#define BIT_APCPU_DVFS_APB_MPLL0_POWER_ON_RELOCK_WINDOW(x)        (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_MPLL0_DVFS_DELAY_CFG1 */

#define BIT_APCPU_DVFS_APB_MPLL0_UNGATE_DELAY(x)                  (((x) & 0xFFFF) << 16)
#define BIT_APCPU_DVFS_APB_MPLL0_GATE_DELAY(x)                    (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_MPLL0_DVFS_DELAY_CFG2 */

#define BIT_APCPU_DVFS_APB_MPLL0_POWER_OFF_DELAY(x)               (((x) & 0xFFFF) << 16)

/* REG_APCPU_DVFS_APB_MPLL0_DVFS_DELAY_CFG3 */

#define BIT_APCPU_DVFS_APB_MPLL0_POWER_OFF_WAIT_WINDOW(x)         (((x) & 0xFFFF) << 16)
#define BIT_APCPU_DVFS_APB_MPLL0_RELOCK_UPD_DELAY(x)              (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_MPLL1_DVFS_CTRL_CFG */

#define BIT_APCPU_DVFS_APB_MPLL1_POWER_OFF_CNT_EN                 BIT(2)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_AUTO_RELOCK_EN              BIT(1)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_AUTO_PD_EN                  BIT(0)

/* REG_APCPU_DVFS_APB_MPLL1_DVFS_DELAY_CFG0 */

#define BIT_APCPU_DVFS_APB_MPLL1_RELOCK_DELAY(x)                  (((x) & 0xFFFF) << 16)
#define BIT_APCPU_DVFS_APB_MPLL1_POWER_ON_RELOCK_WINDOW(x)        (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_MPLL1_DVFS_DELAY_CFG1 */

#define BIT_APCPU_DVFS_APB_MPLL1_UNGATE_DELAY(x)                  (((x) & 0xFFFF) << 16)
#define BIT_APCPU_DVFS_APB_MPLL1_GATE_DELAY(x)                    (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_MPLL1_DVFS_DELAY_CFG2 */

#define BIT_APCPU_DVFS_APB_MPLL1_POWER_OFF_DELAY(x)               (((x) & 0xFFFF) << 16)

/* REG_APCPU_DVFS_APB_MPLL1_DVFS_DELAY_CFG3 */

#define BIT_APCPU_DVFS_APB_MPLL1_POWER_OFF_WAIT_WINDOW(x)         (((x) & 0xFFFF) << 16)
#define BIT_APCPU_DVFS_APB_MPLL1_RELOCK_UPD_DELAY(x)              (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_MPLL2_DVFS_CTRL_CFG */

#define BIT_APCPU_DVFS_APB_MPLL2_POWER_OFF_CNT_EN                 BIT(2)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_AUTO_RELOCK_EN              BIT(1)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_AUTO_PD_EN                  BIT(0)

/* REG_APCPU_DVFS_APB_MPLL2_DVFS_DELAY_CFG0 */

#define BIT_APCPU_DVFS_APB_MPLL2_RELOCK_DELAY(x)                  (((x) & 0xFFFF) << 16)
#define BIT_APCPU_DVFS_APB_MPLL2_POWER_ON_RELOCK_WINDOW(x)        (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_MPLL2_DVFS_DELAY_CFG1 */

#define BIT_APCPU_DVFS_APB_MPLL2_UNGATE_DELAY(x)                  (((x) & 0xFFFF) << 16)
#define BIT_APCPU_DVFS_APB_MPLL2_GATE_DELAY(x)                    (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_MPLL2_DVFS_DELAY_CFG2 */

#define BIT_APCPU_DVFS_APB_MPLL2_POWER_OFF_DELAY(x)               (((x) & 0xFFFF) << 16)

/* REG_APCPU_DVFS_APB_MPLL2_DVFS_DELAY_CFG3 */

#define BIT_APCPU_DVFS_APB_MPLL2_POWER_OFF_WAIT_WINDOW(x)         (((x) & 0xFFFF) << 16)
#define BIT_APCPU_DVFS_APB_MPLL2_RELOCK_UPD_DELAY(x)              (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX0 */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_VOL_INDEX0(x)                (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_DIV_INDEX0(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_SEL_INDEX0(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX1 */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_VOL_INDEX1(x)                (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_DIV_INDEX1(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_SEL_INDEX1(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX2 */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_VOL_INDEX2(x)                (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_DIV_INDEX2(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_SEL_INDEX2(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX3 */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_VOL_INDEX3(x)                (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_DIV_INDEX3(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_SEL_INDEX3(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX4 */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_VOL_INDEX4(x)                (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_DIV_INDEX4(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_SEL_INDEX4(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX5 */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_VOL_INDEX5(x)                (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_DIV_INDEX5(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_SEL_INDEX5(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX6 */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_VOL_INDEX6(x)                (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_DIV_INDEX6(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_SEL_INDEX6(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX7 */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_VOL_INDEX7(x)                (((x) & 0x7) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_DIV_INDEX7(x)            (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_GIC_SEL_INDEX7(x)            (((x) & 0x3))

/* REG_APCPU_DVFS_APB_MPLL_DVFS_STATE_DEBUG */

#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_CTRL_STATE(x)               (((x) & 0xF) << 8)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_CTRL_STATE(x)               (((x) & 0xF) << 4)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_CTRL_STATE(x)               (((x) & 0xF))

/* REG_APCPU_DVFS_APB_APCPU_FREQ_UPDATE_STATE0 */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_DVFS_FREQ_UPD_STATE(x)       (((x) & 0xF) << 28)
#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_DVFS_FREQ_UPD_STATE(x)    (((x) & 0xF) << 24)
#define BIT_APCPU_DVFS_APB_APCPU_ATB_DVFS_FREQ_UPD_STATE(x)       (((x) & 0xF) << 20)
#define BIT_APCPU_DVFS_APB_APCPU_SCU_DVFS_FREQ_UPD_STATE(x)       (((x) & 0xF) << 16)
#define BIT_APCPU_DVFS_APB_APCPU_CORE3_DVFS_FREQ_UPD_STATE(x)     (((x) & 0xF) << 12)
#define BIT_APCPU_DVFS_APB_APCPU_CORE2_DVFS_FREQ_UPD_STATE(x)     (((x) & 0xF) << 8)
#define BIT_APCPU_DVFS_APB_APCPU_CORE1_DVFS_FREQ_UPD_STATE(x)     (((x) & 0xF) << 4)
#define BIT_APCPU_DVFS_APB_APCPU_CORE0_DVFS_FREQ_UPD_STATE(x)     (((x) & 0xF))

/* REG_APCPU_DVFS_APB_CGM_RELOCK_BYP_CFG0 */

#define BIT_APCPU_DVFS_APB_CGM_APCPU_ACE_DIV_RELOCK_BYP(x)        (((x) & 0x7) << 25)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_DIV_RELOCK_BYP(x)        (((x) & 0x7) << 22)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_SCU_SEL_RELOCK_BYP(x)        (((x) & 0x3) << 20)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE3_DIV_RELOCK_BYP(x)      (((x) & 0x7) << 17)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE3_SEL_RELOCK_BYP(x)      (((x) & 0x3) << 15)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE2_DIV_RELOCK_BYP(x)      (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE2_SEL_RELOCK_BYP(x)      (((x) & 0x3) << 10)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE1_DIV_RELOCK_BYP(x)      (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE1_SEL_RELOCK_BYP(x)      (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE0_DIV_RELOCK_BYP(x)      (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE0_SEL_RELOCK_BYP(x)      (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_GFREE_WAIT_DELAY_CFG0 */

#define BIT_APCPU_DVFS_APB_APCPU_CORE2_GFREE_WAIT_DELAY(x)        (((x) & 0x3FF) << 20)
#define BIT_APCPU_DVFS_APB_APCPU_CORE1_GFREE_WAIT_DELAY(x)        (((x) & 0x3FF) << 10)
#define BIT_APCPU_DVFS_APB_APCPU_CORE0_GFREE_WAIT_DELAY(x)        (((x) & 0x3FF))

/* REG_APCPU_DVFS_APB_APCPU_GFREE_WAIT_DELAY_CFG1 */

#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_GFREE_WAIT_DELAY(x)       (((x) & 0x3FF) << 20)
#define BIT_APCPU_DVFS_APB_APCPU_SCU_GFREE_WAIT_DELAY(x)          (((x) & 0x3FF) << 10)
#define BIT_APCPU_DVFS_APB_APCPU_CORE3_GFREE_WAIT_DELAY(x)        (((x) & 0x3FF))

/* REG_APCPU_DVFS_APB_APCPU_GFREE_WAIT_DELAY_CFG2 */

#define BIT_APCPU_DVFS_APB_APCPU_CORE6_GFREE_WAIT_DELAY(x)        (((x) & 0x3FF) << 20)
#define BIT_APCPU_DVFS_APB_APCPU_CORE5_GFREE_WAIT_DELAY(x)        (((x) & 0x3FF) << 10)
#define BIT_APCPU_DVFS_APB_APCPU_CORE4_GFREE_WAIT_DELAY(x)        (((x) & 0x3FF))

/* REG_APCPU_DVFS_APB_APCPU_GFREE_WAIT_DELAY_CFG3 */

#define BIT_APCPU_DVFS_APB_APCPU_CORE7_GFREE_WAIT_DELAY(x)        (((x) & 0x3FF) << 20)
#define BIT_APCPU_DVFS_APB_APCPU_GIC_GFREE_WAIT_DELAY(x)          (((x) & 0x3FF) << 10)
#define BIT_APCPU_DVFS_APB_APCPU_ATB_GFREE_WAIT_DELAY(x)          (((x) & 0x3FF))

/* REG_APCPU_DVFS_APB_MPLL0_DVFS_DELAY_CFG4 */

#define BIT_APCPU_DVFS_APB_MPLL0_POWER_OFF_RELOCK_WINDOW(x)       (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_MPLL1_DVFS_DELAY_CFG4 */

#define BIT_APCPU_DVFS_APB_MPLL1_POWER_OFF_RELOCK_WINDOW(x)       (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_MPLL2_DVFS_DELAY_CFG4 */

#define BIT_APCPU_DVFS_APB_MPLL2_POWER_OFF_RELOCK_WINDOW(x)       (((x) & 0xFFFF))

/* REG_APCPU_DVFS_APB_CGM_RELOCK_BYP_CFG1 */

#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE7_DIV_RELOCK_BYP(x)      (((x) & 0x7) << 17)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE7_SEL_RELOCK_BYP(x)      (((x) & 0x3) << 15)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE6_DIV_RELOCK_BYP(x)      (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE6_SEL_RELOCK_BYP(x)      (((x) & 0x3) << 10)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE5_DIV_RELOCK_BYP(x)      (((x) & 0x7) << 7)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE5_SEL_RELOCK_BYP(x)      (((x) & 0x3) << 5)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE4_DIV_RELOCK_BYP(x)      (((x) & 0x7) << 2)
#define BIT_APCPU_DVFS_APB_CGM_APCPU_CORE4_SEL_RELOCK_BYP(x)      (((x) & 0x3))

/* REG_APCPU_DVFS_APB_APCPU_FREQ_UPD_TYPE_CFG */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_FREQ_UPD_DELAY_EN            BIT(23)
#define BIT_APCPU_DVFS_APB_APCPU_GIC_FREQ_UPD_HDSK_EN             BIT(22)
#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_FREQ_UPD_DELAY_EN         BIT(21)
#define BIT_APCPU_DVFS_APB_APCPU_PERIPH_FREQ_UPD_HDSK_EN          BIT(20)
#define BIT_APCPU_DVFS_APB_APCPU_ATB_FREQ_UPD_DELAY_EN            BIT(19)
#define BIT_APCPU_DVFS_APB_APCPU_ATB_FREQ_UPD_HDSK_EN             BIT(18)
#define BIT_APCPU_DVFS_APB_APCPU_SCU_FREQ_UPD_DELAY_EN            BIT(17)
#define BIT_APCPU_DVFS_APB_APCPU_SCU_FREQ_UPD_HDSK_EN             BIT(16)
#define BIT_APCPU_DVFS_APB_APCPU_CORE7_FREQ_UPD_DELAY_EN          BIT(15)
#define BIT_APCPU_DVFS_APB_APCPU_CORE7_FREQ_UPD_HDSK_EN           BIT(14)
#define BIT_APCPU_DVFS_APB_APCPU_CORE6_FREQ_UPD_DELAY_EN          BIT(13)
#define BIT_APCPU_DVFS_APB_APCPU_CORE6_FREQ_UPD_HDSK_EN           BIT(12)
#define BIT_APCPU_DVFS_APB_APCPU_CORE5_FREQ_UPD_DELAY_EN          BIT(11)
#define BIT_APCPU_DVFS_APB_APCPU_CORE5_FREQ_UPD_HDSK_EN           BIT(10)
#define BIT_APCPU_DVFS_APB_APCPU_CORE4_FREQ_UPD_DELAY_EN          BIT(9)
#define BIT_APCPU_DVFS_APB_APCPU_CORE4_FREQ_UPD_HDSK_EN           BIT(8)
#define BIT_APCPU_DVFS_APB_APCPU_CORE3_FREQ_UPD_DELAY_EN          BIT(7)
#define BIT_APCPU_DVFS_APB_APCPU_CORE3_FREQ_UPD_HDSK_EN           BIT(6)
#define BIT_APCPU_DVFS_APB_APCPU_CORE2_FREQ_UPD_DELAY_EN          BIT(5)
#define BIT_APCPU_DVFS_APB_APCPU_CORE2_FREQ_UPD_HDSK_EN           BIT(4)
#define BIT_APCPU_DVFS_APB_APCPU_CORE1_FREQ_UPD_DELAY_EN          BIT(3)
#define BIT_APCPU_DVFS_APB_APCPU_CORE1_FREQ_UPD_HDSK_EN           BIT(2)
#define BIT_APCPU_DVFS_APB_APCPU_CORE0_FREQ_UPD_DELAY_EN          BIT(1)
#define BIT_APCPU_DVFS_APB_APCPU_CORE0_FREQ_UPD_HDSK_EN           BIT(0)

/* REG_APCPU_DVFS_APB_MPLL_INDEX_READ */

#define BIT_APCPU_DVFS_APB_MPLL2_CNT_DONE                         BIT(17)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_CLKOUT_EN                   BIT(16)
#define BIT_APCPU_DVFS_APB_MPLL2_DVFS_PD                          BIT(15)
#define BIT_APCPU_DVFS_APB_MPLL2_INDEX(x)                         (((x) & 0x7) << 12)
#define BIT_APCPU_DVFS_APB_MPLL1_CNT_DONE                         BIT(11)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_CLKOUT_EN                   BIT(10)
#define BIT_APCPU_DVFS_APB_MPLL1_DVFS_PD                          BIT(9)
#define BIT_APCPU_DVFS_APB_MPLL1_INDEX(x)                         (((x) & 0x7) << 6)
#define BIT_APCPU_DVFS_APB_MPLL0_CNT_DONE                         BIT(5)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_CLKOUT_EN                   BIT(4)
#define BIT_APCPU_DVFS_APB_MPLL0_DVFS_PD                          BIT(3)
#define BIT_APCPU_DVFS_APB_MPLL0_INDEX(x)                         (((x) & 0x7))

/* REG_APCPU_DVFS_APB_APCPU_FREQ_UPDATE_STATE1 */

#define BIT_APCPU_DVFS_APB_APCPU_CORE7_DVFS_FREQ_UPD_STATE(x)     (((x) & 0xF) << 12)
#define BIT_APCPU_DVFS_APB_APCPU_CORE6_DVFS_FREQ_UPD_STATE(x)     (((x) & 0xF) << 8)
#define BIT_APCPU_DVFS_APB_APCPU_CORE5_DVFS_FREQ_UPD_STATE(x)     (((x) & 0xF) << 4)
#define BIT_APCPU_DVFS_APB_APCPU_CORE4_DVFS_FREQ_UPD_STATE(x)     (((x) & 0xF))

/* REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX_CFG */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX(x)                (((x) & 0x7))

/* REG_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX_IDLE_CFG */

#define BIT_APCPU_DVFS_APB_APCPU_GIC_DVFS_INDEX_IDLE(x)           (((x) & 0x7))

/* REG_APCPU_DVFS_APB_APCPU_DVFS_RESERVED_REG_CFG0 */

#define BIT_APCPU_DVFS_APB_DVFS_RES_REG0(x)                       (((x) & 0xFFFFFFFF))

/* REG_APCPU_DVFS_APB_APCPU_DVFS_RESERVED_REG_CFG1 */

#define BIT_APCPU_DVFS_APB_DVFS_RES_REG1(x)                       (((x) & 0xFFFFFFFF))

/* REG_APCPU_DVFS_APB_APCPU_DVFS_RESERVED_REG_CFG2 */

#define BIT_APCPU_DVFS_APB_DVFS_RES_REG2(x)                       (((x) & 0xFFFFFFFF))

/* REG_APCPU_DVFS_APB_APCPU_DVFS_RESERVED_REG_CFG3 */

#define BIT_APCPU_DVFS_APB_DVFS_RES_REG3(x)                       (((x) & 0xFFFFFFFF))

#endif