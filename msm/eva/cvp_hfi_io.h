/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2018-2020, The Linux Foundation. All rights reserved.
 */

#ifndef __CVP_HFI_IO_H__
#define __CVP_HFI_IO_H__

#include <linux/io.h>

#define CVP_CPU_BASE_OFFS			0x000A0000
#define CVP_AON_BASE_OFFS			0x000E0000

#define CVP_CPU_CS_A2HSOFTINTEN		(CVP_CPU_BASE_OFFS + 0x10)
#define CVP_CPU_CS_A2HSOFTINTENCLR	(CVP_CPU_BASE_OFFS + 0x14)
#define CVP_CPU_CS_A2HSOFTINT		(CVP_CPU_BASE_OFFS + 0x18)
#define CVP_CPU_CS_A2HSOFTINTCLR	(CVP_CPU_BASE_OFFS + 0x1C)
#define CVP_CPU_CS_VMIMSG		(CVP_CPU_BASE_OFFS + 0x34)
#define CVP_CPU_CS_VMIMSGAG0		(CVP_CPU_BASE_OFFS + 0x38)
#define CVP_CPU_CS_VMIMSGAG1		(CVP_CPU_BASE_OFFS + 0x3C)
#define CVP_CPU_CS_VMIMSGAG2		(CVP_CPU_BASE_OFFS + 0x40)
#define CVP_CPU_CS_VMIMSGAG3		(CVP_CPU_BASE_OFFS + 0x44)
#define CVP_CPU_CS_SCIACMD			(CVP_CPU_BASE_OFFS + 0x48)
#define CVP_CPU_CS_H2XSOFTINTEN		(CVP_CPU_BASE_OFFS + 0x148)

/* CVP_CTRL_STATUS */
#define CVP_CPU_CS_SCIACMDARG0		(CVP_CPU_BASE_OFFS + 0x4C)
#define CVP_CPU_CS_SCIACMDARG0_BMSK	0xff
#define CVP_CPU_CS_SCIACMDARG0_SHFT	0x0
#define CVP_CPU_CS_SCIACMDARG0_HFI_CTRL_ERROR_STATUS_BMSK	0xfe
#define CVP_CPU_CS_SCIACMDARG0_HFI_CTRL_ERROR_STATUS_SHFT	0x1
#define CVP_CPU_CS_SCIACMDARG0_HFI_CTRL_INIT_STATUS_BMSK	0x1
#define CVP_CPU_CS_SCIACMDARG0_HFI_CTRL_INIT_STATUS_SHFT	0x0
#define CVP_CPU_CS_SCIACMDARG0_HFI_CTRL_PC_READY           0x100

/* HFI_QTBL_INFO */
#define CVP_CPU_CS_SCIACMDARG1		(CVP_CPU_BASE_OFFS + 0x50)

/* HFI_QTBL_ADDR */
#define CVP_CPU_CS_SCIACMDARG2		(CVP_CPU_BASE_OFFS + 0x54)

/* HFI_VERSION_INFO */
#define CVP_CPU_CS_SCIACMDARG3		(CVP_CPU_BASE_OFFS + 0x58)

/* CVP_SFR_ADDR */
#define CVP_CPU_CS_SCIBCMD		(CVP_CPU_BASE_OFFS + 0x5C)

/* CVP_MMAP_ADDR */
#define CVP_CPU_CS_SCIBCMDARG0		(CVP_CPU_BASE_OFFS + 0x60)

/* CVP_UC_REGION_ADDR */
#define CVP_CPU_CS_SCIBARG1		(CVP_CPU_BASE_OFFS + 0x64)

/* CVP_UC_REGION_ADDR */
#define CVP_CPU_CS_SCIBARG2		(CVP_CPU_BASE_OFFS + 0x68)

#define CVP_CPU_CS_SCIBARG3		(CVP_CPU_BASE_OFFS + 0x6C)

