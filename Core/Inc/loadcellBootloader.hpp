/*
 * loadcellBootloader.hpp
 *
 *  Created on: Nov 18, 2024
 *      Author: jmorritt
 */

#ifndef INC_LOADCELLBOOTLOADER_HPP_
#define INC_LOADCELLBOOTLOADER_HPP_

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
#include "system_stm32l4xx.h"
#include "stm32l4xx_hal_conf.h"
#include "stm32l4xx_it.h"
#include <stdbool.h>


//include our can chip definitions
#define NO_MAVLINK_ENABLED 1
#include "libcanard_module.hpp"
#include "driver_module.hpp"
#include "chip.h"

#include "can.h"
//#include "i2c.h"
//#include "spi.h"
#include "usart.h"
#include "gpio.h"
#include "tim.h"
#include "common.h"


#include "menu.h"
volatile uint8_t uart_buffer[20];
volatile uint8_t buffer_ptr;
volatile bool ymodem_upload;




#endif /* INC_LOADCELLBOOTLOADER_HPP_ */
