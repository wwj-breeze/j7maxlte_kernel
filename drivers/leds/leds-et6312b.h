/*
 * Copyright (C) 2012 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#ifndef _ET6312B_H_
#define _ET6312B_H_


#ifdef CONFIG_MTK_ENG_BUILD
#define ET6312B_DEBUG
#define ET6312B_DEBUG_TUNING
//#define ET6312B_DEBUG_REG
#endif /* CONFIG_MTK_ENG_BUILD */

#ifdef CONFIG_SEC_FACTORY
//#define CONFIG_SEC_SMARTGLOW_POWERON_GLOW
//#define JIG_STATUS_FILE_PATH		"/sys/class/sec/switch/is_jig_powered"
#define LCD_ID_PATH		"sys/class/lcd/panel/lcd_type"

#define BOOT_WORK_DELAY			2000 //ms
#define BOOT_WORK_POLL_DELAY	100 //ms

#define BOOT_POLLING_CNT		100 //100 * BOOT_WORK_POLL_DELAY = 10s is enough to check 
#endif //CONFIG_SEC_FACTORY


#define ET6312B_LED_DRIVER_NAME		"et6312b"
#define ET6312B_LED_DEVICE_NAME		"smartglow"


#define ET6312B_MAX_RGB_LED		4
#define ET6312B_MAX_LED			(ET6312B_MAX_RGB_LED * 3)

#define MAX_SMARTGLOW_LEDS		ET6312B_MAX_RGB_LED
#define DEFAULT_BRIGHTNESS		255

#define ET6312B_DEFAULT_IMAX	0
#define ET6312B_DEFAULT_CLK		0


#define LED_MAX_CURRENT_R 143 // 143 is 18mA
#define LED_MAX_CURRENT_G 71  // 71 is 9mA
#define LED_MAX_CURRENT_B 71 
#define LED_MAX_CURRENT_W 111 // 111 is 14 mA
#define LED_MIN_CURRENT_R 1   
#define LED_MIN_CURRENT_G 1
#define LED_MIN_CURRENT_B 1
#define LED_MIN_CURRENT_W 1 
#define LED_LOWER_SUPPORTED_COLOR	140
#define LED_HIGHER_SUPPORTED_COLOR	255
#define LED_LOWER_REAL_COLOR	0
#define LED_MAX_REAL_COLOR		255
#define REAL_LOWER_THRESHOLD 50

#define LOWER_RANGE_IDX				0
#define HIGHER_RANGE_IDX			1

#define ET6312B_ON					1
#define ET6312B_OFF					0


/////////////// REGISTER MACROS /////////////////////////
/****** Register offsets ******/
#define ET6312B_REG_BASE	 				0x00

#define ET6312B_REG_CHIPCTR 				ET6312B_REG_BASE


#define ET6312B_REG_FLASH_PERIOD_RGB_BASE	0x01
#define ET6312B_REG_FLASH_PERIOD_RGB_OFFSET	5 
#define ET6312B_REG_FLASH_TON1_RGB_BASE	 	0x02
#define ET6312B_REG_FLASH_TON2_RGB_BASE	 	0x03
#define ET6312B_REG_RAMP_RATE_RGB_BASE		0x04
#define ET6312B_REG_DELAY_TIME_RGB_BASE		0x05

#define ET6312B_REG_FLASH_PERIOD_RGB0		ET6312B_REG_FLASH_PERIOD_RGB_BASE
#define ET6312B_REG_FLASH_TON1_RGB0		 	ET6312B_REG_FLASH_TON1_RGB_BASE
#define ET6312B_REG_FLASH_TON2_RGB0		 	ET6312B_REG_FLASH_TON2_RGB_BASE
#define ET6312B_REG_RAMP_RATE_RGB0			ET6312B_REG_RAMP_RATE_RGB_BASE
#define ET6312B_REG_DELAY_TIME_RGB0			ET6312B_REG_DELAY_TIME_RGB_BASE

#define ET6312B_REG_FLASH_PERIOD_RGB1		0x06
#define ET6312B_REG_FLASH_TON1_RGB1		 	0x07
#define ET6312B_REG_FLASH_TON2_RGB1		 	0x08
#define ET6312B_REG_RAMP_RATE_RGB1			0x09
#define ET6312B_REG_DELAY_TIME_RGB1			0x0A

