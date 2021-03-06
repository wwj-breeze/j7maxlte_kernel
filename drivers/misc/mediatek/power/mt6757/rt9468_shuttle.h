/*
 *  Driver for Richtek RT9468 Charger
 *  Shuttle Version
 *
 *  Copyright (C) 2015 Richtek Technology Corp.
 *  ShuFanLee <shufan_lee@richtek.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 */

#ifndef __RT9468_CHARGER_H
#define __RT9468_CHARGER_H

#define RT9468_SLAVE_ADDR	0x5C
#define RT9468_DEVICE_ID_E1	0xA1

enum rt9468_reg_addr {
	RT9468_REG_CORE_CTRL0,
	RT9468_REG_CHG_CTRL1,
	RT9468_REG_CHG_CTRL2,
	RT9468_REG_CHG_CTRL3,
	RT9468_REG_CHG_CTRL4,
	RT9468_REG_CHG_CTRL5,
	RT9468_REG_CHG_CTRL6,
	RT9468_REG_CHG_CTRL7,
	RT9468_REG_CHG_CTRL8,
	RT9468_REG_CHG_CTRL9,
	RT9468_REG_CHG_CTRL10,
	RT9468_REG_CHG_CTRL11,
	RT9468_REG_CHG_CTRL12,
	RT9468_REG_CHG_CTRL13,
	RT9468_REG_CHG_CTRL14,
	RT9468_REG_CHG_CTRL15,
	RT9468_REG_CHG_CTRL16,
	RT9468_REG_CHG_ADC,
	RT9468_REG_CHG_DPDM1,
	RT9468_REG_CHG_DPDM2,
	RT9468_REG_CHG_DPDM3,
	RT9468_REG_CHG_DPDM4,
	RT9468_REG_CHG_DPDM5,
	RT9468_REG_CHG_PUMP = 0x18,
	RT9468_REG_DEVICE_ID = 0x40,
	RT9468_REG_CHG_STAT = 0x42,
	RT9468_REG_CHG_NTC,
	RT9468_REG_ADC_DATA_H,
	RT9468_REG_ADC_DATA_L,
	RT9468_REG_CHG_STATC = 0x50,
	RT9468_REG_CHG_FAULT,
	RT9468_REG_TS_STATC,
	RT9468_REG_CHG_IRQ1,
	RT9468_REG_CHG_IRQ2,
	RT9468_REG_CHG_IRQ3,
	RT9468_REG_DPDM_IRQ,
	RT9468_REG_CHG_STATC_CTRL = 0x60,
	RT9468_REG_CHG_FAULT_CTRL,
	RT9468_REG_TS_STATC_CTRL,
	RT9468_REG_CHG_IRQ1_CTRL,
	RT9468_REG_CHG_IRQ2_CTRL,
	RT9468_REG_CHG_IRQ3_CTRL,
	RT9468_REG_DPDM_IRQ_CTRL,
	RT9468_REG_MAX,
};

/* Parameter */
#define RT9468_ICHG_NUM 64
#define RT9468_ICHG_MIN 100  /* mA */
#define RT9468_ICHG_MAX 5000 /* mA */
#define RT9468_ICHG_STEP 100 /* mA */

#define RT9468_IEOC_NUM 16
#define RT9468_IEOC_MIN 100 /* mA */
#define RT9468_IEOC_MAX 850 /* mA */
#define RT9468_IEOC_STEP 50 /* mA */

#define RT9468_MIVR_NUM 128
#define RT9468_MIVR_MIN 3900   /* mV */
#define RT9468_MIVR_MAX 13400  /* mV */
#define RT9468_MIVR_STEP 100   /* mV */

#define RT9468_AICR_NUM 64
#define RT9468_AICR_MIN 100  /* mA */
#define RT9468_AICR_MAX 3250 /* mA */
#define RT9468_AICR_STEP 50  /* mA */

#define RT9468_BAT_VOREG_NUM 64
#define RT9468_BAT_VOREG_MIN 3500 /* mV */
#define RT9468_BAT_VOREG_MAX 4620 /* mV */
#define RT9468_BAT_VOREG_STEP 20  /* mV */

#define RT9468_BOOST_VOREG_NUM 64
#define RT9468_BOOST_VOREG_MIN 4425 /* mV */
#define RT9468_BOOST_VOREG_MAX 5825 /* mV */
#define RT9468_BOOST_VOREG_STEP 25  /* mV */

#define RT9468_VPREC_NUM 16
#define RT9468_VPREC_MIN 2000 /* mV */
#define RT9468_VPREC_MAX 3500 /* mV */
#define RT9468_VPREC_STEP 100 /* mV */

#define RT9468_IPREC_NUM 16
#define RT9468_IPREC_MIN 100 /* mA */
#define RT9468_IPREC_MAX 850 /* mA */
#define RT9468_IPREC_STEP 50 /* mA */

/* Watchdog fast-charge timer */
#define RT9468_WT_FC_NUM 8
#define RT9468_WT_FC_MIN 4  /* hour */
#define RT9468_WT_FC_MAX 20 /* hour */
#define RT9468_WT_FC_STEP 2 /* hour */