#define CVP_CPU_CS_H2ASOFTINTEN		(CVP_CPU_BASE_OFFS + 0x148)
#define CVP_CPU_CS_H2ASOFTINTENCLR	(CVP_CPU_BASE_OFFS + 0x14c)
#define CVP_CPU_CS_H2ASOFTINT		(CVP_CPU_BASE_OFFS + 0x150)
#define CVP_CPU_CS_H2ASOFTINTCLR	(CVP_CPU_BASE_OFFS + 0x154)

/* FAL10 Feature Control */
#define CVP_CPU_CS_X2RPMh		(CVP_CPU_BASE_OFFS + 0x168)
#define CVP_CPU_CS_X2RPMh_MASK0_BMSK	0x1
#define CVP_CPU_CS_X2RPMh_MASK0_SHFT	0x0
#define CVP_CPU_CS_X2RPMh_MASK1_BMSK	0x2
#define CVP_CPU_CS_X2RPMh_MASK1_SHFT	0x1
#define CVP_CPU_CS_X2RPMh_SWOVERRIDE_BMSK	0x4
#define CVP_CPU_CS_X2RPMh_SWOVERRIDE_SHFT	0x3

/*
 * --------------------------------------------------------------------------
 * MODULE: cvp_wrapper
 * --------------------------------------------------------------------------
 */
#define CVP_WRAPPER_BASE_OFFS		0x000B0000

#define CVP_WRAPPER_HW_VERSION		(CVP_WRAPPER_BASE_OFFS + 0x00)
#define CVP_WRAPPER_HW_VERSION_MAJOR_VERSION_MASK  0x78000000
#define CVP_WRAPPER_HW_VERSION_MAJOR_VERSION_SHIFT 28
#define CVP_WRAPPER_HW_VERSION_MINOR_VERSION_MASK  0xFFF0000
#define CVP_WRAPPER_HW_VERSION_MINOR_VERSION_SHIFT 16
#define CVP_WRAPPER_HW_VERSION_STEP_VERSION_MASK   0xFFFF

#define CVP_WRAPPER_INTR_STATUS	(CVP_WRAPPER_BASE_OFFS + 0x0C)
#define CVP_WRAPPER_INTR_STATUS_A2HWD_BMSK	0x8
#define CVP_WRAPPER_INTR_STATUS_A2H_BMSK	0x4

#define CVP_WRAPPER_INTR_MASK		(CVP_WRAPPER_BASE_OFFS + 0x10)
#define CVP_FATAL_INTR_BMSK	(CVP_WRAPPER_INTR_MASK_CPU_NOC_BMSK | \
				CVP_WRAPPER_INTR_MASK_CORE_NOC_BMSK | \
				CVP_WRAPPER_INTR_MASK_A2HWD_BMSK)
#define CVP_WRAPPER_INTR_MASK_CPU_NOC_BMSK	0x40
#define CVP_WRAPPER_INTR_MASK_CORE_NOC_BMSK	0x20
#define CVP_WRAPPER_INTR_MASK_A2HWD_BMSK	0x8
#define CVP_WRAPPER_INTR_MASK_A2HCPU_BMSK	0x4
#define CVP_WRAPPER_INTR_MASK_A2HCPU_SHFT	0x2

#define CVP_WRAPPER_INTR_CLEAR		(CVP_WRAPPER_BASE_OFFS + 0x14)
#define CVP_WRAPPER_TZ_BASE_OFFS		0x000C0000
#define CVP_WRAPPER_INTR_CLEAR_A2HWD_BMSK	0x10
#define CVP_WRAPPER_INTR_CLEAR_A2HWD_SHFT	0x4
#define CVP_WRAPPER_INTR_CLEAR_A2H_BMSK	0x4
#define CVP_WRAPPER_INTR_CLEAR_A2H_SHFT	0x2
#define CVP_WRAPPER_CPU_STATUS		(CVP_WRAPPER_TZ_BASE_OFFS + 0x10)
#define CVP_WRAPPER_CPU_CGC_DIS	(CVP_WRAPPER_BASE_OFFS + 0x2010)