#define ET6312B_REG_FLASH_PERIOD_RGB2		0x0B
#define ET6312B_REG_FLASH_TON1_RGB2		 	0x0C
#define ET6312B_REG_FLASH_TON2_RGB2		 	0x0D
#define ET6312B_REG_RAMP_RATE_RGB2			0x0E
#define ET6312B_REG_DELAY_TIME_RGB2			0x0f

#define ET6312B_REG_FLASH_PERIOD_RGB3		0x10
#define ET6312B_REG_FLASH_TON1_RGB3		 	0x11
#define ET6312B_REG_FLASH_TON2_RGB3		 	0x12
#define ET6312B_REG_RAMP_RATE_RGB3			0x13
#define ET6312B_REG_DELAY_TIME_RGB3			0x14


#define ET6312B_REG_RFSCALE	 				0x15


#define ET6312B_REG_LEDXMD_RGBx_BASE		0x16
#define ET6312B_REG_LEDXMD_RGBx_OFFSET		1
#define ET6312B_REG_LEDXMD_RGB0				ET6312B_REG_LEDXMD_RGBx_BASE
#define ET6312B_REG_LEDXMD_RGB1				0x17
#define ET6312B_REG_LEDXMD_RGB2				0x18
#define ET6312B_REG_LEDXMD_RGB3				0x19


#define ET6312B_REG_LEDx_CURT_BASE			0x1A
#define ET6312B_REG_LEDx_CURT_OFFSET		1
#define ET6312B_REG_LED1_CURT				ET6312B_REG_LEDx_CURT_BASE
#define ET6312B_REG_LED2_CURT				0x1B
#define ET6312B_REG_LED3_CURT				0x1C
#define ET6312B_REG_LED4_CURT				0x1D
#define ET6312B_REG_LED5_CURT				0x1E
#define ET6312B_REG_LED6_CURT				0x1F
#define ET6312B_REG_LED7_CURT				0x20
#define ET6312B_REG_LED8_CURT				0x21
#define ET6312B_REG_LED9_CURT				0x22
#define ET6312B_REG_LED10_CURT				0x23
#define ET6312B_REG_LED11_CURT				0x24
#define ET6312B_REG_LED12_CURT				0x25

#define ET6312B_REG_RGBx_BASE				ET6312B_REG_LEDx_CURT_BASE
#define ET6312B_REG_RGBx_OFFSET				3
#define ET6312B_REG_RGBx_LEDx_OFFSET		1
#define ET6312B_REG_RGBx_LED_R_OFFSET		0
#define ET6312B_REG_RGBx_LED_G_OFFSET		1
#define ET6312B_REG_RGBx_LED_B_OFFSET		2

#define ET6312B_REG_RGB1_BASE				ET6312B_REG_RGBx_BASE
#define ET6312B_REG_RGB1_LED_R				ET6312B_REG_LED1_CURT
#define ET6312B_REG_RGB1_LED_G				ET6312B_REG_LED2_CURT
#define ET6312B_REG_RGB1_LED_B				ET6312B_REG_LED3_CURT

#define ET6312B_REG_RGB2_BASE				ET6312B_REG_LED4_CURT
#define ET6312B_REG_RGB2_LED_R				ET6312B_REG_LED4_CURT
#define ET6312B_REG_RGB2_LED_G				ET6312B_REG_LED5_CURT
#define ET6312B_REG_RGB2_LED_B				ET6312B_REG_LED6_CURT

#define ET6312B_REG_RGB3_BASE				ET6312B_REG_LED7_CURT
#define ET6312B_REG_RGB3_LED_R				ET6312B_REG_LED7_CURT
#define ET6312B_REG_RGB3_LED_G				ET6312B_REG_LED8_CURT
#define ET6312B_REG_RGB3_LED_B				ET6312B_REG_LED9_CURT

#define ET6312B_REG_RGB4_BASE				ET6312B_REG_LED10_CURT
#define ET6312B_REG_RGB4_LED_R				ET6312B_REG_LED10_CURT
#define ET6312B_REG_RGB4_LED_G				ET6312B_REG_LED11_CURT
#define ET6312B_REG_RGB4_LED_B				ET6312B_REG_LED12_CURT