/* IIN VTH */
/* mV */
#define RT9468_IIN_VTH_NUM	8
#define RT9468_IIN_VTH_MIN	4100
#define RT9468_IIN_VTH_MAX	4800
#define RT9468_IIN_VTH_STEP	100

/* ADC unit/offset */
#define RT9468_ADC_UNIT_VBUS_DIV5	25 /* mV */
#define RT9468_ADC_UNIT_VBUS_DIV2	10 /* mV */
#define RT9468_ADC_UNIT_VBAT		5  /* mV */
#define RT9468_ADC_UNIT_VBATS		5  /* mV */
#define RT9468_ADC_UNIT_VSYS		5  /* mV */
#define RT9468_ADC_UNIT_REGN		5  /* mV */
#define RT9468_ADC_UNIT_TS_BAT		25 /* 0.01% */
#define RT9468_ADC_UNIT_TS_BUS		25 /* 0.01% */
#define RT9468_ADC_UNIT_IBAT		50 /* mA */
#define RT9468_ADC_UNIT_IBATS		50 /* mA */
#define RT9468_ADC_UNIT_IBUS		50 /* mA */
#define RT9468_ADC_UNIT_TEMP_JC		2  /* degree */

#define RT9468_ADC_OFFSET_VBUS_DIV5	0 /* mV */
#define RT9468_ADC_OFFSET_VBUS_DIV2	0 /* mV */
#define RT9468_ADC_OFFSET_VBAT		0 /* mV */
#define RT9468_ADC_OFFSET_VBATS		0 /* mV */
#define RT9468_ADC_OFFSET_VSYS		0 /* mV */
#define RT9468_ADC_OFFSET_REGN		0 /* mV */
#define RT9468_ADC_OFFSET_TS_BAT	0 /* % */
#define RT9468_ADC_OFFSET_TS_BUS	0 /* % */
#define RT9468_ADC_OFFSET_IBAT		0 /* mA */
#define RT9468_ADC_OFFSET_IBATS		0 /* mA */
#define RT9468_ADC_OFFSET_IBUS		0 /* mA */
#define RT9468_ADC_OFFSET_TEMP_JC	(-40)  /* degree */

/* ========== CORE_CTRL0 0x00 ============ */
#define RT9468_SHIFT_RST 7
#define RT9468_MASK_RST  (1 << RT9468_SHIFT_RST)

/* ========== CHG_CTRL1 0x01 ============ */
#define RT9468_SHIFT_OPA_MODE   0
#define RT9468_SHIFT_HZ_EN      2

#define RT9468_MASK_OPA_MODE   (1 << RT9468_SHIFT_OPA_MODE)
#define RT9468_MASK_HZ_EN      (1 << RT9468_SHIFT_HZ_EN)

/* ========== CHG_CTRL2 0x02 ============ */
#define RT9468_SHIFT_CHG_EN  0
#define RT9468_SHIFT_CFO_EN  1
#define RT9468_SHIFT_IINLMTSEL	2
#define RT9468_SHIFT_TE_EN   4
#define RT9468_SHIFT_BYPASS_MODE 5

#define RT9468_MASK_CHG_EN  (1 << RT9468_SHIFT_CHG_EN)
#define RT9468_MASK_CFO_EN  (1 << RT9468_SHIFT_CFO_EN)
#define RT9468_MASK_IINLMTSEL	0x0C
#define RT9468_MASK_TE_EN   (1 << RT9468_SHIFT_TE_EN)
#define RT9468_MASK_BYPASS_MODE (1 << RT9468_SHIFT_BYPASS_MODE)


/* ========== CHG_CTRL3 0x03 ============ */
#define RT9468_SHIFT_AICR    2
#define RT9468_SHIFT_AICR_EN 1
#define RT9468_SHIFT_ILIM_EN 0

#define RT9468_MASK_AICR     0xFC
#define RT9468_MASK_AICR_EN  (1 << RT9468_SHIFT_AICR_EN)
#define RT9468_MASK_ILIM_EN  (1 << RT9468_SHIFT_ILIM_EN)

/* ========== CHG_CTRL4 0x04 ============ */
#define RT9468_SHIFT_BAT_VOREG  2

#define RT9468_MASK_BAT_VOREG  0xFC

/* ========== CHG_CTRL5 0x05 ============ */
#define RT9468_SHIFT_BOOST_VOREG  2

#define RT9468_MASK_BOOST_VOREG  0xFC

/* ========== CHG_CTRL6 0x06 ============ */
#define RT9468_SHIFT_MIVR    1
#define RT9468_SHIFT_MIVR_EN 0

#define RT9468_MASK_MIVR  0xFE
#define RT9468_MASK_MIVR_EN (1 << RT9468_SHIFT_MIVR_EN)

/* ========== CHG_CTRL7 0x07 ============ */
#define RT9468_SHIFT_ICHG    2

#define RT9468_MASK_ICHG     0xFC

