/*
 * IOBANK0_LIB.h
 *
 * Created on: 11/05/2023
 *      Author: Kevin David Martinez Zapata
*/

#ifndef IOBANK0_LIB_H
#define IOBANK0_LIB_H

#include <stdint.h>

/*******************************************************************/
/*************** Definicion de las constantes **********************/
/*******************************************************************/



/*******************************************************************/
/****************Start Bits Fields Type Definition******************/
/*******************************************************************/

/**
 * @struct __iobank0_t
 * @brief Estructura del módulo IOBANK0, contiene 99 registros de 32 bits cada uno.
*/
typedef struct {
    volatile __gpio_status_t GPIO0_STATUS;                  /**< Direccion de memoria  0x000 */
    volatile __gpio_ctrl_t GPIO0_CTRL;                      /**< Direccion de memoria  0x004 */
    volatile __gpio_status_t GPIO1_STATUS;                  /**< Direccion de memoria  0x008 */
    volatile __gpio_ctrl_t GPIO1_CTRL;                      /**< Direccion de memoria  0x00c */
    volatile __gpio_status_t GPIO2_STATUS;                  /**< Direccion de memoria  0x010 */
    volatile __gpio_ctrl_t GPIO2_CTRL;                      /**< Direccion de memoria  0x014 */
    volatile __gpio_status_t GPIO3_STATUS;                  /**< Direccion de memoria  0x018 */
    volatile __gpio_ctrl_t GPIO3_CTRL;                      /**< Direccion de memoria  0x01c */
    volatile __gpio_status_t GPIO4_STATUS;                  /**< Direccion de memoria  0x020 */
    volatile __gpio_ctrl_t GPIO4_CTRL;                      /**< Direccion de memoria  0x024 */
    volatile __gpio_status_t GPIO5_STATUS;                  /**< Direccion de memoria  0x028 */
    volatile __gpio_ctrl_t GPIO5_CTRL;                      /**< Direccion de memoria  0x02c */
    volatile __gpio_status_t GPIO6_STATUS;                  /**< Direccion de memoria  0x030 */
    volatile __gpio_ctrl_t GPIO6_CTRL;                      /**< Direccion de memoria  0x034 */
    volatile __gpio_status_t GPIO7_STATUS;                  /**< Direccion de memoria  0x038 */
    volatile __gpio_ctrl_t GPIO7_CTRL;                      /**< Direccion de memoria  0x03c */
    volatile __gpio_status_t GPIO8_STATUS;                  /**< Direccion de memoria  0x040 */
    volatile __gpio_ctrl_t GPIO8_CTRL;                      /**< Direccion de memoria  0x044 */
    volatile __gpio_status_t GPIO9_STATUS;                  /**< Direccion de memoria  0x048 */
    volatile __gpio_ctrl_t GPIO9_CTRL;                      /**< Direccion de memoria  0x04c */
    volatile __gpio_status_t GPIO10_STATUS;                 /**< Direccion de memoria  0x050 */
    volatile __gpio_ctrl_t GPIO10_CTRL;                     /**< Direccion de memoria  0x054 */
    volatile __gpio_status_t GPIO11_STATUS;                 /**< Direccion de memoria  0x058 */
    volatile __gpio_ctrl_t GPIO11_CTRL;                     /**< Direccion de memoria  0x05c */
    volatile __gpio_status_t GPIO12_STATUS;                 /**< Direccion de memoria  0x060 */
    volatile __gpio_ctrl_t GPIO12_CTRL;                     /**< Direccion de memoria  0x064 */
    volatile __gpio_status_t GPIO13_STATUS;                 /**< Direccion de memoria  0x068 */
    volatile __gpio_ctrl_t GPIO13_CTRL;                     /**< Direccion de memoria  0x06c */
    volatile __gpio_status_t GPIO14_STATUS;                 /**< Direccion de memoria  0x070 */
    volatile __gpio_ctrl_t GPIO14_CTRL;                     /**< Direccion de memoria  0x074 */
    volatile __gpio_status_t GPIO15_STATUS;                 /**< Direccion de memoria  0x078 */
    volatile __gpio_ctrl_t GPIO15_CTRL;                     /**< Direccion de memoria  0x07c */
    volatile __gpio_status_t GPIO16_STATUS;                 /**< Direccion de memoria  0x080 */
    volatile __gpio_ctrl_t GPIO16_CTRL;                     /**< Direccion de memoria  0x084 */
    volatile __gpio_status_t GPIO17_STATUS;                 /**< Direccion de memoria  0x088 */
    volatile __gpio_ctrl_t GPIO17_CTRL;                     /**< Direccion de memoria  0x08c */
    volatile __gpio_status_t GPIO18_STATUS;                 /**< Direccion de memoria  0x090 */
    volatile __gpio_ctrl_t GPIO18_CTRL;                     /**< Direccion de memoria  0x094 */
    volatile __gpio_status_t GPIO19_STATUS;                 /**< Direccion de memoria  0x098 */
    volatile __gpio_ctrl_t GPIO19_CTRL;                     /**< Direccion de memoria  0x09c */
    volatile __gpio_status_t GPIO20_STATUS;                 /**< Direccion de memoria  0x0a0 */
    volatile __gpio_ctrl_t GPIO20_CTRL;                     /**< Direccion de memoria  0x0a4 */
    volatile __gpio_status_t GPIO21_STATUS;                 /**< Direccion de memoria  0x0a8 */
    volatile __gpio_ctrl_t GPIO21_CTRL;                     /**< Direccion de memoria  0x0ac */
    volatile __gpio_status_t GPIO22_STATUS;                 /**< Direccion de memoria  0x0b0 */
    volatile __gpio_ctrl_t GPIO22_CTRL;                     /**< Direccion de memoria  0x0b4 */
    volatile __gpio_status_t GPIO23_STATUS;                 /**< Direccion de memoria  0x0b8 */
    volatile __gpio_ctrl_t GPIO23_CTRL;                     /**< Direccion de memoria  0x0bc */
    volatile __gpio_status_t GPIO24_STATUS;                 /**< Direccion de memoria  0x0c0 */
    volatile __gpio_ctrl_t GPIO24_CTRL;                     /**< Direccion de memoria  0x0c4 */
    volatile __gpio_status_t GPIO25_STATUS;                 /**< Direccion de memoria  0x0c8 */
    volatile __gpio_ctrl_t GPIO25_CTRL;                     /**< Direccion de memoria  0x0cc */
    volatile __gpio_status_t GPIO26_STATUS;                 /**< Direccion de memoria  0x0d0 */
    volatile __gpio_ctrl_t GPIO26_CTRL;                     /**< Direccion de memoria  0x0d4 */
    volatile __gpio_status_t GPIO27_STATUS;                 /**< Direccion de memoria  0xxd8 */
    volatile __gpio_ctrl_t GPIO27_CTRL;                     /**< Direccion de memoria  0x0dc */
    volatile __gpio_status_t GPIO28_STATUS;                 /**< Direccion de memoria  0x0e0 */
    volatile __gpio_ctrl_t GPIO28_CTRL;                     /**< Direccion de memoria  0x0e4 */
    volatile __gpio_status_t GPIO29_STATUS;                 /**< Direccion de memoria  0x0e8 */
    volatile __gpio_ctrl_t GPIO29_CTRL;                     /**< Direccion de memoria  0x0ec */
    volatile __int0_t INTR0;                                /**< Direccion de memoria  0x0f0 */
    volatile __int1_t INTR1;                                /**< Direccion de memoria  0x0f4 */
    volatile __int2_t INTR2;                                /**< Direccion de memoria  0x0f8 */
    volatile __int3_t INTR3;                                /**< Direccion de memoria  0x0fc */
    volatile __int0_t PROC0_INTE0;                          /**< Direccion de memoria  0x100 */
    volatile __int1_t PROC0_INTE1;                          /**< Direccion de memoria  0x104 */
    volatile __int2_t PROC0_INTE2;                          /**< Direccion de memoria  0x108 */
    volatile __int3_t PROC0_INTE3;                          /**< Direccion de memoria  0x10c */
    volatile __int0_t PROC0_INTF0;                          /**< Direccion de memoria  0x110 */
    volatile __int1_t PROC0_INTF1;                          /**< Direccion de memoria  0x114 */
    volatile __int2_t PROC0_INTF2;                          /**< Direccion de memoria  0x118 */
    volatile __int3_t PROC0_INTF3;                          /**< Direccion de memoria  0x11c */
    volatile __int0_t PROC0_INTS0;                          /**< Direccion de memoria  0x120 */
    volatile __int1_t PROC0_INTS1;                          /**< Direccion de memoria  0x124 */
    volatile __int2_t PROC0_INTS2;                          /**< Direccion de memoria  0x128 */
    volatile __int3_t PROC0_INTS3;                          /**< Direccion de memoria  0x12c */
    volatile __int0_t PROC1_INTE0;                          /**< Direccion de memoria  0x130 */
    volatile __int1_t PROC1_INTE1;                          /**< Direccion de memoria  0x134 */
    volatile __int2_t PROC1_INTE2;                          /**< Direccion de memoria  0x138 */
    volatile __int3_t PROC1_INTE3;                          /**< Direccion de memoria  0x13c */
    volatile __int0_t PROC1_INTF0;                          /**< Direccion de memoria  0x140 */
    volatile __int1_t PROC1_INTF1;                          /**< Direccion de memoria  0x144 */
    volatile __int2_t PROC1_INTF2;                          /**< Direccion de memoria  0x148 */
    volatile __int3_t PROC1_INTF3;                          /**< Direccion de memoria  0x14c */
    volatile __int0_t PROC1_INTS0;                          /**< Direccion de memoria  0x150 */
    volatile __int1_t PROC1_INTS1;                          /**< Direccion de memoria  0x154 */
    volatile __int2_t PROC1_INTS2;                          /**< Direccion de memoria  0x158 */
    volatile __int3_t PROC1_INTS3;                          /**< Direccion de memoria  0x15c */
    volatile __int0_t DORMANT_WAKE_INTE0;                   /**< Direccion de memoria  0x160 */
    volatile __int1_t DORMANT_WAKE_INTE1;                   /**< Direccion de memoria  0x164 */
    volatile __int2_t DORMANT_WAKE_INTE2;                   /**< Direccion de memoria  0x168 */
    volatile __int3_t DORMANT_WAKE_INTE3;                   /**< Direccion de memoria  0x16c */
    volatile __int0_t DORMANT_WAKE_INTF0;                   /**< Direccion de memoria  0x170 */
    volatile __int1_t DORMANT_WAKE_INTF1;                   /**< Direccion de memoria  0x174 */
    volatile __int2_t DORMANT_WAKE_INTF2;                   /**< Direccion de memoria  0x178 */
    volatile __int3_t DORMANT_WAKE_INTF3;                   /**< Direccion de memoria  0x17c */
    volatile __int0_t DORMANT_WAKE_INTS0;                   /**< Direccion de memoria  0x180 */
    volatile __int1_t DORMANT_WAKE_INTS1;                   /**< Direccion de memoria  0x184 */
    volatile __int2_t DORMANT_WAKE_INTS2;                   /**< Direccion de memoria  0x188 */
    volatile __int3_t DORMANT_WAKE_INTS3;                   /**< Direccion de memoria  0x18c */
}__iobank0_t;

/**
 * @union __gpio_status_t
 * @brief Union de los registros GPIO_STATUS de 32 bits. Contiene los 9 campos de bits de los registros.
*/
typedef union {     // Registros GPIO STATUS
    uint32_t WORD;
    struct {
        uint32_t OUTFROMPERI    : 1;    /**< Campo de bits OUTFROMPERI para los registros GPIO_STATUS */
        uint32_t OUTTOPAD       : 1;    /**< Campo de bits OUTTOPAD para los registros GPIO_STATUS */
        uint32_t OEFROMPERI     : 1;    /**< Campo de bits OEFROMPERI para los registros GPIO_STATUS */
        uint32_t OETOPAD        : 1;    /**< Campo de bits OETOPAD para los registros GPIO_STATUS */
        uint32_t INFROMPAD      : 1;    /**< Campo de bits INFROMPAD para los registros GPIO_STATUS */
        uint32_t INTOPERI       : 1;    /**< Campo de bits INTOPERI para los registros GPIO_STATUS */
        uint32_t IRQFROMPAD     : 1;    /**< Campo de bits IRQFROMPAD para los registros GPIO_STATUS */
        uint32_t IRQTOPROC      : 1;    /**< Campo de bits IRQTOPROC para los registros GPIO_STATUS */
        uint32_t                : 24;   /**< Campo de bits reservado para los registros GPIO_STATUS */
    }BITS;
}__gpio_status_t;

/**
 * @union __gpio_ctrl_t
 * @brief Union de los registros GPIO_CTRL de 32 bits. Contiene los 6 campos de bits de los registros.
*/
typedef union {     // Registros GPIO CTRL
    uint32_t WORD;
    struct {
        uint32_t FUNCSEL    : 5;    /**< Campo de bits FUNCSEL para los registros GPIO_CTRL */
        uint32_t OUTOVER    : 2;    /**< Campo de bits OUTOVER para los registros GPIO_CTRL */
        uint32_t OEOVER     : 2;    /**< Campo de bits OEOVER para los registros GPIO_CTRL */
        uint32_t INOVER     : 2;    /**< Campo de bits INOVER para los registros GPIO_CTRL */
        uint32_t IRQOVER    : 2;    /**< Campo de bits IRQOVER para los registros GPIO_CTRL */
        uint32_t            : 19;   /**< Campo de bits reservado para los registros GPIO_CTRL */
    }BITS;
}__gpio_ctrl_t;

/**
 * @union __int0_t
 * @brief Union de los registros que contienen INTR0, INTE0, INTF0 e INTS0. Contiene los 32 campos de bits de los registros.
*/
typedef union {
    uint32_t WORD;
    struct {
        uint32_t GPIO0_LEVEL_LOW    : 1;    /**< Campo de bits GPIO0_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO0_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO0_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO0_EDGE_LOW     : 1;    /**< Campo de bits GPIO0_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO0_EDGE_HIGH    : 1;    /**< Campo de bits GPIO0_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO1_LEVEL_LOW    : 1;    /**< Campo de bits GPIO1_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO1_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO1_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO1_EDGE_LOW     : 1;    /**< Campo de bits GPIO1_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO1_EDGE_HIGH    : 1;    /**< Campo de bits GPIO1_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO2_LEVEL_LOW    : 1;    /**< Campo de bits GPIO2_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO2_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO2_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO2_EDGE_LOW     : 1;    /**< Campo de bits GPIO2_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO2_EDGE_HIGH    : 1;    /**< Campo de bits GPIO2_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO3_LEVEL_LOW    : 1;    /**< Campo de bits GPIO3_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO3_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO3_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO3_EDGE_LOW     : 1;    /**< Campo de bits GPIO3_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO3_EDGE_HIGH    : 1;    /**< Campo de bits GPIO3_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO4_LEVEL_LOW    : 1;    /**< Campo de bits GPIO4_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO4_LEVEL_HIGH1  : 1;    /**< Campo de bits GPIO4_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO4_EDGE_LOW     : 1;    /**< Campo de bits GPIO4_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO4_EDGE_HIGH    : 1;    /**< Campo de bits GPIO4_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO5_LEVEL_LOW    : 1;    /**< Campo de bits GPIO5_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO5_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO5_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO5_EDGE_LOW     : 1;    /**< Campo de bits GPIO5_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO5_EDGE_HIGH    : 1;    /**< Campo de bits GPIO5_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO6_LEVEL_LOW    : 1;    /**< Campo de bits GPIO6_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO6_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO6_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO6_EDGE_LOW     : 1;    /**< Campo de bits GPIO6_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO6_EDGE_HIGH    : 1;    /**< Campo de bits GPIO6_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO7_LEVEL_LOW    : 1;    /**< Campo de bits GPIO7_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO7_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO7_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO7_EDGE_LOW     : 1;    /**< Campo de bits GPIO7_LEVEL_LOW para los registros INT0 */
        uint32_t GPIO7_EDGE_HIGH    : 1;    /**< Campo de bits GPIO7_LEVEL_LOW para los registros INT0 */
    }BITS;
}__int0_t;

/**
 * @union __int1_t
 * @brief Union de los registros que contienen INTR1, INTE1, INTF1 e INTS1. Contiene los 32 campos de bits de los registros.
*/
typedef union {
    uint32_t WORD;
    struct {
        uint32_t GPIO8_LEVEL_LOW     : 1;    /**< Campo de bits GPIO8_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO8_LEVEL_HIGH    : 1;    /**< Campo de bits GPIO8_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO8_EDGE_LOW      : 1;    /**< Campo de bits GPIO8_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO8_EDGE_HIGH     : 1;    /**< Campo de bits GPIO8_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO9_LEVEL_LOW     : 1;    /**< Campo de bits GPIO9_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO9_LEVEL_HIGH    : 1;    /**< Campo de bits GPIO9_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO9_EDGE_LOW      : 1;    /**< Campo de bits GPIO9_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO9_EDGE_HIGH     : 1;    /**< Campo de bits GPIO9_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO10_LEVEL_LOW    : 1;    /**< Campo de bits GPIO10_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO10_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO10_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO10_EDGE_LOW     : 1;    /**< Campo de bits GPIO10_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO10_EDGE_HIGH    : 1;    /**< Campo de bits GPIO10_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO11_LEVEL_LOW    : 1;    /**< Campo de bits GPIO11_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO11_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO11_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO11_EDGE_LOW     : 1;    /**< Campo de bits GPIO11_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO11_EDGE_HIGH    : 1;    /**< Campo de bits GPIO11_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO12_LEVEL_LOW    : 1;    /**< Campo de bits GPIO12_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO12_LEVEL_HIGH1  : 1;    /**< Campo de bits GPIO12_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO12_EDGE_LOW     : 1;    /**< Campo de bits GPIO12_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO12_EDGE_HIGH    : 1;    /**< Campo de bits GPIO12_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO13_LEVEL_LOW    : 1;    /**< Campo de bits GPIO13_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO13_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO13_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO13_EDGE_LOW     : 1;    /**< Campo de bits GPIO13_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO13_EDGE_HIGH    : 1;    /**< Campo de bits GPIO13_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO14_LEVEL_LOW    : 1;    /**< Campo de bits GPIO14_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO14_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO14_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO14_EDGE_LOW     : 1;    /**< Campo de bits GPIO14_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO14_EDGE_HIGH    : 1;    /**< Campo de bits GPIO14_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO15_LEVEL_LOW    : 1;    /**< Campo de bits GPIO15_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO15_LEVEL_HIGH   : 1;    /**< Campo de bits GPIO15_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO15_EDGE_LOW     : 1;    /**< Campo de bits GPIO15_LEVEL_LOW para los registros INT1 */
        uint32_t GPIO15_EDGE_HIGH    : 1;    /**< Campo de bits GPIO15_LEVEL_LOW para los registros INT1 */
    }BITS;
}__int1_t;

