/*
 * config.hpp
 *
 *  Created on: Oct 17, 2024
 *      Author: jmorritt
 */

#ifndef INC_BOOTLOADER_CONFIG_HPP_
#define INC_BOOTLOADER_CONFIG_HPP_

#define LIBCANARD_ENABLED
#define LIBCANARD_MESSAGE_FIRMWARE_UPGRADE
#define LIBCANARD_MESSAGE_NODE

#define CAN_HEADER "can.h"


#define STM_TYPE "stm32l4xx.h"
#define STM_HAL "stm32l4xx_hal.h"
#define STM_SYSTEM  "system_stm32l4xx.h"
#define STM_HAL_CONF "stm32l4xx_hal_conf.h"
#define STM_IT "stm32l4xx_it.h"
#define STM_HAL_IWDG "stm32l4xx_hal_iwdg.h"
#define STM_HAL_FLASH "stm32l4xx_hal_flash.h"

    /* Define bitmap representing user flash area that could be write protected (check restricted to pages 8-39). */
#define FLASH_PAGE_TO_BE_PROTECTED 0




#endif /* INC_BOOTLOADER_CONFIG_HPP_ */
