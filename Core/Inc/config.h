/*
 * config.h
 *
 *  Created on: Nov 18, 2024
 *      Author: jmorritt
 */

#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_

#define FIRMWARE_VERSION 1.0

#define STM32L4XX
#define MAIN_HEADER "SprayController.hpp"

#define STM_HAL "stm32l4xx_hal.h"
#define STM_CAN "can.h"
#define STM_HAL_IWDG "stm32l4xx_hal_iwdg.h"
#define STM_HAL_FLASH "stm32l4xx_hal_flash.h"

// Enable libcanard
#define LIBCANARD_ENABLED

#define LIBCANARD_MESSAGE_NODE
#define LIBCANARD_MESSAGE_FIRMWARE_UPGRADE

#define NO_MAVLINK_ENABLED

#define UART1_ENABLED

#endif /* INC_CONFIG_H_ */