/**
 * @union __int2_t
 * @brief Union de los registros que contienen INTR2, INTE2, INTF2 e INTS2. Contiene los 32 campos de bits de los registros.
*/
typedef union {
    uint32_t WORD;
    struct {
        uint32_t GPIO16_LEVEL_LOW    : 1;   /**< Campo de bits GPIO16_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO16_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO16_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO16_EDGE_LOW     : 1;   /**< Campo de bits GPIO16_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO16_EDGE_HIGH    : 1;   /**< Campo de bits GPIO16_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO17_LEVEL_LOW    : 1;   /**< Campo de bits GPIO17_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO17_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO17_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO17_EDGE_LOW     : 1;   /**< Campo de bits GPIO17_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO17_EDGE_HIGH    : 1;   /**< Campo de bits GPIO17_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO18_LEVEL_LOW    : 1;   /**< Campo de bits GPIO18_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO18_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO18_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO18_EDGE_LOW     : 1;   /**< Campo de bits GPIO18_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO18_EDGE_HIGH    : 1;   /**< Campo de bits GPIO18_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO19_LEVEL_LOW    : 1;   /**< Campo de bits GPIO19_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO19_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO19_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO19_EDGE_LOW     : 1;   /**< Campo de bits GPIO19_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO19_EDGE_HIGH    : 1;   /**< Campo de bits GPIO19_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO20_LEVEL_LOW    : 1;   /**< Campo de bits GPIO20_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO20_LEVEL_HIGH1  : 1;   /**< Campo de bits GPIO20_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO20_EDGE_LOW     : 1;   /**< Campo de bits GPIO20_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO20_EDGE_HIGH    : 1;   /**< Campo de bits GPIO20_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO21_LEVEL_LOW    : 1;   /**< Campo de bits GPIO21_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO21_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO21_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO21_EDGE_LOW     : 1;   /**< Campo de bits GPIO21_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO21_EDGE_HIGH    : 1;   /**< Campo de bits GPIO21_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO22_LEVEL_LOW    : 1;   /**< Campo de bits GPIO22_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO22_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO22_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO22_EDGE_LOW     : 1;   /**< Campo de bits GPIO22_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO22_EDGE_HIGH    : 1;   /**< Campo de bits GPIO22_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO23_LEVEL_LOW    : 1;   /**< Campo de bits GPIO23_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO23_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO23_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO23_EDGE_LOW     : 1;   /**< Campo de bits GPIO23_LEVEL_LOW para los registros INT2 */
        uint32_t GPIO23_EDGE_HIGH    : 1;   /**< Campo de bits GPIO23_LEVEL_LOW para los registros INT2 */
    }BITS;
}__int2_t;

/**
 * @union __int3_t
 * @brief Union de los registros que contienen INTR3, INTE3, INTF3 e INTS3. Contiene los 32 campos de bits de los registros.
*/
typedef union {
    uint32_t WORD;
    struct {
        uint32_t GPIO24_LEVEL_LOW    : 1;   /**< Campo de bits GPIO24_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO24_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO24_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO24_EDGE_LOW     : 1;   /**< Campo de bits GPIO24_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO24_EDGE_HIGH    : 1;   /**< Campo de bits GPIO24_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO25_LEVEL_LOW    : 1;   /**< Campo de bits GPIO25_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO25_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO25_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO25_EDGE_LOW     : 1;   /**< Campo de bits GPIO25_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO25_EDGE_HIGH    : 1;   /**< Campo de bits GPIO25_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO26_LEVEL_LOW    : 1;   /**< Campo de bits GPIO26_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO26_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO26_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO26_EDGE_LOW     : 1;   /**< Campo de bits GPIO26_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO26_EDGE_HIGH    : 1;   /**< Campo de bits GPIO26_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO27_LEVEL_LOW    : 1;   /**< Campo de bits GPIO27_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO27_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO27_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO27_EDGE_LOW     : 1;   /**< Campo de bits GPIO27_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO27_EDGE_HIGH    : 1;   /**< Campo de bits GPIO27_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO28_LEVEL_LOW    : 1;   /**< Campo de bits GPIO28_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO28_LEVEL_HIGH1  : 1;   /**< Campo de bits GPIO28_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO28_EDGE_LOW     : 1;   /**< Campo de bits GPIO28_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO28_EDGE_HIGH    : 1;   /**< Campo de bits GPIO28_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO29_LEVEL_LOW    : 1;   /**< Campo de bits GPIO29_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO29_LEVEL_HIGH   : 1;   /**< Campo de bits GPIO29_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO29_EDGE_LOW     : 1;   /**< Campo de bits GPIO29_LEVEL_LOW para los registros INT3 */
        uint32_t GPIO29_EDGE_HIGH    : 1;   /**< Campo de bits GPIO29_LEVEL_LOW para los registros INT3 */
        uint32_t                     : 8;   /**< Campo de bits reservado para los registros INT3 */
    }BITS;
}__int3_t;

/**************************************************
 **************************************************
 *              DEFINES para los registros
 **************************************************
***************************************************/

#define sIOBANK0 (*((__iobank0_t *)(0x40014000)))

/****************************************************************************************
 ****************************************************************************************
 * REGISTROS GPIO STATUS
 ****************************************************************************************
*****************************************************************************************/

// Registro GPIO0_STATUS
#define rIOBANK0_GPIO0_STATUS sIOBANK0.GPIO0_STATUS.WORD
#define bIOBANK0_GPIO0_OUTFROMPERI sIOBANK0.GPIO0_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO0_OUTTOPAD sIOBANK0.GPIO0_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO0_OEFROMPERI sIOBANK0.GPIO0_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO0_OETOPAD sIOBANK0.GPIO0_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO0_INFROMPAD sIOBANK0.GPIO0_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO0_INTOPERI sIOBANK0.GPIO0_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO0_IRQFROMPAD sIOBANK0.GPIO0_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO0_IRQTOPROC sIOBANK0.GPIO0_STATUS.BITS.IRQTOPROC

// Registro GPIO1_STATUS
#define rIOBANK0_GPIO1_STATUS sIOBANK0.GPIO1_STATUS.WORD
#define bIOBANK0_GPIO1_OUTFROMPERI sIOBANK0.GPIO1_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO1_OUTTOPAD sIOBANK0.GPIO1_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO1_OEFROMPERI sIOBANK0.GPIO1_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO1_OETOPAD sIOBANK0.GPIO1_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO1_INFROMPAD sIOBANK0.GPIO1_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO1_INTOPERI sIOBANK0.GPIO1_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO1_IRQFROMPAD sIOBANK0.GPIO1_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO1_IRQTOPROC sIOBANK0.GPIO1_STATUS.BITS.IRQTOPROC

// Registro GPIO2_STATUS
#define rIOBANK0_GPIO2_STATUS sIOBANK0.GPIO2_STATUS.WORD
#define bIOBANK0_GPIO2_OUTFROMPERI sIOBANK0.GPIO2_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO2_OUTTOPAD sIOBANK0.GPIO2_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO2_OEFROMPERI sIOBANK0.GPIO2_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO2_OETOPAD sIOBANK0.GPIO2_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO2_INFROMPAD sIOBANK0.GPIO2_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO2_GPIO1O3_STATUS sIOBANK0.GPIO3_STATUS.WORD

// Registro GPIO3_STATUS
#define bIOBANK0_GPIO3_OUTFROMPERI sIOBANK0.GPIO3_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO3_OUTTOPAD sIOBANK0.GPIO3_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO3_OEFROMPERI sIOBANK0.GPIO3_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO3_OETOPAD sIOBANK0.GPIO3_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO3_INFROMPAD sIOBANK0.GPIO3_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO3_INTOPERI sIOBANK0.GPIO3_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO3_IRQFROMPAD sIOBANK0.GPIO3_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO3_IRQTOPROC sIOBANK0.GPIO3_STATUS.BITS.IRQTOPROC

// Registro GPIO4_STGPIO1ATUS
#define rIOBANK0_GPIO4_STATUS sIOBANK0.GPIO4_STATUS.WORD
#define bIOBANK0_GPIO4_OUTFROMPERI sIOBANK0.GPIO4_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO4_OUTTOPAD sIOBANK0.GPIO4_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO4_OEFROMPERI sIOBANK0.GPIO4_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO4_OETOPAD sIOBANK0.GPIO4_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO4_INFROMPAD sIOBANK0.GPIO4_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO4_INTOPERI sIOBANK0.GPIO4_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO4_IRQFROMPAD sIOBANK0.GPIO4_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO4_IRQTOPROC sIOBANK0.GPIO4_STATUS.BITS.IRQTOPROC

// Registro GPIO5_STATUS
#define rIOBANK0_GPIO5_STATUS sIOBANK0.GPIO5_STATUS.WORD
#define bIOBANK0_GPIO5_OUTFROMPERI sIOBANK0.GPIO5_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO5_OUTTOPAD sIOBANK0.GPIO5_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO5_OEFROMPERI sIOBANK0.GPIO5_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO5_OETOPAD sIOBANK0.GPIO5_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO5_INFROMPAD sIOBANK0.GPIO5_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO5_INTOPERI sIOBANK0.GPIO5_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO5_IRQFROMPAD sIOBANK0.GPIO5_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO5_IRQTOPROC sIOBANK0.GPIO5_STATUS.BITS.IRQTOPROC

// Registro GPIO6_STATUS
#define rIOBANK0_GPIO6_STATUS sIOBANK0.GPIO6_STATUS.WORD
#define bIOBANK0_GPIO6_OUTFROMPERI sIOBANK0.GPIO6_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO6_OUTTOPAD sIOBANK0.GPIO6_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO6_OEFROMPERI sIOBANK0.GPIO6_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO6_OETOPAD sIOBANK0.GPIO6_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO6_INFROMPAD sIOBANK0.GPIO6_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO6_INTOPERI sIOBANK0.GPIO6_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO6_IRQFROMPAD sIOBANK0.GPIO6_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO6_IRQTOPROC sIOBANK0.GPIO6_STATUS.BITS.IRQTOPROC

// Registro GPIO7_STATUS
#define rIOBANK0_GPIO7_STATUS sIOBANK0.GPIO7_STATUS.WORD
#define bIOBANK0_GPIO7_OUTFROMPERI sIOBANK0.GPIO7_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO7_OUTTOPAD sIOBANK0.GPIO7_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO7_OEFROMPERI sIOBANK0.GPIO7_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO7_OETOPAD sIOBANK0.GPIO7_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO7_INFROMPAD sIOBANK0.GPIO7_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO7_INTOPERI sIOBANK0.GPIO7_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO7_IRQFROMPAD sIOBANK0.GPIO7_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO7_IRQTOPROC sIOBANK0.GPIO7_STATUS.BITS.IRQTOPROC

// Registro GPIO8_STATUS
#define rIOBANK0_GPIO8_STATUS sIOBANK0.GPIO8_STATUS.WORD
#define bIOBANK0_GPIO8_OUTFROMPERI sIOBANK0.GPIO8_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO8_OUTTOPAD sIOBANK0.GPIO8_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO8_OEFROMPERI sIOBANK0.GPIO8_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO8_OETOPAD sIOBANK0.GPIO8_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO8_INFROMPAD sIOBANK0.GPIO8_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO8_INTOPERI sIOBANK0.GPIO8_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO8_IRQFROMPAD sIOBANK0.GPIO8_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO8_IRQTOPROC sIOBANK0.GPIO8_STATUS.BITS.IRQTOPROC

// Registro GPIO9_STATUS
#define rIOBANK0_GPIO9_STATUS sIOBANK0.GPIO9_STATUS.WORD
#define bIOBANK0_GPIO9_OUTFROMPERI sIOBANK0.GPIO9_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO9_OUTTOPAD sIOBANK0.GPIO9_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO9_OEFROMPERI sIOBANK0.GPIO9_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO9_OETOPAD sIOBANK0.GPIO9_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO9_INFROMPAD sIOBANK0.GPIO9_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO9_INTOPERI sIOBANK0.GPIO9_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO9_IRQFROMPAD sIOBANK0.GPIO9_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO9_IRQTOPROC sIOBANK0.GPIO9_STATUS.BITS.IRQTOPROC

// Registro GPIO10_STATUS
#define rIOBANK0_GPIO10_STATUS sIOBANK0.GPIO10_STATUS.WORD
#define bIOBANK0_GPIO10_OUTFROMPERI sIOBANK0.GPIO10_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO10_OUTTOPAD sIOBANK0.GPIO10_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO10_OEFROMPERI sIOBANK0.GPIO10_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO10_OETOPAD sIOBANK0.GPIO10_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO10_INFROMPAD sIOBANK0.GPIO10_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO10_INTOPERI sIOBANK0.GPIO10_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO10_IRQFROMPAD sIOBANK0.GPIO10_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO10_IRQTOPROC sIOBANK0.GPIO10_STATUS.BITS.IRQTOPROC

// Registro GPIO11_STATUS
#define rIOBANK0_GPIO11_STATUS sIOBANK0.GPIO11_STATUS.WORD
#define bIOBANK0_GPIO11_OUTFROMPERI sIOBANK0.GPIO11_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO11_OUTTOPAD sIOBANK0.GPIO11_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO11_OEFROMPERI sIOBANK0.GPIO11_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO11_OETOPAD sIOBANK0.GPIO11_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO11_INFROMPAD sIOBANK0.GPIO11_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO11_INTOPERI sIOBANK0.GPIO11_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO11_IRQFROMPAD sIOBANK0.GPIO11_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO11_IRQTOPROC sIOBANK0.GPIO11_STATUS.BITS.IRQTOPROC

// Registro GPIO12_STATUS
#define rIOBANK0_GPIO12_STATUS sIOBANK0.GPIO12_STATUS.WORD
#define bIOBANK0_GPIO12_OUTFROMPERI sIOBANK0.GPIO12_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO12_OUTTOPAD sIOBANK0.GPIO12_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO12_OEFROMPERI sIOBANK0.GPIO12_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO12_OETOPAD sIOBANK0.GPIO12_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO12_INFROMPAD sIOBANK0.GPIO12_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO12_INTOPERI sIOBANK0.GPIO12_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO12_IRQFROMPAD sIOBANK0.GPIO12_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO12_IRQTOPROC sIOBANK0.GPIO12_STATUS.BITS.IRQTOPROC

// Registro GPIO13_STATUS
#define rIOBANK0_GPIO13_STATUS sIOBANK0.GPIO13_STATUS.WORD
#define bIOBANK0_GPIO13_OUTFROMPERI sIOBANK0.GPIO13_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO13_OUTTOPAD sIOBANK0.GPIO13_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO13_OEFROMPERI sIOBANK0.GPIO13_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO13_OETOPAD sIOBANK0.GPIO13_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO13_INFROMPAD sIOBANK0.GPIO13_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO13_INTOPERI sIOBANK0.GPIO13_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO13_IRQFROMPAD sIOBANK0.GPIO13_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO13_IRQTOPROC sIOBANK0.GPIO13_STATUS.BITS.IRQTOPROC

// Registro GPIO14_STATUS
#define rIOBANK0_GPIO14_STATUS sIOBANK0.GPIO14_STATUS.WORD
#define bIOBANK0_GPIO14_OUTFROMPERI sIOBANK0.GPIO14_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO14_OUTTOPAD sIOBANK0.GPIO14_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO14_OEFROMPERI sIOBANK0.GPIO14_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO14_OETOPAD sIOBANK0.GPIO14_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO14_INFROMPAD sIOBANK0.GPIO14_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO14_INTOPERI sIOBANK0.GPIO14_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO14_IRQFROMPAD sIOBANK0.GPIO14_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO14_IRQTOPROC sIOBANK0.GPIO14_STATUS.BITS.IRQTOPROC

// Registro GPIO15_STATUS
#define rIOBANK0_GPIO15_STATUS sIOBANK0.GPIO15_STATUS.WORD
#define bIOBANK0_GPIO15_OUTFROMPERI sIOBANK0.GPIO15_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO15_OUTTOPAD sIOBANK0.GPIO15_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO15_OEFROMPERI sIOBANK0.GPIO15_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO15_OETOPAD sIOBANK0.GPIO15_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO15_INFROMPAD sIOBANK0.GPIO15_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO15_INTOPERI sIOBANK0.GPIO15_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO15_IRQFROMPAD sIOBANK0.GPIO15_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO15_IRQTOPROC sIOBANK0.GPIO15_STATUS.BITS.IRQTOPROC

// Registro GPIO16_STATUS
#define rIOBANK0_GPIO16_STATUS sIOBANK0.GPIO16_STATUS.WORD
#define bIOBANK0_GPIO16_OUTFROMPERI sIOBANK0.GPIO16_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO16_OUTTOPAD sIOBANK0.GPIO16_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO16_OEFROMPERI sIOBANK0.GPIO16_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO16_OETOPAD sIOBANK0.GPIO16_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO16_INFROMPAD sIOBANK0.GPIO16_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO16_INTOPERI sIOBANK0.GPIO16_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO16_IRQFROMPAD sIOBANK0.GPIO16_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO16_IRQTOPROC sIOBANK0.GPIO16_STATUS.BITS.IRQTOPROC

// Registro GPIO17_STATUS
#define rIOBANK0_GPIO17_STATUS sIOBANK0.GPIO17_STATUS.WORD
#define bIOBANK0_GPIO17_OUTFROMPERI sIOBANK0.GPIO17_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO17_OUTTOPAD sIOBANK0.GPIO17_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO17_OEFROMPERI sIOBANK0.GPIO17_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO17_OETOPAD sIOBANK0.GPIO17_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO17_INFROMPAD sIOBANK0.GPIO17_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO17_INTOPERI sIOBANK0.GPIO17_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO17_IRQFROMPAD sIOBANK0.GPIO17_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO17_IRQTOPROC sIOBANK0.GPIO17_STATUS.BITS.IRQTOPROC

// Registro GPIO18_STATUS
#define rIOBANK0_GPIO18_STATUS sIOBANK0.GPIO18_STATUS.WORD
#define bIOBANK0_GPIO18_OUTFROMPERI sIOBANK0.GPIO18_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO18_OUTTOPAD sIOBANK0.GPIO18_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO18_OEFROMPERI sIOBANK0.GPIO18_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO18_OETOPAD sIOBANK0.GPIO18_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO18_INFROMPAD sIOBANK0.GPIO18_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO18_INTOPERI sIOBANK0.GPIO18_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO18_IRQFROMPAD sIOBANK0.GPIO18_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO18_IRQTOPROC sIOBANK0.GPIO18_STATUS.BITS.IRQTOPROC

// Registro GPIO19_STATUS
#define rIOBANK0_GPIO19_STATUS sIOBANK0.GPIO19_STATUS.WORD
#define bIOBANK0_GPIO19_OUTFROMPERI sIOBANK0.GPIO19_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO19_OUTTOPAD sIOBANK0.GPIO19_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO19_OEFROMPERI sIOBANK0.GPIO19_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO19_OETOPAD sIOBANK0.GPIO19_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO19_INFROMPAD sIOBANK0.GPIO19_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO19_INTOPERI sIOBANK0.GPIO19_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO19_IRQFROMPAD sIOBANK0.GPIO19_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO19_IRQTOPROC sIOBANK0.GPIO19_STATUS.BITS.IRQTOPROC

// Registro GPIO20_STATUS
#define rIOBANK0_GPIO20_STATUS sIOBANK0.GPIO20_STATUS.WORD
#define bIOBANK0_GPIO20_OUTFROMPERI sIOBANK0.GPIO20_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO20_OUTTOPAD sIOBANK0.GPIO20_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO20_OEFROMPERI sIOBANK0.GPIO20_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO20_OETOPAD sIOBANK0.GPIO20_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO20_INFROMPAD sIOBANK0.GPIO20_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO20_INTOPERI sIOBANK0.GPIO20_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO20_IRQFROMPAD sIOBANK0.GPIO20_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO20_IRQTOPROC sIOBANK0.GPIO20_STATUS.BITS.IRQTOPROC

// Registro GPIO21_STATUS
#define rIOBANK0_GPIO21_STATUS sIOBANK0.GPIO21_STATUS.WORD
#define bIOBANK0_GPIO21_OUTFROMPERI sIOBANK0.GPIO21_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO21_OUTTOPAD sIOBANK0.GPIO21_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO21_OEFROMPERI sIOBANK0.GPIO21_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO21_OETOPAD sIOBANK0.GPIO21_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO21_INFROMPAD sIOBANK0.GPIO21_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO21_INTOPERI sIOBANK0.GPIO21_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO21_IRQFROMPAD sIOBANK0.GPIO21_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO21_IRQTOPROC sIOBANK0.GPIO21_STATUS.BITS.IRQTOPROC

