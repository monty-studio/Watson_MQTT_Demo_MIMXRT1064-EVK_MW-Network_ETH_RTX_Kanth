
/*
 * Auto generated Run-Time-Environment Configuration File
 *      *** Do not modify ! ***
 *
 * Project: 'Watson_MQTT_Demo' 
 * Target:  'Watson_MQTT_Demo' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "fsl_device_registers.h"

/* ARM::CMSIS:RTOS2:Keil RTX5:Source:5.5.2 */
#define RTE_CMSIS_RTOS2                 /* CMSIS-RTOS2 */
        #define RTE_CMSIS_RTOS2_RTX5            /* CMSIS-RTOS2 Keil RTX5 */
        #define RTE_CMSIS_RTOS2_RTX5_SOURCE     /* CMSIS-RTOS2 Keil RTX5 Source */
/* ARM::Security:mbed TLS:2.17.0 */
#define RTE_Security_mbedTLS            /* Security mbed TLS */
/* Keil.ARM Compiler::Compiler:Event Recorder:DAP:1.4.0 */
#define RTE_Compiler_EventRecorder
          #define RTE_Compiler_EventRecorder_DAP
/* Keil.ARM Compiler::Compiler:I/O:File:File System:1.2.0 */
#define RTE_Compiler_IO_File            /* Compiler I/O: File */
          #define RTE_Compiler_IO_File_FS         /* Compiler I/O: File (File System) */
/* Keil.ARM Compiler::Compiler:I/O:STDERR:User:1.2.0 */
#define RTE_Compiler_IO_STDERR          /* Compiler I/O: STDERR */
          #define RTE_Compiler_IO_STDERR_User     /* Compiler I/O: STDERR User */
/* Keil.ARM Compiler::Compiler:I/O:STDIN:User:1.2.0 */
#define RTE_Compiler_IO_STDIN           /* Compiler I/O: STDIN */
          #define RTE_Compiler_IO_STDIN_User      /* Compiler I/O: STDIN User */
/* Keil.ARM Compiler::Compiler:I/O:STDOUT:User:1.2.0 */
#define RTE_Compiler_IO_STDOUT          /* Compiler I/O: STDOUT */
          #define RTE_Compiler_IO_STDOUT_User     /* Compiler I/O: STDOUT User */
/* Keil.MDK-Plus::File System:CORE:LFN:6.13.8 */
#define RTE_FileSystem_Core             /* File System Core */
          #define RTE_FileSystem_LFN              /* File System with Long Filename support */
          #define RTE_FileSystem_Release          /* File System Release Version */
/* Keil.MDK-Plus::File System:Drive:Memory Card:6.13.8 */
#define RTE_FileSystem_Drive_MC_0       /* File System Memory Card Drive 0 */

/* Keil.MDK-Plus::Network:CORE:IPv4 Release:7.14.0 */
#define RTE_Network_Core                /* Network Core */
          #define RTE_Network_IPv4                /* Network IPv4 Stack */
          #define RTE_Network_Release             /* Network Release Version */
/* Keil.MDK-Plus::Network:Interface:ETH:7.14.0 */
#define RTE_Network_Interface_ETH_0     /* Network Interface ETH 0 */

/* Keil.MDK-Plus::Network:Service:DNS Client:7.14.0 */
#define RTE_Network_DNS_Client          /* Network DNS Client */
/* Keil.MDK-Plus::Network:Socket:BSD:7.14.0 */
#define RTE_Network_Socket_BSD          /* Network Socket BSD */
/* Keil.MDK-Plus::Network:Socket:TCP:7.14.0 */
#define RTE_Network_Socket_TCP          /* Network Socket TCP */
/* Keil.MDK-Plus::Network:Socket:UDP:7.14.0 */
#define RTE_Network_Socket_UDP          /* Network Socket UDP */
/* Keil::CMSIS Driver:Ethernet MAC:1.1.0 */
#define RTE_Drivers_ETH_MAC0    (1U)    /* Driver ETH_MAC0 */
/* Keil::CMSIS Driver:Ethernet PHY:KSZ8081RNA:6.3.0 */
#define RTE_Drivers_PHY_KSZ8081RNA      /* Driver PHY KSZ8081RNA/RND */
/* Keil::CMSIS Driver:MCI:1.1.0 */
#define RTE_Drivers_MCI0        (1U)    /* Driver MCI0 */
        #define RTE_Drivers_MCI1        (1U)    /* Driver MCI1 */
/* Keil::CMSIS Driver:VIO:Board:MIMXRT1064-EVK:1.0.0 */
#define RTE_VIO_BOARD
        #define RTE_VIO_MIMXRT1064_EVK
/* MDK-Packs::Data Exchange:JSON:cJSON:1.7.7 */
#define RTE_DataExchange_JSON_cJSON     /* cJSON */
/* MDK-Packs::IoT Client:MQTTClient-C:1.1.0 */
#define RTE_IoT_Client_MQTTClient_C     /* MQTTClient-C IoT Client */
/* MDK-Packs::IoT Client:Watson:1.0.1 */
#define RTE_IoT_Client_Watson           /* Watson IoT Client */
        #define MQTTCLIENT_PLATFORM_HEADER      iotf_network_tls_wrapper.h
/* MDK-Packs::IoT Utility:MQTTPacket:1.1.0 */
#define RTE_IoT_MQTTPacket              /* IoT MQTTPacket */
/* MDK-Packs::IoT Utility:Socket:MDK Network:1.2.0 */
#define RTE_IoT_Socket                  /* IoT Socket */
        #define RTE_IoT_Socket_MDK_Network      /* IoT Socket: MDK::Network */
/* NXP::Device:SDK Drivers:xip_board:2.0.1 */
#define XIP_EXTERNAL_FLASH 1
#define XIP_BOOT_HEADER_ENABLE 1
/* NXP::Device:SDK Drivers:xip_device:2.0.2 */
#define XIP_EXTERNAL_FLASH 1
#define XIP_BOOT_HEADER_ENABLE 1
/* NXP::Device:SDK Utilities:serial_manager_uart:1.0.0 */
#define SERIAL_PORT_TYPE_UART 1


#endif /* RTE_COMPONENTS_H */