#define ET6312B_REG_EXPWM_EN 				0x26

#define ET6312B_REG_MAX						0x27
#define ET6312B_REG_CONST_CURR_MAX			(ET6312B_REG_LED12_CURT - ET6312B_REG_LEDXMD_RGBx_BASE + 1)
#define ET6312B_REG_SLOPE_CURR_MAX			(ET6312B_REG_LED12_CURT - ET6312B_REG_FLASH_PERIOD_RGB_BASE + 1)

/****** Register bit macros ******/
#define ET6312B_AUTO_BRECON_BIT_POS			7
#define ET6312B_AUTO_BRECON_BITS			1

#define ET6312B_CLK_MODE_BIT_POS			5
#define ET6312B_CLK_MODE_BITS				2

#define ET6312B_SOFTDN_EN_BIT_POS			4
#define ET6312B_SOFTDN_EN_BITS				1

#define ET6312B_PDEN_BIT_POS				3
#define ET6312B_PDEN_BIT_BITS				1

#define ET6312B_IMAX_BIT_POS				2
#define ET6312B_IMAX_BITS					1

#define ET6312B_TMD_SEL_BIT_POS				0
#define ET6312B_TMD_SEL_BITS				2


#define ET6312B_LED_R_CURR_MODE_BIT_POS		0
#define ET6312B_LED_R_CURR_MODE_BITS		2
#define ET6312B_LED_G_CURR_MODE_BIT_POS		2
#define ET6312B_LED_G_CURR_MODE_BITS		3
#define ET6312B_LED_B_CURR_MODE_BIT_POS		5
#define ET6312B_LED_B_CURR_MODE_BITS		3

#define ET6312B_RGBx_RFSCALE_BITS			2
#define ET6312B_RGB1_RFSCALE_BIT_POS		0
#define ET6312B_RGB2_RFSCALE_BIT_POS		2
#define ET6312B_RGB3_RFSCALE_BIT_POS		4
#define ET6312B_RGB4_RFSCALE_BIT_POS		6

#define ET6312B_FLASH_TYPE_POS				7			
#define ET6312B_RAMP_RISE_POS				0			
#define ET6312B_RAMP_FALL_POS				4					

#define ET6312B_COMPOSE_RGB_CURR(mode) \
	(mode | (mode << ET6312B_LED_G_CURR_MODE_BIT_POS) | (mode << ET6312B_LED_B_CURR_MODE_BIT_POS))


/////////////// CONSTANT MACROS /////////////////////////
#define ET6312B_RESET						0x00
#define ET6312B_RESET_DELAY					350 // 350us
#define ET6312B_MAX_FLASH_PERIOD			16380
#define ET6312B_FLASH_TYPE_LINEAR			1
#define ET6312B_FLASH_TYPE_QUASI			0 
			
#define ET6312B_RAMP_1x_NORMAL_MAX_TIME		1920 //ms
#define ET6312B_RAMP_2x_SLOWER_MAX_TIME		3840 //ms
#define ET6312B_RAMP_4x_SLOWER_MAX_TIME		7680 //ms
#define ET6312B_RAMP_8x_FASTER_MAX_TIME		240	 //ms	

#define ET6312B_RAMP_1x_NORMAL_VAL			0 
#define ET6312B_RAMP_2x_SLOWER_VAL			1
#define ET6312B_RAMP_4x_SLOWER_VAL			2
#define ET6312B_RAMP_8x_FASTER_VAL			3


#define ET6312B_LED_ALWAYS_OFF				0
#define ET6312B_LED_ALWAYS_ON				1
#define ET6312B_LED_THREAD1					2
#define ET6312B_LED_THREAD2					3
#define ET6312B_LED_THREAD3					5

#define ET6312B_RGBx_CONST_CURR_ON			ET6312B_COMPOSE_RGB_CURR(ET6312B_LED_ALWAYS_ON)
#define ET6312B_RGBx_SLOPE_CURR_ON			ET6312B_COMPOSE_RGB_CURR(ET6312B_LED_THREAD1)   // For smartGlow use only Thread1 with mode 1

#define ET6312B_RGBx_FLASH_TYPE				(ET6312B_FLASH_TYPE_LINEAR << ET6312B_FLASH_TYPE_POS)							


#endif 