// Registro GPIO22_STATUS
#define rIOBANK0_GPIO22_STATUS sIOBANK0.GPIO22_STATUS.WORD
#define bIOBANK0_GPIO22_OUTFROMPERI sIOBANK0.GPIO22_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO22_OUTTOPAD sIOBANK0.GPIO22_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO22_OEFROMPERI sIOBANK0.GPIO22_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO22_OETOPAD sIOBANK0.GPIO22_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO22_INFROMPAD sIOBANK0.GPIO22_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO22_INTOPERI sIOBANK0.GPIO22_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO22_IRQFROMPAD sIOBANK0.GPIO22_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO22_IRQTOPROC sIOBANK0.GPIO22_STATUS.BITS.IRQTOPROC

// Registro GPIO23_STATUS
#define rIOBANK0_GPIO23_STATUS sIOBANK0.GPIO23_STATUS.WORD
#define bIOBANK0_GPIO23_OUTFROMPERI sIOBANK0.GPIO23_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO23_OUTTOPAD sIOBANK0.GPIO23_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO23_OEFROMPERI sIOBANK0.GPIO23_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO23_OETOPAD sIOBANK0.GPIO23_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO23_INFROMPAD sIOBANK0.GPIO23_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO23_INTOPERI sIOBANK0.GPIO23_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO23_IRQFROMPAD sIOBANK0.GPIO23_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO23_IRQTOPROC sIOBANK0.GPIO23_STATUS.BITS.IRQTOPROC

// Registro GPIO24_STATUS
#define rIOBANK0_GPIO24_STATUS sIOBANK0.GPIO24_STATUS.WORD
#define bIOBANK0_GPIO24_OUTFROMPERI sIOBANK0.GPIO24_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO24_OUTTOPAD sIOBANK0.GPIO24_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO24_OEFROMPERI sIOBANK0.GPIO24_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO24_OETOPAD sIOBANK0.GPIO24_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO24_INFROMPAD sIOBANK0.GPIO24_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO24_INTOPERI sIOBANK0.GPIO24_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO24_IRQFROMPAD sIOBANK0.GPIO24_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO24_IRQTOPROC sIOBANK0.GPIO24_STATUS.BITS.IRQTOPROC

// Registro GPIO25_STATUS
#define rIOBANK0_GPIO25_STATUS sIOBANK0.GPIO25_STATUS.WORD
#define bIOBANK0_GPIO25_OUTFROMPERI sIOBANK0.GPIO25_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO25_OUTTOPAD sIOBANK0.GPIO25_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO25_OEFROMPERI sIOBANK0.GPIO25_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO25_OETOPAD sIOBANK0.GPIO25_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO25_INFROMPAD sIOBANK0.GPIO25_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO25_INTOPERI sIOBANK0.GPIO25_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO25_IRQFROMPAD sIOBANK0.GPIO25_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO25_IRQTOPROC sIOBANK0.GPIO25_STATUS.BITS.IRQTOPROC

// Registro GPIO26_STATUS
#define rIOBANK0_GPIO26_STATUS sIOBANK0.GPIO26_STATUS.WORD
#define bIOBANK0_GPIO26_OUTFROMPERI sIOBANK0.GPIO26_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO26_OUTTOPAD sIOBANK0.GPIO26_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO26_OEFROMPERI sIOBANK0.GPIO26_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO26_OETOPAD sIOBANK0.GPIO26_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO26_INFROMPAD sIOBANK0.GPIO26_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO26_INTOPERI sIOBANK0.GPIO26_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO26_IRQFROMPAD sIOBANK0.GPIO26_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO26_IRQTOPROC sIOBANK0.GPIO26_STATUS.BITS.IRQTOPROC

// Registro GPIO27_STATUS
#define rIOBANK0_GPIO27_STATUS sIOBANK0.GPIO27_STATUS.WORD
#define bIOBANK0_GPIO27_OUTFROMPERI sIOBANK0.GPIO27_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO27_OUTTOPAD sIOBANK0.GPIO27_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO27_OEFROMPERI sIOBANK0.GPIO27_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO27_OETOPAD sIOBANK0.GPIO27_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO27_INFROMPAD sIOBANK0.GPIO27_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO27_INTOPERI sIOBANK0.GPIO27_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO27_IRQFROMPAD sIOBANK0.GPIO27_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO27_IRQTOPROC sIOBANK0.GPIO27_STATUS.BITS.IRQTOPROC

// Registro GPIO28_STATUS
#define rIOBANK0_GPIO28_STATUS sIOBANK0.GPIO28_STATUS.WORD
#define bIOBANK0_GPIO28_OUTFROMPERI sIOBANK0.GPIO28_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO28_OUTTOPAD sIOBANK0.GPIO28_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO28_OEFROMPERI sIOBANK0.GPIO28_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO28_OETOPAD sIOBANK0.GPIO28_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO28_INFROMPAD sIOBANK0.GPIO28_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO28_INTOPERI sIOBANK0.GPIO28_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO28_IRQFROMPAD sIOBANK0.GPIO28_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO28_IRQTOPROC sIOBANK0.GPIO28_STATUS.BITS.IRQTOPROC

// Registro GPIO29_STATUS
#define rIOBANK0_GPIO29_STATUS sIOBANK0.GPIO29_STATUS.WORD
#define bIOBANK0_GPIO29_OUTFROMPERI sIOBANK0.GPIO29_STATUS.BITS.OUTFROMPERI
#define bIOBANK0_GPIO29_OUTTOPAD sIOBANK0.GPIO29_STATUS.BITS.OUTTOPAD
#define bIOBANK0_GPIO29_OEFROMPERI sIOBANK0.GPIO29_STATUS.BITS.OEFROMPERI
#define bIOBANK0_GPIO29_OETOPAD sIOBANK0.GPIO29_STATUS.BITS.OETOPAD
#define bIOBANK0_GPIO29_INFROMPAD sIOBANK0.GPIO29_STATUS.BITS.INFROMPAD
#define bIOBANK0_GPIO29_INTOPERI sIOBANK0.GPIO29_STATUS.BITS.INTOPERI
#define bIOBANK0_GPIO29_IRQFROMPAD sIOBANK0.GPIO29_STATUS.BITS.IRQFROMPAD
#define bIOBANK0_GPIO29_IRQTOPROC sIOBANK0.GPIO29_STATUS.BITS.IRQTOPROC

/****************************************************************************************
 ****************************************************************************************
 * REGISTROS GPIO CTRL
 ****************************************************************************************
*****************************************************************************************/

// Registro GPIO0_CTRL
#define rIOBANK0_GPIO0_CTRL sIOBANK0.GPIO0_CTRL.WORD
#define bIOBANK0_GPIO0_FUNCSEL sIOBANK0.GPIO0_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO0_OUTOVER sIOBANK0.GPIO0_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO0_OEOVER sIOBANK0.GPIO0_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO0_INOVER sIOBANK0.GPIO0_CTRL.BITS.INOVER
#define bIOBANK0_GPIO0_IRQOVER sIOBANK0.GPIO0_CTRL.BITS.IRQOVER

// Registro GPIO1_CTRL
#define rIOBANK0_GPIO1_CTRL sIOBANK0.GPIO1_CTRL.WORD
#define bIOBANK0_GPIO1_FUNCSEL sIOBANK0.GPIO1_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO1_OUTOVER sIOBANK0.GPIO1_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO1_OEOVER sIOBANK0.GPIO1_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO1_INOVER sIOBANK0.GPIO1_CTRL.BITS.INOVER
#define bIOBANK0_GPIO1_IRQOVER sIOBANK0.GPIO1_CTRL.BITS.IRQOVER

// Registro GPIO2_CTRL
#define rIOBANK0_GPIO2_CTRL sIOBANK0.GPIO2_CTRL.WORD
#define bIOBANK0_GPIO2_FUNCSEL sIOBANK0.GPIO2_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO2_OUTOVER sIOBANK0.GPIO2_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO2_OEOVER sIOBANK0.GPIO2_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO2_INOVER sIOBANK0.GPIO2_CTRL.BITS.INOVER
#define bIOBANK0_GPIO2_IRQOVER sIOBANK0.GPIO2_CTRL.BITS.IRQOVER

// Registro GPIO3_CTRL
#define rIOBANK0_GPIO3_CTRL sIOBANK0.GPIO3_CTRL.WORD
#define bIOBANK0_GPIO3_FUNCSEL sIOBANK0.GPIO3_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO3_OUTOVER sIOBANK0.GPIO3_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO3_OEOVER sIOBANK0.GPIO3_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO3_INOVER sIOBANK0.GPIO3_CTRL.BITS.INOVER
#define bIOBANK0_GPIO3_IRQOVER sIOBANK0.GPIO3_CTRL.BITS.IRQOVER

// Registro GPIO4_CTRL
#define rIOBANK0_GPIO4_CTRL sIOBANK0.GPIO4_CTRL.WORD
#define bIOBANK0_GPIO4_FUNCSEL sIOBANK0.GPIO4_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO4_OUTOVER sIOBANK0.GPIO4_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO4_OEOVER sIOBANK0.GPIO4_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO4_INOVER sIOBANK0.GPIO4_CTRL.BITS.INOVER
#define bIOBANK0_GPIO4_IRQOVER sIOBANK0.GPIO4_CTRL.BITS.IRQOVER

// Registro GPIO5_CTRL
#define rIOBANK0_GPIO5_CTRL sIOBANK0.GPIO5_CTRL.WORD
#define bIOBANK0_GPIO5_FUNCSEL sIOBANK0.GPIO5_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO5_OUTOVER sIOBANK0.GPIO5_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO5_OEOVER sIOBANK0.GPIO5_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO5_INOVER sIOBANK0.GPIO5_CTRL.BITS.INOVER
#define bIOBANK0_GPIO5_IRQOVER sIOBANK0.GPIO5_CTRL.BITS.IRQOVER

// Registro GPIO6_CTRL
#define rIOBANK0_GPIO6_CTRL sIOBANK0.GPIO6_CTRL.WORD
#define bIOBANK0_GPIO6_FUNCSEL sIOBANK0.GPIO6_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO6_OUTOVER sIOBANK0.GPIO6_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO6_OEOVER sIOBANK0.GPIO6_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO6_INOVER sIOBANK0.GPIO6_CTRL.BITS.INOVER
#define bIOBANK0_GPIO6_IRQOVER sIOBANK0.GPIO6_CTRL.BITS.IRQOVER

// Registro GPIO7_CTRL
#define rIOBANK0_GPIO7_CTRL sIOBANK0.GPIO7_CTRL.WORD
#define bIOBANK0_GPIO7_FUNCSEL sIOBANK0.GPIO7_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO7_OUTOVER sIOBANK0.GPIO7_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO7_OEOVER sIOBANK0.GPIO7_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO7_INOVER sIOBANK0.GPIO7_CTRL.BITS.INOVER
#define bIOBANK0_GPIO7_IRQOVER sIOBANK0.GPIO7_CTRL.BITS.IRQOVER

// Registro GPIO8_CTRL
#define rIOBANK0_GPIO8_CTRL sIOBANK0.GPIO8_CTRL.WORD
#define bIOBANK0_GPIO8_FUNCSEL sIOBANK0.GPIO8_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO8_OUTOVER sIOBANK0.GPIO8_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO8_OEOVER sIOBANK0.GPIO8_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO8_INOVER sIOBANK0.GPIO8_CTRL.BITS.INOVER
#define bIOBANK0_GPIO8_IRQOVER sIOBANK0.GPIO8_CTRL.BITS.IRQOVER

// Registro GPIO9_CTRL
#define rIOBANK0_GPIO9_CTRL sIOBANK0.GPIO9_CTRL.WORD
#define bIOBANK0_GPIO9_FUNCSEL sIOBANK0.GPIO9_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO9_OUTOVER sIOBANK0.GPIO9_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO9_OEOVER sIOBANK0.GPIO9_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO9_INOVER sIOBANK0.GPIO9_CTRL.BITS.INOVER
#define bIOBANK0_GPIO9_IRQOVER sIOBANK0.GPIO9_CTRL.BITS.IRQOVER

// Registro GPIO10_CTRL
#define rIOBANK0_GPIO10_CTRL sIOBANK0.GPIO10_CTRL.WORD
#define bIOBANK0_GPIO10_FUNCSEL sIOBANK0.GPIO10_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO10_OUTOVER sIOBANK0.GPIO10_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO10_OEOVER sIOBANK0.GPIO10_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO10_INOVER sIOBANK0.GPIO10_CTRL.BITS.INOVER
#define bIOBANK0_GPIO10_IRQOVER sIOBANK0.GPIO10_CTRL.BITS.IRQOVER

// Registro GPIO11_CTRL
#define rIOBANK0_GPIO11_CTRL sIOBANK0.GPIO11_CTRL.WORD
#define bIOBANK0_GPIO11_FUNCSEL sIOBANK0.GPIO11_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO11_OUTOVER sIOBANK0.GPIO11_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO11_OEOVER sIOBANK0.GPIO11_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO11_INOVER sIOBANK0.GPIO11_CTRL.BITS.INOVER
#define bIOBANK0_GPIO11_IRQOVER sIOBANK0.GPIO11_CTRL.BITS.IRQOVER

// Registro GPIO12_CTRL
#define rIOBANK0_GPIO12_CTRL sIOBANK0.GPIO12_CTRL.WORD
#define bIOBANK0_GPIO12_FUNCSEL sIOBANK0.GPIO12_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO12_OUTOVER sIOBANK0.GPIO12_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO12_OEOVER sIOBANK0.GPIO12_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO12_INOVER sIOBANK0.GPIO12_CTRL.BITS.INOVER
#define bIOBANK0_GPIO12_IRQOVER sIOBANK0.GPIO12_CTRL.BITS.IRQOVER

// Registro GPIO13_CTRL
#define rIOBANK0_GPIO13_CTRL sIOBANK0.GPIO13_CTRL.WORD
#define bIOBANK0_GPIO13_FUNCSEL sIOBANK0.GPIO13_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO13_OUTOVER sIOBANK0.GPIO13_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO13_OEOVER sIOBANK0.GPIO13_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO13_INOVER sIOBANK0.GPIO13_CTRL.BITS.INOVER
#define bIOBANK0_GPIO13_IRQOVER sIOBANK0.GPIO13_CTRL.BITS.IRQOVER

// Registro GPIO14_CTRL
#define rIOBANK0_GPIO14_CTRL sIOBANK0.GPIO14_CTRL.WORD
#define bIOBANK0_GPIO14_FUNCSEL sIOBANK0.GPIO14_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO14_OUTOVER sIOBANK0.GPIO14_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO14_OEOVER sIOBANK0.GPIO14_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO14_INOVER sIOBANK0.GPIO14_CTRL.BITS.INOVER
#define bIOBANK0_GPIO14_IRQOVER sIOBANK0.GPIO14_CTRL.BITS.IRQOVER

// Registro GPIO15_CTRL
#define rIOBANK0_GPIO15_CTRL sIOBANK0.GPIO15_CTRL.WORD
#define bIOBANK0_GPIO15_FUNCSEL sIOBANK0.GPIO15_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO15_OUTOVER sIOBANK0.GPIO15_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO15_OEOVER sIOBANK0.GPIO15_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO15_INOVER sIOBANK0.GPIO15_CTRL.BITS.INOVER
#define bIOBANK0_GPIO15_IRQOVER sIOBANK0.GPIO15_CTRL.BITS.IRQOVER

// Registro GPIO16_CTRL
#define rIOBANK0_GPIO16_CTRL sIOBANK0.GPIO16_CTRL.WORD
#define bIOBANK0_GPIO16_FUNCSEL sIOBANK0.GPIO16_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO16_OUTOVER sIOBANK0.GPIO16_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO16_OEOVER sIOBANK0.GPIO16_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO16_INOVER sIOBANK0.GPIO16_CTRL.BITS.INOVER
#define bIOBANK0_GPIO16_IRQOVER sIOBANK0.GPIO16_CTRL.BITS.IRQOVER

// Registro GPIO17_CTRL
#define rIOBANK0_GPIO17_CTRL sIOBANK0.GPIO17_CTRL.WORD
#define bIOBANK0_GPIO17_FUNCSEL sIOBANK0.GPIO17_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO17_OUTOVER sIOBANK0.GPIO17_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO17_OEOVER sIOBANK0.GPIO17_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO17_INOVER sIOBANK0.GPIO17_CTRL.BITS.INOVER
#define bIOBANK0_GPIO17_IRQOVER sIOBANK0.GPIO17_CTRL.BITS.IRQOVER

// Registro GPIO18_CTRL
#define rIOBANK0_GPIO18_CTRL sIOBANK0.GPIO18_CTRL.WORD
#define bIOBANK0_GPIO18_FUNCSEL sIOBANK0.GPIO18_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO18_OUTOVER sIOBANK0.GPIO18_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO18_OEOVER sIOBANK0.GPIO18_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO18_INOVER sIOBANK0.GPIO18_CTRL.BITS.INOVER
#define bIOBANK0_GPIO18_IRQOVER sIOBANK0.GPIO18_CTRL.BITS.IRQOVER

// Registro GPIO19_CTRL
#define rIOBANK0_GPIO19_CTRL sIOBANK0.GPIO19_CTRL.WORD
#define bIOBANK0_GPIO19_FUNCSEL sIOBANK0.GPIO19_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO19_OUTOVER sIOBANK0.GPIO19_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO19_OEOVER sIOBANK0.GPIO19_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO19_INOVER sIOBANK0.GPIO19_CTRL.BITS.INOVER
#define bIOBANK0_GPIO19_IRQOVER sIOBANK0.GPIO19_CTRL.BITS.IRQOVER

// Registro GPIO20_CTRL
#define rIOBANK0_GPIO20_CTRL sIOBANK0.GPIO20_CTRL.WORD
#define bIOBANK0_GPIO20_FUNCSEL sIOBANK0.GPIO20_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO20_OUTOVER sIOBANK0.GPIO20_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO20_OEOVER sIOBANK0.GPIO20_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO20_INOVER sIOBANK0.GPIO20_CTRL.BITS.INOVER
#define bIOBANK0_GPIO20_IRQOVER sIOBANK0.GPIO20_CTRL.BITS.IRQOVER

// Registro GPIO21_CTRL
#define rIOBANK0_GPIO21_CTRL sIOBANK0.GPIO21_CTRL.WORD
#define bIOBANK0_GPIO21_FUNCSEL sIOBANK0.GPIO21_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO21_OUTOVER sIOBANK0.GPIO21_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO21_OEOVER sIOBANK0.GPIO21_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO21_INOVER sIOBANK0.GPIO21_CTRL.BITS.INOVER
#define bIOBANK0_GPIO21_IRQOVER sIOBANK0.GPIO21_CTRL.BITS.IRQOVER

// Registro GPIO22_CTRL
#define rIOBANK0_GPIO22_CTRL sIOBANK0.GPIO22_CTRL.WORD
#define bIOBANK0_GPIO22_FUNCSEL sIOBANK0.GPIO22_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO22_OUTOVER sIOBANK0.GPIO22_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO22_OEOVER sIOBANK0.GPIO22_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO22_INOVER sIOBANK0.GPIO22_CTRL.BITS.INOVER
#define bIOBANK0_GPIO22_IRQOVER sIOBANK0.GPIO22_CTRL.BITS.IRQOVER

