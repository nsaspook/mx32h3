/*******************************************************************************
  System Configuration Header

  File Name:
    configuration.h

  Summary:
    Build-time configuration header for the system defined by this project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/

#include "user.h"
#include "toolchain_specifics.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Configuration
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************
/* TIME System Service Configuration Options */
#define SYS_TIME_INDEX_0                            (0)
#define SYS_TIME_MAX_TIMERS                         (5)
#define SYS_TIME_HW_COUNTER_WIDTH                   (32)
#define SYS_TIME_TICK_FREQ_IN_HZ                    (1000)


/* File System Service Configuration */

#define SYS_FS_MEDIA_NUMBER               1
#define SYS_FS_VOLUME_NUMBER              1

#define SYS_FS_AUTOMOUNT_ENABLE           false
#define SYS_FS_MAX_FILES                  1
#define SYS_FS_MAX_FILE_SYSTEM_TYPE       1
#define SYS_FS_MEDIA_MAX_BLOCK_SIZE       512
#define SYS_FS_MEDIA_MANAGER_BUFFER_SIZE  2048
#define SYS_FS_USE_LFN                    1
#define SYS_FS_FILE_NAME_LEN              255
#define SYS_FS_CWD_STRING_LEN             1024


#define SYS_FS_FAT_VERSION                "v0.14"
#define SYS_FS_FAT_READONLY               false
#define SYS_FS_FAT_CODE_PAGE              437
#define SYS_FS_FAT_MAX_SS                 SYS_FS_MEDIA_MAX_BLOCK_SIZE






// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************
/* SDSPI Driver Instance 0 Configuration Options */
#define DRV_SDSPI_INDEX_0                       0
#define DRV_SDSPI_CLIENTS_NUMBER_IDX0           1
#define DRV_SDSPI_QUEUE_SIZE_IDX0               4
#define DRV_SDSPI_CHIP_SELECT_PIN_IDX0          SYS_PORT_PIN_RA0
#define DRV_SDSPI_SPEED_HZ_IDX0                 5000000
#define DRV_SDSPI_POLLING_INTERVAL_MS_IDX0      1000




/* SPI Driver Instance 0 Configuration Options */
#define DRV_SPI_INDEX_0                       0
#define DRV_SPI_CLIENTS_NUMBER_IDX0           1
#define DRV_SPI_QUEUE_SIZE_IDX0               4

/* SDSPI Driver Common Configuration Options */
#define DRV_SDSPI_INSTANCES_NUMBER              1

/* SPI Driver Common Configuration Options */
#define DRV_SPI_INSTANCES_NUMBER              1

/*** Bluetooth Driver Configuration ***/

#define DRV_BM71_CLIENTS_NUMBER                 1
   
/* Bluetooth Driver Abstraction definition */
#define DRV_BT_Initialize                       DRV_BM71_Initialize
#define DRV_BT_Status                           DRV_BM71_Status
#define DRV_BT_Tasks                            DRV_BM71_Tasks
#define DRV_BT_Open                             DRV_BM71_Open
#define DRV_BT_Close                            DRV_BM71_Close
#define DRV_BT_EventHandlerSet                  DRV_BM71_EventHandlerSet
#define DRV_BT_GetPowerStatus                   DRV_BM71_GetPowerStatus

#define DRV_BT_EVENT_HANDLER                    DRV_BM71_EVENT_HANDLER
#define DRV_BT_EVENT                            DRV_BM71_EVENT
#define DRV_BT_EVENT_BLESPP_MSG_RECEIVED        DRV_BM71_EVENT_BLESPP_MSG_RECEIVED
#define DRV_BT_EVENT_BLE_STATUS_CHANGED         DRV_BM71_EVENT_BLE_STATUS_CHANGED

#define DRV_BT_PROTOCOL_BLE                     DRV_BM71_PROTOCOL_BLE               
#define DRV_BT_PROTOCOL                         DRV_BM71_PROTOCOL

#define DRV_BT_STATUS_READY                     DRV_BM71_STATUS_READY

#define DRV_BT_BLE_STATUS                       DRV_BM71_BLE_STATUS
#define DRV_BT_BLE_STATUS_STANDBY               DRV_BM71_BLE_STATUS_STANDBY
#define DRV_BT_BLE_STATUS_ADVERTISING           DRV_BM71_BLE_STATUS_ADVERTISING
#define DRV_BT_BLE_STATUS_SCANNING              DRV_BM71_BLE_STATUS_SCANNING
#define DRV_BT_BLE_STATUS_CONNECTED             DRV_BM71_BLE_STATUS_CONNECTED

#define DRV_BT_ClearBLEData                     DRV_BM71_ClearBLEData
#define DRV_BT_ReadDataFromBLE                  DRV_BM71_ReadDataFromBLE
#define DRV_BT_SendDataOverBLE                  DRV_BM71_SendDataOverBLE

#define DRV_BT_BLE_QueryStatus                  DRV_BM71_BLE_QueryStatus
#define DRV_BT_BLE_EnableAdvertising            DRV_BM71_BLE_EnableAdvertising



// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // CONFIGURATION_H
/*******************************************************************************
 End of File
*/
