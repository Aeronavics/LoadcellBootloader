/**
 ******************************************************************************
 * @file    IAP_Main/Inc/flash_if.h
 * @author  MCD Application Team
 * @version V1.6.0
 * @date    12-May-2017
 * @brief   This file provides all the headers of the flash_if functions.
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FLASH_IF_H
#define __FLASH_IF_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stdbool.h>


    /* Includes ------------------------------------------------------------------*/
#include <bootloader_config.hpp>

#include STM_HAL

    /* Exported types ------------------------------------------------------------*/
    /* Exported constants --------------------------------------------------------*/

    /* Error code */
    enum {
        FLASHIF_OK = 0,
        FLASHIF_ERASEKO,
        FLASHIF_WRITINGCTRL_ERROR,
        FLASHIF_WRITING_ERROR,
        FLASHIF_PROTECTION_ERRROR
    };

    /* protection type */
    enum {
        FLASHIF_PROTECTION_NONE = 0,
        FLASHIF_PROTECTION_PCROPENABLED = 0x1,
        FLASHIF_PROTECTION_WRPENABLED = 0x2,
        FLASHIF_PROTECTION_RDPENABLED = 0x4,
    };

    /* protection update */
    enum {
        FLASHIF_WRP_ENABLE,
        FLASHIF_WRP_DISABLE
    };

    /* Define the address from where user application will be loaded.
       Note: this area is reserved for the IAP code                  */
#define FLASH_PAGE_STEP         FLASH_PAGE_SIZE           /* Size of page : 2 Kbytes */


    /* Notable Flash addresses */
#define USER_FLASH_BANK1_START_ADDRESS  FLASH_BASE
    //#define USER_FLASH_BANK2_START_ADDRESS  0x08080000
    //#define USER_FLASH_BANK2_END_ADDRESS    FLASH_BANK2_END

    /* Define the user application size */
#define USER_FLASH_SIZE               ((uint32_t)0x00003C000) /* Small default template application */


    /* Exported macro ------------------------------------------------------------*/
    /* ABSoulute value */
#define ABS_RETURN(x,y)               (((x) < (y)) ? (y) : (x))

    /* Get the number of sectors from where the user program will be loaded */
#define FLASH_SECTOR_NUMBER           ((uint32_t)(ABS_RETURN(APPLICATION_ADDRESS,FLASH_START_BANK1))>>12)

    /* Compute the mask to test if the Flash memory, where the user program will be
      loaded, is write protected */
#define FLASH_PROTECTED_SECTORS       (~(uint32_t)((1 << FLASH_SECTOR_NUMBER) - 1))
    /* Exported functions ------------------------------------------------------- */
    void FLASH_If_Init(void);
    uint32_t FLASH_If_Erase(uint32_t StartSector);
    uint32_t FLASH_If_Erase_Page(uint32_t start);
    uint32_t FLASH_If_GetWriteProtectionStatus(void);
    uint32_t FLASH_If_Write(uint32_t destination, uint32_t *p_source, uint32_t length);
    uint32_t FLASH_If_WriteProtectionConfig(uint32_t protectionstate);

#ifdef __cplusplus
}
#endif


#endif  /* __FLASH_IF_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