// Registro GPIO23_CTRL
#define rIOBANK0_GPIO23_CTRL sIOBANK0.GPIO23_CTRL.WORD
#define bIOBANK0_GPIO23_FUNCSEL sIOBANK0.GPIO23_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO23_OUTOVER sIOBANK0.GPIO23_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO23_OEOVER sIOBANK0.GPIO23_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO23_INOVER sIOBANK0.GPIO23_CTRL.BITS.INOVER
#define bIOBANK0_GPIO23_IRQOVER sIOBANK0.GPIO23_CTRL.BITS.IRQOVER

// Registro GPIO24_CTRL
#define rIOBANK0_GPIO24_CTRL sIOBANK0.GPIO24_CTRL.WORD
#define bIOBANK0_GPIO24_FUNCSEL sIOBANK0.GPIO24_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO24_OUTOVER sIOBANK0.GPIO24_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO24_OEOVER sIOBANK0.GPIO24_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO24_INOVER sIOBANK0.GPIO24_CTRL.BITS.INOVER
#define bIOBANK0_GPIO24_IRQOVER sIOBANK0.GPIO24_CTRL.BITS.IRQOVER

// Registro GPIO25_CTRL
#define rIOBANK0_GPIO25_CTRL sIOBANK0.GPIO25_CTRL.WORD
#define bIOBANK0_GPIO25_FUNCSEL sIOBANK0.GPIO25_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO25_OUTOVER sIOBANK0.GPIO25_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO25_OEOVER sIOBANK0.GPIO25_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO25_INOVER sIOBANK0.GPIO25_CTRL.BITS.INOVER
#define bIOBANK0_GPIO25_IRQOVER sIOBANK0.GPIO25_CTRL.BITS.IRQOVER

// Registro GPIO26_CTRL
#define rIOBANK0_GPIO26_CTRL sIOBANK0.GPIO26_CTRL.WORD
#define bIOBANK0_GPIO26_FUNCSEL sIOBANK0.GPIO26_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO26_OUTOVER sIOBANK0.GPIO26_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO26_OEOVER sIOBANK0.GPIO26_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO26_INOVER sIOBANK0.GPIO26_CTRL.BITS.INOVER
#define bIOBANK0_GPIO26_IRQOVER sIOBANK0.GPIO26_CTRL.BITS.IRQOVER

// Registro GPIO27_CTRL
#define rIOBANK0_GPIO27_CTRL sIOBANK0.GPIO27_CTRL.WORD
#define bIOBANK0_GPIO27_FUNCSEL sIOBANK0.GPIO27_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO27_OUTOVER sIOBANK0.GPIO27_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO27_OEOVER sIOBANK0.GPIO27_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO27_INOVER sIOBANK0.GPIO27_CTRL.BITS.INOVER
#define bIOBANK0_GPIO27_IRQOVER sIOBANK0.GPIO27_CTRL.BITS.IRQOVER

// Registro GPIO28_CTRL
#define rIOBANK0_GPIO28_CTRL sIOBANK0.GPIO28_CTRL.WORD
#define bIOBANK0_GPIO28_FUNCSEL sIOBANK0.GPIO28_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO28_OUTOVER sIOBANK0.GPIO28_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO28_OEOVER sIOBANK0.GPIO28_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO28_INOVER sIOBANK0.GPIO28_CTRL.BITS.INOVER
#define bIOBANK0_GPIO28_IRQOVER sIOBANK0.GPIO28_CTRL.BITS.IRQOVER

// Registro GPIO29_CTRL
#define rIOBANK0_GPIO29_CTRL sIOBANK0.GPIO29_CTRL.WORD
#define bIOBANK0_GPIO29_FUNCSEL sIOBANK0.GPIO29_CTRL.BITS.FUNCSEL
#define bIOBANK0_GPIO29_OUTOVER sIOBANK0.GPIO29_CTRL.BITS.OUTOVER
#define bIOBANK0_GPIO29_OEOVER sIOBANK0.GPIO29_CTRL.BITS.OEOVER
#define bIOBANK0_GPIO29_INOVER sIOBANK0.GPIO29_CTRL.BITS.INOVER
#define bIOBANK0_GPIO29_IRQOVER sIOBANK0.GPIO29_CTRL.BITS.IRQOVER

/****************************************************************************************
 ****************************************************************************************
 * REGISTROS INTR
 ****************************************************************************************
*****************************************************************************************/

// Registro INTR0
#define rIOBANK0_INTR0 sIOBANK0.INTR0.WORD
#define bIOBANK0_INTR0_GPIO0_LEVEL_LOW sIOBANK0.INTR0.BITS.GPIO0_LEVEL_LOW
#define bIOBANK0_INTR0_GPIO0_LEVEL_HIGH sIOBANK0.INTR0.BITS.GPIO0_LEVEL_HIGH
#define bIOBANK0_INTR0_GPIO0_EDGE_LOW sIOBANK0.INTR0.BITS.GPIO0_EDGE_LOW
#define bIOBANK0_INTR0_GPIO0_EDGE_HIGH sIOBANK0.INTR0.BITS.GPIO0_EDGE_HIGH
#define bIOBANK0_INTR0_GPIO1_LEVEL_LOW sIOBANK0.INTR0.BITS.GPIO1_LEVEL_LOW
#define bIOBANK0_INTR0_GPIO1_LEVEL_HIGH sIOBANK0.INTR0.BITS.GPIO1_LEVEL_HIGH
#define bIOBANK0_INTR0_GPIO1_EDGE_LOW sIOBANK0.INTR0.BITS.GPIO1_EDGE_LOW
#define bIOBANK0_INTR0_GPIO1_EDGE_HIGH sIOBANK0.INTR0.BITS.GPIO1_EDGE_HIGH
#define bIOBANK0_INTR0_GPIO2_LEVEL_LOW sIOBANK0.INTR0.BITS.GPIO2_LEVEL_LOW
#define bIOBANK0_INTR0_GPIO2_LEVEL_HIGH sIOBANK0.INTR0.BITS.GPIO2_LEVEL_HIGH
#define bIOBANK0_INTR0_GPIO2_EDGE_LOW sIOBANK0.INTR0.BITS.GPIO2_EDGE_LOW
#define bIOBANK0_INTR0_GPIO2_EDGE_HIGH sIOBANK0.INTR0.BITS.GPIO2_EDGE_HIGH
#define bIOBANK0_INTR0_GPIO3_LEVEL_LOW sIOBANK0.INTR0.BITS.GPIO3_LEVEL_LOW
#define bIOBANK0_INTR0_GPIO3_LEVEL_HIGH sIOBANK0.INTR0.BITS.GPIO3_LEVEL_HIGH
#define bIOBANK0_INTR0_GPIO3_EDGE_LOW sIOBANK0.INTR0.BITS.GPIO3_EDGE_LOW
#define bIOBANK0_INTR0_GPIO3_EDGE_HIGH sIOBANK0.INTR0.BITS.GPIO3_EDGE_HIGH
#define bIOBANK0_INTR0_GPIO4_LEVEL_LOW sIOBANK0.INTR0.BITS.GPIO4_LEVEL_LOW
#define bIOBANK0_INTR0_GPIO4_LEVEL_HIGH sIOBANK0.INTR0.BITS.GPIO4_LEVEL_HIGH
#define bIOBANK0_INTR0_GPIO4_EDGE_LOW sIOBANK0.INTR0.BITS.GPIO4_EDGE_LOW
#define bIOBANK0_INTR0_GPIO4_EDGE_HIGH sIOBANK0.INTR0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_INTR0_GPIO5_LEVEL_LOW sIOBANK0.INTR0.BITS.GPIO5_LEVEL_LOW
#define bIOBANK0_INTR0_GPIO5_LEVEL_HIGH sIOBANK0.INTR0.BITS.GPIO5_LEVEL_HIGH
#define bIOBANK0_INTR0_GPIO5_EDGE_LOW sIOBANK0.INTR0.BITS.GPIO5_EDGE_LOW
#define bIOBANK0_INTR0_GPIO5_EDGE_HIGH sIOBANK0.INTR0.BITS.GPIO5_EDGE_HIGH
#define bIOBANK0_INTR0_GPIO6_LEVEL_LOW sIOBANK0.INTR0.BITS.GPIO6_LEVEL_LOW
#define bIOBANK0_INTR0_GPIO6_LEVEL_HIGH sIOBANK0.INTR0.BITS.GPIO6_LEVEL_HIGH
#define bIOBANK0_INTR0_GPIO6_EDGE_LOW sIOBANK0.INTR0.BITS.GPIO6_EDGE_LOW
#define bIOBANK0_INTR0_GPIO6_EDGE_HIGH sIOBANK0.INTR0.BITS.GPIO6_EDGE_HIGH
#define bIOBANK0_INTR0_GPIO7_LEVEL_LOW sIOBANK0.INTR0.BITS.GPIO7_LEVEL_LOW
#define bIOBANK0_INTR0_GPIO7_LEVEL_HIGH sIOBANK0.INTR0.BITS.GPIO7_LEVEL_HIGH
#define bIOBANK0_INTR0_GPIO7_EDGE_LOW sIOBANK0.INTR0.BITS.GPIO7_EDGE_LOW
#define bIOBANK0_INTR0_GPIO7_EDGE_HIGH sIOBANK0.INTR0.BITS.GPIO7_EDGE_HIGH

// Registro INTR1
#define rIOBANK0_INTR1 sIOBANK0.INTR1.WORD
#define bIOBANK0_INTR1_GPIO8_LEVEL_LOW sIOBANK0.INTR1.BITS.GPIO8_LEVEL_LOW
#define bIOBANK0_INTR1_GPIO8_LEVEL_HIGH sIOBANK0.INTR1.BITS.GPIO8_LEVEL_HIGH
#define bIOBANK0_INTR1_GPIO8_EDGE_LOW sIOBANK0.INTR1.BITS.GPIO8_EDGE_LOW
#define bIOBANK0_INTR1_GPIO8_EDGE_HIGH sIOBANK0.INTR1.BITS.GPIO8_EDGE_HIGH
#define bIOBANK0_INTR1_GPIO9_LEVEL_LOW sIOBANK0.INTR1.BITS.GPIO9_LEVEL_LOW
#define bIOBANK0_INTR1_GPIO9_LEVEL_HIGH sIOBANK0.INTR1.BITS.GPIO9_LEVEL_HIGH
#define bIOBANK0_INTR1_GPIO9_EDGE_LOW sIOBANK0.INTR1.BITS.GPIO9_EDGE_LOW
#define bIOBANK0_INTR1_GPIO9_EDGE_HIGH sIOBANK0.INTR1.BITS.GPIO9_EDGE_HIGH
#define bIOBANK0_INTR1_GPIO10_LEVEL_LOW sIOBANK0.INTR1.BITS.GPIO10_LEVEL_LOW
#define bIOBANK0_INTR1_GPIO10_LEVEL_HIGH sIOBANK0.INTR1.BITS.GPIO10_LEVEL_HIGH
#define bIOBANK0_INTR1_GPIO10_EDGE_LOW sIOBANK0.INTR1.BITS.GPIO10_EDGE_LOW
#define bIOBANK0_INTR1_GPIO10_EDGE_HIGH sIOBANK0.INTR1.BITS.GPIO10_EDGE_HIGH
#define bIOBANK0_INTR1_GPIO11_LEVEL_LOW sIOBANK0.INTR1.BITS.GPIO11_LEVEL_LOW
#define bIOBANK0_INTR1_GPIO11_LEVEL_HIGH sIOBANK0.INTR1.BITS.GPIO11_LEVEL_HIGH
#define bIOBANK0_INTR1_GPIO11_EDGE_LOW sIOBANK0.INTR1.BITS.GPIO11_EDGE_LOW
#define bIOBANK0_INTR1_GPIO11_EDGE_HIGH sIOBANK0.INTR1.BITS.GPIO11_EDGE_HIGH
#define bIOBANK0_INTR1_GPIO12_LEVEL_LOW sIOBANK0.INTR1.BITS.GPIO12_LEVEL_LOW
#define bIOBANK0_INTR1_GPIO12_LEVEL_HIGH sIOBANK0.INTR1.BITS.GPIO12_LEVEL_HIGH
#define bIOBANK0_INTR1_GPIO12_EDGE_LOW sIOBANK0.INTR1.BITS.GPIO12_EDGE_LOW
#define bIOBANK0_INTR1_GPIO12_EDGE_HIGH sIOBANK0.INTR1.BITS.GPIO12_EDGE_HIGH
#define bIOBANK0_INTR1_GPIO13_LEVEL_LOW sIOBANK0.INTR1.BITS.GPIO13_LEVEL_LOW
#define bIOBANK0_INTR1_GPIO13_LEVEL_HIGH sIOBANK0.INTR1.BITS.GPIO13_LEVEL_HIGH
#define bIOBANK0_INTR1_GPIO13_EDGE_LOW sIOBANK0.INTR1.BITS.GPIO13_EDGE_LOW
#define bIOBANK0_INTR1_GPIO13_EDGE_HIGH sIOBANK0.INTR1.BITS.GPIO13_EDGE_HIGH
#define bIOBANK0_INTR1_GPIO14_LEVEL_LOW sIOBANK0.INTR1.BITS.GPIO14_LEVEL_LOW
#define bIOBANK0_INTR1_GPIO14_LEVEL_HIGH sIOBANK0.INTR1.BITS.GPIO14_LEVEL_HIGH
#define bIOBANK0_INTR1_GPIO14_EDGE_LOW sIOBANK0.INTR1.BITS.GPIO14_EDGE_LOW
#define bIOBANK0_INTR1_GPIO14_EDGE_HIGH sIOBANK0.INTR1.BITS.GPIO14_EDGE_HIGH
#define bIOBANK0_INTR1_GPIO15_LEVEL_LOW sIOBANK0.INTR1.BITS.GPIO15_LEVEL_LOW
#define bIOBANK0_INTR1_GPIO15_LEVEL_HIGH sIOBANK0.INTR1.BITS.GPIO15_LEVEL_HIGH
#define bIOBANK0_INTR1_GPIO15_EDGE_LOW sIOBANK0.INTR1.BITS.GPIO15_EDGE_LOW
#define bIOBANK0_INTR1_GPIO15_EDGE_HIGH sIOBANK0.INTR1.BITS.GPIO15_EDGE_HIGH

// Registro INTR2
#define rIOBANK0_INTR2 sIOBANK0.INTR2.WORD
#define bIOBANK0_INTR2_GPIO16_LEVEL_LOW sIOBANK0.INTR2.BITS.GPIO16_LEVEL_LOW
#define bIOBANK0_INTR2_GPIO16_LEVEL_HIGH sIOBANK0.INTR2.BITS.GPIO16_LEVEL_HIGH
#define bIOBANK0_INTR2_GPIO16_EDGE_LOW sIOBANK0.INTR2.BITS.GPIO16_EDGE_LOW
#define bIOBANK0_INTR2_GPIO16_EDGE_HIGH sIOBANK0.INTR2.BITS.GPIO16_EDGE_HIGH
#define bIOBANK0_INTR2_GPIO17_LEVEL_LOW sIOBANK0.INTR2.BITS.GPIO17_LEVEL_LOW
#define bIOBANK0_INTR2_GPIO17_LEVEL_HIGH sIOBANK0.INTR2.BITS.GPIO17_LEVEL_HIGH
#define bIOBANK0_INTR2_GPIO17_EDGE_LOW sIOBANK0.INTR2.BITS.GPIO17_EDGE_LOW
#define bIOBANK0_INTR2_GPIO17_EDGE_HIGH sIOBANK0.INTR2.BITS.GPIO17_EDGE_HIGH
#define bIOBANK0_INTR2_GPIO18_LEVEL_LOW sIOBANK0.INTR2.BITS.GPIO18_LEVEL_LOW
#define bIOBANK0_INTR2_GPIO18_LEVEL_HIGH sIOBANK0.INTR2.BITS.GPIO18_LEVEL_HIGH
#define bIOBANK0_INTR2_GPIO18_EDGE_LOW sIOBANK0.INTR2.BITS.GPIO18_EDGE_LOW
#define bIOBANK0_INTR2_GPIO18_EDGE_HIGH sIOBANK0.INTR2.BITS.GPIO18_EDGE_HIGH
#define bIOBANK0_INTR2_GPIO19_LEVEL_LOW sIOBANK0.INTR2.BITS.GPIO19_LEVEL_LOW
#define bIOBANK0_INTR2_GPIO19_LEVEL_HIGH sIOBANK0.INTR2.BITS.GPIO19_LEVEL_HIGH
#define bIOBANK0_INTR2_GPIO19_EDGE_LOW sIOBANK0.INTR2.BITS.GPIO19_EDGE_LOW
#define bIOBANK0_INTR2_GPIO19_EDGE_HIGH sIOBANK0.INTR2.BITS.GPIO19_EDGE_HIGH
#define bIOBANK0_INTR2_GPIO20_LEVEL_LOW sIOBANK0.INTR2.BITS.GPIO20_LEVEL_LOW
#define bIOBANK0_INTR2_GPIO20_LEVEL_HIGH sIOBANK0.INTR2.BITS.GPIO20_LEVEL_HIGH
#define bIOBANK0_INTR2_GPIO20_EDGE_LOW sIOBANK0.INTR2.BITS.GPIO20_EDGE_LOW
#define bIOBANK0_INTR2_GPIO20_EDGE_HIGH sIOBANK0.INTR2.BITS.GPIO20_EDGE_HIGH
#define bIOBANK0_INTR2_GPIO21_LEVEL_LOW sIOBANK0.INTR2.BITS.GPIO21_LEVEL_LOW
#define bIOBANK0_INTR2_GPIO21_LEVEL_HIGH sIOBANK0.INTR2.BITS.GPIO21_LEVEL_HIGH
#define bIOBANK0_INTR2_GPIO21_EDGE_LOW sIOBANK0.INTR2.BITS.GPIO21_EDGE_LOW
#define bIOBANK0_INTR2_GPIO21_EDGE_HIGH sIOBANK0.INTR2.BITS.GPIO21_EDGE_HIGH
#define bIOBANK0_INTR2_GPIO22_LEVEL_LOW sIOBANK0.INTR2.BITS.GPIO22_LEVEL_LOW
#define bIOBANK0_INTR2_GPIO22_LEVEL_HIGH sIOBANK0.INTR2.BITS.GPIO22_LEVEL_HIGH
#define bIOBANK0_INTR2_GPIO22_EDGE_LOW sIOBANK0.INTR2.BITS.GPIO22_EDGE_LOW
#define bIOBANK0_INTR2_GPIO22_EDGE_HIGH sIOBANK0.INTR2.BITS.GPIO22_EDGE_HIGH
#define bIOBANK0_INTR2_GPIO23_LEVEL_LOW sIOBANK0.INTR2.BITS.GPIO23_LEVEL_LOW
#define bIOBANK0_INTR2_GPIO23_LEVEL_HIGH sIOBANK0.INTR2.BITS.GPIO23_LEVEL_HIGH
#define bIOBANK0_INTR2_GPIO23_EDGE_LOW sIOBANK0.INTR2.BITS.GPIO23_EDGE_LOW
#define bIOBANK0_INTR2_GPIO23_EDGE_HIGH sIOBANK0.INTR2.BITS.GPIO23_EDGE_HIGH