#define CVP_WRAPPER_CPU_CLOCK_CONFIG	(CVP_WRAPPER_BASE_OFFS + 0x50)
#define CVP_WRAPPER_DEBUG_BRIDGE_LPI_CONTROL	(CVP_WRAPPER_BASE_OFFS + 0x54)
#define CVP_WRAPPER_DEBUG_BRIDGE_LPI_STATUS	(CVP_WRAPPER_BASE_OFFS + 0x58)
#define CVP_WRAPPER_CORE_CLOCK_CONFIG		(CVP_WRAPPER_BASE_OFFS + 0x88)

#define CVP_CTRL_INIT		CVP_CPU_CS_SCIACMD

#define CVP_CTRL_STATUS	CVP_CPU_CS_SCIACMDARG0
#define CVP_CTRL_INIT_STATUS__M \
		CVP_CPU_CS_SCIACMDARG0_HFI_CTRL_INIT_STATUS_BMSK
#define CVP_CTRL_ERROR_STATUS__M \
		CVP_CPU_CS_SCIACMDARG0_HFI_CTRL_ERROR_STATUS_BMSK
#define CVP_CTRL_INIT_IDLE_MSG_BMSK \
		CVP_CPU_CS_SCIACMDARG0_HFI_CTRL_INIT_IDLE_MSG_BMSK
#define CVP_CTRL_STATUS_PC_READY \
		CVP_CPU_CS_SCIACMDARG0_HFI_CTRL_PC_READY


#define CVP_QTBL_INFO		CVP_CPU_CS_SCIACMDARG1

#define CVP_QTBL_ADDR		CVP_CPU_CS_SCIACMDARG2

#define CVP_VERSION_INFO	CVP_CPU_CS_SCIACMDARG3

#define CVP_SFR_ADDR		CVP_CPU_CS_SCIBCMD
#define CVP_MMAP_ADDR		CVP_CPU_CS_SCIBCMDARG0
#define CVP_UC_REGION_ADDR	CVP_CPU_CS_SCIBARG1
#define CVP_UC_REGION_SIZE	CVP_CPU_CS_SCIBARG2

/* HFI_DSP_QTBL_ADDR
 * 31:3 - HFI_DSP_QTBL_ADDR
 *        4-byte aligned Address
 */
#define HFI_DSP_QTBL_ADDR	CVP_CPU_CS_VMIMSG

/* HFI_DSP_UC_REGION_ADDR
 * 31:20 - HFI_DSP_UC_REGION_ADDR
 *         1MB aligned address.
 *         Uncached Region start Address. This region covers
 *         HFI DSP QTable,
 *         HFI DSP Queue Headers,
 *         HFI DSP Queues,
 */
#define HFI_DSP_UC_REGION_ADDR	CVP_CPU_CS_VMIMSGAG0

/* HFI_DSP_UC_REGION_SIZE
 * 31:20 - HFI_DSP_UC_REGION_SIZE
 *         Multiples of 1MB.
 *         Size of the DSP_UC_REGION Uncached Region
 */
#define HFI_DSP_UC_REGION_SIZE	CVP_CPU_CS_VMIMSGAG1

/*
 * --------------------------------------------------------------------------
 * MODULE: vcodec noc error log registers
 * --------------------------------------------------------------------------
 */