/* ========== CHG_CTRL8 0x08 ============ */
#define RT9468_SHIFT_VPREC 4
#define RT9468_SHIFT_IPREC 0

#define RT9468_MASK_VPREC 0xF0
#define RT9468_MASK_IPREC 0x0F

/* ========== CHG_CTRL9 0x09 ============ */
#define RT9468_SHIFT_IEOC 4

#define RT9468_MASK_IEOC  0xF0

/* ========== CHG_CTRL10 0x0A ============ */
#define RT9468_SHIFT_BOOST_OC 0

#define RT9468_MASK_BOOST_OC 0x07

/* ========== CHG_CTRL12 0x0C ============ */
#define RT9468_SHIFT_TMR_EN 1
#define RT9468_SHIFT_WT_FC  5

#define RT9468_MASK_TMR_EN  (1 << RT9468_SHIFT_TMR_EN)
#define RT9468_MASK_WT_FC 0xE0

/* ========== CHG_CTRL13 0x0D ============ */
#define RT9468_SHIFT_WDT_EN 7

#define RT9468_MASK_WDT_EN (1 << RT9468_SHIFT_WDT_EN)

/* ========== CHG_CTRL14 0x0E ============ */
#define RT9468_SHIFT_IIN_MEAS 7
#define RT9468_SHIFT_IIN_VTH 0

#define RT9468_MASK_IIN_MEAS (1 << RT9468_SHIFT_IIN_MEAS)
#define RT9468_MASK_IIN_VTH 0x07

/* ========== CHG_PUMP 0x18 ============ */
#define RT9468_SHIFT_VG_CLKSEL 5
#define RT9468_SHIFT_VG_ENSCP 3
#define RT9468_SHIFT_VG_ENDISCHG 2
#define RT9468_SHIFT_VG_EN 0

#define RT9468_MASK_VG_CLKSEL (1 << RT9468_SHIFT_VG_CLKSEL)
#define RT9468_MASK_VG_ENSCP (1 << RT9468_SHIFT_VG_ENSCP)
#define RT9468_MASK_VG_ENDISCHG (1 << RT9468_SHIFT_VG_ENDISCHG)
#define RT9468_MASK_VG_EN (1 << RT9468_SHIFT_VG_EN)

/* ========== CHG_CTRL16 0x10 ============ */
#define RT9468_SHIFT_PUMPX_EN 7
#define RT9468_SHIFT_PUMPX_UP 6
#define RT9468_SHIFT_PUMPX_DN 5

#define RT9468_MASK_PUMPX_EN (1 << RT9468_SHIFT_PUMPX_EN)
#define RT9468_MASK_PUMPX_UP (1 << RT9468_SHIFT_PUMPX_UP)
#define RT9468_MASK_PUMPX_DN (1 << RT9468_SHIFT_PUMPX_DN)


/* ========== CHG_ADC 0x11 ============ */
#define RT9468_SHIFT_ADC_IN_SEL 4
#define RT9468_SHIFT_ADC_START 0

#define RT9468_MASK_ADC_IN_SEL 0xF0
#define RT9468_MASK_ADC_START (1 << RT9468_SHIFT_ADC_START)

/* ========== CHG_DPDM1 0x12 ============ */
#define RT9468_SHIFT_USBCHGEN	7

#define RT9468_MASK_USBCHGEN	(1 << RT9468_SHIFT_USBCHGEN)

/* ========== CHG_STAT 0x42 ============ */
#define RT9468_SHIFT_ADC_STAT 0
#define RT9468_SHIFT_CHG_STAT 6

#define RT9468_MASK_ADC_STAT  (1 << RT9468_SHIFT_ADC_STAT)
#define RT9468_MASK_CHG_STAT  0xC0

/* ========== CHG_STATC 0x50 ============ */
#define RT9468_SHIFT_CHG_MIVR 6

#define RT9468_MASK_CHG_MIVR (1 << RT9466_SHIFT_CHG_MIVR)

/* ========== CHG_IRQ2 0x54 ============ */
#define RT9468_SHIFT_CHG_IIN_MEASI 0
#define RT9468_SHIFT_SSFINISHI 4

#define RT9468_MASK_CHG_IIN_MEASI (1 << RT9468_SHIFT_CHG_IIN_MEASI)
#define RT9468_MASK_SSFINISHI (1 << RT9468_SHIFT_SSFINISHI)

/* ========== CHG_IRQ3 0x55 ============ */
#define RT9468_SHIFT_ADC_DONEI 0
#define RT9468_SHIFT_PUMPX_DONEI 1

#define RT9468_MASK_ADC_DONEI (1 << RT9468_SHIFT_ADC_DONEI)
#define RT9468_MASK_PUMPX_DONEI (1 << RT9468_SHIFT_PUMPX_DONEI)

/* ========== CHG_STATC_CTRL 0x60 ============ */
#define RT9468_SHIFT_CHG_AICRM	5

#define RT9468_MASK_CHG_AICRM	(1 << RT9468_SHIFT_CHG_AICRM)

#endif /* __RT9468_CHARGER_H */