// Registro INTR3
#define rIOBANK0_INTR3 sIOBANK0.INTR3.WORD
#define bIOBANK0_INTR3_GPIO24_LEVEL_LOW sIOBANK0.INTR3.BITS.GPIO24_LEVEL_LOW
#define bIOBANK0_INTR3_GPIO24_LEVEL_HIGH sIOBANK0.INTR3.BITS.GPIO24_LEVEL_HIGH
#define bIOBANK0_INTR3_GPIO24_EDGE_LOW sIOBANK0.INTR3.BITS.GPIO24_EDGE_LOW
#define bIOBANK0_INTR3_GPIO24_EDGE_HIGH sIOBANK0.INTR3.BITS.GPIO24_EDGE_HIGH
#define bIOBANK0_INTR3_GPIO25_LEVEL_LOW sIOBANK0.INTR3.BITS.GPIO25_LEVEL_LOW
#define bIOBANK0_INTR3_GPIO25_LEVEL_HIGH sIOBANK0.INTR3.BITS.GPIO25_LEVEL_HIGH
#define bIOBANK0_INTR3_GPIO25_EDGE_LOW sIOBANK0.INTR3.BITS.GPIO25_EDGE_LOW
#define bIOBANK0_INTR3_GPIO25_EDGE_HIGH sIOBANK0.INTR3.BITS.GPIO25_EDGE_HIGH
#define bIOBANK0_INTR3_GPIO26_LEVEL_LOW sIOBANK0.INTR3.BITS.GPIO26_LEVEL_LOW
#define bIOBANK0_INTR3_GPIO26_LEVEL_HIGH sIOBANK0.INTR3.BITS.GPIO26_LEVEL_HIGH
#define bIOBANK0_INTR3_GPIO26_EDGE_LOW sIOBANK0.INTR3.BITS.GPIO26_EDGE_LOW
#define bIOBANK0_INTR3_GPIO26_EDGE_HIGH sIOBANK0.INTR3.BITS.GPIO26_EDGE_HIGH
#define bIOBANK0_INTR3_GPIO27_LEVEL_LOW sIOBANK0.INTR3.BITS.GPIO27_LEVEL_LOW
#define bIOBANK0_INTR3_GPIO27_LEVEL_HIGH sIOBANK0.INTR3.BITS.GPIO27_LEVEL_HIGH
#define bIOBANK0_INTR3_GPIO27_EDGE_LOW sIOBANK0.INTR3.BITS.GPIO27_EDGE_LOW
#define bIOBANK0_INTR3_GPIO27_EDGE_HIGH sIOBANK0.INTR3.BITS.GPIO27_EDGE_HIGH
#define bIOBANK0_INTR3_GPIO28_LEVEL_LOW sIOBANK0.INTR3.BITS.GPIO28_LEVEL_LOW
#define bIOBANK0_INTR3_GPIO28_LEVEL_HIGH sIOBANK0.INTR3.BITS.GPIO28_LEVEL_HIGH
#define bIOBANK0_INTR3_GPIO28_EDGE_LOW sIOBANK0.INTR3.BITS.GPIO28_EDGE_LOW
#define bIOBANK0_INTR3_GPIO28_EDGE_HIGH sIOBANK0.INTR3.BITS.GPIO28_EDGE_HIGH
#define bIOBANK0_INTR3_GPIO29_LEVEL_LOW sIOBANK0.INTR3.BITS.GPIO29_LEVEL_LOW
#define bIOBANK0_INTR3_GPIO29_LEVEL_HIGH sIOBANK0.INTR3.BITS.GPIO29_LEVEL_HIGH
#define bIOBANK0_INTR3_GPIO29_EDGE_LOW sIOBANK0.INTR3.BITS.GPIO29_EDGE_LOW
#define bIOBANK0_INTR3_GPIO29_EDGE_HIGH sIOBANK0.INTR3.BITS.GPIO29_EDGE_HIGH

/****************************************************************************************
 ****************************************************************************************
 *                          REGISTROS DORMANT_WAKE_INT
 ****************************************************************************************
*****************************************************************************************/

// Registro DORMANT_WAKE_INTE0
#define rIOBANK0_DORMANT_WAKE_INTE0 sIOBANK0.DORMANT_WAKE_INTE0.WORD
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO0_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO0_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO0_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO0_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO0_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO0_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO0_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO0_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO1_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO1_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO1_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO1_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO1_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO1_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO1_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO1_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO2_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO2_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO2_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO2_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO2_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO2_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO2_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO2_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO3_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO3_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO3_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO3_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO3_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO3_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO3_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO4_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO4_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO4_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO4_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO4_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO4_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO4_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO5_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO5_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO5_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO5_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO5_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO5_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO5_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO5_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO6_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO6_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO6_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO6_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO6_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO6_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO6_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO6_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO7_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO7_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO7_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO7_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO7_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO7_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE0_GPIO7_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE0.BITS.GPIO7_EDGE_HIGH

// Registro DORMANT_WAKE_INTE1
#define rIOBANK0_DORMANT_WAKE_INTE1 sIOBANK0.DORMANT_WAKE_INTE1.WORD
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO8_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO8_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO8_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO8_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO8_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO8_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO8_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO8_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO9_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO9_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO9_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO9_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO9_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO9_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO9_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO9_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO10_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO10_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO10_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO10_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO10_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO10_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO10_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO10_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO11_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO11_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO11_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO11_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO11_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO11_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO11_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO11_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO12_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO12_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO12_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO12_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO12_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO12_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO12_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO12_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO13_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO13_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO13_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO13_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO13_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO13_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO13_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO13_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO14_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO14_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO14_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO14_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO14_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO14_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO14_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO14_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO15_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO15_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO15_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO15_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO15_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO15_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE1_GPIO15_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE1.BITS.GPIO15_EDGE_HIGH

// Registro DORMANT_WAKE_INTE2
#define rIOBANK0_DORMANT_WAKE_INTE2 sIOBANK0.DORMANT_WAKE_INTE2.WORD
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO16_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO16_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO16_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO16_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO16_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO16_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO16_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO16_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO17_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO17_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO17_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO17_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO17_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO17_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO17_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO17_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO18_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO18_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO18_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO18_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO18_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO18_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO18_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO18_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO19_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO19_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO19_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO19_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO19_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO19_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO19_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO19_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO20_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO20_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO20_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO20_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO20_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO20_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO20_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO20_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO21_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO21_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO21_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO21_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO21_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO21_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO21_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO21_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO22_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO22_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO22_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO22_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO22_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO22_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO22_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO22_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO23_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO23_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO23_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO23_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO23_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO23_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE2_GPIO23_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE2.BITS.GPIO23_EDGE_HIGH

// Registro DORMANT_WAKE_INTE3
#define rIOBANK0_DORMANT_WAKE_INTE3 sIOBANK0.DORMANT_WAKE_INTE3.WORD
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO24_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO24_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO24_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO24_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO24_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO24_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO24_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO24_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO25_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO25_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO25_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO25_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO25_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO25_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO25_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO25_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO26_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO26_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO26_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO26_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO26_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO26_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO26_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO26_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO27_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO27_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO27_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO27_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO27_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO27_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO27_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO27_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO28_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO28_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO28_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO28_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO28_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO28_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO28_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO28_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO29_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO29_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO29_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO29_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO29_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO29_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTE3_GPIO29_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTE3.BITS.GPIO29_EDGE_HIGH

//------------------------------------------------------------------

// Registro DORMANT_WAKE_INTF0
#define rIOBANK0_DORMANT_WAKE_INTF0 sIOBANK0.DORMANT_WAKE_INTF0.WORD
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO0_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO0_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO0_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO0_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO0_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO0_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO0_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO0_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO1_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO1_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO1_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO1_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO1_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO1_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO1_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO1_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO2_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO2_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO2_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO2_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO2_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO2_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO2_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO2_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO3_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO3_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO3_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO3_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO3_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO3_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO3_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO4_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO4_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO4_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO4_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO4_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO4_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO4_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO5_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO5_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO5_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO5_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO5_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO5_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO5_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO5_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO6_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO6_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO6_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO6_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO6_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO6_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO6_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO6_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO7_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO7_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO7_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO7_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO7_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO7_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF0_GPIO7_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF0.BITS.GPIO7_EDGE_HIGH

// Registro DORMANT_WAKE_INTF1
#define rIOBANK0_DORMANT_WAKE_INTF1 sIOBANK0.DORMANT_WAKE_INTF1.WORD
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO8_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO8_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO8_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO8_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO8_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO8_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO8_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO8_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO9_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO9_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO9_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO9_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO9_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO9_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO9_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO9_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO10_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO10_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO10_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO10_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO10_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO10_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO10_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO10_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO11_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO11_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO11_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO11_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO11_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO11_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO11_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO11_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO12_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO12_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO12_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO12_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO12_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO12_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO12_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO12_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO13_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO13_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO13_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO13_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO13_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO13_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO13_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO13_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO14_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO14_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO14_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO14_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO14_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO14_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO14_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO14_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO15_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO15_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO15_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO15_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO15_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO15_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF1_GPIO15_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF1.BITS.GPIO15_EDGE_HIGH

// Registro DORMANT_WAKE_INTF2
#define rIOBANK0_DORMANT_WAKE_INTF2 sIOBANK0.DORMANT_WAKE_INTF2.WORD
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO16_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO16_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO16_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO16_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO16_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO16_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO16_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO16_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO17_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO17_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO17_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO17_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO17_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO17_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO17_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO17_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO18_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO18_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO18_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO18_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO18_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO18_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO18_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO18_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO19_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO19_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO19_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO19_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO19_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO19_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO19_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO19_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO20_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO20_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO20_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO20_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO20_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO20_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO20_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO20_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO21_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO21_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO21_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO21_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO21_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO21_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO21_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO21_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO22_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO22_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO22_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO22_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO22_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO22_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO22_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO22_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO23_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO23_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO23_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO23_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO23_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO23_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF2_GPIO23_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF2.BITS.GPIO23_EDGE_HIGH

// Registro DORMANT_WAKE_INTF3
#define rIOBANK0_DORMANT_WAKE_INTF3 sIOBANK0.DORMANT_WAKE_INTF3.WORD
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO24_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO24_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO24_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO24_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO24_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO24_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO24_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO24_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO25_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO25_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO25_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO25_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO25_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO25_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO25_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO25_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO26_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO26_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO26_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO26_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO26_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO26_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO26_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO26_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO27_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO27_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO27_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO27_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO27_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO27_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO27_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO27_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO28_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO28_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO28_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO28_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO28_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO28_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO28_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO28_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO29_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO29_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO29_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO29_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO29_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO29_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTF3_GPIO29_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTF3.BITS.GPIO29_EDGE_HIGH

//------------------------------------------------------------------------------------------------

// Registro DORMANT_WAKE_INTS0
#define rIOBANK0_DORMANT_WAKE_INTS0 sIOBANK0.DORMANT_WAKE_INTS0.WORD
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO0_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO0_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO0_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO0_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO0_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO0_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO0_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO0_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO1_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO1_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO1_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO1_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO1_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO1_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO1_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO1_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO2_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO2_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO2_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO2_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO2_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO2_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO2_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO2_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO3_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO3_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO3_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO3_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO3_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO3_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO3_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO4_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO4_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO4_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO4_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO4_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO4_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO4_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO5_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO5_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO5_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO5_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO5_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO5_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO5_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO5_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO6_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO6_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO6_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO6_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO6_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO6_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO6_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO6_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO7_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO7_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO7_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO7_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO7_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO7_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS0_GPIO7_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS0.BITS.GPIO7_EDGE_HIGH

// Registro DORMANT_WAKE_INTS1
#define rIOBANK0_DORMANT_WAKE_INTS1 sIOBANK0.DORMANT_WAKE_INTS1.WORD
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO8_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO8_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO8_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO8_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO8_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO8_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO8_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO8_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO9_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO9_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO9_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO9_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO9_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO9_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO9_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO9_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO10_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO10_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO10_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO10_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO10_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO10_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO10_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO10_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO11_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO11_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO11_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO11_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO11_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO11_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO11_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO11_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO12_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO12_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO12_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO12_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO12_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO12_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO12_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO12_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO13_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO13_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO13_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO13_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO13_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO13_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO13_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO13_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO14_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO14_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO14_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO14_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO14_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO14_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO14_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO14_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO15_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO15_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO15_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO15_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO15_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO15_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS1_GPIO15_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS1.BITS.GPIO15_EDGE_HIGH

// Registro DORMANT_WAKE_INTS2
#define rIOBANK0_DORMANT_WAKE_INTS2 sIOBANK0.DORMANT_WAKE_INTS2.WORD
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO16_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO16_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO16_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO16_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO16_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO16_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO16_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO16_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO17_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO17_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO17_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO17_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO17_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO17_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO17_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO17_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO18_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO18_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO18_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO18_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO18_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO18_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO18_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO18_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO19_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO19_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO19_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO19_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO19_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO19_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO19_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO19_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO20_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO20_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO20_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO20_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO20_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO20_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO20_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO20_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO21_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO21_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO21_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO21_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO21_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO21_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO21_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO21_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO22_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO22_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO22_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO22_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO22_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO22_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO22_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO22_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO23_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO23_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO23_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO23_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO23_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO23_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS2_GPIO23_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS2.BITS.GPIO23_EDGE_HIGH

// Registro DORMANT_WAKE_INTS3
#define rIOBANK0_DORMANT_WAKE_INTS3 sIOBANK0.DORMANT_WAKE_INTS3.WORD
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO24_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO24_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO24_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO24_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO24_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO24_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO24_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO24_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO25_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO25_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO25_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO25_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO25_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO25_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO25_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO25_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO26_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO26_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO26_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO26_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO26_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO26_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO26_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO26_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO27_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO27_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO27_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO27_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO27_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO27_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO27_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO27_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO28_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO28_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO28_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO28_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO28_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO28_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO28_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO28_EDGE_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO29_LEVEL_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO29_LEVEL_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO29_LEVEL_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO29_LEVEL_HIGH
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO29_EDGE_LOW sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO29_EDGE_LOW
#define bIOBANK0_DORMANT_WAKE_INTS3_GPIO29_EDGE_HIGH sIOBANK0.DORMANT_WAKE_INTS3.BITS.GPIO29_EDGE_HIGH

/****************************************************************************************
 ****************************************************************************************
 *                          REGISTROS PROC0_INT
 ****************************************************************************************
*****************************************************************************************/

// Registro PROC0_INTE0
#define rIOBANK0_PROC0_INTE0 sIOBANK0.PROC0_INTE0.WORD
#define bIOBANK0_PROC0_INTE0_GPIO0_LEVEL_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO0_LEVEL_LOW
#define bIOBANK0_PROC0_INTE0_GPIO0_LEVEL_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO0_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO0_EDGE_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO0_EDGE_LOW
#define bIOBANK0_PROC0_INTE0_GPIO0_EDGE_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO0_EDGE_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO1_LEVEL_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO1_LEVEL_LOW
#define bIOBANK0_PROC0_INTE0_GPIO1_LEVEL_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO1_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO1_EDGE_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO1_EDGE_LOW
#define bIOBANK0_PROC0_INTE0_GPIO1_EDGE_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO1_EDGE_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO2_LEVEL_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO2_LEVEL_LOW
#define bIOBANK0_PROC0_INTE0_GPIO2_LEVEL_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO2_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO2_EDGE_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO2_EDGE_LOW
#define bIOBANK0_PROC0_INTE0_GPIO2_EDGE_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO2_EDGE_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO3_LEVEL_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO3_LEVEL_LOW
#define bIOBANK0_PROC0_INTE0_GPIO3_LEVEL_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO3_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO3_EDGE_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO3_EDGE_LOW
#define bIOBANK0_PROC0_INTE0_GPIO3_EDGE_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO3_EDGE_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO4_LEVEL_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO4_LEVEL_LOW
#define bIOBANK0_PROC0_INTE0_GPIO4_LEVEL_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO4_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO4_EDGE_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO4_EDGE_LOW
#define bIOBANK0_PROC0_INTE0_GPIO4_EDGE_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO5_LEVEL_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO5_LEVEL_LOW
#define bIOBANK0_PROC0_INTE0_GPIO5_LEVEL_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO5_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO5_EDGE_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO5_EDGE_LOW
#define bIOBANK0_PROC0_INTE0_GPIO5_EDGE_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO5_EDGE_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO6_LEVEL_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO6_LEVEL_LOW
#define bIOBANK0_PROC0_INTE0_GPIO6_LEVEL_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO6_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO6_EDGE_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO6_EDGE_LOW
#define bIOBANK0_PROC0_INTE0_GPIO6_EDGE_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO6_EDGE_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO7_LEVEL_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO7_LEVEL_LOW
#define bIOBANK0_PROC0_INTE0_GPIO7_LEVEL_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO7_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE0_GPIO7_EDGE_LOW sIOBANK0.PROC0_INTE0.BITS.GPIO7_EDGE_LOW
#define bIOBANK0_PROC0_INTE0_GPIO7_EDGE_HIGH sIOBANK0.PROC0_INTE0.BITS.GPIO7_EDGE_HIGH

// Registro PROC0_INTE1
#define rIOBANK0_PROC0_INTE1 sIOBANK0.PROC0_INTE1.WORD
#define bIOBANK0_PROC0_INTE1_GPIO8_LEVEL_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO8_LEVEL_LOW
#define bIOBANK0_PROC0_INTE1_GPIO8_LEVEL_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO8_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO8_EDGE_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO8_EDGE_LOW
#define bIOBANK0_PROC0_INTE1_GPIO8_EDGE_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO8_EDGE_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO9_LEVEL_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO9_LEVEL_LOW
#define bIOBANK0_PROC0_INTE1_GPIO9_LEVEL_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO9_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO9_EDGE_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO9_EDGE_LOW
#define bIOBANK0_PROC0_INTE1_GPIO9_EDGE_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO9_EDGE_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO10_LEVEL_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO10_LEVEL_LOW
#define bIOBANK0_PROC0_INTE1_GPIO10_LEVEL_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO10_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO10_EDGE_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO10_EDGE_LOW
#define bIOBANK0_PROC0_INTE1_GPIO10_EDGE_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO10_EDGE_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO11_LEVEL_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO11_LEVEL_LOW
#define bIOBANK0_PROC0_INTE1_GPIO11_LEVEL_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO11_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO11_EDGE_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO11_EDGE_LOW
#define bIOBANK0_PROC0_INTE1_GPIO11_EDGE_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO11_EDGE_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO12_LEVEL_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO12_LEVEL_LOW
#define bIOBANK0_PROC0_INTE1_GPIO12_LEVEL_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO12_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO12_EDGE_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO12_EDGE_LOW
#define bIOBANK0_PROC0_INTE1_GPIO12_EDGE_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO12_EDGE_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO13_LEVEL_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO13_LEVEL_LOW
#define bIOBANK0_PROC0_INTE1_GPIO13_LEVEL_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO13_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO13_EDGE_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO13_EDGE_LOW
#define bIOBANK0_PROC0_INTE1_GPIO13_EDGE_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO13_EDGE_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO14_LEVEL_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO14_LEVEL_LOW
#define bIOBANK0_PROC0_INTE1_GPIO14_LEVEL_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO14_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO14_EDGE_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO14_EDGE_LOW
#define bIOBANK0_PROC0_INTE1_GPIO14_EDGE_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO14_EDGE_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO15_LEVEL_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO15_LEVEL_LOW
#define bIOBANK0_PROC0_INTE1_GPIO15_LEVEL_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO15_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE1_GPIO15_EDGE_LOW sIOBANK0.PROC0_INTE1.BITS.GPIO15_EDGE_LOW
#define bIOBANK0_PROC0_INTE1_GPIO15_EDGE_HIGH sIOBANK0.PROC0_INTE1.BITS.GPIO15_EDGE_HIGH