#define CVP_NOC_BASE_OFFS		0x000D0000
#define CVP_NOC_ERR_SWID_LOW_OFFS	(CVP_NOC_BASE_OFFS + 0x80)
#define CVP_NOC_ERR_SWID_HIGH_OFFS	(CVP_NOC_BASE_OFFS + 0x84)
#define CVP_NOC_ERR_MAINCTL_LOW_OFFS	(CVP_NOC_BASE_OFFS + 0x88)
#define CVP_NOC_ERR_ERRVLD_LOW_OFFS	(CVP_NOC_BASE_OFFS + 0x90)
#define CVP_NOC_ERR_ERRCLR_LOW_OFFS	(CVP_NOC_BASE_OFFS + 0x98)
#define CVP_NOC_ERR_ERRLOG0_LOW_OFFS	(CVP_NOC_BASE_OFFS + 0xA0)
#define CVP_NOC_ERR_ERRLOG0_HIGH_OFFS	(CVP_NOC_BASE_OFFS + 0xA4)
#define CVP_NOC_ERR_ERRLOG1_LOW_OFFS	(CVP_NOC_BASE_OFFS + 0xA8)
#define CVP_NOC_ERR_ERRLOG1_HIGH_OFFS	(CVP_NOC_BASE_OFFS + 0xAC)
#define CVP_NOC_ERR_ERRLOG2_LOW_OFFS	(CVP_NOC_BASE_OFFS + 0xB0)
#define CVP_NOC_ERR_ERRLOG2_HIGH_OFFS	(CVP_NOC_BASE_OFFS + 0xB4)
#define CVP_NOC_ERR_ERRLOG3_LOW_OFFS	(CVP_NOC_BASE_OFFS + 0xB8)
#define CVP_NOC_ERR_ERRLOG3_HIGH_OFFS	(CVP_NOC_BASE_OFFS + 0xBC)
#define CVP_NOC_SBM_SENSELN0_LOW	(CVP_NOC_BASE_OFFS + 0x300)

#define CVP_NOC_CORE_BASE_OFFS			0x00010000
#define CVP_NOC_MAIN_SIDEBANDMANAGER_SENSELN0_LOW \
		(CVP_NOC_CORE_BASE_OFFS + 0x1100)
#define CVP_NOC_MAIN_SIDEBANDMANAGER_SENSELN1_HIGH \
		(CVP_NOC_CORE_BASE_OFFS + 0x110C)
#define CVP_NOC_CORE_ERR_SWID_LOW_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x1200)
#define CVP_NOC_CORE_ERR_SWID_HIGH_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x1204)
#define CVP_NOC_CORE_ERR_MAINCTL_LOW_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x1208)
#define CVP_NOC_CORE_ERR_ERRVLD_LOW_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x1210)
#define CVP_NOC_CORE_ERR_ERRCLR_LOW_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x1218)
#define CVP_NOC_CORE_ERR_ERRLOG0_LOW_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x1220)
#define CVP_NOC_CORE_ERR_ERRLOG0_HIGH_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x1224)
#define CVP_NOC_CORE_ERR_ERRLOG1_LOW_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x1228)
#define CVP_NOC_CORE_ERR_ERRLOG1_HIGH_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x122C)
#define CVP_NOC_CORE_ERR_ERRLOG2_LOW_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x1230)
#define CVP_NOC_CORE_ERR_ERRLOG2_HIGH_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x1234)
#define CVP_NOC_CORE_ERR_ERRLOG3_LOW_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x1238)
#define CVP_NOC_CORE_ERR_ERRLOG3_HIGH_OFFS \
		(CVP_NOC_CORE_BASE_OFFS + 0x123C)


#define CVP_AON_WRAPPER_MVP_NOC_LPI_CONTROL	(CVP_AON_BASE_OFFS)
#define CVP_AON_WRAPPER_MVP_NOC_LPI_STATUS	(CVP_AON_BASE_OFFS + 0x4)

#define CVP_CC_BASE_OFFS			0x000F8000
#define CVP_CC_MVS1C_GDSCR			(CVP_CC_BASE_OFFS + 0x74)
#define CVP_CC_MVS1C_CBCR			(CVP_CC_BASE_OFFS + 0x8C)
#define CVP_CC_MVS1_GDSCR			(CVP_CC_BASE_OFFS + 0xC0)
#endif
