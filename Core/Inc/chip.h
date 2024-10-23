/*
 * chip.h
 *
 *  Created on: Oct 23, 2024
 *      Author: jmorritt
 */

#ifndef INC_CHIP_H_
#define INC_CHIP_H_

#include <bootloader_config.hpp>

#include STM_TYPE

#define STM32_PCLK1		(36000000U)		// 36 MHz
#define STM32_TIMCLK1		(2*STM32_PCLK1) //72MHz

#define CAN1_TX_IRQHandler      USB_HP_CAN1_TX_IRQHandler
#define CAN1_RX0_IRQHandler     USB_LP_CAN1_RX0_IRQHandler
#define CAN1_RX1_IRQHandler     CAN1_RX1_IRQHandler



#endif /* INC_CHIP_H_ */