// Registro PROC0_INTE2
#define rIOBANK0_PROC0_INTE2 sIOBANK0.PROC0_INTE2.WORD
#define bIOBANK0_PROC0_INTE2_GPIO16_LEVEL_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO16_LEVEL_LOW
#define bIOBANK0_PROC0_INTE2_GPIO16_LEVEL_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO16_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO16_EDGE_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO16_EDGE_LOW
#define bIOBANK0_PROC0_INTE2_GPIO16_EDGE_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO16_EDGE_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO17_LEVEL_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO17_LEVEL_LOW
#define bIOBANK0_PROC0_INTE2_GPIO17_LEVEL_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO17_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO17_EDGE_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO17_EDGE_LOW
#define bIOBANK0_PROC0_INTE2_GPIO17_EDGE_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO17_EDGE_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO18_LEVEL_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO18_LEVEL_LOW
#define bIOBANK0_PROC0_INTE2_GPIO18_LEVEL_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO18_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO18_EDGE_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO18_EDGE_LOW
#define bIOBANK0_PROC0_INTE2_GPIO18_EDGE_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO18_EDGE_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO19_LEVEL_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO19_LEVEL_LOW
#define bIOBANK0_PROC0_INTE2_GPIO19_LEVEL_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO19_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO19_EDGE_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO19_EDGE_LOW
#define bIOBANK0_PROC0_INTE2_GPIO19_EDGE_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO19_EDGE_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO20_LEVEL_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO20_LEVEL_LOW
#define bIOBANK0_PROC0_INTE2_GPIO20_LEVEL_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO20_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO20_EDGE_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO20_EDGE_LOW
#define bIOBANK0_PROC0_INTE2_GPIO20_EDGE_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO20_EDGE_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO21_LEVEL_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO21_LEVEL_LOW
#define bIOBANK0_PROC0_INTE2_GPIO21_LEVEL_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO21_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO21_EDGE_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO21_EDGE_LOW
#define bIOBANK0_PROC0_INTE2_GPIO21_EDGE_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO21_EDGE_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO22_LEVEL_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO22_LEVEL_LOW
#define bIOBANK0_PROC0_INTE2_GPIO22_LEVEL_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO22_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO22_EDGE_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO22_EDGE_LOW
#define bIOBANK0_PROC0_INTE2_GPIO22_EDGE_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO22_EDGE_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO23_LEVEL_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO23_LEVEL_LOW
#define bIOBANK0_PROC0_INTE2_GPIO23_LEVEL_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO23_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE2_GPIO23_EDGE_LOW sIOBANK0.PROC0_INTE2.BITS.GPIO23_EDGE_LOW
#define bIOBANK0_PROC0_INTE2_GPIO23_EDGE_HIGH sIOBANK0.PROC0_INTE2.BITS.GPIO23_EDGE_HIGH

// Registro PROC0_INTE3
#define rIOBANK0_PROC0_INTE3 sIOBANK0.PROC0_INTE3.WORD
#define bIOBANK0_PROC0_INTE3_GPIO24_LEVEL_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO24_LEVEL_LOW
#define bIOBANK0_PROC0_INTE3_GPIO24_LEVEL_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO24_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE3_GPIO24_EDGE_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO24_EDGE_LOW
#define bIOBANK0_PROC0_INTE3_GPIO24_EDGE_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO24_EDGE_HIGH
#define bIOBANK0_PROC0_INTE3_GPIO25_LEVEL_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO25_LEVEL_LOW
#define bIOBANK0_PROC0_INTE3_GPIO25_LEVEL_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO25_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE3_GPIO25_EDGE_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO25_EDGE_LOW
#define bIOBANK0_PROC0_INTE3_GPIO25_EDGE_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO25_EDGE_HIGH
#define bIOBANK0_PROC0_INTE3_GPIO26_LEVEL_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO26_LEVEL_LOW
#define bIOBANK0_PROC0_INTE3_GPIO26_LEVEL_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO26_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE3_GPIO26_EDGE_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO26_EDGE_LOW
#define bIOBANK0_PROC0_INTE3_GPIO26_EDGE_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO26_EDGE_HIGH
#define bIOBANK0_PROC0_INTE3_GPIO27_LEVEL_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO27_LEVEL_LOW
#define bIOBANK0_PROC0_INTE3_GPIO27_LEVEL_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO27_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE3_GPIO27_EDGE_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO27_EDGE_LOW
#define bIOBANK0_PROC0_INTE3_GPIO27_EDGE_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO27_EDGE_HIGH
#define bIOBANK0_PROC0_INTE3_GPIO28_LEVEL_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO28_LEVEL_LOW
#define bIOBANK0_PROC0_INTE3_GPIO28_LEVEL_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO28_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE3_GPIO28_EDGE_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO28_EDGE_LOW
#define bIOBANK0_PROC0_INTE3_GPIO28_EDGE_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO28_EDGE_HIGH
#define bIOBANK0_PROC0_INTE3_GPIO29_LEVEL_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO29_LEVEL_LOW
#define bIOBANK0_PROC0_INTE3_GPIO29_LEVEL_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO29_LEVEL_HIGH
#define bIOBANK0_PROC0_INTE3_GPIO29_EDGE_LOW sIOBANK0.PROC0_INTE3.BITS.GPIO29_EDGE_LOW
#define bIOBANK0_PROC0_INTE3_GPIO29_EDGE_HIGH sIOBANK0.PROC0_INTE3.BITS.GPIO29_EDGE_HIGH

//---------------------------------------------------------------------------------------

// Registro PROC0_INTF0
#define rIOBANK0_PROC0_INTF0 sIOBANK0.PROC0_INTF0.WORD
#define bIOBANK0_PROC0_INTF0_GPIO0_LEVEL_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO0_LEVEL_LOW
#define bIOBANK0_PROC0_INTF0_GPIO0_LEVEL_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO0_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO0_EDGE_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO0_EDGE_LOW
#define bIOBANK0_PROC0_INTF0_GPIO0_EDGE_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO0_EDGE_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO1_LEVEL_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO1_LEVEL_LOW
#define bIOBANK0_PROC0_INTF0_GPIO1_LEVEL_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO1_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO1_EDGE_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO1_EDGE_LOW
#define bIOBANK0_PROC0_INTF0_GPIO1_EDGE_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO1_EDGE_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO2_LEVEL_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO2_LEVEL_LOW
#define bIOBANK0_PROC0_INTF0_GPIO2_LEVEL_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO2_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO2_EDGE_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO2_EDGE_LOW
#define bIOBANK0_PROC0_INTF0_GPIO2_EDGE_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO2_EDGE_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO3_LEVEL_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO3_LEVEL_LOW
#define bIOBANK0_PROC0_INTF0_GPIO3_LEVEL_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO3_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO3_EDGE_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO3_EDGE_LOW
#define bIOBANK0_PROC0_INTF0_GPIO3_EDGE_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO3_EDGE_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO4_LEVEL_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO4_LEVEL_LOW
#define bIOBANK0_PROC0_INTF0_GPIO4_LEVEL_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO4_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO4_EDGE_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO4_EDGE_LOW
#define bIOBANK0_PROC0_INTF0_GPIO4_EDGE_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO5_LEVEL_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO5_LEVEL_LOW
#define bIOBANK0_PROC0_INTF0_GPIO5_LEVEL_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO5_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO5_EDGE_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO5_EDGE_LOW
#define bIOBANK0_PROC0_INTF0_GPIO5_EDGE_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO5_EDGE_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO6_LEVEL_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO6_LEVEL_LOW
#define bIOBANK0_PROC0_INTF0_GPIO6_LEVEL_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO6_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO6_EDGE_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO6_EDGE_LOW
#define bIOBANK0_PROC0_INTF0_GPIO6_EDGE_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO6_EDGE_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO7_LEVEL_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO7_LEVEL_LOW
#define bIOBANK0_PROC0_INTF0_GPIO7_LEVEL_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO7_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF0_GPIO7_EDGE_LOW sIOBANK0.PROC0_INTF0.BITS.GPIO7_EDGE_LOW
#define bIOBANK0_PROC0_INTF0_GPIO7_EDGE_HIGH sIOBANK0.PROC0_INTF0.BITS.GPIO7_EDGE_HIGH

// Registro PROC0_INTF1
#define rIOBANK0_PROC0_INTF1 sIOBANK0.PROC0_INTF1.WORD
#define bIOBANK0_PROC0_INTF1_GPIO8_LEVEL_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO8_LEVEL_LOW
#define bIOBANK0_PROC0_INTF1_GPIO8_LEVEL_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO8_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO8_EDGE_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO8_EDGE_LOW
#define bIOBANK0_PROC0_INTF1_GPIO8_EDGE_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO8_EDGE_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO9_LEVEL_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO9_LEVEL_LOW
#define bIOBANK0_PROC0_INTF1_GPIO9_LEVEL_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO9_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO9_EDGE_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO9_EDGE_LOW
#define bIOBANK0_PROC0_INTF1_GPIO9_EDGE_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO9_EDGE_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO10_LEVEL_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO10_LEVEL_LOW
#define bIOBANK0_PROC0_INTF1_GPIO10_LEVEL_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO10_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO10_EDGE_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO10_EDGE_LOW
#define bIOBANK0_PROC0_INTF1_GPIO10_EDGE_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO10_EDGE_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO11_LEVEL_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO11_LEVEL_LOW
#define bIOBANK0_PROC0_INTF1_GPIO11_LEVEL_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO11_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO11_EDGE_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO11_EDGE_LOW
#define bIOBANK0_PROC0_INTF1_GPIO11_EDGE_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO11_EDGE_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO12_LEVEL_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO12_LEVEL_LOW
#define bIOBANK0_PROC0_INTF1_GPIO12_LEVEL_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO12_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO12_EDGE_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO12_EDGE_LOW
#define bIOBANK0_PROC0_INTF1_GPIO12_EDGE_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO12_EDGE_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO13_LEVEL_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO13_LEVEL_LOW
#define bIOBANK0_PROC0_INTF1_GPIO13_LEVEL_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO13_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO13_EDGE_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO13_EDGE_LOW
#define bIOBANK0_PROC0_INTF1_GPIO13_EDGE_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO13_EDGE_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO14_LEVEL_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO14_LEVEL_LOW
#define bIOBANK0_PROC0_INTF1_GPIO14_LEVEL_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO14_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO14_EDGE_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO14_EDGE_LOW
#define bIOBANK0_PROC0_INTF1_GPIO14_EDGE_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO14_EDGE_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO15_LEVEL_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO15_LEVEL_LOW
#define bIOBANK0_PROC0_INTF1_GPIO15_LEVEL_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO15_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF1_GPIO15_EDGE_LOW sIOBANK0.PROC0_INTF1.BITS.GPIO15_EDGE_LOW
#define bIOBANK0_PROC0_INTF1_GPIO15_EDGE_HIGH sIOBANK0.PROC0_INTF1.BITS.GPIO15_EDGE_HIGH

// Registro PROC0_INTF2
#define rIOBANK0_PROC0_INTF2 sIOBANK0.PROC0_INTF2.WORD
#define bIOBANK0_PROC0_INTF2_GPIO16_LEVEL_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO16_LEVEL_LOW
#define bIOBANK0_PROC0_INTF2_GPIO16_LEVEL_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO16_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO16_EDGE_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO16_EDGE_LOW
#define bIOBANK0_PROC0_INTF2_GPIO16_EDGE_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO16_EDGE_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO17_LEVEL_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO17_LEVEL_LOW
#define bIOBANK0_PROC0_INTF2_GPIO17_LEVEL_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO17_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO17_EDGE_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO17_EDGE_LOW
#define bIOBANK0_PROC0_INTF2_GPIO17_EDGE_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO17_EDGE_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO18_LEVEL_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO18_LEVEL_LOW
#define bIOBANK0_PROC0_INTF2_GPIO18_LEVEL_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO18_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO18_EDGE_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO18_EDGE_LOW
#define bIOBANK0_PROC0_INTF2_GPIO18_EDGE_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO18_EDGE_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO19_LEVEL_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO19_LEVEL_LOW
#define bIOBANK0_PROC0_INTF2_GPIO19_LEVEL_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO19_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO19_EDGE_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO19_EDGE_LOW
#define bIOBANK0_PROC0_INTF2_GPIO19_EDGE_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO19_EDGE_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO20_LEVEL_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO20_LEVEL_LOW
#define bIOBANK0_PROC0_INTF2_GPIO20_LEVEL_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO20_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO20_EDGE_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO20_EDGE_LOW
#define bIOBANK0_PROC0_INTF2_GPIO20_EDGE_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO20_EDGE_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO21_LEVEL_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO21_LEVEL_LOW
#define bIOBANK0_PROC0_INTF2_GPIO21_LEVEL_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO21_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO21_EDGE_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO21_EDGE_LOW
#define bIOBANK0_PROC0_INTF2_GPIO21_EDGE_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO21_EDGE_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO22_LEVEL_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO22_LEVEL_LOW
#define bIOBANK0_PROC0_INTF2_GPIO22_LEVEL_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO22_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO22_EDGE_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO22_EDGE_LOW
#define bIOBANK0_PROC0_INTF2_GPIO22_EDGE_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO22_EDGE_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO23_LEVEL_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO23_LEVEL_LOW
#define bIOBANK0_PROC0_INTF2_GPIO23_LEVEL_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO23_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF2_GPIO23_EDGE_LOW sIOBANK0.PROC0_INTF2.BITS.GPIO23_EDGE_LOW
#define bIOBANK0_PROC0_INTF2_GPIO23_EDGE_HIGH sIOBANK0.PROC0_INTF2.BITS.GPIO23_EDGE_HIGH

// Registro PROC0_INTF3
#define rIOBANK0_PROC0_INTF3 sIOBANK0.PROC0_INTF3.WORD
#define bIOBANK0_PROC0_INTF3_GPIO24_LEVEL_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO24_LEVEL_LOW
#define bIOBANK0_PROC0_INTF3_GPIO24_LEVEL_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO24_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF3_GPIO24_EDGE_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO24_EDGE_LOW
#define bIOBANK0_PROC0_INTF3_GPIO24_EDGE_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO24_EDGE_HIGH
#define bIOBANK0_PROC0_INTF3_GPIO25_LEVEL_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO25_LEVEL_LOW
#define bIOBANK0_PROC0_INTF3_GPIO25_LEVEL_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO25_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF3_GPIO25_EDGE_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO25_EDGE_LOW
#define bIOBANK0_PROC0_INTF3_GPIO25_EDGE_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO25_EDGE_HIGH
#define bIOBANK0_PROC0_INTF3_GPIO26_LEVEL_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO26_LEVEL_LOW
#define bIOBANK0_PROC0_INTF3_GPIO26_LEVEL_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO26_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF3_GPIO26_EDGE_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO26_EDGE_LOW
#define bIOBANK0_PROC0_INTF3_GPIO26_EDGE_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO26_EDGE_HIGH
#define bIOBANK0_PROC0_INTF3_GPIO27_LEVEL_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO27_LEVEL_LOW
#define bIOBANK0_PROC0_INTF3_GPIO27_LEVEL_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO27_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF3_GPIO27_EDGE_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO27_EDGE_LOW
#define bIOBANK0_PROC0_INTF3_GPIO27_EDGE_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO27_EDGE_HIGH
#define bIOBANK0_PROC0_INTF3_GPIO28_LEVEL_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO28_LEVEL_LOW
#define bIOBANK0_PROC0_INTF3_GPIO28_LEVEL_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO28_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF3_GPIO28_EDGE_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO28_EDGE_LOW
#define bIOBANK0_PROC0_INTF3_GPIO28_EDGE_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO28_EDGE_HIGH
#define bIOBANK0_PROC0_INTF3_GPIO29_LEVEL_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO29_LEVEL_LOW
#define bIOBANK0_PROC0_INTF3_GPIO29_LEVEL_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO29_LEVEL_HIGH
#define bIOBANK0_PROC0_INTF3_GPIO29_EDGE_LOW sIOBANK0.PROC0_INTF3.BITS.GPIO29_EDGE_LOW
#define bIOBANK0_PROC0_INTF3_GPIO29_EDGE_HIGH sIOBANK0.PROC0_INTF3.BITS.GPIO29_EDGE_HIGH

//---------------------------------------------------------------------------------------

// Registro PROC0_INTS0
#define rIOBANK0_PROC0_INTS0 sIOBANK0.PROC0_INTS0.WORD
#define bIOBANK0_PROC0_INTS0_GPIO0_LEVEL_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO0_LEVEL_LOW
#define bIOBANK0_PROC0_INTS0_GPIO0_LEVEL_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO0_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO0_EDGE_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO0_EDGE_LOW
#define bIOBANK0_PROC0_INTS0_GPIO0_EDGE_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO0_EDGE_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO1_LEVEL_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO1_LEVEL_LOW
#define bIOBANK0_PROC0_INTS0_GPIO1_LEVEL_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO1_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO1_EDGE_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO1_EDGE_LOW
#define bIOBANK0_PROC0_INTS0_GPIO1_EDGE_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO1_EDGE_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO2_LEVEL_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO2_LEVEL_LOW
#define bIOBANK0_PROC0_INTS0_GPIO2_LEVEL_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO2_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO2_EDGE_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO2_EDGE_LOW
#define bIOBANK0_PROC0_INTS0_GPIO2_EDGE_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO2_EDGE_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO3_LEVEL_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO3_LEVEL_LOW
#define bIOBANK0_PROC0_INTS0_GPIO3_LEVEL_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO3_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO3_EDGE_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO3_EDGE_LOW
#define bIOBANK0_PROC0_INTS0_GPIO3_EDGE_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO3_EDGE_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO4_LEVEL_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO4_LEVEL_LOW
#define bIOBANK0_PROC0_INTS0_GPIO4_LEVEL_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO4_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO4_EDGE_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO4_EDGE_LOW
#define bIOBANK0_PROC0_INTS0_GPIO4_EDGE_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO5_LEVEL_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO5_LEVEL_LOW
#define bIOBANK0_PROC0_INTS0_GPIO5_LEVEL_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO5_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO5_EDGE_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO5_EDGE_LOW
#define bIOBANK0_PROC0_INTS0_GPIO5_EDGE_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO5_EDGE_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO6_LEVEL_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO6_LEVEL_LOW
#define bIOBANK0_PROC0_INTS0_GPIO6_LEVEL_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO6_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO6_EDGE_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO6_EDGE_LOW
#define bIOBANK0_PROC0_INTS0_GPIO6_EDGE_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO6_EDGE_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO7_LEVEL_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO7_LEVEL_LOW
#define bIOBANK0_PROC0_INTS0_GPIO7_LEVEL_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO7_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS0_GPIO7_EDGE_LOW sIOBANK0.PROC0_INTS0.BITS.GPIO7_EDGE_LOW
#define bIOBANK0_PROC0_INTS0_GPIO7_EDGE_HIGH sIOBANK0.PROC0_INTS0.BITS.GPIO7_EDGE_HIGH

// Registro PROC0_INTS1
#define rIOBANK0_PROC0_INTS1 sIOBANK0.PROC0_INTS1.WORD
#define bIOBANK0_PROC0_INTS1_GPIO8_LEVEL_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO8_LEVEL_LOW
#define bIOBANK0_PROC0_INTS1_GPIO8_LEVEL_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO8_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO8_EDGE_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO8_EDGE_LOW
#define bIOBANK0_PROC0_INTS1_GPIO8_EDGE_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO8_EDGE_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO9_LEVEL_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO9_LEVEL_LOW
#define bIOBANK0_PROC0_INTS1_GPIO9_LEVEL_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO9_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO9_EDGE_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO9_EDGE_LOW
#define bIOBANK0_PROC0_INTS1_GPIO9_EDGE_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO9_EDGE_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO10_LEVEL_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO10_LEVEL_LOW
#define bIOBANK0_PROC0_INTS1_GPIO10_LEVEL_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO10_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO10_EDGE_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO10_EDGE_LOW
#define bIOBANK0_PROC0_INTS1_GPIO10_EDGE_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO10_EDGE_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO11_LEVEL_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO11_LEVEL_LOW
#define bIOBANK0_PROC0_INTS1_GPIO11_LEVEL_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO11_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO11_EDGE_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO11_EDGE_LOW
#define bIOBANK0_PROC0_INTS1_GPIO11_EDGE_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO11_EDGE_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO12_LEVEL_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO12_LEVEL_LOW
#define bIOBANK0_PROC0_INTS1_GPIO12_LEVEL_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO12_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO12_EDGE_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO12_EDGE_LOW
#define bIOBANK0_PROC0_INTS1_GPIO12_EDGE_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO12_EDGE_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO13_LEVEL_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO13_LEVEL_LOW
#define bIOBANK0_PROC0_INTS1_GPIO13_LEVEL_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO13_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO13_EDGE_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO13_EDGE_LOW
#define bIOBANK0_PROC0_INTS1_GPIO13_EDGE_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO13_EDGE_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO14_LEVEL_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO14_LEVEL_LOW
#define bIOBANK0_PROC0_INTS1_GPIO14_LEVEL_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO14_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO14_EDGE_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO14_EDGE_LOW
#define bIOBANK0_PROC0_INTS1_GPIO14_EDGE_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO14_EDGE_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO15_LEVEL_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO15_LEVEL_LOW
#define bIOBANK0_PROC0_INTS1_GPIO15_LEVEL_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO15_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS1_GPIO15_EDGE_LOW sIOBANK0.PROC0_INTS1.BITS.GPIO15_EDGE_LOW
#define bIOBANK0_PROC0_INTS1_GPIO15_EDGE_HIGH sIOBANK0.PROC0_INTS1.BITS.GPIO15_EDGE_HIGH

// Registro PROC0_INTS2
#define rIOBANK0_PROC0_INTS2 sIOBANK0.PROC0_INTS2.WORD
#define bIOBANK0_PROC0_INTS2_GPIO16_LEVEL_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO16_LEVEL_LOW
#define bIOBANK0_PROC0_INTS2_GPIO16_LEVEL_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO16_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO16_EDGE_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO16_EDGE_LOW
#define bIOBANK0_PROC0_INTS2_GPIO16_EDGE_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO16_EDGE_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO17_LEVEL_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO17_LEVEL_LOW
#define bIOBANK0_PROC0_INTS2_GPIO17_LEVEL_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO17_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO17_EDGE_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO17_EDGE_LOW
#define bIOBANK0_PROC0_INTS2_GPIO17_EDGE_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO17_EDGE_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO18_LEVEL_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO18_LEVEL_LOW
#define bIOBANK0_PROC0_INTS2_GPIO18_LEVEL_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO18_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO18_EDGE_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO18_EDGE_LOW
#define bIOBANK0_PROC0_INTS2_GPIO18_EDGE_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO18_EDGE_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO19_LEVEL_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO19_LEVEL_LOW
#define bIOBANK0_PROC0_INTS2_GPIO19_LEVEL_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO19_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO19_EDGE_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO19_EDGE_LOW
#define bIOBANK0_PROC0_INTS2_GPIO19_EDGE_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO19_EDGE_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO20_LEVEL_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO20_LEVEL_LOW
#define bIOBANK0_PROC0_INTS2_GPIO20_LEVEL_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO20_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO20_EDGE_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO20_EDGE_LOW
#define bIOBANK0_PROC0_INTS2_GPIO20_EDGE_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO20_EDGE_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO21_LEVEL_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO21_LEVEL_LOW
#define bIOBANK0_PROC0_INTS2_GPIO21_LEVEL_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO21_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO21_EDGE_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO21_EDGE_LOW
#define bIOBANK0_PROC0_INTS2_GPIO21_EDGE_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO21_EDGE_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO22_LEVEL_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO22_LEVEL_LOW
#define bIOBANK0_PROC0_INTS2_GPIO22_LEVEL_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO22_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO22_EDGE_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO22_EDGE_LOW
#define bIOBANK0_PROC0_INTS2_GPIO22_EDGE_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO22_EDGE_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO23_LEVEL_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO23_LEVEL_LOW
#define bIOBANK0_PROC0_INTS2_GPIO23_LEVEL_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO23_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS2_GPIO23_EDGE_LOW sIOBANK0.PROC0_INTS2.BITS.GPIO23_EDGE_LOW
#define bIOBANK0_PROC0_INTS2_GPIO23_EDGE_HIGH sIOBANK0.PROC0_INTS2.BITS.GPIO23_EDGE_HIGH

// Registro PROC0_INTS3
#define rIOBANK0_PROC0_INTS3 sIOBANK0.PROC0_INTS3.WORD
#define bIOBANK0_PROC0_INTS3_GPIO24_LEVEL_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO24_LEVEL_LOW
#define bIOBANK0_PROC0_INTS3_GPIO24_LEVEL_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO24_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS3_GPIO24_EDGE_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO24_EDGE_LOW
#define bIOBANK0_PROC0_INTS3_GPIO24_EDGE_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO24_EDGE_HIGH
#define bIOBANK0_PROC0_INTS3_GPIO25_LEVEL_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO25_LEVEL_LOW
#define bIOBANK0_PROC0_INTS3_GPIO25_LEVEL_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO25_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS3_GPIO25_EDGE_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO25_EDGE_LOW
#define bIOBANK0_PROC0_INTS3_GPIO25_EDGE_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO25_EDGE_HIGH
#define bIOBANK0_PROC0_INTS3_GPIO26_LEVEL_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO26_LEVEL_LOW
#define bIOBANK0_PROC0_INTS3_GPIO26_LEVEL_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO26_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS3_GPIO26_EDGE_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO26_EDGE_LOW
#define bIOBANK0_PROC0_INTS3_GPIO26_EDGE_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO26_EDGE_HIGH
#define bIOBANK0_PROC0_INTS3_GPIO27_LEVEL_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO27_LEVEL_LOW
#define bIOBANK0_PROC0_INTS3_GPIO27_LEVEL_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO27_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS3_GPIO27_EDGE_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO27_EDGE_LOW
#define bIOBANK0_PROC0_INTS3_GPIO27_EDGE_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO27_EDGE_HIGH
#define bIOBANK0_PROC0_INTS3_GPIO28_LEVEL_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO28_LEVEL_LOW
#define bIOBANK0_PROC0_INTS3_GPIO28_LEVEL_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO28_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS3_GPIO28_EDGE_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO28_EDGE_LOW
#define bIOBANK0_PROC0_INTS3_GPIO28_EDGE_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO28_EDGE_HIGH
#define bIOBANK0_PROC0_INTS3_GPIO29_LEVEL_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO29_LEVEL_LOW
#define bIOBANK0_PROC0_INTS3_GPIO29_LEVEL_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO29_LEVEL_HIGH
#define bIOBANK0_PROC0_INTS3_GPIO29_EDGE_LOW sIOBANK0.PROC0_INTS3.BITS.GPIO29_EDGE_LOW
#define bIOBANK0_PROC0_INTS3_GPIO29_EDGE_HIGH sIOBANK0.PROC0_INTS3.BITS.GPIO29_EDGE_HIGH

/****************************************************************************************
 ****************************************************************************************
 *                          REGISTROS PROC1_INT
 ****************************************************************************************
*****************************************************************************************/

// Registro PROC1_INTE0
#define rIOBANK0_PROC1_INTE0 sIOBANK0.PROC1_INTE0.WORD
#define bIOBANK0_PROC1_INTE0_GPIO0_LEVEL_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO0_LEVEL_LOW
#define bIOBANK0_PROC1_INTE0_GPIO0_LEVEL_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO0_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO0_EDGE_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO0_EDGE_LOW
#define bIOBANK0_PROC1_INTE0_GPIO0_EDGE_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO0_EDGE_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO1_LEVEL_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO1_LEVEL_LOW
#define bIOBANK0_PROC1_INTE0_GPIO1_LEVEL_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO1_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO1_EDGE_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO1_EDGE_LOW
#define bIOBANK0_PROC1_INTE0_GPIO1_EDGE_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO1_EDGE_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO2_LEVEL_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO2_LEVEL_LOW
#define bIOBANK0_PROC1_INTE0_GPIO2_LEVEL_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO2_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO2_EDGE_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO2_EDGE_LOW
#define bIOBANK0_PROC1_INTE0_GPIO2_EDGE_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO2_EDGE_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO3_LEVEL_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO3_LEVEL_LOW
#define bIOBANK0_PROC1_INTE0_GPIO3_LEVEL_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO3_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO3_EDGE_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO3_EDGE_LOW
#define bIOBANK0_PROC1_INTE0_GPIO3_EDGE_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO3_EDGE_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO4_LEVEL_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO4_LEVEL_LOW
#define bIOBANK0_PROC1_INTE0_GPIO4_LEVEL_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO4_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO4_EDGE_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO4_EDGE_LOW
#define bIOBANK0_PROC1_INTE0_GPIO4_EDGE_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO5_LEVEL_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO5_LEVEL_LOW
#define bIOBANK0_PROC1_INTE0_GPIO5_LEVEL_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO5_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO5_EDGE_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO5_EDGE_LOW
#define bIOBANK0_PROC1_INTE0_GPIO5_EDGE_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO5_EDGE_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO6_LEVEL_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO6_LEVEL_LOW
#define bIOBANK0_PROC1_INTE0_GPIO6_LEVEL_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO6_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO6_EDGE_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO6_EDGE_LOW
#define bIOBANK0_PROC1_INTE0_GPIO6_EDGE_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO6_EDGE_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO7_LEVEL_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO7_LEVEL_LOW
#define bIOBANK0_PROC1_INTE0_GPIO7_LEVEL_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO7_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE0_GPIO7_EDGE_LOW sIOBANK0.PROC1_INTE0.BITS.GPIO7_EDGE_LOW
#define bIOBANK0_PROC1_INTE0_GPIO7_EDGE_HIGH sIOBANK0.PROC1_INTE0.BITS.GPIO7_EDGE_HIGH

// Registro PROC1_INTE1
#define rIOBANK0_PROC1_INTE1 sIOBANK0.PROC1_INTE1.WORD
#define bIOBANK0_PROC1_INTE1_GPIO8_LEVEL_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO8_LEVEL_LOW
#define bIOBANK0_PROC1_INTE1_GPIO8_LEVEL_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO8_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO8_EDGE_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO8_EDGE_LOW
#define bIOBANK0_PROC1_INTE1_GPIO8_EDGE_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO8_EDGE_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO9_LEVEL_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO9_LEVEL_LOW
#define bIOBANK0_PROC1_INTE1_GPIO9_LEVEL_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO9_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO9_EDGE_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO9_EDGE_LOW
#define bIOBANK0_PROC1_INTE1_GPIO9_EDGE_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO9_EDGE_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO10_LEVEL_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO10_LEVEL_LOW
#define bIOBANK0_PROC1_INTE1_GPIO10_LEVEL_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO10_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO10_EDGE_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO10_EDGE_LOW
#define bIOBANK0_PROC1_INTE1_GPIO10_EDGE_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO10_EDGE_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO11_LEVEL_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO11_LEVEL_LOW
#define bIOBANK0_PROC1_INTE1_GPIO11_LEVEL_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO11_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO11_EDGE_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO11_EDGE_LOW
#define bIOBANK0_PROC1_INTE1_GPIO11_EDGE_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO11_EDGE_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO12_LEVEL_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO12_LEVEL_LOW
#define bIOBANK0_PROC1_INTE1_GPIO12_LEVEL_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO12_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO12_EDGE_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO12_EDGE_LOW
#define bIOBANK0_PROC1_INTE1_GPIO12_EDGE_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO12_EDGE_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO13_LEVEL_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO13_LEVEL_LOW
#define bIOBANK0_PROC1_INTE1_GPIO13_LEVEL_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO13_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO13_EDGE_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO13_EDGE_LOW
#define bIOBANK0_PROC1_INTE1_GPIO13_EDGE_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO13_EDGE_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO14_LEVEL_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO14_LEVEL_LOW
#define bIOBANK0_PROC1_INTE1_GPIO14_LEVEL_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO14_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO14_EDGE_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO14_EDGE_LOW
#define bIOBANK0_PROC1_INTE1_GPIO14_EDGE_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO14_EDGE_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO15_LEVEL_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO15_LEVEL_LOW
#define bIOBANK0_PROC1_INTE1_GPIO15_LEVEL_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO15_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE1_GPIO15_EDGE_LOW sIOBANK0.PROC1_INTE1.BITS.GPIO15_EDGE_LOW
#define bIOBANK0_PROC1_INTE1_GPIO15_EDGE_HIGH sIOBANK0.PROC1_INTE1.BITS.GPIO15_EDGE_HIGH

// Registro PROC1_INTE2
#define rIOBANK0_PROC1_INTE2 sIOBANK0.PROC1_INTE2.WORD
#define bIOBANK0_PROC1_INTE2_GPIO16_LEVEL_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO16_LEVEL_LOW
#define bIOBANK0_PROC1_INTE2_GPIO16_LEVEL_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO16_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO16_EDGE_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO16_EDGE_LOW
#define bIOBANK0_PROC1_INTE2_GPIO16_EDGE_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO16_EDGE_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO17_LEVEL_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO17_LEVEL_LOW
#define bIOBANK0_PROC1_INTE2_GPIO17_LEVEL_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO17_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO17_EDGE_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO17_EDGE_LOW
#define bIOBANK0_PROC1_INTE2_GPIO17_EDGE_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO17_EDGE_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO18_LEVEL_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO18_LEVEL_LOW
#define bIOBANK0_PROC1_INTE2_GPIO18_LEVEL_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO18_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO18_EDGE_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO18_EDGE_LOW
#define bIOBANK0_PROC1_INTE2_GPIO18_EDGE_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO18_EDGE_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO19_LEVEL_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO19_LEVEL_LOW
#define bIOBANK0_PROC1_INTE2_GPIO19_LEVEL_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO19_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO19_EDGE_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO19_EDGE_LOW
#define bIOBANK0_PROC1_INTE2_GPIO19_EDGE_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO19_EDGE_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO20_LEVEL_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO20_LEVEL_LOW
#define bIOBANK0_PROC1_INTE2_GPIO20_LEVEL_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO20_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO20_EDGE_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO20_EDGE_LOW
#define bIOBANK0_PROC1_INTE2_GPIO20_EDGE_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO20_EDGE_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO21_LEVEL_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO21_LEVEL_LOW
#define bIOBANK0_PROC1_INTE2_GPIO21_LEVEL_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO21_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO21_EDGE_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO21_EDGE_LOW
#define bIOBANK0_PROC1_INTE2_GPIO21_EDGE_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO21_EDGE_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO22_LEVEL_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO22_LEVEL_LOW
#define bIOBANK0_PROC1_INTE2_GPIO22_LEVEL_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO22_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO22_EDGE_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO22_EDGE_LOW
#define bIOBANK0_PROC1_INTE2_GPIO22_EDGE_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO22_EDGE_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO23_LEVEL_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO23_LEVEL_LOW
#define bIOBANK0_PROC1_INTE2_GPIO23_LEVEL_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO23_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE2_GPIO23_EDGE_LOW sIOBANK0.PROC1_INTE2.BITS.GPIO23_EDGE_LOW
#define bIOBANK0_PROC1_INTE2_GPIO23_EDGE_HIGH sIOBANK0.PROC1_INTE2.BITS.GPIO23_EDGE_HIGH

// Registro PROC1_INTE3
#define rIOBANK0_PROC1_INTE3 sIOBANK0.PROC1_INTE3.WORD
#define bIOBANK0_PROC1_INTE3_GPIO24_LEVEL_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO24_LEVEL_LOW
#define bIOBANK0_PROC1_INTE3_GPIO24_LEVEL_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO24_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE3_GPIO24_EDGE_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO24_EDGE_LOW
#define bIOBANK0_PROC1_INTE3_GPIO24_EDGE_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO24_EDGE_HIGH
#define bIOBANK0_PROC1_INTE3_GPIO25_LEVEL_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO25_LEVEL_LOW
#define bIOBANK0_PROC1_INTE3_GPIO25_LEVEL_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO25_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE3_GPIO25_EDGE_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO25_EDGE_LOW
#define bIOBANK0_PROC1_INTE3_GPIO25_EDGE_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO25_EDGE_HIGH
#define bIOBANK0_PROC1_INTE3_GPIO26_LEVEL_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO26_LEVEL_LOW
#define bIOBANK0_PROC1_INTE3_GPIO26_LEVEL_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO26_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE3_GPIO26_EDGE_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO26_EDGE_LOW
#define bIOBANK0_PROC1_INTE3_GPIO26_EDGE_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO26_EDGE_HIGH
#define bIOBANK0_PROC1_INTE3_GPIO27_LEVEL_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO27_LEVEL_LOW
#define bIOBANK0_PROC1_INTE3_GPIO27_LEVEL_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO27_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE3_GPIO27_EDGE_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO27_EDGE_LOW
#define bIOBANK0_PROC1_INTE3_GPIO27_EDGE_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO27_EDGE_HIGH
#define bIOBANK0_PROC1_INTE3_GPIO28_LEVEL_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO28_LEVEL_LOW
#define bIOBANK0_PROC1_INTE3_GPIO28_LEVEL_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO28_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE3_GPIO28_EDGE_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO28_EDGE_LOW
#define bIOBANK0_PROC1_INTE3_GPIO28_EDGE_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO28_EDGE_HIGH
#define bIOBANK0_PROC1_INTE3_GPIO29_LEVEL_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO29_LEVEL_LOW
#define bIOBANK0_PROC1_INTE3_GPIO29_LEVEL_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO29_LEVEL_HIGH
#define bIOBANK0_PROC1_INTE3_GPIO29_EDGE_LOW sIOBANK0.PROC1_INTE3.BITS.GPIO29_EDGE_LOW
#define bIOBANK0_PROC1_INTE3_GPIO29_EDGE_HIGH sIOBANK0.PROC1_INTE3.BITS.GPIO29_EDGE_HIGH

//---------------------------------------------------------------------------------------

// Registro PROC1_INTF0
#define rIOBANK0_PROC1_INTF0 sIOBANK0.PROC1_INTF0.WORD
#define bIOBANK0_PROC1_INTF0_GPIO0_LEVEL_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO0_LEVEL_LOW
#define bIOBANK0_PROC1_INTF0_GPIO0_LEVEL_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO0_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO0_EDGE_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO0_EDGE_LOW
#define bIOBANK0_PROC1_INTF0_GPIO0_EDGE_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO0_EDGE_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO1_LEVEL_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO1_LEVEL_LOW
#define bIOBANK0_PROC1_INTF0_GPIO1_LEVEL_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO1_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO1_EDGE_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO1_EDGE_LOW
#define bIOBANK0_PROC1_INTF0_GPIO1_EDGE_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO1_EDGE_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO2_LEVEL_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO2_LEVEL_LOW
#define bIOBANK0_PROC1_INTF0_GPIO2_LEVEL_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO2_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO2_EDGE_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO2_EDGE_LOW
#define bIOBANK0_PROC1_INTF0_GPIO2_EDGE_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO2_EDGE_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO3_LEVEL_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO3_LEVEL_LOW
#define bIOBANK0_PROC1_INTF0_GPIO3_LEVEL_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO3_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO3_EDGE_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO3_EDGE_LOW
#define bIOBANK0_PROC1_INTF0_GPIO3_EDGE_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO3_EDGE_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO4_LEVEL_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO4_LEVEL_LOW
#define bIOBANK0_PROC1_INTF0_GPIO4_LEVEL_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO4_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO4_EDGE_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO4_EDGE_LOW
#define bIOBANK0_PROC1_INTF0_GPIO4_EDGE_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO5_LEVEL_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO5_LEVEL_LOW
#define bIOBANK0_PROC1_INTF0_GPIO5_LEVEL_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO5_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO5_EDGE_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO5_EDGE_LOW
#define bIOBANK0_PROC1_INTF0_GPIO5_EDGE_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO5_EDGE_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO6_LEVEL_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO6_LEVEL_LOW
#define bIOBANK0_PROC1_INTF0_GPIO6_LEVEL_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO6_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO6_EDGE_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO6_EDGE_LOW
#define bIOBANK0_PROC1_INTF0_GPIO6_EDGE_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO6_EDGE_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO7_LEVEL_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO7_LEVEL_LOW
#define bIOBANK0_PROC1_INTF0_GPIO7_LEVEL_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO7_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF0_GPIO7_EDGE_LOW sIOBANK0.PROC1_INTF0.BITS.GPIO7_EDGE_LOW
#define bIOBANK0_PROC1_INTF0_GPIO7_EDGE_HIGH sIOBANK0.PROC1_INTF0.BITS.GPIO7_EDGE_HIGH

// Registro PROC1_INTF1
#define rIOBANK0_PROC1_INTF1 sIOBANK0.PROC1_INTF1.WORD
#define bIOBANK0_PROC1_INTF1_GPIO8_LEVEL_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO8_LEVEL_LOW
#define bIOBANK0_PROC1_INTF1_GPIO8_LEVEL_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO8_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO8_EDGE_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO8_EDGE_LOW
#define bIOBANK0_PROC1_INTF1_GPIO8_EDGE_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO8_EDGE_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO9_LEVEL_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO9_LEVEL_LOW
#define bIOBANK0_PROC1_INTF1_GPIO9_LEVEL_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO9_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO9_EDGE_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO9_EDGE_LOW
#define bIOBANK0_PROC1_INTF1_GPIO9_EDGE_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO9_EDGE_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO10_LEVEL_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO10_LEVEL_LOW
#define bIOBANK0_PROC1_INTF1_GPIO10_LEVEL_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO10_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO10_EDGE_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO10_EDGE_LOW
#define bIOBANK0_PROC1_INTF1_GPIO10_EDGE_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO10_EDGE_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO11_LEVEL_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO11_LEVEL_LOW
#define bIOBANK0_PROC1_INTF1_GPIO11_LEVEL_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO11_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO11_EDGE_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO11_EDGE_LOW
#define bIOBANK0_PROC1_INTF1_GPIO11_EDGE_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO11_EDGE_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO12_LEVEL_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO12_LEVEL_LOW
#define bIOBANK0_PROC1_INTF1_GPIO12_LEVEL_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO12_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO12_EDGE_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO12_EDGE_LOW
#define bIOBANK0_PROC1_INTF1_GPIO12_EDGE_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO12_EDGE_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO13_LEVEL_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO13_LEVEL_LOW
#define bIOBANK0_PROC1_INTF1_GPIO13_LEVEL_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO13_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO13_EDGE_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO13_EDGE_LOW
#define bIOBANK0_PROC1_INTF1_GPIO13_EDGE_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO13_EDGE_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO14_LEVEL_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO14_LEVEL_LOW
#define bIOBANK0_PROC1_INTF1_GPIO14_LEVEL_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO14_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO14_EDGE_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO14_EDGE_LOW
#define bIOBANK0_PROC1_INTF1_GPIO14_EDGE_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO14_EDGE_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO15_LEVEL_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO15_LEVEL_LOW
#define bIOBANK0_PROC1_INTF1_GPIO15_LEVEL_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO15_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF1_GPIO15_EDGE_LOW sIOBANK0.PROC1_INTF1.BITS.GPIO15_EDGE_LOW
#define bIOBANK0_PROC1_INTF1_GPIO15_EDGE_HIGH sIOBANK0.PROC1_INTF1.BITS.GPIO15_EDGE_HIGH

// Registro PROC1_INTF2
#define rIOBANK0_PROC1_INTF2 sIOBANK0.PROC1_INTF2.WORD
#define bIOBANK0_PROC1_INTF2_GPIO16_LEVEL_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO16_LEVEL_LOW
#define bIOBANK0_PROC1_INTF2_GPIO16_LEVEL_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO16_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO16_EDGE_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO16_EDGE_LOW
#define bIOBANK0_PROC1_INTF2_GPIO16_EDGE_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO16_EDGE_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO17_LEVEL_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO17_LEVEL_LOW
#define bIOBANK0_PROC1_INTF2_GPIO17_LEVEL_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO17_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO17_EDGE_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO17_EDGE_LOW
#define bIOBANK0_PROC1_INTF2_GPIO17_EDGE_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO17_EDGE_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO18_LEVEL_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO18_LEVEL_LOW
#define bIOBANK0_PROC1_INTF2_GPIO18_LEVEL_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO18_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO18_EDGE_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO18_EDGE_LOW
#define bIOBANK0_PROC1_INTF2_GPIO18_EDGE_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO18_EDGE_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO19_LEVEL_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO19_LEVEL_LOW
#define bIOBANK0_PROC1_INTF2_GPIO19_LEVEL_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO19_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO19_EDGE_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO19_EDGE_LOW
#define bIOBANK0_PROC1_INTF2_GPIO19_EDGE_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO19_EDGE_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO20_LEVEL_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO20_LEVEL_LOW
#define bIOBANK0_PROC1_INTF2_GPIO20_LEVEL_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO20_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO20_EDGE_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO20_EDGE_LOW
#define bIOBANK0_PROC1_INTF2_GPIO20_EDGE_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO20_EDGE_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO21_LEVEL_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO21_LEVEL_LOW
#define bIOBANK0_PROC1_INTF2_GPIO21_LEVEL_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO21_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO21_EDGE_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO21_EDGE_LOW
#define bIOBANK0_PROC1_INTF2_GPIO21_EDGE_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO21_EDGE_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO22_LEVEL_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO22_LEVEL_LOW
#define bIOBANK0_PROC1_INTF2_GPIO22_LEVEL_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO22_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO22_EDGE_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO22_EDGE_LOW
#define bIOBANK0_PROC1_INTF2_GPIO22_EDGE_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO22_EDGE_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO23_LEVEL_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO23_LEVEL_LOW
#define bIOBANK0_PROC1_INTF2_GPIO23_LEVEL_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO23_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF2_GPIO23_EDGE_LOW sIOBANK0.PROC1_INTF2.BITS.GPIO23_EDGE_LOW
#define bIOBANK0_PROC1_INTF2_GPIO23_EDGE_HIGH sIOBANK0.PROC1_INTF2.BITS.GPIO23_EDGE_HIGH

// Registro PROC1_INTF3
#define rIOBANK0_PROC1_INTF3 sIOBANK0.PROC1_INTF3.WORD
#define bIOBANK0_PROC1_INTF3_GPIO24_LEVEL_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO24_LEVEL_LOW
#define bIOBANK0_PROC1_INTF3_GPIO24_LEVEL_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO24_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF3_GPIO24_EDGE_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO24_EDGE_LOW
#define bIOBANK0_PROC1_INTF3_GPIO24_EDGE_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO24_EDGE_HIGH
#define bIOBANK0_PROC1_INTF3_GPIO25_LEVEL_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO25_LEVEL_LOW
#define bIOBANK0_PROC1_INTF3_GPIO25_LEVEL_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO25_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF3_GPIO25_EDGE_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO25_EDGE_LOW
#define bIOBANK0_PROC1_INTF3_GPIO25_EDGE_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO25_EDGE_HIGH
#define bIOBANK0_PROC1_INTF3_GPIO26_LEVEL_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO26_LEVEL_LOW
#define bIOBANK0_PROC1_INTF3_GPIO26_LEVEL_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO26_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF3_GPIO26_EDGE_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO26_EDGE_LOW
#define bIOBANK0_PROC1_INTF3_GPIO26_EDGE_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO26_EDGE_HIGH
#define bIOBANK0_PROC1_INTF3_GPIO27_LEVEL_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO27_LEVEL_LOW
#define bIOBANK0_PROC1_INTF3_GPIO27_LEVEL_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO27_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF3_GPIO27_EDGE_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO27_EDGE_LOW
#define bIOBANK0_PROC1_INTF3_GPIO27_EDGE_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO27_EDGE_HIGH
#define bIOBANK0_PROC1_INTF3_GPIO28_LEVEL_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO28_LEVEL_LOW
#define bIOBANK0_PROC1_INTF3_GPIO28_LEVEL_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO28_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF3_GPIO28_EDGE_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO28_EDGE_LOW
#define bIOBANK0_PROC1_INTF3_GPIO28_EDGE_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO28_EDGE_HIGH
#define bIOBANK0_PROC1_INTF3_GPIO29_LEVEL_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO29_LEVEL_LOW
#define bIOBANK0_PROC1_INTF3_GPIO29_LEVEL_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO29_LEVEL_HIGH
#define bIOBANK0_PROC1_INTF3_GPIO29_EDGE_LOW sIOBANK0.PROC1_INTF3.BITS.GPIO29_EDGE_LOW
#define bIOBANK0_PROC1_INTF3_GPIO29_EDGE_HIGH sIOBANK0.PROC1_INTF3.BITS.GPIO29_EDGE_HIGH

//---------------------------------------------------------------------------------------

// Registro PROC1_INTS0
#define rIOBANK0_PROC1_INTS0 sIOBANK0.PROC1_INTS0.WORD
#define bIOBANK0_PROC1_INTS0_GPIO0_LEVEL_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO0_LEVEL_LOW
#define bIOBANK0_PROC1_INTS0_GPIO0_LEVEL_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO0_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO0_EDGE_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO0_EDGE_LOW
#define bIOBANK0_PROC1_INTS0_GPIO0_EDGE_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO0_EDGE_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO1_LEVEL_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO1_LEVEL_LOW
#define bIOBANK0_PROC1_INTS0_GPIO1_LEVEL_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO1_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO1_EDGE_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO1_EDGE_LOW
#define bIOBANK0_PROC1_INTS0_GPIO1_EDGE_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO1_EDGE_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO2_LEVEL_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO2_LEVEL_LOW
#define bIOBANK0_PROC1_INTS0_GPIO2_LEVEL_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO2_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO2_EDGE_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO2_EDGE_LOW
#define bIOBANK0_PROC1_INTS0_GPIO2_EDGE_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO2_EDGE_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO3_LEVEL_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO3_LEVEL_LOW
#define bIOBANK0_PROC1_INTS0_GPIO3_LEVEL_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO3_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO3_EDGE_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO3_EDGE_LOW
#define bIOBANK0_PROC1_INTS0_GPIO3_EDGE_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO3_EDGE_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO4_LEVEL_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO4_LEVEL_LOW
#define bIOBANK0_PROC1_INTS0_GPIO4_LEVEL_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO4_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO4_EDGE_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO4_EDGE_LOW
#define bIOBANK0_PROC1_INTS0_GPIO4_EDGE_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO4_EDGE_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO5_LEVEL_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO5_LEVEL_LOW
#define bIOBANK0_PROC1_INTS0_GPIO5_LEVEL_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO5_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO5_EDGE_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO5_EDGE_LOW
#define bIOBANK0_PROC1_INTS0_GPIO5_EDGE_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO5_EDGE_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO6_LEVEL_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO6_LEVEL_LOW
#define bIOBANK0_PROC1_INTS0_GPIO6_LEVEL_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO6_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO6_EDGE_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO6_EDGE_LOW
#define bIOBANK0_PROC1_INTS0_GPIO6_EDGE_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO6_EDGE_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO7_LEVEL_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO7_LEVEL_LOW
#define bIOBANK0_PROC1_INTS0_GPIO7_LEVEL_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO7_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS0_GPIO7_EDGE_LOW sIOBANK0.PROC1_INTS0.BITS.GPIO7_EDGE_LOW
#define bIOBANK0_PROC1_INTS0_GPIO7_EDGE_HIGH sIOBANK0.PROC1_INTS0.BITS.GPIO7_EDGE_HIGH

// Registro PROC1_INTS1
#define rIOBANK0_PROC1_INTS1 sIOBANK0.PROC1_INTS1.WORD
#define bIOBANK0_PROC1_INTS1_GPIO8_LEVEL_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO8_LEVEL_LOW
#define bIOBANK0_PROC1_INTS1_GPIO8_LEVEL_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO8_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO8_EDGE_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO8_EDGE_LOW
#define bIOBANK0_PROC1_INTS1_GPIO8_EDGE_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO8_EDGE_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO9_LEVEL_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO9_LEVEL_LOW
#define bIOBANK0_PROC1_INTS1_GPIO9_LEVEL_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO9_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO9_EDGE_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO9_EDGE_LOW
#define bIOBANK0_PROC1_INTS1_GPIO9_EDGE_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO9_EDGE_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO10_LEVEL_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO10_LEVEL_LOW
#define bIOBANK0_PROC1_INTS1_GPIO10_LEVEL_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO10_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO10_EDGE_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO10_EDGE_LOW
#define bIOBANK0_PROC1_INTS1_GPIO10_EDGE_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO10_EDGE_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO11_LEVEL_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO11_LEVEL_LOW
#define bIOBANK0_PROC1_INTS1_GPIO11_LEVEL_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO11_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO11_EDGE_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO11_EDGE_LOW
#define bIOBANK0_PROC1_INTS1_GPIO11_EDGE_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO11_EDGE_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO12_LEVEL_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO12_LEVEL_LOW
#define bIOBANK0_PROC1_INTS1_GPIO12_LEVEL_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO12_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO12_EDGE_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO12_EDGE_LOW
#define bIOBANK0_PROC1_INTS1_GPIO12_EDGE_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO12_EDGE_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO13_LEVEL_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO13_LEVEL_LOW
#define bIOBANK0_PROC1_INTS1_GPIO13_LEVEL_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO13_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO13_EDGE_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO13_EDGE_LOW
#define bIOBANK0_PROC1_INTS1_GPIO13_EDGE_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO13_EDGE_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO14_LEVEL_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO14_LEVEL_LOW
#define bIOBANK0_PROC1_INTS1_GPIO14_LEVEL_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO14_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO14_EDGE_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO14_EDGE_LOW
#define bIOBANK0_PROC1_INTS1_GPIO14_EDGE_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO14_EDGE_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO15_LEVEL_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO15_LEVEL_LOW
#define bIOBANK0_PROC1_INTS1_GPIO15_LEVEL_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO15_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS1_GPIO15_EDGE_LOW sIOBANK0.PROC1_INTS1.BITS.GPIO15_EDGE_LOW
#define bIOBANK0_PROC1_INTS1_GPIO15_EDGE_HIGH sIOBANK0.PROC1_INTS1.BITS.GPIO15_EDGE_HIGH

// Registro PROC1_INTS2
#define rIOBANK0_PROC1_INTS2 sIOBANK0.PROC1_INTS2.WORD
#define bIOBANK0_PROC1_INTS2_GPIO16_LEVEL_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO16_LEVEL_LOW
#define bIOBANK0_PROC1_INTS2_GPIO16_LEVEL_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO16_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO16_EDGE_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO16_EDGE_LOW
#define bIOBANK0_PROC1_INTS2_GPIO16_EDGE_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO16_EDGE_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO17_LEVEL_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO17_LEVEL_LOW
#define bIOBANK0_PROC1_INTS2_GPIO17_LEVEL_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO17_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO17_EDGE_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO17_EDGE_LOW
#define bIOBANK0_PROC1_INTS2_GPIO17_EDGE_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO17_EDGE_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO18_LEVEL_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO18_LEVEL_LOW
#define bIOBANK0_PROC1_INTS2_GPIO18_LEVEL_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO18_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO18_EDGE_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO18_EDGE_LOW
#define bIOBANK0_PROC1_INTS2_GPIO18_EDGE_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO18_EDGE_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO19_LEVEL_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO19_LEVEL_LOW
#define bIOBANK0_PROC1_INTS2_GPIO19_LEVEL_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO19_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO19_EDGE_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO19_EDGE_LOW
#define bIOBANK0_PROC1_INTS2_GPIO19_EDGE_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO19_EDGE_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO20_LEVEL_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO20_LEVEL_LOW
#define bIOBANK0_PROC1_INTS2_GPIO20_LEVEL_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO20_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO20_EDGE_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO20_EDGE_LOW
#define bIOBANK0_PROC1_INTS2_GPIO20_EDGE_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO20_EDGE_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO21_LEVEL_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO21_LEVEL_LOW
#define bIOBANK0_PROC1_INTS2_GPIO21_LEVEL_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO21_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO21_EDGE_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO21_EDGE_LOW
#define bIOBANK0_PROC1_INTS2_GPIO21_EDGE_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO21_EDGE_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO22_LEVEL_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO22_LEVEL_LOW
#define bIOBANK0_PROC1_INTS2_GPIO22_LEVEL_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO22_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO22_EDGE_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO22_EDGE_LOW
#define bIOBANK0_PROC1_INTS2_GPIO22_EDGE_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO22_EDGE_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO23_LEVEL_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO23_LEVEL_LOW
#define bIOBANK0_PROC1_INTS2_GPIO23_LEVEL_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO23_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS2_GPIO23_EDGE_LOW sIOBANK0.PROC1_INTS2.BITS.GPIO23_EDGE_LOW
#define bIOBANK0_PROC1_INTS2_GPIO23_EDGE_HIGH sIOBANK0.PROC1_INTS2.BITS.GPIO23_EDGE_HIGH

// Registro PROC1_INTS3
#define rIOBANK0_PROC1_INTS3 sIOBANK0.PROC1_INTS3.WORD
#define bIOBANK0_PROC1_INTS3_GPIO24_LEVEL_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO24_LEVEL_LOW
#define bIOBANK0_PROC1_INTS3_GPIO24_LEVEL_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO24_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS3_GPIO24_EDGE_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO24_EDGE_LOW
#define bIOBANK0_PROC1_INTS3_GPIO24_EDGE_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO24_EDGE_HIGH
#define bIOBANK0_PROC1_INTS3_GPIO25_LEVEL_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO25_LEVEL_LOW
#define bIOBANK0_PROC1_INTS3_GPIO25_LEVEL_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO25_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS3_GPIO25_EDGE_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO25_EDGE_LOW
#define bIOBANK0_PROC1_INTS3_GPIO25_EDGE_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO25_EDGE_HIGH
#define bIOBANK0_PROC1_INTS3_GPIO26_LEVEL_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO26_LEVEL_LOW
#define bIOBANK0_PROC1_INTS3_GPIO26_LEVEL_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO26_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS3_GPIO26_EDGE_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO26_EDGE_LOW
#define bIOBANK0_PROC1_INTS3_GPIO26_EDGE_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO26_EDGE_HIGH
#define bIOBANK0_PROC1_INTS3_GPIO27_LEVEL_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO27_LEVEL_LOW
#define bIOBANK0_PROC1_INTS3_GPIO27_LEVEL_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO27_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS3_GPIO27_EDGE_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO27_EDGE_LOW
#define bIOBANK0_PROC1_INTS3_GPIO27_EDGE_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO27_EDGE_HIGH
#define bIOBANK0_PROC1_INTS3_GPIO28_LEVEL_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO28_LEVEL_LOW
#define bIOBANK0_PROC1_INTS3_GPIO28_LEVEL_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO28_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS3_GPIO28_EDGE_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO28_EDGE_LOW
#define bIOBANK0_PROC1_INTS3_GPIO28_EDGE_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO28_EDGE_HIGH
#define bIOBANK0_PROC1_INTS3_GPIO29_LEVEL_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO29_LEVEL_LOW
#define bIOBANK0_PROC1_INTS3_GPIO29_LEVEL_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO29_LEVEL_HIGH
#define bIOBANK0_PROC1_INTS3_GPIO29_EDGE_LOW sIOBANK0.PROC1_INTS3.BITS.GPIO29_EDGE_LOW
#define bIOBANK0_PROC1_INTS3_GPIO29_EDGE_HIGH sIOBANK0.PROC1_INTS3.BITS.GPIO29_EDGE_HIGH

#endif