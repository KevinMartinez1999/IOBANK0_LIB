/**
 @file IOBANK0_LIB.h
 @brief IOBANK0_LIB.h: Conjunto de pines de entrada/salida (GPIO)
 @mainpage
 @section Esta libreria es desarrollada para la RP2040 para el curso de electrónica digital III
 @details Esta libreria contiene las estructuras, registros, constantes y macros de la RP2040
 @date 13/05/2023
 @author Kevin David Martinez Zapata
*/

#ifndef IOBANK0_LIB_H
#define IOBANK0_LIB_H

#include <stdint.h>

/*******************************************************************/
/*************** Definicion de las constantes **********************/
/*******************************************************************/

#define kIOBANK_OUTFROMPERI_ENABLE 1            /**< Señal de salida del periférico seleccionado habilitada, antes de que se aplique la anulación de registro */
#define kIOBANK_OUTFROMPERI_DISABLE 0           /**< Señal de salida del periférico seleccionado deshabilitada, antes de que se aplique la anulación de registro */
#define kIOBANK_OUTTOPAD_ENABLE 1               /**< Señal de salida al pad habilitada después de aplicar la anulación de registro */
#define kIOBANK_OUTTOPAD_DISABLE 0              /**< Señal de salida al pad deshabilitada después de aplicar la anulación de registro */
#define kIOBANK_OEFROMPERI_ENABLE 1             /**< Salida habilitada desde el periférico seleccionado, antes de que se aplique la anulación de registro */
#define kIOBANK_OEFROMPERI_DISABLE 0            /**< Salida deshabilitada desde el periférico seleccionado, antes de que se aplique la anulación de registro */
#define kIOBANK_OETOPAD_ENABLE 1                /**< Salida habilitada para rellenar después de aplicar la anulación de registro */
#define kIOBANK_OETOPAD_DISABLE 0               /**< Salida deshabilitada para rellenar después de aplicar la anulación de registro */
#define kIOBANK_INFROMPAD_ENABLE 1              /**< Señal de entrada del pad habilitada, antes de que se aplique la anulación */
#define kIOBANK_INFROMPAD_DISABLE 0             /**< Señal de entrada del pad deshabilitada, antes de que se aplique la anulación */
#define kIOBANK_INTOPERI_ENABLE 1               /**< Señal de entrada al periférico habilitada, después de aplicar la anulación */
#define kIOBANK_INTOPERI_DISABLE 0              /**< Señal de entrada al periférico deshabilitada, después de aplicar la anulación */
#define kIOBANK_IRQFROMPAD_ENABLE 1             /**< Interrupción desde el pad antes de que se aplique la anulación, habilitada*/
#define kIOBANK_IRQFROMPAD_DISABLE 0            /**< Interrupción desde el pad antes de que se aplique la anulación, deshabilitada*/
#define kIOBANK_IRQTOPROC_ENABLE 1              /**< Interrumpir a los procesadores, después de aplicar la anulación, habilitada */
#define kIOBANK_IRQTOPROC_DISABLE 0             /**< Interrumpir a los procesadores, después de aplicar la anulación, deshabilitada */

#define kIOBANK_FUNCSEL_FUNC0 0                 /**< Seleccionar función 0. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC1 1                 /**< Seleccionar función 1. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC2 2                 /**< Seleccionar función 2. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC3 3                 /**< Seleccionar función 3. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC4 4                 /**< Seleccionar función 4. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC5 5                 /**< Seleccionar función 5. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC6 6                 /**< Seleccionar función 6. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC7 7                 /**< Seleccionar función 7. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC8 8                 /**< Seleccionar función 8. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC9 9                 /**< Seleccionar función 9. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC10 10               /**< Seleccionar función 10. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC11 11               /**< Seleccionar función 11. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC12 12               /**< Seleccionar función 12. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC13 13               /**< Seleccionar función 13. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC14 14               /**< Seleccionar función 14. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC15 15               /**< Seleccionar función 15. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC16 16               /**< Seleccionar función 16. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC17 17               /**< Seleccionar función 17. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC18 18               /**< Seleccionar función 18. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC19 19               /**< Seleccionar función 19. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC20 20               /**< Seleccionar función 20. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC21 21               /**< Seleccionar función 21. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC22 22               /**< Seleccionar función 22. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC23 23               /**< Seleccionar función 23. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC24 24               /**< Seleccionar función 24. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC25 25               /**< Seleccionar función 25. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC26 26               /**< Seleccionar función 26. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC27 27               /**< Seleccionar función 27. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC28 28               /**< Seleccionar función 28. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC29 29               /**< Seleccionar función 29. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_FUNC30 30               /**< Seleccionar función 30. Consulte la tabla de funciones GPIO para conocer las funciones disponibles. */
#define kIOBANK_FUNCSEL_NULL 31                 /**< No seleccionar función */

#define kIOBANK_OUTOVER_OUT_FROM_SIGNAL_SELECTED 0                  /**< 0x0 → salida de la unidad desde la señal periférica seleccionada por funcsel */
#define kIOBANK_OUTOVER_OUT_FROM_INVERSE_SIGNAL_SELECTED 1          /**< 0x1 → salida de la unidad desde el inverso de la señal periférica seleccionada por funcsel */
#define kIOBANK_OUTOVER_OUT_LOW 2                                   /**< 0x2 → salida de la unidad baja */
#define kIOBANK_OUTOVER_OUT_HIGH 3                                  /**< 0x3 → salida de la unidad alta */

#define kIOBANK_OEOVER_ENABLE_OUT_FROM_SIGNAL_SELECTED 0            /**< 0x0 → habilitación de salida de unidad desde señal periférica seleccionada por funcsel */
#define kIOBANK_OEOVER_ENABLE_OUT_FROM_INVERSE_SIGNAL_SELECTED 1    /**< 0x1 → habilitación de salida de unidad desde el inverso de la señal periférica seleccionada por funcsel */
#define kIOBANK_OEOVER_DISABLE_OUT 2                                /**< 0x2 → deshabilitar salida */
#define kIOBANK_OEOVER_ENABLE_OUT 3                                 /**< 0x3 → habilitar salida */

#define kIOBANK_INOVER_NO_INVERT_IN 0                               /**< 0x0 → no inviertir la entrada peri */
#define kIOBANK_INOVER_INVERT_IN 1                                  /**< 0x1 → invertir la entrada peri */
#define kIOBANK_INOVER_IN_LOW 2                                     /**< 0x2 → entrada peri de la unidad baja */
#define kIOBANK_INOVER_IN_HIGH 3                                    /**< 0x3 → entrada peri de la unidad alta */

#define kIOBANK_IRQOVER_NO_INVERT_INTERRUPT 0                       /**< 0x0 → no invertir la interrupción */
#define kIOBANK_IRQOVER_INVERT_INTERRUPT 1                          /**< 0x1 → invertir la interrupción */
#define kIOBANK_IRQOVER_INTERRUPT_LOW 2                             /**< 0x2 → interrupción de unidad baja */
#define kIOBANK_IRQOVER_INTERRUPT_HIGH 3                            /**< 0x3 → interrupción de unidad alta */

/********************************************************************/
/************** Definición de Macros de campos de bits **************/
/********************************************************************/

//--------------- Macros GPIO STATUS -------------------------------/

#define mIOBANK_GPIO0_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO0_STATUS*/
#define mIOBANK_GPIO0_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO0_STATUS*/
#define mIOBANK_GPIO0_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO0_STATUS*/
#define mIOBANK_GPIO0_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO0_STATUS*/
#define mIOBANK_GPIO0_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO0_STATUS*/
#define mIOBANK_GPIO0_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO0_STATUS*/
#define mIOBANK_GPIO0_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO0_STATUS*/
#define mIOBANK_GPIO0_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO0_STATUS*/

#define mIOBANK_GPIO1_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO1_STATUS*/
#define mIOBANK_GPIO1_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO1_STATUS*/
#define mIOBANK_GPIO1_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO1_STATUS*/
#define mIOBANK_GPIO1_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO1_STATUS*/
#define mIOBANK_GPIO1_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO1_STATUS*/
#define mIOBANK_GPIO1_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO1_STATUS*/
#define mIOBANK_GPIO1_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO1_STATUS*/
#define mIOBANK_GPIO1_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO1_STATUS*/

#define mIOBANK_GPIO2_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO2_STATUS*/
#define mIOBANK_GPIO2_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO2_STATUS*/
#define mIOBANK_GPIO2_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO2_STATUS*/
#define mIOBANK_GPIO2_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO2_STATUS*/
#define mIOBANK_GPIO2_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO2_STATUS*/
#define mIOBANK_GPIO2_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO2_STATUS*/
#define mIOBANK_GPIO2_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO2_STATUS*/
#define mIOBANK_GPIO2_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO2_STATUS*/

#define mIOBANK_GPIO3_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO3_STATUS*/
#define mIOBANK_GPIO3_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO3_STATUS*/
#define mIOBANK_GPIO3_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO3_STATUS*/
#define mIOBANK_GPIO3_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO3_STATUS*/
#define mIOBANK_GPIO3_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO3_STATUS*/
#define mIOBANK_GPIO3_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO3_STATUS*/
#define mIOBANK_GPIO3_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO3_STATUS*/
#define mIOBANK_GPIO3_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO3_STATUS*/

#define mIOBANK_GPIO4_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO4_STATUS*/
#define mIOBANK_GPIO4_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO4_STATUS*/
#define mIOBANK_GPIO4_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO4_STATUS*/
#define mIOBANK_GPIO4_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO4_STATUS*/
#define mIOBANK_GPIO4_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO4_STATUS*/
#define mIOBANK_GPIO4_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO4_STATUS*/
#define mIOBANK_GPIO4_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO4_STATUS*/
#define mIOBANK_GPIO4_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO4_STATUS*/

#define mIOBANK_GPIO5_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO5_STATUS*/
#define mIOBANK_GPIO5_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO5_STATUS*/
#define mIOBANK_GPIO5_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO5_STATUS*/
#define mIOBANK_GPIO5_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO5_STATUS*/
#define mIOBANK_GPIO5_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO5_STATUS*/
#define mIOBANK_GPIO5_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO5_STATUS*/
#define mIOBANK_GPIO5_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO5_STATUS*/
#define mIOBANK_GPIO5_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO5_STATUS*/

#define mIOBANK_GPIO6_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO6_STATUS*/
#define mIOBANK_GPIO6_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO6_STATUS*/
#define mIOBANK_GPIO6_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO6_STATUS*/
#define mIOBANK_GPIO6_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO6_STATUS*/
#define mIOBANK_GPIO6_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO6_STATUS*/
#define mIOBANK_GPIO6_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO6_STATUS*/
#define mIOBANK_GPIO6_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO6_STATUS*/
#define mIOBANK_GPIO6_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO6_STATUS*/

#define mIOBANK_GPIO7_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO7_STATUS*/
#define mIOBANK_GPIO7_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO7_STATUS*/
#define mIOBANK_GPIO7_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO7_STATUS*/
#define mIOBANK_GPIO7_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO7_STATUS*/
#define mIOBANK_GPIO7_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO7_STATUS*/
#define mIOBANK_GPIO7_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO7_STATUS*/
#define mIOBANK_GPIO7_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO7_STATUS*/
#define mIOBANK_GPIO7_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO7_STATUS*/

#define mIOBANK_GPIO8_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO8_STATUS*/
#define mIOBANK_GPIO8_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO8_STATUS*/
#define mIOBANK_GPIO8_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO8_STATUS*/
#define mIOBANK_GPIO8_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO8_STATUS*/
#define mIOBANK_GPIO8_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO8_STATUS*/
#define mIOBANK_GPIO8_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO8_STATUS*/
#define mIOBANK_GPIO8_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO8_STATUS*/
#define mIOBANK_GPIO8_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO8_STATUS*/

#define mIOBANK_GPIO9_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO9_STATUS*/
#define mIOBANK_GPIO9_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO9_STATUS*/
#define mIOBANK_GPIO9_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO9_STATUS*/
#define mIOBANK_GPIO9_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO9_STATUS*/
#define mIOBANK_GPIO9_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO9_STATUS*/
#define mIOBANK_GPIO9_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO9_STATUS*/
#define mIOBANK_GPIO9_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO9_STATUS*/
#define mIOBANK_GPIO9_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO9_STATUS*/

#define mIOBANK_GPIO10_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO10_STATUS*/
#define mIOBANK_GPIO10_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO10_STATUS*/
#define mIOBANK_GPIO10_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO10_STATUS*/
#define mIOBANK_GPIO10_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO10_STATUS*/
#define mIOBANK_GPIO10_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO10_STATUS*/
#define mIOBANK_GPIO10_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO10_STATUS*/
#define mIOBANK_GPIO10_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO10_STATUS*/
#define mIOBANK_GPIO10_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO10_STATUS*/

#define mIOBANK_GPIO11_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO11_STATUS*/
#define mIOBANK_GPIO11_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO11_STATUS*/
#define mIOBANK_GPIO11_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO11_STATUS*/
#define mIOBANK_GPIO11_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO11_STATUS*/
#define mIOBANK_GPIO11_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO11_STATUS*/
#define mIOBANK_GPIO11_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO11_STATUS*/
#define mIOBANK_GPIO11_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO11_STATUS*/
#define mIOBANK_GPIO11_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO11_STATUS*/

#define mIOBANK_GPIO12_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO12_STATUS*/
#define mIOBANK_GPIO12_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO12_STATUS*/
#define mIOBANK_GPIO12_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO12_STATUS*/
#define mIOBANK_GPIO12_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO12_STATUS*/
#define mIOBANK_GPIO12_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO12_STATUS*/
#define mIOBANK_GPIO12_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO12_STATUS*/
#define mIOBANK_GPIO12_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO12_STATUS*/
#define mIOBANK_GPIO12_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO12_STATUS*/

#define mIOBANK_GPIO13_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO13_STATUS*/
#define mIOBANK_GPIO13_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO13_STATUS*/
#define mIOBANK_GPIO13_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO13_STATUS*/
#define mIOBANK_GPIO13_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO13_STATUS*/
#define mIOBANK_GPIO13_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO13_STATUS*/
#define mIOBANK_GPIO13_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO13_STATUS*/
#define mIOBANK_GPIO13_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO13_STATUS*/
#define mIOBANK_GPIO13_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO13_STATUS*/

#define mIOBANK_GPIO14_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO14_STATUS*/
#define mIOBANK_GPIO14_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO14_STATUS*/
#define mIOBANK_GPIO14_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO14_STATUS*/
#define mIOBANK_GPIO14_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO14_STATUS*/
#define mIOBANK_GPIO14_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO14_STATUS*/
#define mIOBANK_GPIO14_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO14_STATUS*/
#define mIOBANK_GPIO14_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO14_STATUS*/
#define mIOBANK_GPIO14_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO14_STATUS*/

#define mIOBANK_GPIO15_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO15_STATUS*/
#define mIOBANK_GPIO15_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO15_STATUS*/
#define mIOBANK_GPIO15_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO15_STATUS*/
#define mIOBANK_GPIO15_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO15_STATUS*/
#define mIOBANK_GPIO15_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO15_STATUS*/
#define mIOBANK_GPIO15_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO15_STATUS*/
#define mIOBANK_GPIO15_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO15_STATUS*/
#define mIOBANK_GPIO15_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO15_STATUS*/

#define mIOBANK_GPIO16_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO16_STATUS*/
#define mIOBANK_GPIO16_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO16_STATUS*/
#define mIOBANK_GPIO16_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO16_STATUS*/
#define mIOBANK_GPIO16_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO16_STATUS*/
#define mIOBANK_GPIO16_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO16_STATUS*/
#define mIOBANK_GPIO16_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO16_STATUS*/
#define mIOBANK_GPIO16_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO16_STATUS*/
#define mIOBANK_GPIO16_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO16_STATUS*/

#define mIOBANK_GPIO17_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO17_STATUS*/
#define mIOBANK_GPIO17_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO17_STATUS*/
#define mIOBANK_GPIO17_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO17_STATUS*/
#define mIOBANK_GPIO17_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO17_STATUS*/
#define mIOBANK_GPIO17_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO17_STATUS*/
#define mIOBANK_GPIO17_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO17_STATUS*/
#define mIOBANK_GPIO17_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO17_STATUS*/
#define mIOBANK_GPIO17_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO17_STATUS*/

#define mIOBANK_GPIO18_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO18_STATUS*/
#define mIOBANK_GPIO18_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO18_STATUS*/
#define mIOBANK_GPIO18_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO18_STATUS*/
#define mIOBANK_GPIO18_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO18_STATUS*/
#define mIOBANK_GPIO18_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO18_STATUS*/
#define mIOBANK_GPIO18_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO18_STATUS*/
#define mIOBANK_GPIO18_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO18_STATUS*/
#define mIOBANK_GPIO18_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO18_STATUS*/

#define mIOBANK_GPIO19_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO19_STATUS*/
#define mIOBANK_GPIO19_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO19_STATUS*/
#define mIOBANK_GPIO19_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO19_STATUS*/
#define mIOBANK_GPIO19_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO19_STATUS*/
#define mIOBANK_GPIO19_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO19_STATUS*/
#define mIOBANK_GPIO19_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO19_STATUS*/
#define mIOBANK_GPIO19_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO19_STATUS*/
#define mIOBANK_GPIO19_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO19_STATUS*/

#define mIOBANK_GPIO20_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO20_STATUS*/
#define mIOBANK_GPIO20_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO20_STATUS*/
#define mIOBANK_GPIO20_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO20_STATUS*/
#define mIOBANK_GPIO20_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO20_STATUS*/
#define mIOBANK_GPIO20_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO20_STATUS*/
#define mIOBANK_GPIO20_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO20_STATUS*/
#define mIOBANK_GPIO20_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO20_STATUS*/
#define mIOBANK_GPIO20_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO20_STATUS*/

#define mIOBANK_GPIO21_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO21_STATUS*/
#define mIOBANK_GPIO21_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO21_STATUS*/
#define mIOBANK_GPIO21_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO21_STATUS*/
#define mIOBANK_GPIO21_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO21_STATUS*/
#define mIOBANK_GPIO21_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO21_STATUS*/
#define mIOBANK_GPIO21_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO21_STATUS*/
#define mIOBANK_GPIO21_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO21_STATUS*/
#define mIOBANK_GPIO21_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO21_STATUS*/

#define mIOBANK_GPIO22_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO22_STATUS*/
#define mIOBANK_GPIO22_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO22_STATUS*/
#define mIOBANK_GPIO22_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO22_STATUS*/
#define mIOBANK_GPIO22_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO22_STATUS*/
#define mIOBANK_GPIO22_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO22_STATUS*/
#define mIOBANK_GPIO22_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO22_STATUS*/
#define mIOBANK_GPIO22_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO22_STATUS*/
#define mIOBANK_GPIO22_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO22_STATUS*/

#define mIOBANK_GPIO23_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO23_STATUS*/
#define mIOBANK_GPIO23_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO23_STATUS*/
#define mIOBANK_GPIO23_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO23_STATUS*/
#define mIOBANK_GPIO23_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO23_STATUS*/
#define mIOBANK_GPIO23_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO23_STATUS*/
#define mIOBANK_GPIO23_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO23_STATUS*/
#define mIOBANK_GPIO23_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO23_STATUS*/
#define mIOBANK_GPIO23_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO23_STATUS*/

#define mIOBANK_GPIO24_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO24_STATUS*/
#define mIOBANK_GPIO24_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO24_STATUS*/
#define mIOBANK_GPIO24_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO24_STATUS*/
#define mIOBANK_GPIO24_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO24_STATUS*/
#define mIOBANK_GPIO24_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO24_STATUS*/
#define mIOBANK_GPIO24_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO24_STATUS*/
#define mIOBANK_GPIO24_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO24_STATUS*/
#define mIOBANK_GPIO24_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO24_STATUS*/

#define mIOBANK_GPIO25_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO25_STATUS*/
#define mIOBANK_GPIO25_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO25_STATUS*/
#define mIOBANK_GPIO25_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO25_STATUS*/
#define mIOBANK_GPIO25_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO25_STATUS*/
#define mIOBANK_GPIO25_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO25_STATUS*/
#define mIOBANK_GPIO25_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO25_STATUS*/
#define mIOBANK_GPIO25_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO25_STATUS*/
#define mIOBANK_GPIO25_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO25_STATUS*/

#define mIOBANK_GPIO26_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO26_STATUS*/
#define mIOBANK_GPIO26_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO26_STATUS*/
#define mIOBANK_GPIO26_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO26_STATUS*/
#define mIOBANK_GPIO26_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO26_STATUS*/
#define mIOBANK_GPIO26_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO26_STATUS*/
#define mIOBANK_GPIO26_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO26_STATUS*/
#define mIOBANK_GPIO26_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO26_STATUS*/
#define mIOBANK_GPIO26_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO26_STATUS*/

#define mIOBANK_GPIO27_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO27_STATUS*/
#define mIOBANK_GPIO27_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO27_STATUS*/
#define mIOBANK_GPIO27_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO27_STATUS*/
#define mIOBANK_GPIO27_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO27_STATUS*/
#define mIOBANK_GPIO27_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO27_STATUS*/
#define mIOBANK_GPIO27_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO27_STATUS*/
#define mIOBANK_GPIO27_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO27_STATUS*/
#define mIOBANK_GPIO27_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO27_STATUS*/

#define mIOBANK_GPIO28_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO28_STATUS*/
#define mIOBANK_GPIO28_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO28_STATUS*/
#define mIOBANK_GPIO28_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO28_STATUS*/
#define mIOBANK_GPIO28_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO28_STATUS*/
#define mIOBANK_GPIO28_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO28_STATUS*/
#define mIOBANK_GPIO28_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO28_STATUS*/
#define mIOBANK_GPIO28_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO28_STATUS*/
#define mIOBANK_GPIO28_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO28_STATUS*/

#define mIOBANK_GPIO29_STATUS_OUTFROMPERI(x) (x & 0x00000100U)               /**< Macro de campo de bit OUTFROMPERI registro GPIO29_STATUS*/
#define mIOBANK_GPIO29_STATUS_OUTTOPAD(x)    (x & 0x00000200U)               /**< Macro de campo de bit OUTTOPAD registro GPIO29_STATUS*/
#define mIOBANK_GPIO29_STATUS_OEFROMPERI(x)  (x & 0x00001000U)               /**< Macro de campo de bit OEFROMPERI registro GPIO29_STATUS*/
#define mIOBANK_GPIO29_STATUS_OETOPAD(x)     (x & 0x00002000U)               /**< Macro de campo de bit OETOPAD registro GPIO29_STATUS*/
#define mIOBANK_GPIO29_STATUS_INFROMPAD(x)   (x & 0x00020000U)               /**< Macro de campo de bit INFROMPAD registro GPIO29_STATUS*/
#define mIOBANK_GPIO29_STATUS_INTOPERI(x)    (x & 0x00080000U)               /**< Macro de campo de bit INTOPERI registro GPIO29_STATUS*/
#define mIOBANK_GPIO29_STATUS_IRQFROMPAD(x)  (x & 0x01000000U)               /**< Macro de campo de bit IRQFROMPAD registro GPIO29_STATUS*/
#define mIOBANK_GPIO29_STATUS_IRQTOPROC(x)   (x & 0x04000000U)               /**< Macro de campo de bit IRQTOPROC registro GPIO29_STATUS*/

//--------------- Macros GPIO CTRL -------------------------------/

#define mIOBANK_GPIO0_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO0_CTRL*/
#define mIOBANK_GPIO0_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO0_CTRL*/
#define mIOBANK_GPIO0_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO0_CTRL*/
#define mIOBANK_GPIO0_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO0_CTRL*/
#define mIOBANK_GPIO0_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO0_CTRL*/

#define mIOBANK_GPIO1_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO1_CTRL*/
#define mIOBANK_GPIO1_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO1_CTRL*/
#define mIOBANK_GPIO1_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO1_CTRL*/
#define mIOBANK_GPIO1_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO1_CTRL*/
#define mIOBANK_GPIO1_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO1_CTRL*/

#define mIOBANK_GPIO2_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO2_CTRL*/
#define mIOBANK_GPIO2_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO2_CTRL*/
#define mIOBANK_GPIO2_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO2_CTRL*/
#define mIOBANK_GPIO2_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO2_CTRL*/
#define mIOBANK_GPIO2_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO2_CTRL*/

#define mIOBANK_GPIO3_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO3_CTRL*/
#define mIOBANK_GPIO3_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO3_CTRL*/
#define mIOBANK_GPIO3_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO3_CTRL*/
#define mIOBANK_GPIO3_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO3_CTRL*/
#define mIOBANK_GPIO3_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO3_CTRL*/

#define mIOBANK_GPIO4_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO4_CTRL*/
#define mIOBANK_GPIO4_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO4_CTRL*/
#define mIOBANK_GPIO4_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO4_CTRL*/
#define mIOBANK_GPIO4_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO4_CTRL*/
#define mIOBANK_GPIO4_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO4_CTRL*/

#define mIOBANK_GPIO5_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO5_CTRL*/
#define mIOBANK_GPIO5_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO5_CTRL*/
#define mIOBANK_GPIO5_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO5_CTRL*/
#define mIOBANK_GPIO5_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO5_CTRL*/
#define mIOBANK_GPIO5_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO5_CTRL*/

#define mIOBANK_GPIO6_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO6_CTRL*/
#define mIOBANK_GPIO6_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO6_CTRL*/
#define mIOBANK_GPIO6_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO6_CTRL*/
#define mIOBANK_GPIO6_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO6_CTRL*/
#define mIOBANK_GPIO6_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO6_CTRL*/

#define mIOBANK_GPIO7_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO7_CTRL*/
#define mIOBANK_GPIO7_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO7_CTRL*/
#define mIOBANK_GPIO7_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO7_CTRL*/
#define mIOBANK_GPIO7_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO7_CTRL*/
#define mIOBANK_GPIO7_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO7_CTRL*/

#define mIOBANK_GPIO8_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO8_CTRL*/
#define mIOBANK_GPIO8_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO8_CTRL*/
#define mIOBANK_GPIO8_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO8_CTRL*/
#define mIOBANK_GPIO8_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO8_CTRL*/
#define mIOBANK_GPIO8_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO8_CTRL*/

#define mIOBANK_GPIO9_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO9_CTRL*/
#define mIOBANK_GPIO9_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO9_CTRL*/
#define mIOBANK_GPIO9_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO9_CTRL*/
#define mIOBANK_GPIO9_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO9_CTRL*/
#define mIOBANK_GPIO9_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO9_CTRL*/

#define mIOBANK_GPIO10_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO10_CTRL*/
#define mIOBANK_GPIO10_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO10_CTRL*/
#define mIOBANK_GPIO10_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO10_CTRL*/
#define mIOBANK_GPIO10_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO10_CTRL*/
#define mIOBANK_GPIO10_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO10_CTRL*/

#define mIOBANK_GPIO11_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO11_CTRL*/
#define mIOBANK_GPIO11_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO11_CTRL*/
#define mIOBANK_GPIO11_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO11_CTRL*/
#define mIOBANK_GPIO11_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO11_CTRL*/
#define mIOBANK_GPIO11_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO11_CTRL*/

#define mIOBANK_GPIO12_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO12_CTRL*/
#define mIOBANK_GPIO12_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO12_CTRL*/
#define mIOBANK_GPIO12_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO12_CTRL*/
#define mIOBANK_GPIO12_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO12_CTRL*/
#define mIOBANK_GPIO12_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO12_CTRL*/

#define mIOBANK_GPIO13_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO13_CTRL*/
#define mIOBANK_GPIO13_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO13_CTRL*/
#define mIOBANK_GPIO13_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO13_CTRL*/
#define mIOBANK_GPIO13_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO13_CTRL*/
#define mIOBANK_GPIO13_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO13_CTRL*/

#define mIOBANK_GPIO14_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO14_CTRL*/
#define mIOBANK_GPIO14_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO14_CTRL*/
#define mIOBANK_GPIO14_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO14_CTRL*/
#define mIOBANK_GPIO14_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO14_CTRL*/
#define mIOBANK_GPIO14_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO14_CTRL*/

#define mIOBANK_GPIO15_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO15_CTRL*/
#define mIOBANK_GPIO15_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO15_CTRL*/
#define mIOBANK_GPIO15_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO15_CTRL*/
#define mIOBANK_GPIO15_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO15_CTRL*/
#define mIOBANK_GPIO15_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO15_CTRL*/

#define mIOBANK_GPIO16_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO16_CTRL*/
#define mIOBANK_GPIO16_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO16_CTRL*/
#define mIOBANK_GPIO16_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO16_CTRL*/
#define mIOBANK_GPIO16_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO16_CTRL*/
#define mIOBANK_GPIO16_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO16_CTRL*/

#define mIOBANK_GPIO17_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO17_CTRL*/
#define mIOBANK_GPIO17_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO17_CTRL*/
#define mIOBANK_GPIO17_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO17_CTRL*/
#define mIOBANK_GPIO17_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO17_CTRL*/
#define mIOBANK_GPIO17_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO17_CTRL*/

#define mIOBANK_GPIO18_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO18_CTRL*/
#define mIOBANK_GPIO18_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO18_CTRL*/
#define mIOBANK_GPIO18_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO18_CTRL*/
#define mIOBANK_GPIO18_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO18_CTRL*/
#define mIOBANK_GPIO18_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO18_CTRL*/

#define mIOBANK_GPIO19_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO19_CTRL*/
#define mIOBANK_GPIO19_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO19_CTRL*/
#define mIOBANK_GPIO19_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO19_CTRL*/
#define mIOBANK_GPIO19_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO19_CTRL*/
#define mIOBANK_GPIO19_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO19_CTRL*/

#define mIOBANK_GPIO20_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO20_CTRL*/
#define mIOBANK_GPIO20_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO20_CTRL*/
#define mIOBANK_GPIO20_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO20_CTRL*/
#define mIOBANK_GPIO20_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO20_CTRL*/
#define mIOBANK_GPIO20_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO20_CTRL*/

#define mIOBANK_GPIO21_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO21_CTRL*/
#define mIOBANK_GPIO21_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO21_CTRL*/
#define mIOBANK_GPIO21_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO21_CTRL*/
#define mIOBANK_GPIO21_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO21_CTRL*/
#define mIOBANK_GPIO21_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO21_CTRL*/

#define mIOBANK_GPIO22_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO22_CTRL*/
#define mIOBANK_GPIO22_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO22_CTRL*/
#define mIOBANK_GPIO22_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO22_CTRL*/
#define mIOBANK_GPIO22_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO22_CTRL*/
#define mIOBANK_GPIO22_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO22_CTRL*/

#define mIOBANK_GPIO23_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO23_CTRL*/
#define mIOBANK_GPIO23_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO23_CTRL*/
#define mIOBANK_GPIO23_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO23_CTRL*/
#define mIOBANK_GPIO23_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO23_CTRL*/
#define mIOBANK_GPIO23_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO23_CTRL*/

#define mIOBANK_GPIO24_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO24_CTRL*/
#define mIOBANK_GPIO24_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO24_CTRL*/
#define mIOBANK_GPIO24_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO24_CTRL*/
#define mIOBANK_GPIO24_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO24_CTRL*/
#define mIOBANK_GPIO24_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO24_CTRL*/

#define mIOBANK_GPIO25_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO25_CTRL*/
#define mIOBANK_GPIO25_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO25_CTRL*/
#define mIOBANK_GPIO25_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO25_CTRL*/
#define mIOBANK_GPIO25_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO25_CTRL*/
#define mIOBANK_GPIO25_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO25_CTRL*/

#define mIOBANK_GPIO26_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO26_CTRL*/
#define mIOBANK_GPIO26_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO26_CTRL*/
#define mIOBANK_GPIO26_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO26_CTRL*/
#define mIOBANK_GPIO26_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO26_CTRL*/
#define mIOBANK_GPIO26_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO26_CTRL*/

#define mIOBANK_GPIO27_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO27_CTRL*/
#define mIOBANK_GPIO27_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO27_CTRL*/
#define mIOBANK_GPIO27_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO27_CTRL*/
#define mIOBANK_GPIO27_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO27_CTRL*/
#define mIOBANK_GPIO27_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO27_CTRL*/

#define mIOBANK_GPIO28_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO28_CTRL*/
#define mIOBANK_GPIO28_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO28_CTRL*/
#define mIOBANK_GPIO28_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO28_CTRL*/
#define mIOBANK_GPIO28_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO28_CTRL*/
#define mIOBANK_GPIO28_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO28_CTRL*/

#define mIOBANK_GPIO29_CTRL_FUNCSEL(x)       (x & 0x0000001FU)           /**< Macro de campo de bit FUNCSEL registro GPIO29_CTRL*/
#define mIOBANK_GPIO29_CTRL_OUTOVER(x)       (x & 0x00000300U)           /**< Macro de campo de bit OUTOVER registro GPIO29_CTRL*/
#define mIOBANK_GPIO29_CTRL_OEOVER(x)        (x & 0x00003000U)           /**< Macro de campo de bit OEOVER registro GPIO29_CTRL*/
#define mIOBANK_GPIO29_CTRL_INOVER(x)        (x & 0x00030000U)           /**< Macro de campo de bit INOVER registro GPIO29_CTRL*/
#define mIOBANK_GPIO29_CTRL_IRQOVER(x)       (x & 0x30000000U)           /**< Macro de campo de bit IRQOVER registro GPIO29_CTRL*/

//--------------- Macros INTR -------------------------------/

#define mIOBANK_INTR0_GPIO0_LEVEL_LOW(x)        (x & 0x00000001U)       /**< Macro de campo de bit GPIO0_LEVEL_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO0_LEVEL_HIGH(x)       (x & 0x00000002U)       /**< Macro de campo de bit GPIO0_LEVEL_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO0_EDGE_LOW(x)         (x & 0x00000004U)       /**< Macro de campo de bit GPIO0_EDGE_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO0_EDGE_HIGH(x)        (x & 0x00000008U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO1_LEVEL_LOW(x)        (x & 0x00000010U)       /**< Macro de campo de bit GPIO1_LEVEL_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO1_LEVEL_HIGH(x)       (x & 0x00000020U)       /**< Macro de campo de bit GPIO1_LEVEL_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO1_EDGE_LOW(x)         (x & 0x00000040U)       /**< Macro de campo de bit GPIO1_EDGE_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO1_EDGE_HIGH(x)        (x & 0x00000080U)       /**< Macro de campo de bit GPIO1_EDGE_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO2_LEVEL_LOW(x)        (x & 0x00000100U)       /**< Macro de campo de bit GPIO2_LEVEL_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO2_LEVEL_HIGH(x)       (x & 0x00000200U)       /**< Macro de campo de bit GPIO2_LEVEL_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO2_EDGE_LOW(x)         (x & 0x00000400U)       /**< Macro de campo de bit GPIO2_EDGE_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO2_EDGE_HIGH(x)        (x & 0x00000800U)       /**< Macro de campo de bit GPIO2_EDGE_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO3_LEVEL_LOW(x)        (x & 0x00001000U)       /**< Macro de campo de bit GPIO3_LEVEL_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO3_LEVEL_HIGH(x)       (x & 0x00002000U)       /**< Macro de campo de bit GPIO3_LEVEL_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO3_EDGE_LOW(x)         (x & 0x00004000U)       /**< Macro de campo de bit GPIO3_EDGE_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO3_EDGE_HIGH(x)        (x & 0x00008000U)       /**< Macro de campo de bit GPIO3_EDGE_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO4_LEVEL_LOW(x)        (x & 0x00010000U)       /**< Macro de campo de bit GPIO4_LEVEL_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO4_LEVEL_HIGH(x)       (x & 0x00020000U)       /**< Macro de campo de bit GPIO4_LEVEL_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO4_EDGE_LOW(x)         (x & 0x00040000U)       /**< Macro de campo de bit GPIO4_EDGE_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO4_EDGE_HIGH(x)        (x & 0x00080000U)       /**< Macro de campo de bit GPIO4_EDGE_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO5_LEVEL_LOW(x)        (x & 0x00100000U)       /**< Macro de campo de bit GPIO5_LEVEL_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO5_LEVEL_HIGH(x)       (x & 0x00200000U)       /**< Macro de campo de bit GPIO5_LEVEL_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO5_EDGE_LOW(x)         (x & 0x00400000U)       /**< Macro de campo de bit GPIO5_EDGE_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO5_EDGE_HIGH(x)        (x & 0x00800000U)       /**< Macro de campo de bit GPIO5_EDGE_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO6_LEVEL_LOW(x)        (x & 0x01000000U)       /**< Macro de campo de bit GPIO6_LEVEL_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO6_LEVEL_HIGH(x)       (x & 0x02000000U)       /**< Macro de campo de bit GPIO6_LEVEL_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO6_EDGE_LOW(x)         (x & 0x04000000U)       /**< Macro de campo de bit GPIO6_EDGE_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO6_EDGE_HIGH(x)        (x & 0x08000000U)       /**< Macro de campo de bit GPIO6_EDGE_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO7_LEVEL_LOW(x)        (x & 0x10000000U)       /**< Macro de campo de bit GPIO7_LEVEL_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO7_LEVEL_HIGH(x)       (x & 0x20000000U)       /**< Macro de campo de bit GPIO7_LEVEL_HIGH registro INTR0 */
#define mIOBANK_INTR0_GPIO7_EDGE_LOW(x)         (x & 0x40000000U)       /**< Macro de campo de bit GPIO7_EDGE_LOW registro INTR0 */
#define mIOBANK_INTR0_GPIO7_EDGE_HIGH(x)        (x & 0x80000000U)       /**< Macro de campo de bit GPIO7_EDGE_HIGH registro INTR0 */

#define mIOBANK_INTR1_GPIO8_LEVEL_LOW(x)        (x & 0x00000001U)      /**< Macro de campo de bit GPIO8_LEVEL_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO8_LEVEL_HIGH(x)       (x & 0x00000002U)      /**< Macro de campo de bit GPIO8_LEVEL_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO8_EDGE_LOW(x)         (x & 0x00000004U)      /**< Macro de campo de bit GPIO8_EDGE_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO8_EDGE_HIGH(x)        (x & 0x00000008U)      /**< Macro de campo de bit GPIO8_EDGE_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO9_LEVEL_LOW(x)        (x & 0x00000010U)      /**< Macro de campo de bit GPIO9_LEVEL_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO9_LEVEL_HIGH(x)       (x & 0x00000020U)      /**< Macro de campo de bit GPIO9_LEVEL_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO9_EDGE_LOW(x)         (x & 0x00000040U)      /**< Macro de campo de bit GPIO9_EDGE_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO9_EDGE_HIGH(x)        (x & 0x00000080U)      /**< Macro de campo de bit GPIO9_EDGE_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO10_LEVEL_LOW(x)       (x & 0x00000100U)       /**< Macro de campo de bit GPIO10_LEVEL_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO10_LEVEL_HIGH(x)      (x & 0x00000200U)       /**< Macro de campo de bit GPIO10_LEVEL_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO10_EDGE_LOW(x)        (x & 0x00000400U)       /**< Macro de campo de bit GPIO10_EDGE_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO10_EDGE_HIGH(x)       (x & 0x00000800U)       /**< Macro de campo de bit GPIO10_EDGE_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO11_LEVEL_LOW(x)       (x & 0x00001000U)       /**< Macro de campo de bit GPIO11_LEVEL_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO11_LEVEL_HIGH(x)      (x & 0x00002000U)       /**< Macro de campo de bit GPIO11_LEVEL_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO11_EDGE_LOW(x)        (x & 0x00004000U)       /**< Macro de campo de bit GPIO11_EDGE_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO11_EDGE_HIGH(x)       (x & 0x00008000U)       /**< Macro de campo de bit GPIO11_EDGE_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO12_LEVEL_LOW(x)       (x & 0x00010000U)       /**< Macro de campo de bit GPIO12_LEVEL_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO12_LEVEL_HIGH(x)      (x & 0x00020000U)       /**< Macro de campo de bit GPIO12_LEVEL_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO12_EDGE_LOW(x)        (x & 0x00040000U)       /**< Macro de campo de bit GPIO12_EDGE_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO12_EDGE_HIGH(x)       (x & 0x00080000U)       /**< Macro de campo de bit GPIO12_EDGE_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO13_LEVEL_LOW(x)       (x & 0x00100000U)       /**< Macro de campo de bit GPIO13_LEVEL_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO13_LEVEL_HIGH(x)      (x & 0x00200000U)       /**< Macro de campo de bit GPIO13_LEVEL_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO13_EDGE_LOW(x)        (x & 0x00400000U)       /**< Macro de campo de bit GPIO13_EDGE_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO13_EDGE_HIGH(x)       (x & 0x00800000U)       /**< Macro de campo de bit GPIO13_EDGE_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO14_LEVEL_LOW(x)       (x & 0x01000000U)       /**< Macro de campo de bit GPIO14_LEVEL_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO14_LEVEL_HIGH(x)      (x & 0x02000000U)       /**< Macro de campo de bit GPIO14_LEVEL_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO14_EDGE_LOW(x)        (x & 0x04000000U)       /**< Macro de campo de bit GPIO14_EDGE_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO14_EDGE_HIGH(x)       (x & 0x08000000U)       /**< Macro de campo de bit GPIO14_EDGE_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO15_LEVEL_LOW(x)       (x & 0x10000000U)       /**< Macro de campo de bit GPIO15_LEVEL_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO15_LEVEL_HIGH(x)      (x & 0x20000000U)       /**< Macro de campo de bit GPIO15_LEVEL_HIGH registro INTR1 */
#define mIOBANK_INTR1_GPIO15_EDGE_LOW(x)        (x & 0x40000000U)       /**< Macro de campo de bit GPIO15_EDGE_LOW registro INTR1 */
#define mIOBANK_INTR1_GPIO15_EDGE_HIGH(x)       (x & 0x80000000U)       /**< Macro de campo de bit GPIO15_EDGE_HIGH registro INTR1 */

#define mIOBANK_INTR2_GPIO16_LEVEL_LOW(x)        (x & 0x00000001U)       /**< Macro de campo de bit GPIO16_LEVEL_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO16_LEVEL_HIGH(x)       (x & 0x00000002U)       /**< Macro de campo de bit GPIO16_LEVEL_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO16_EDGE_LOW(x)         (x & 0x00000004U)       /**< Macro de campo de bit GPIO16_EDGE_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO16_EDGE_HIGH(x)        (x & 0x00000008U)       /**< Macro de campo de bit GPIO16_EDGE_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO17_LEVEL_LOW(x)        (x & 0x00000010U)       /**< Macro de campo de bit GPIO17_LEVEL_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO17_LEVEL_HIGH(x)       (x & 0x00000020U)       /**< Macro de campo de bit GPIO17_LEVEL_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO17_EDGE_LOW(x)         (x & 0x00000040U)       /**< Macro de campo de bit GPIO17_EDGE_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO17_EDGE_HIGH(x)        (x & 0x00000080U)       /**< Macro de campo de bit GPIO17_EDGE_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO18_LEVEL_LOW(x)        (x & 0x00000100U)       /**< Macro de campo de bit GPIO18_LEVEL_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO18_LEVEL_HIGH(x)       (x & 0x00000200U)       /**< Macro de campo de bit GPIO18_LEVEL_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO18_EDGE_LOW(x)         (x & 0x00000400U)       /**< Macro de campo de bit GPIO18_EDGE_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO18_EDGE_HIGH(x)        (x & 0x00000800U)       /**< Macro de campo de bit GPIO18_EDGE_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO19_LEVEL_LOW(x)        (x & 0x00001000U)       /**< Macro de campo de bit GPIO19_LEVEL_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO19_LEVEL_HIGH(x)       (x & 0x00002000U)       /**< Macro de campo de bit GPIO19_LEVEL_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO19_EDGE_LOW(x)         (x & 0x00004000U)       /**< Macro de campo de bit GPIO19_EDGE_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO19_EDGE_HIGH(x)        (x & 0x00008000U)       /**< Macro de campo de bit GPIO19_EDGE_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO20_LEVEL_LOW(x)        (x & 0x00010000U)       /**< Macro de campo de bit GPIO20_LEVEL_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO20_LEVEL_HIGH(x)       (x & 0x00020000U)       /**< Macro de campo de bit GPIO20_LEVEL_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO20_EDGE_LOW(x)         (x & 0x00040000U)       /**< Macro de campo de bit GPIO20_EDGE_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO20_EDGE_HIGH(x)        (x & 0x00080000U)       /**< Macro de campo de bit GPIO20_EDGE_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO21_LEVEL_LOW(x)        (x & 0x00100000U)       /**< Macro de campo de bit GPIO21_LEVEL_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO21_LEVEL_HIGH(x)       (x & 0x00200000U)       /**< Macro de campo de bit GPIO21_LEVEL_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO21_EDGE_LOW(x)         (x & 0x00400000U)       /**< Macro de campo de bit GPIO21_EDGE_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO21_EDGE_HIGH(x)        (x & 0x00800000U)       /**< Macro de campo de bit GPIO21_EDGE_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO22_LEVEL_LOW(x)        (x & 0x01000000U)       /**< Macro de campo de bit GPIO22_LEVEL_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO22_LEVEL_HIGH(x)       (x & 0x02000000U)       /**< Macro de campo de bit GPIO22_LEVEL_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO22_EDGE_LOW(x)         (x & 0x04000000U)       /**< Macro de campo de bit GPIO22_EDGE_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO22_EDGE_HIGH(x)        (x & 0x08000000U)       /**< Macro de campo de bit GPIO22_EDGE_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO23_LEVEL_LOW(x)        (x & 0x10000000U)       /**< Macro de campo de bit GPIO23_LEVEL_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO23_LEVEL_HIGH(x)       (x & 0x20000000U)       /**< Macro de campo de bit GPIO23_LEVEL_HIGH registro INTR2 */
#define mIOBANK_INTR2_GPIO23_EDGE_LOW(x)         (x & 0x40000000U)       /**< Macro de campo de bit GPIO23_EDGE_LOW registro INTR2 */
#define mIOBANK_INTR2_GPIO23_EDGE_HIGH(x)        (x & 0x80000000U)       /**< Macro de campo de bit GPIO23_EDGE_HIGH registro INTR2 */

#define mIOBANK_INTR3_GPIO24_LEVEL_LOW(x)        (x & 0x00000001U)       /**< Macro de campo de bit GPIO24_LEVEL_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO24_LEVEL_HIGH(x)       (x & 0x00000002U)       /**< Macro de campo de bit GPIO24_LEVEL_HIGH registro INTR3 */
#define mIOBANK_INTR3_GPIO24_EDGE_LOW(x)         (x & 0x00000004U)       /**< Macro de campo de bit GPIO24_EDGE_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO24_EDGE_HIGH(x)        (x & 0x00000008U)       /**< Macro de campo de bit GPIO24_EDGE_HIGH registro INTR3 */
#define mIOBANK_INTR3_GPIO25_LEVEL_LOW(x)        (x & 0x00000010U)       /**< Macro de campo de bit GPIO25_LEVEL_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO25_LEVEL_HIGH(x)       (x & 0x00000020U)       /**< Macro de campo de bit GPIO25_LEVEL_HIGH registro INTR3 */
#define mIOBANK_INTR3_GPIO25_EDGE_LOW(x)         (x & 0x00000040U)       /**< Macro de campo de bit GPIO25_EDGE_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO25_EDGE_HIGH(x)        (x & 0x00000080U)       /**< Macro de campo de bit GPIO25_EDGE_HIGH registro INTR3 */
#define mIOBANK_INTR3_GPIO26_LEVEL_LOW(x)        (x & 0x00000100U)       /**< Macro de campo de bit GPIO26_LEVEL_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO26_LEVEL_HIGH(x)       (x & 0x00000200U)       /**< Macro de campo de bit GPIO26_LEVEL_HIGH registro INTR3 */
#define mIOBANK_INTR3_GPIO26_EDGE_LOW(x)         (x & 0x00000400U)       /**< Macro de campo de bit GPIO26_EDGE_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO26_EDGE_HIGH(x)        (x & 0x00000800U)       /**< Macro de campo de bit GPIO26_EDGE_HIGH registro INTR3 */
#define mIOBANK_INTR3_GPIO27_LEVEL_LOW(x)        (x & 0x00001000U)       /**< Macro de campo de bit GPIO27_LEVEL_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO27_LEVEL_HIGH(x)       (x & 0x00002000U)       /**< Macro de campo de bit GPIO27_LEVEL_HIGH registro INTR3 */
#define mIOBANK_INTR3_GPIO27_EDGE_LOW(x)         (x & 0x00004000U)       /**< Macro de campo de bit GPIO27_EDGE_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO27_EDGE_HIGH(x)        (x & 0x00008000U)       /**< Macro de campo de bit GPIO27_EDGE_HIGH registro INTR3 */
#define mIOBANK_INTR3_GPIO28_LEVEL_LOW(x)        (x & 0x00010000U)       /**< Macro de campo de bit GPIO28_LEVEL_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO28_LEVEL_HIGH(x)       (x & 0x00020000U)       /**< Macro de campo de bit GPIO28_LEVEL_HIGH registro INTR3 */
#define mIOBANK_INTR3_GPIO28_EDGE_LOW(x)         (x & 0x00040000U)       /**< Macro de campo de bit GPIO28_EDGE_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO28_EDGE_HIGH(x)        (x & 0x00080000U)       /**< Macro de campo de bit GPIO28_EDGE_HIGH registro INTR3 */
#define mIOBANK_INTR3_GPIO29_LEVEL_LOW(x)        (x & 0x00100000U)       /**< Macro de campo de bit GPIO29_LEVEL_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO29_LEVEL_HIGH(x)       (x & 0x00200000U)       /**< Macro de campo de bit GPIO29_LEVEL_HIGH registro INTR3 */
#define mIOBANK_INTR3_GPIO29_EDGE_LOW(x)         (x & 0x00400000U)       /**< Macro de campo de bit GPIO29_EDGE_LOW registro INTR3 */
#define mIOBANK_INTR3_GPIO29_EDGE_HIGH(x)        (x & 0x00800000U)       /**< Macro de campo de bit GPIO29_EDGE_HIGH registro INTR3 */

//--------------- Macros DORMANT_WAKE_INT -------------------------------/

#define mIOBANK_DORMANT_WAKE_INTE0_GPIO0_LEVEL_LOW(x)       (x & 0x00000001U)   /**< Macro de campo de bit GPIO0_LEVEL_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO0_LEVEL_HIGH(x)      (x & 0x00000002U)   /**< Macro de campo de bit GPIO0_LEVEL_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO0_EDGE_LOW(x)        (x & 0x00000004U)   /**< Macro de campo de bit GPIO0_EDGE_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO0_EDGE_HIGH(x)       (x & 0x00000008U)   /**< Macro de campo de bit GPIO0_EDGE_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO1_LEVEL_LOW(x)       (x & 0x00000010U)   /**< Macro de campo de bit GPIO1_LEVEL_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO1_LEVEL_HIGH(x)      (x & 0x00000020U)   /**< Macro de campo de bit GPIO1_LEVEL_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO1_EDGE_LOW(x)        (x & 0x00000040U)   /**< Macro de campo de bit GPIO1_EDGE_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO1_EDGE_HIGH(x)       (x & 0x00000080U)   /**< Macro de campo de bit GPIO1_EDGE_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO2_LEVEL_LOW(x)       (x & 0x00000100U)   /**< Macro de campo de bit GPIO2_LEVEL_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO2_LEVEL_HIGH(x)      (x & 0x00000200U)   /**< Macro de campo de bit GPIO2_LEVEL_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO2_EDGE_LOW(x)        (x & 0x00000400U)   /**< Macro de campo de bit GPIO2_EDGE_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO2_EDGE_HIGH(x)       (x & 0x00000800U)   /**< Macro de campo de bit GPIO2_EDGE_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO3_LEVEL_LOW(x)       (x & 0x00001000U)   /**< Macro de campo de bit GPIO3_LEVEL_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO3_LEVEL_HIGH(x)      (x & 0x00002000U)   /**< Macro de campo de bit GPIO3_LEVEL_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO3_EDGE_LOW(x)        (x & 0x00004000U)   /**< Macro de campo de bit GPIO3_EDGE_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO3_EDGE_HIGH(x)       (x & 0x00008000U)   /**< Macro de campo de bit GPIO3_EDGE_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO4_LEVEL_LOW(x)       (x & 0x00010000U)   /**< Macro de campo de bit GPIO4_LEVEL_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO4_LEVEL_HIGH(x)      (x & 0x00020000U)   /**< Macro de campo de bit GPIO4_LEVEL_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO4_EDGE_LOW(x)        (x & 0x00040000U)   /**< Macro de campo de bit GPIO4_EDGE_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO4_EDGE_HIGH(x)       (x & 0x00080000U)   /**< Macro de campo de bit GPIO4_EDGE_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO5_LEVEL_LOW(x)       (x & 0x00100000U)   /**< Macro de campo de bit GPIO5_LEVEL_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO5_LEVEL_HIGH(x)      (x & 0x00200000U)   /**< Macro de campo de bit GPIO5_LEVEL_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO5_EDGE_LOW(x)        (x & 0x00400000U)   /**< Macro de campo de bit GPIO5_EDGE_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO5_EDGE_HIGH(x)       (x & 0x00800000U)   /**< Macro de campo de bit GPIO5_EDGE_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO6_LEVEL_LOW(x)       (x & 0x01000000U)   /**< Macro de campo de bit GPIO6_LEVEL_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO6_LEVEL_HIGH(x)      (x & 0x02000000U)   /**< Macro de campo de bit GPIO6_LEVEL_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO6_EDGE_LOW(x)        (x & 0x04000000U)   /**< Macro de campo de bit GPIO6_EDGE_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO6_EDGE_HIGH(x)       (x & 0x08000000U)   /**< Macro de campo de bit GPIO6_EDGE_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO7_LEVEL_LOW(x)       (x & 0x10000000U)   /**< Macro de campo de bit GPIO7_LEVEL_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO7_LEVEL_HIGH(x)      (x & 0x20000000U)   /**< Macro de campo de bit GPIO7_LEVEL_HIGH registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO7_EDGE_LOW(x)        (x & 0x40000000U)   /**< Macro de campo de bit GPIO7_EDGE_LOW registro DORMANT_WAKE_INTE0 */
#define mIOBANK_DORMANT_WAKE_INTE0_GPIO7_EDGE_HIGH(x)       (x & 0x80000000U)   /**< Macro de campo de bit GPIO7_EDGE_HIGH registro DORMANT_WAKE_INTE0 */

#define mIOBANK_DORMANT_WAKE_INTE1_GPIO8_LEVEL_LOW(x)       (x & 0x00000001U)  /**< Macro de campo de bit GPIO8_LEVEL_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO8_LEVEL_HIGH(x)      (x & 0x00000002U)  /**< Macro de campo de bit GPIO8_LEVEL_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO8_EDGE_LOW(x)        (x & 0x00000004U)  /**< Macro de campo de bit GPIO8_EDGE_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO8_EDGE_HIGH(x)       (x & 0x00000008U)  /**< Macro de campo de bit GPIO8_EDGE_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO9_LEVEL_LOW(x)       (x & 0x00000010U)  /**< Macro de campo de bit GPIO9_LEVEL_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO9_LEVEL_HIGH(x)      (x & 0x00000020U)  /**< Macro de campo de bit GPIO9_LEVEL_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO9_EDGE_LOW(x)        (x & 0x00000040U)  /**< Macro de campo de bit GPIO9_EDGE_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO9_EDGE_HIGH(x)       (x & 0x00000080U)  /**< Macro de campo de bit GPIO9_EDGE_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO10_LEVEL_LOW(x)      (x & 0x00000100U)   /**< Macro de campo de bit GPIO10_LEVEL_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO10_LEVEL_HIGH(x)     (x & 0x00000200U)   /**< Macro de campo de bit GPIO10_LEVEL_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO10_EDGE_LOW(x)       (x & 0x00000400U)   /**< Macro de campo de bit GPIO10_EDGE_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO10_EDGE_HIGH(x)      (x & 0x00000800U)   /**< Macro de campo de bit GPIO10_EDGE_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO11_LEVEL_LOW(x)      (x & 0x00001000U)   /**< Macro de campo de bit GPIO11_LEVEL_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO11_LEVEL_HIGH(x)     (x & 0x00002000U)   /**< Macro de campo de bit GPIO11_LEVEL_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO11_EDGE_LOW(x)       (x & 0x00004000U)   /**< Macro de campo de bit GPIO11_EDGE_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO11_EDGE_HIGH(x)      (x & 0x00008000U)   /**< Macro de campo de bit GPIO11_EDGE_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO12_LEVEL_LOW(x)      (x & 0x00010000U)   /**< Macro de campo de bit GPIO12_LEVEL_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO12_LEVEL_HIGH(x)     (x & 0x00020000U)   /**< Macro de campo de bit GPIO12_LEVEL_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO12_EDGE_LOW(x)       (x & 0x00040000U)   /**< Macro de campo de bit GPIO12_EDGE_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO12_EDGE_HIGH(x)      (x & 0x00080000U)   /**< Macro de campo de bit GPIO12_EDGE_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO13_LEVEL_LOW(x)      (x & 0x00100000U)   /**< Macro de campo de bit GPIO13_LEVEL_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO13_LEVEL_HIGH(x)     (x & 0x00200000U)   /**< Macro de campo de bit GPIO13_LEVEL_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO13_EDGE_LOW(x)       (x & 0x00400000U)   /**< Macro de campo de bit GPIO13_EDGE_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO13_EDGE_HIGH(x)      (x & 0x00800000U)   /**< Macro de campo de bit GPIO13_EDGE_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO14_LEVEL_LOW(x)      (x & 0x01000000U)   /**< Macro de campo de bit GPIO14_LEVEL_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO14_LEVEL_HIGH(x)     (x & 0x02000000U)   /**< Macro de campo de bit GPIO14_LEVEL_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO14_EDGE_LOW(x)       (x & 0x04000000U)   /**< Macro de campo de bit GPIO14_EDGE_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO14_EDGE_HIGH(x)      (x & 0x08000000U)   /**< Macro de campo de bit GPIO14_EDGE_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO15_LEVEL_LOW(x)      (x & 0x10000000U)   /**< Macro de campo de bit GPIO15_LEVEL_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO15_LEVEL_HIGH(x)     (x & 0x20000000U)   /**< Macro de campo de bit GPIO15_LEVEL_HIGH registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO15_EDGE_LOW(x)       (x & 0x40000000U)   /**< Macro de campo de bit GPIO15_EDGE_LOW registro DORMANT_WAKE_INTE1 */
#define mIOBANK_DORMANT_WAKE_INTE1_GPIO15_EDGE_HIGH(x)      (x & 0x80000000U)   /**< Macro de campo de bit GPIO15_EDGE_HIGH registro DORMANT_WAKE_INTE1 */

#define mIOBANK_DORMANT_WAKE_INTE2_GPIO16_LEVEL_LOW(x)       (x & 0x00000001U)   /**< Macro de campo de bit GPIO16_LEVEL_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO16_LEVEL_HIGH(x)      (x & 0x00000002U)   /**< Macro de campo de bit GPIO16_LEVEL_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO16_EDGE_LOW(x)        (x & 0x00000004U)   /**< Macro de campo de bit GPIO16_EDGE_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO16_EDGE_HIGH(x)       (x & 0x00000008U)   /**< Macro de campo de bit GPIO16_EDGE_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO17_LEVEL_LOW(x)       (x & 0x00000010U)   /**< Macro de campo de bit GPIO17_LEVEL_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO17_LEVEL_HIGH(x)      (x & 0x00000020U)   /**< Macro de campo de bit GPIO17_LEVEL_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO17_EDGE_LOW(x)        (x & 0x00000040U)   /**< Macro de campo de bit GPIO17_EDGE_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO17_EDGE_HIGH(x)       (x & 0x00000080U)   /**< Macro de campo de bit GPIO17_EDGE_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO18_LEVEL_LOW(x)       (x & 0x00000100U)   /**< Macro de campo de bit GPIO18_LEVEL_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO18_LEVEL_HIGH(x)      (x & 0x00000200U)   /**< Macro de campo de bit GPIO18_LEVEL_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO18_EDGE_LOW(x)        (x & 0x00000400U)   /**< Macro de campo de bit GPIO18_EDGE_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO18_EDGE_HIGH(x)       (x & 0x00000800U)   /**< Macro de campo de bit GPIO18_EDGE_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO19_LEVEL_LOW(x)       (x & 0x00001000U)   /**< Macro de campo de bit GPIO19_LEVEL_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO19_LEVEL_HIGH(x)      (x & 0x00002000U)   /**< Macro de campo de bit GPIO19_LEVEL_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO19_EDGE_LOW(x)        (x & 0x00004000U)   /**< Macro de campo de bit GPIO19_EDGE_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO19_EDGE_HIGH(x)       (x & 0x00008000U)   /**< Macro de campo de bit GPIO19_EDGE_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO20_LEVEL_LOW(x)       (x & 0x00010000U)   /**< Macro de campo de bit GPIO20_LEVEL_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO20_LEVEL_HIGH(x)      (x & 0x00020000U)   /**< Macro de campo de bit GPIO20_LEVEL_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO20_EDGE_LOW(x)        (x & 0x00040000U)   /**< Macro de campo de bit GPIO20_EDGE_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO20_EDGE_HIGH(x)       (x & 0x00080000U)   /**< Macro de campo de bit GPIO20_EDGE_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO21_LEVEL_LOW(x)       (x & 0x00100000U)   /**< Macro de campo de bit GPIO21_LEVEL_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO21_LEVEL_HIGH(x)      (x & 0x00200000U)   /**< Macro de campo de bit GPIO21_LEVEL_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO21_EDGE_LOW(x)        (x & 0x00400000U)   /**< Macro de campo de bit GPIO21_EDGE_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO21_EDGE_HIGH(x)       (x & 0x00800000U)   /**< Macro de campo de bit GPIO21_EDGE_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO22_LEVEL_LOW(x)       (x & 0x01000000U)   /**< Macro de campo de bit GPIO22_LEVEL_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO22_LEVEL_HIGH(x)      (x & 0x02000000U)   /**< Macro de campo de bit GPIO22_LEVEL_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO22_EDGE_LOW(x)        (x & 0x04000000U)   /**< Macro de campo de bit GPIO22_EDGE_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO22_EDGE_HIGH(x)       (x & 0x08000000U)   /**< Macro de campo de bit GPIO22_EDGE_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO23_LEVEL_LOW(x)       (x & 0x10000000U)   /**< Macro de campo de bit GPIO23_LEVEL_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO23_LEVEL_HIGH(x)      (x & 0x20000000U)   /**< Macro de campo de bit GPIO23_LEVEL_HIGH registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO23_EDGE_LOW(x)        (x & 0x40000000U)   /**< Macro de campo de bit GPIO23_EDGE_LOW registro DORMANT_WAKE_INTE2 */
#define mIOBANK_DORMANT_WAKE_INTE2_GPIO23_EDGE_HIGH(x)       (x & 0x80000000U)   /**< Macro de campo de bit GPIO23_EDGE_HIGH registro DORMANT_WAKE_INTE2 */

#define mIOBANK_DORMANT_WAKE_INTE3_GPIO24_LEVEL_LOW(x)       (x & 0x00000001U)   /**< Macro de campo de bit GPIO24_LEVEL_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO24_LEVEL_HIGH(x)      (x & 0x00000002U)   /**< Macro de campo de bit GPIO24_LEVEL_HIGH registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO24_EDGE_LOW(x)        (x & 0x00000004U)   /**< Macro de campo de bit GPIO24_EDGE_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO24_EDGE_HIGH(x)       (x & 0x00000008U)   /**< Macro de campo de bit GPIO24_EDGE_HIGH registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO25_LEVEL_LOW(x)       (x & 0x00000010U)   /**< Macro de campo de bit GPIO25_LEVEL_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO25_LEVEL_HIGH(x)      (x & 0x00000020U)   /**< Macro de campo de bit GPIO25_LEVEL_HIGH registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO25_EDGE_LOW(x)        (x & 0x00000040U)   /**< Macro de campo de bit GPIO25_EDGE_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO25_EDGE_HIGH(x)       (x & 0x00000080U)   /**< Macro de campo de bit GPIO25_EDGE_HIGH registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO26_LEVEL_LOW(x)       (x & 0x00000100U)   /**< Macro de campo de bit GPIO26_LEVEL_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO26_LEVEL_HIGH(x)      (x & 0x00000200U)   /**< Macro de campo de bit GPIO26_LEVEL_HIGH registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO26_EDGE_LOW(x)        (x & 0x00000400U)   /**< Macro de campo de bit GPIO26_EDGE_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO26_EDGE_HIGH(x)       (x & 0x00000800U)   /**< Macro de campo de bit GPIO26_EDGE_HIGH registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO27_LEVEL_LOW(x)       (x & 0x00001000U)   /**< Macro de campo de bit GPIO27_LEVEL_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO27_LEVEL_HIGH(x)      (x & 0x00002000U)   /**< Macro de campo de bit GPIO27_LEVEL_HIGH registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO27_EDGE_LOW(x)        (x & 0x00004000U)   /**< Macro de campo de bit GPIO27_EDGE_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO27_EDGE_HIGH(x)       (x & 0x00008000U)   /**< Macro de campo de bit GPIO27_EDGE_HIGH registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO28_LEVEL_LOW(x)       (x & 0x00010000U)   /**< Macro de campo de bit GPIO28_LEVEL_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO28_LEVEL_HIGH(x)      (x & 0x00020000U)   /**< Macro de campo de bit GPIO28_LEVEL_HIGH registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO28_EDGE_LOW(x)        (x & 0x00040000U)   /**< Macro de campo de bit GPIO28_EDGE_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO28_EDGE_HIGH(x)       (x & 0x00080000U)   /**< Macro de campo de bit GPIO28_EDGE_HIGH registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO29_LEVEL_LOW(x)       (x & 0x00100000U)   /**< Macro de campo de bit GPIO29_LEVEL_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO29_LEVEL_HIGH(x)      (x & 0x00200000U)   /**< Macro de campo de bit GPIO29_LEVEL_HIGH registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO29_EDGE_LOW(x)        (x & 0x00400000U)   /**< Macro de campo de bit GPIO29_EDGE_LOW registro DORMANT_WAKE_INTE3 */
#define mIOBANK_DORMANT_WAKE_INTE3_GPIO29_EDGE_HIGH(x)       (x & 0x00800000U)   /**< Macro de campo de bit GPIO29_EDGE_HIGH registro DORMANT_WAKE_INTE3 */

//-----------------------------------------------------------

#define mIOBANK_DORMANT_WAKE_INTF0_GPIO0_LEVEL_LOW(x)       (x & 0x00000001U)   /**< Macro de campo de bit GPIO0_LEVEL_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO0_LEVEL_HIGH(x)      (x & 0x00000002U)   /**< Macro de campo de bit GPIO0_LEVEL_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO0_EDGE_LOW(x)        (x & 0x00000004U)   /**< Macro de campo de bit GPIO0_EDGE_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO0_EDGE_HIGH(x)       (x & 0x00000008U)   /**< Macro de campo de bit GPIO0_EDGE_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO1_LEVEL_LOW(x)       (x & 0x00000010U)   /**< Macro de campo de bit GPIO1_LEVEL_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO1_LEVEL_HIGH(x)      (x & 0x00000020U)   /**< Macro de campo de bit GPIO1_LEVEL_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO1_EDGE_LOW(x)        (x & 0x00000040U)   /**< Macro de campo de bit GPIO1_EDGE_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO1_EDGE_HIGH(x)       (x & 0x00000080U)   /**< Macro de campo de bit GPIO1_EDGE_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO2_LEVEL_LOW(x)       (x & 0x00000100U)   /**< Macro de campo de bit GPIO2_LEVEL_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO2_LEVEL_HIGH(x)      (x & 0x00000200U)   /**< Macro de campo de bit GPIO2_LEVEL_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO2_EDGE_LOW(x)        (x & 0x00000400U)   /**< Macro de campo de bit GPIO2_EDGE_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO2_EDGE_HIGH(x)       (x & 0x00000800U)   /**< Macro de campo de bit GPIO2_EDGE_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO3_LEVEL_LOW(x)       (x & 0x00001000U)   /**< Macro de campo de bit GPIO3_LEVEL_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO3_LEVEL_HIGH(x)      (x & 0x00002000U)   /**< Macro de campo de bit GPIO3_LEVEL_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO3_EDGE_LOW(x)        (x & 0x00004000U)   /**< Macro de campo de bit GPIO3_EDGE_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO3_EDGE_HIGH(x)       (x & 0x00008000U)   /**< Macro de campo de bit GPIO3_EDGE_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO4_LEVEL_LOW(x)       (x & 0x00010000U)   /**< Macro de campo de bit GPIO4_LEVEL_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO4_LEVEL_HIGH(x)      (x & 0x00020000U)   /**< Macro de campo de bit GPIO4_LEVEL_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO4_EDGE_LOW(x)        (x & 0x00040000U)   /**< Macro de campo de bit GPIO4_EDGE_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO4_EDGE_HIGH(x)       (x & 0x00080000U)   /**< Macro de campo de bit GPIO4_EDGE_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO5_LEVEL_LOW(x)       (x & 0x00100000U)   /**< Macro de campo de bit GPIO5_LEVEL_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO5_LEVEL_HIGH(x)      (x & 0x00200000U)   /**< Macro de campo de bit GPIO5_LEVEL_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO5_EDGE_LOW(x)        (x & 0x00400000U)   /**< Macro de campo de bit GPIO5_EDGE_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO5_EDGE_HIGH(x)       (x & 0x00800000U)   /**< Macro de campo de bit GPIO5_EDGE_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO6_LEVEL_LOW(x)       (x & 0x01000000U)   /**< Macro de campo de bit GPIO6_LEVEL_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO6_LEVEL_HIGH(x)      (x & 0x02000000U)   /**< Macro de campo de bit GPIO6_LEVEL_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO6_EDGE_LOW(x)        (x & 0x04000000U)   /**< Macro de campo de bit GPIO6_EDGE_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO6_EDGE_HIGH(x)       (x & 0x08000000U)   /**< Macro de campo de bit GPIO6_EDGE_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO7_LEVEL_LOW(x)       (x & 0x10000000U)   /**< Macro de campo de bit GPIO7_LEVEL_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO7_LEVEL_HIGH(x)      (x & 0x20000000U)   /**< Macro de campo de bit GPIO7_LEVEL_HIGH registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO7_EDGE_LOW(x)        (x & 0x40000000U)   /**< Macro de campo de bit GPIO7_EDGE_LOW registro DORMANT_WAKE_INTF0 */
#define mIOBANK_DORMANT_WAKE_INTF0_GPIO7_EDGE_HIGH(x)       (x & 0x80000000U)   /**< Macro de campo de bit GPIO7_EDGE_HIGH registro DORMANT_WAKE_INTF0 */

#define mIOBANK_DORMANT_WAKE_INTF1_GPIO8_LEVEL_LOW(x)       (x & 0x00000001U)  /**< Macro de campo de bit GPIO8_LEVEL_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO8_LEVEL_HIGH(x)      (x & 0x00000002U)  /**< Macro de campo de bit GPIO8_LEVEL_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO8_EDGE_LOW(x)        (x & 0x00000004U)  /**< Macro de campo de bit GPIO8_EDGE_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO8_EDGE_HIGH(x)       (x & 0x00000008U)  /**< Macro de campo de bit GPIO8_EDGE_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO9_LEVEL_LOW(x)       (x & 0x00000010U)  /**< Macro de campo de bit GPIO9_LEVEL_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO9_LEVEL_HIGH(x)      (x & 0x00000020U)  /**< Macro de campo de bit GPIO9_LEVEL_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO9_EDGE_LOW(x)        (x & 0x00000040U)  /**< Macro de campo de bit GPIO9_EDGE_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO9_EDGE_HIGH(x)       (x & 0x00000080U)  /**< Macro de campo de bit GPIO9_EDGE_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO10_LEVEL_LOW(x)      (x & 0x00000100U)   /**< Macro de campo de bit GPIO10_LEVEL_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO10_LEVEL_HIGH(x)     (x & 0x00000200U)   /**< Macro de campo de bit GPIO10_LEVEL_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO10_EDGE_LOW(x)       (x & 0x00000400U)   /**< Macro de campo de bit GPIO10_EDGE_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO10_EDGE_HIGH(x)      (x & 0x00000800U)   /**< Macro de campo de bit GPIO10_EDGE_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO11_LEVEL_LOW(x)      (x & 0x00001000U)   /**< Macro de campo de bit GPIO11_LEVEL_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO11_LEVEL_HIGH(x)     (x & 0x00002000U)   /**< Macro de campo de bit GPIO11_LEVEL_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO11_EDGE_LOW(x)       (x & 0x00004000U)   /**< Macro de campo de bit GPIO11_EDGE_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO11_EDGE_HIGH(x)      (x & 0x00008000U)   /**< Macro de campo de bit GPIO11_EDGE_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO12_LEVEL_LOW(x)      (x & 0x00010000U)   /**< Macro de campo de bit GPIO12_LEVEL_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO12_LEVEL_HIGH(x)     (x & 0x00020000U)   /**< Macro de campo de bit GPIO12_LEVEL_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO12_EDGE_LOW(x)       (x & 0x00040000U)   /**< Macro de campo de bit GPIO12_EDGE_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO12_EDGE_HIGH(x)      (x & 0x00080000U)   /**< Macro de campo de bit GPIO12_EDGE_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO13_LEVEL_LOW(x)      (x & 0x00100000U)   /**< Macro de campo de bit GPIO13_LEVEL_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO13_LEVEL_HIGH(x)     (x & 0x00200000U)   /**< Macro de campo de bit GPIO13_LEVEL_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO13_EDGE_LOW(x)       (x & 0x00400000U)   /**< Macro de campo de bit GPIO13_EDGE_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO13_EDGE_HIGH(x)      (x & 0x00800000U)   /**< Macro de campo de bit GPIO13_EDGE_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO14_LEVEL_LOW(x)      (x & 0x01000000U)   /**< Macro de campo de bit GPIO14_LEVEL_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO14_LEVEL_HIGH(x)     (x & 0x02000000U)   /**< Macro de campo de bit GPIO14_LEVEL_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO14_EDGE_LOW(x)       (x & 0x04000000U)   /**< Macro de campo de bit GPIO14_EDGE_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO14_EDGE_HIGH(x)      (x & 0x08000000U)   /**< Macro de campo de bit GPIO14_EDGE_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO15_LEVEL_LOW(x)      (x & 0x10000000U)   /**< Macro de campo de bit GPIO15_LEVEL_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO15_LEVEL_HIGH(x)     (x & 0x20000000U)   /**< Macro de campo de bit GPIO15_LEVEL_HIGH registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO15_EDGE_LOW(x)       (x & 0x40000000U)   /**< Macro de campo de bit GPIO15_EDGE_LOW registro DORMANT_WAKE_INTF1 */
#define mIOBANK_DORMANT_WAKE_INTF1_GPIO15_EDGE_HIGH(x)      (x & 0x80000000U)   /**< Macro de campo de bit GPIO15_EDGE_HIGH registro DORMANT_WAKE_INTF1 */

#define mIOBANK_DORMANT_WAKE_INTF2_GPIO16_LEVEL_LOW(x)       (x & 0x00000001U)   /**< Macro de campo de bit GPIO16_LEVEL_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO16_LEVEL_HIGH(x)      (x & 0x00000002U)   /**< Macro de campo de bit GPIO16_LEVEL_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO16_EDGE_LOW(x)        (x & 0x00000004U)   /**< Macro de campo de bit GPIO16_EDGE_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO16_EDGE_HIGH(x)       (x & 0x00000008U)   /**< Macro de campo de bit GPIO16_EDGE_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO17_LEVEL_LOW(x)       (x & 0x00000010U)   /**< Macro de campo de bit GPIO17_LEVEL_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO17_LEVEL_HIGH(x)      (x & 0x00000020U)   /**< Macro de campo de bit GPIO17_LEVEL_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO17_EDGE_LOW(x)        (x & 0x00000040U)   /**< Macro de campo de bit GPIO17_EDGE_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO17_EDGE_HIGH(x)       (x & 0x00000080U)   /**< Macro de campo de bit GPIO17_EDGE_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO18_LEVEL_LOW(x)       (x & 0x00000100U)   /**< Macro de campo de bit GPIO18_LEVEL_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO18_LEVEL_HIGH(x)      (x & 0x00000200U)   /**< Macro de campo de bit GPIO18_LEVEL_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO18_EDGE_LOW(x)        (x & 0x00000400U)   /**< Macro de campo de bit GPIO18_EDGE_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO18_EDGE_HIGH(x)       (x & 0x00000800U)   /**< Macro de campo de bit GPIO18_EDGE_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO19_LEVEL_LOW(x)       (x & 0x00001000U)   /**< Macro de campo de bit GPIO19_LEVEL_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO19_LEVEL_HIGH(x)      (x & 0x00002000U)   /**< Macro de campo de bit GPIO19_LEVEL_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO19_EDGE_LOW(x)        (x & 0x00004000U)   /**< Macro de campo de bit GPIO19_EDGE_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO19_EDGE_HIGH(x)       (x & 0x00008000U)   /**< Macro de campo de bit GPIO19_EDGE_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO20_LEVEL_LOW(x)       (x & 0x00010000U)   /**< Macro de campo de bit GPIO20_LEVEL_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO20_LEVEL_HIGH(x)      (x & 0x00020000U)   /**< Macro de campo de bit GPIO20_LEVEL_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO20_EDGE_LOW(x)        (x & 0x00040000U)   /**< Macro de campo de bit GPIO20_EDGE_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO20_EDGE_HIGH(x)       (x & 0x00080000U)   /**< Macro de campo de bit GPIO20_EDGE_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO21_LEVEL_LOW(x)       (x & 0x00100000U)   /**< Macro de campo de bit GPIO21_LEVEL_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO21_LEVEL_HIGH(x)      (x & 0x00200000U)   /**< Macro de campo de bit GPIO21_LEVEL_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO21_EDGE_LOW(x)        (x & 0x00400000U)   /**< Macro de campo de bit GPIO21_EDGE_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO21_EDGE_HIGH(x)       (x & 0x00800000U)   /**< Macro de campo de bit GPIO21_EDGE_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO22_LEVEL_LOW(x)       (x & 0x01000000U)   /**< Macro de campo de bit GPIO22_LEVEL_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO22_LEVEL_HIGH(x)      (x & 0x02000000U)   /**< Macro de campo de bit GPIO22_LEVEL_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO22_EDGE_LOW(x)        (x & 0x04000000U)   /**< Macro de campo de bit GPIO22_EDGE_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO22_EDGE_HIGH(x)       (x & 0x08000000U)   /**< Macro de campo de bit GPIO22_EDGE_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO23_LEVEL_LOW(x)       (x & 0x10000000U)   /**< Macro de campo de bit GPIO23_LEVEL_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO23_LEVEL_HIGH(x)      (x & 0x20000000U)   /**< Macro de campo de bit GPIO23_LEVEL_HIGH registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO23_EDGE_LOW(x)        (x & 0x40000000U)   /**< Macro de campo de bit GPIO23_EDGE_LOW registro DORMANT_WAKE_INTF2 */
#define mIOBANK_DORMANT_WAKE_INTF2_GPIO23_EDGE_HIGH(x)       (x & 0x80000000U)   /**< Macro de campo de bit GPIO23_EDGE_HIGH registro DORMANT_WAKE_INTF2 */

#define mIOBANK_DORMANT_WAKE_INTF3_GPIO24_LEVEL_LOW(x)       (x & 0x00000001U)   /**< Macro de campo de bit GPIO24_LEVEL_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO24_LEVEL_HIGH(x)      (x & 0x00000002U)   /**< Macro de campo de bit GPIO24_LEVEL_HIGH registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO24_EDGE_LOW(x)        (x & 0x00000004U)   /**< Macro de campo de bit GPIO24_EDGE_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO24_EDGE_HIGH(x)       (x & 0x00000008U)   /**< Macro de campo de bit GPIO24_EDGE_HIGH registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO25_LEVEL_LOW(x)       (x & 0x00000010U)   /**< Macro de campo de bit GPIO25_LEVEL_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO25_LEVEL_HIGH(x)      (x & 0x00000020U)   /**< Macro de campo de bit GPIO25_LEVEL_HIGH registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO25_EDGE_LOW(x)        (x & 0x00000040U)   /**< Macro de campo de bit GPIO25_EDGE_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO25_EDGE_HIGH(x)       (x & 0x00000080U)   /**< Macro de campo de bit GPIO25_EDGE_HIGH registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO26_LEVEL_LOW(x)       (x & 0x00000100U)   /**< Macro de campo de bit GPIO26_LEVEL_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO26_LEVEL_HIGH(x)      (x & 0x00000200U)   /**< Macro de campo de bit GPIO26_LEVEL_HIGH registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO26_EDGE_LOW(x)        (x & 0x00000400U)   /**< Macro de campo de bit GPIO26_EDGE_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO26_EDGE_HIGH(x)       (x & 0x00000800U)   /**< Macro de campo de bit GPIO26_EDGE_HIGH registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO27_LEVEL_LOW(x)       (x & 0x00001000U)   /**< Macro de campo de bit GPIO27_LEVEL_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO27_LEVEL_HIGH(x)      (x & 0x00002000U)   /**< Macro de campo de bit GPIO27_LEVEL_HIGH registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO27_EDGE_LOW(x)        (x & 0x00004000U)   /**< Macro de campo de bit GPIO27_EDGE_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO27_EDGE_HIGH(x)       (x & 0x00008000U)   /**< Macro de campo de bit GPIO27_EDGE_HIGH registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO28_LEVEL_LOW(x)       (x & 0x00010000U)   /**< Macro de campo de bit GPIO28_LEVEL_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO28_LEVEL_HIGH(x)      (x & 0x00020000U)   /**< Macro de campo de bit GPIO28_LEVEL_HIGH registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO28_EDGE_LOW(x)        (x & 0x00040000U)   /**< Macro de campo de bit GPIO28_EDGE_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO28_EDGE_HIGH(x)       (x & 0x00080000U)   /**< Macro de campo de bit GPIO28_EDGE_HIGH registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO29_LEVEL_LOW(x)       (x & 0x00100000U)   /**< Macro de campo de bit GPIO29_LEVEL_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO29_LEVEL_HIGH(x)      (x & 0x00200000U)   /**< Macro de campo de bit GPIO29_LEVEL_HIGH registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO29_EDGE_LOW(x)        (x & 0x00400000U)   /**< Macro de campo de bit GPIO29_EDGE_LOW registro DORMANT_WAKE_INTF3 */
#define mIOBANK_DORMANT_WAKE_INTF3_GPIO29_EDGE_HIGH(x)       (x & 0x00800000U)   /**< Macro de campo de bit GPIO29_EDGE_HIGH registro DORMANT_WAKE_INTF3 */

//----------------------------------------------------------

#define mIOBANK_DORMANT_WAKE_INTS0_GPIO0_LEVEL_LOW(x)       (x & 0x00000001U)   /**< Macro de campo de bit GPIO0_LEVEL_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO0_LEVEL_HIGH(x)      (x & 0x00000002U)   /**< Macro de campo de bit GPIO0_LEVEL_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO0_EDGE_LOW(x)        (x & 0x00000004U)   /**< Macro de campo de bit GPIO0_EDGE_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO0_EDGE_HIGH(x)       (x & 0x00000008U)   /**< Macro de campo de bit GPIO0_EDGE_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO1_LEVEL_LOW(x)       (x & 0x00000010U)   /**< Macro de campo de bit GPIO1_LEVEL_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO1_LEVEL_HIGH(x)      (x & 0x00000020U)   /**< Macro de campo de bit GPIO1_LEVEL_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO1_EDGE_LOW(x)        (x & 0x00000040U)   /**< Macro de campo de bit GPIO1_EDGE_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO1_EDGE_HIGH(x)       (x & 0x00000080U)   /**< Macro de campo de bit GPIO1_EDGE_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO2_LEVEL_LOW(x)       (x & 0x00000100U)   /**< Macro de campo de bit GPIO2_LEVEL_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO2_LEVEL_HIGH(x)      (x & 0x00000200U)   /**< Macro de campo de bit GPIO2_LEVEL_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO2_EDGE_LOW(x)        (x & 0x00000400U)   /**< Macro de campo de bit GPIO2_EDGE_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO2_EDGE_HIGH(x)       (x & 0x00000800U)   /**< Macro de campo de bit GPIO2_EDGE_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO3_LEVEL_LOW(x)       (x & 0x00001000U)   /**< Macro de campo de bit GPIO3_LEVEL_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO3_LEVEL_HIGH(x)      (x & 0x00002000U)   /**< Macro de campo de bit GPIO3_LEVEL_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO3_EDGE_LOW(x)        (x & 0x00004000U)   /**< Macro de campo de bit GPIO3_EDGE_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO3_EDGE_HIGH(x)       (x & 0x00008000U)   /**< Macro de campo de bit GPIO3_EDGE_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO4_LEVEL_LOW(x)       (x & 0x00010000U)   /**< Macro de campo de bit GPIO4_LEVEL_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO4_LEVEL_HIGH(x)      (x & 0x00020000U)   /**< Macro de campo de bit GPIO4_LEVEL_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO4_EDGE_LOW(x)        (x & 0x00040000U)   /**< Macro de campo de bit GPIO4_EDGE_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO4_EDGE_HIGH(x)       (x & 0x00080000U)   /**< Macro de campo de bit GPIO4_EDGE_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO5_LEVEL_LOW(x)       (x & 0x00100000U)   /**< Macro de campo de bit GPIO5_LEVEL_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO5_LEVEL_HIGH(x)      (x & 0x00200000U)   /**< Macro de campo de bit GPIO5_LEVEL_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO5_EDGE_LOW(x)        (x & 0x00400000U)   /**< Macro de campo de bit GPIO5_EDGE_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO5_EDGE_HIGH(x)       (x & 0x00800000U)   /**< Macro de campo de bit GPIO5_EDGE_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO6_LEVEL_LOW(x)       (x & 0x01000000U)   /**< Macro de campo de bit GPIO6_LEVEL_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO6_LEVEL_HIGH(x)      (x & 0x02000000U)   /**< Macro de campo de bit GPIO6_LEVEL_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO6_EDGE_LOW(x)        (x & 0x04000000U)   /**< Macro de campo de bit GPIO6_EDGE_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO6_EDGE_HIGH(x)       (x & 0x08000000U)   /**< Macro de campo de bit GPIO6_EDGE_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO7_LEVEL_LOW(x)       (x & 0x10000000U)   /**< Macro de campo de bit GPIO7_LEVEL_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO7_LEVEL_HIGH(x)      (x & 0x20000000U)   /**< Macro de campo de bit GPIO7_LEVEL_HIGH registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO7_EDGE_LOW(x)        (x & 0x40000000U)   /**< Macro de campo de bit GPIO7_EDGE_LOW registro DORMANT_WAKE_INTS0 */
#define mIOBANK_DORMANT_WAKE_INTS0_GPIO7_EDGE_HIGH(x)       (x & 0x80000000U)   /**< Macro de campo de bit GPIO7_EDGE_HIGH registro DORMANT_WAKE_INTS0 */

#define mIOBANK_DORMANT_WAKE_INTS1_GPIO8_LEVEL_LOW(x)       (x & 0x00000001U)  /**< Macro de campo de bit GPIO8_LEVEL_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO8_LEVEL_HIGH(x)      (x & 0x00000002U)  /**< Macro de campo de bit GPIO8_LEVEL_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO8_EDGE_LOW(x)        (x & 0x00000004U)  /**< Macro de campo de bit GPIO8_EDGE_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO8_EDGE_HIGH(x)       (x & 0x00000008U)  /**< Macro de campo de bit GPIO8_EDGE_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO9_LEVEL_LOW(x)       (x & 0x00000010U)  /**< Macro de campo de bit GPIO9_LEVEL_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO9_LEVEL_HIGH(x)      (x & 0x00000020U)  /**< Macro de campo de bit GPIO9_LEVEL_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO9_EDGE_LOW(x)        (x & 0x00000040U)  /**< Macro de campo de bit GPIO9_EDGE_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO9_EDGE_HIGH(x)       (x & 0x00000080U)  /**< Macro de campo de bit GPIO9_EDGE_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO10_LEVEL_LOW(x)      (x & 0x00000100U)   /**< Macro de campo de bit GPIO10_LEVEL_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO10_LEVEL_HIGH(x)     (x & 0x00000200U)   /**< Macro de campo de bit GPIO10_LEVEL_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO10_EDGE_LOW(x)       (x & 0x00000400U)   /**< Macro de campo de bit GPIO10_EDGE_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO10_EDGE_HIGH(x)      (x & 0x00000800U)   /**< Macro de campo de bit GPIO10_EDGE_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO11_LEVEL_LOW(x)      (x & 0x00001000U)   /**< Macro de campo de bit GPIO11_LEVEL_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO11_LEVEL_HIGH(x)     (x & 0x00002000U)   /**< Macro de campo de bit GPIO11_LEVEL_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO11_EDGE_LOW(x)       (x & 0x00004000U)   /**< Macro de campo de bit GPIO11_EDGE_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO11_EDGE_HIGH(x)      (x & 0x00008000U)   /**< Macro de campo de bit GPIO11_EDGE_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO12_LEVEL_LOW(x)      (x & 0x00010000U)   /**< Macro de campo de bit GPIO12_LEVEL_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO12_LEVEL_HIGH(x)     (x & 0x00020000U)   /**< Macro de campo de bit GPIO12_LEVEL_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO12_EDGE_LOW(x)       (x & 0x00040000U)   /**< Macro de campo de bit GPIO12_EDGE_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO12_EDGE_HIGH(x)      (x & 0x00080000U)   /**< Macro de campo de bit GPIO12_EDGE_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO13_LEVEL_LOW(x)      (x & 0x00100000U)   /**< Macro de campo de bit GPIO13_LEVEL_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO13_LEVEL_HIGH(x)     (x & 0x00200000U)   /**< Macro de campo de bit GPIO13_LEVEL_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO13_EDGE_LOW(x)       (x & 0x00400000U)   /**< Macro de campo de bit GPIO13_EDGE_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO13_EDGE_HIGH(x)      (x & 0x00800000U)   /**< Macro de campo de bit GPIO13_EDGE_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO14_LEVEL_LOW(x)      (x & 0x01000000U)   /**< Macro de campo de bit GPIO14_LEVEL_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO14_LEVEL_HIGH(x)     (x & 0x02000000U)   /**< Macro de campo de bit GPIO14_LEVEL_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO14_EDGE_LOW(x)       (x & 0x04000000U)   /**< Macro de campo de bit GPIO14_EDGE_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO14_EDGE_HIGH(x)      (x & 0x08000000U)   /**< Macro de campo de bit GPIO14_EDGE_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO15_LEVEL_LOW(x)      (x & 0x10000000U)   /**< Macro de campo de bit GPIO15_LEVEL_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO15_LEVEL_HIGH(x)     (x & 0x20000000U)   /**< Macro de campo de bit GPIO15_LEVEL_HIGH registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO15_EDGE_LOW(x)       (x & 0x40000000U)   /**< Macro de campo de bit GPIO15_EDGE_LOW registro DORMANT_WAKE_INTS1 */
#define mIOBANK_DORMANT_WAKE_INTS1_GPIO15_EDGE_HIGH(x)      (x & 0x80000000U)   /**< Macro de campo de bit GPIO15_EDGE_HIGH registro DORMANT_WAKE_INTS1 */

#define mIOBANK_DORMANT_WAKE_INTS2_GPIO16_LEVEL_LOW(x)       (x & 0x00000001U)   /**< Macro de campo de bit GPIO16_LEVEL_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO16_LEVEL_HIGH(x)      (x & 0x00000002U)   /**< Macro de campo de bit GPIO16_LEVEL_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO16_EDGE_LOW(x)        (x & 0x00000004U)   /**< Macro de campo de bit GPIO16_EDGE_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO16_EDGE_HIGH(x)       (x & 0x00000008U)   /**< Macro de campo de bit GPIO16_EDGE_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO17_LEVEL_LOW(x)       (x & 0x00000010U)   /**< Macro de campo de bit GPIO17_LEVEL_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO17_LEVEL_HIGH(x)      (x & 0x00000020U)   /**< Macro de campo de bit GPIO17_LEVEL_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO17_EDGE_LOW(x)        (x & 0x00000040U)   /**< Macro de campo de bit GPIO17_EDGE_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO17_EDGE_HIGH(x)       (x & 0x00000080U)   /**< Macro de campo de bit GPIO17_EDGE_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO18_LEVEL_LOW(x)       (x & 0x00000100U)   /**< Macro de campo de bit GPIO18_LEVEL_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO18_LEVEL_HIGH(x)      (x & 0x00000200U)   /**< Macro de campo de bit GPIO18_LEVEL_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO18_EDGE_LOW(x)        (x & 0x00000400U)   /**< Macro de campo de bit GPIO18_EDGE_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO18_EDGE_HIGH(x)       (x & 0x00000800U)   /**< Macro de campo de bit GPIO18_EDGE_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO19_LEVEL_LOW(x)       (x & 0x00001000U)   /**< Macro de campo de bit GPIO19_LEVEL_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO19_LEVEL_HIGH(x)      (x & 0x00002000U)   /**< Macro de campo de bit GPIO19_LEVEL_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO19_EDGE_LOW(x)        (x & 0x00004000U)   /**< Macro de campo de bit GPIO19_EDGE_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO19_EDGE_HIGH(x)       (x & 0x00008000U)   /**< Macro de campo de bit GPIO19_EDGE_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO20_LEVEL_LOW(x)       (x & 0x00010000U)   /**< Macro de campo de bit GPIO20_LEVEL_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO20_LEVEL_HIGH(x)      (x & 0x00020000U)   /**< Macro de campo de bit GPIO20_LEVEL_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO20_EDGE_LOW(x)        (x & 0x00040000U)   /**< Macro de campo de bit GPIO20_EDGE_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO20_EDGE_HIGH(x)       (x & 0x00080000U)   /**< Macro de campo de bit GPIO20_EDGE_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO21_LEVEL_LOW(x)       (x & 0x00100000U)   /**< Macro de campo de bit GPIO21_LEVEL_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO21_LEVEL_HIGH(x)      (x & 0x00200000U)   /**< Macro de campo de bit GPIO21_LEVEL_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO21_EDGE_LOW(x)        (x & 0x00400000U)   /**< Macro de campo de bit GPIO21_EDGE_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO21_EDGE_HIGH(x)       (x & 0x00800000U)   /**< Macro de campo de bit GPIO21_EDGE_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO22_LEVEL_LOW(x)       (x & 0x01000000U)   /**< Macro de campo de bit GPIO22_LEVEL_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO22_LEVEL_HIGH(x)      (x & 0x02000000U)   /**< Macro de campo de bit GPIO22_LEVEL_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO22_EDGE_LOW(x)        (x & 0x04000000U)   /**< Macro de campo de bit GPIO22_EDGE_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO22_EDGE_HIGH(x)       (x & 0x08000000U)   /**< Macro de campo de bit GPIO22_EDGE_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO23_LEVEL_LOW(x)       (x & 0x10000000U)   /**< Macro de campo de bit GPIO23_LEVEL_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO23_LEVEL_HIGH(x)      (x & 0x20000000U)   /**< Macro de campo de bit GPIO23_LEVEL_HIGH registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO23_EDGE_LOW(x)        (x & 0x40000000U)   /**< Macro de campo de bit GPIO23_EDGE_LOW registro DORMANT_WAKE_INTS2 */
#define mIOBANK_DORMANT_WAKE_INTS2_GPIO23_EDGE_HIGH(x)       (x & 0x80000000U)   /**< Macro de campo de bit GPIO23_EDGE_HIGH registro DORMANT_WAKE_INTS2 */

#define mIOBANK_DORMANT_WAKE_INTS3_GPIO24_LEVEL_LOW(x)       (x & 0x00000001U)   /**< Macro de campo de bit GPIO24_LEVEL_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO24_LEVEL_HIGH(x)      (x & 0x00000002U)   /**< Macro de campo de bit GPIO24_LEVEL_HIGH registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO24_EDGE_LOW(x)        (x & 0x00000004U)   /**< Macro de campo de bit GPIO24_EDGE_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO24_EDGE_HIGH(x)       (x & 0x00000008U)   /**< Macro de campo de bit GPIO24_EDGE_HIGH registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO25_LEVEL_LOW(x)       (x & 0x00000010U)   /**< Macro de campo de bit GPIO25_LEVEL_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO25_LEVEL_HIGH(x)      (x & 0x00000020U)   /**< Macro de campo de bit GPIO25_LEVEL_HIGH registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO25_EDGE_LOW(x)        (x & 0x00000040U)   /**< Macro de campo de bit GPIO25_EDGE_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO25_EDGE_HIGH(x)       (x & 0x00000080U)   /**< Macro de campo de bit GPIO25_EDGE_HIGH registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO26_LEVEL_LOW(x)       (x & 0x00000100U)   /**< Macro de campo de bit GPIO26_LEVEL_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO26_LEVEL_HIGH(x)      (x & 0x00000200U)   /**< Macro de campo de bit GPIO26_LEVEL_HIGH registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO26_EDGE_LOW(x)        (x & 0x00000400U)   /**< Macro de campo de bit GPIO26_EDGE_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO26_EDGE_HIGH(x)       (x & 0x00000800U)   /**< Macro de campo de bit GPIO26_EDGE_HIGH registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO27_LEVEL_LOW(x)       (x & 0x00001000U)   /**< Macro de campo de bit GPIO27_LEVEL_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO27_LEVEL_HIGH(x)      (x & 0x00002000U)   /**< Macro de campo de bit GPIO27_LEVEL_HIGH registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO27_EDGE_LOW(x)        (x & 0x00004000U)   /**< Macro de campo de bit GPIO27_EDGE_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO27_EDGE_HIGH(x)       (x & 0x00008000U)   /**< Macro de campo de bit GPIO27_EDGE_HIGH registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO28_LEVEL_LOW(x)       (x & 0x00010000U)   /**< Macro de campo de bit GPIO28_LEVEL_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO28_LEVEL_HIGH(x)      (x & 0x00020000U)   /**< Macro de campo de bit GPIO28_LEVEL_HIGH registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO28_EDGE_LOW(x)        (x & 0x00040000U)   /**< Macro de campo de bit GPIO28_EDGE_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO28_EDGE_HIGH(x)       (x & 0x00080000U)   /**< Macro de campo de bit GPIO28_EDGE_HIGH registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO29_LEVEL_LOW(x)       (x & 0x00100000U)   /**< Macro de campo de bit GPIO29_LEVEL_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO29_LEVEL_HIGH(x)      (x & 0x00200000U)   /**< Macro de campo de bit GPIO29_LEVEL_HIGH registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO29_EDGE_LOW(x)        (x & 0x00400000U)   /**< Macro de campo de bit GPIO29_EDGE_LOW registro DORMANT_WAKE_INTS3 */
#define mIOBANK_DORMANT_WAKE_INTS3_GPIO29_EDGE_HIGH(x)       (x & 0x00800000U)   /**< Macro de campo de bit GPIO29_EDGE_HIGH registro DORMANT_WAKE_INTS3 */

//--------------- Macros PROC0_INT -------------------------------/

#define mIOBANK_PROC0_INTE0_GPIO0_LEVEL_LOW(x)      (x & 0x00000001U)       /**< Macro de campo de bit GPIO0_LEVEL_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO0_LEVEL_HIGH(x)     (x & 0x00000002U)       /**< Macro de campo de bit GPIO0_LEVEL_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO0_EDGE_LOW(x)       (x & 0x00000004U)       /**< Macro de campo de bit GPIO0_EDGE_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO0_EDGE_HIGH(x)      (x & 0x00000008U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO1_LEVEL_LOW(x)      (x & 0x00000010U)       /**< Macro de campo de bit GPIO1_LEVEL_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO1_LEVEL_HIGH(x)     (x & 0x00000020U)       /**< Macro de campo de bit GPIO1_LEVEL_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO1_EDGE_LOW(x)       (x & 0x00000040U)       /**< Macro de campo de bit GPIO1_EDGE_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO1_EDGE_HIGH(x)      (x & 0x00000080U)       /**< Macro de campo de bit GPIO1_EDGE_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO2_LEVEL_LOW(x)      (x & 0x00000100U)       /**< Macro de campo de bit GPIO2_LEVEL_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO2_LEVEL_HIGH(x)     (x & 0x00000200U)       /**< Macro de campo de bit GPIO2_LEVEL_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO2_EDGE_LOW(x)       (x & 0x00000400U)       /**< Macro de campo de bit GPIO2_EDGE_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO2_EDGE_HIGH(x)      (x & 0x00000800U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO3_LEVEL_LOW(x)      (x & 0x00001000U)       /**< Macro de campo de bit GPIO3_LEVEL_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO3_LEVEL_HIGH(x)     (x & 0x00002000U)       /**< Macro de campo de bit GPIO3_LEVEL_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO3_EDGE_LOW(x)       (x & 0x00004000U)       /**< Macro de campo de bit GPIO3_EDGE_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO3_EDGE_HIGH(x)      (x & 0x00008000U)       /**< Macro de campo de bit GPIO3_EDGE_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO4_LEVEL_LOW(x)      (x & 0x00010000U)       /**< Macro de campo de bit GPIO4_LEVEL_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO4_LEVEL_HIGH(x)     (x & 0x00020000U)       /**< Macro de campo de bit GPIO4_LEVEL_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO4_EDGE_LOW(x)       (x & 0x00040000U)       /**< Macro de campo de bit GPIO4_EDGE_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO4_EDGE_HIGH(x)      (x & 0x00080000U)       /**< Macro de campo de bit GPIO4_EDGE_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO5_LEVEL_LOW(x)      (x & 0x00100000U)       /**< Macro de campo de bit GPIO5_LEVEL_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO5_LEVEL_HIGH(x)     (x & 0x00200000U)       /**< Macro de campo de bit GPIO5_LEVEL_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO5_EDGE_LOW(x)       (x & 0x00400000U)       /**< Macro de campo de bit GPIO5_EDGE_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO5_EDGE_HIGH(x)      (x & 0x00800000U)       /**< Macro de campo de bit GPIO5_EDGE_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO6_LEVEL_LOW(x)      (x & 0x01000000U)       /**< Macro de campo de bit GPIO6_LEVEL_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO6_LEVEL_HIGH(x)     (x & 0x02000000U)       /**< Macro de campo de bit GPIO6_LEVEL_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO6_EDGE_LOW(x)       (x & 0x04000000U)       /**< Macro de campo de bit GPIO6_EDGE_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO6_EDGE_HIGH(x)      (x & 0x08000000U)       /**< Macro de campo de bit GPIO6_EDGE_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO7_LEVEL_LOW(x)      (x & 0x10000000U)       /**< Macro de campo de bit GPIO7_LEVEL_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO7_LEVEL_HIGH(x)     (x & 0x20000000U)       /**< Macro de campo de bit GPIO7_LEVEL_HIGH registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO7_EDGE_LOW(x)       (x & 0x40000000U)       /**< Macro de campo de bit GPIO7_EDGE_LOW registro PROC0_INTE0 */
#define mIOBANK_PROC0_INTE0_GPIO7_EDGE_HIGH(x)      (x & 0x80000000U)       /**< Macro de campo de bit GPIO7_EDGE_HIGH registro PROC0_INTE0 */

#define mIOBANK_PROC0_INTE1_GPIO8_LEVEL_LOW(x)      (x & 0x00000001U)      /**< Macro de campo de bit GPIO8_LEVEL_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO8_LEVEL_HIGH(x)     (x & 0x00000002U)      /**< Macro de campo de bit GPIO8_LEVEL_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO8_EDGE_LOW(x)       (x & 0x00000004U)      /**< Macro de campo de bit GPIO8_EDGE_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO8_EDGE_HIGH(x)      (x & 0x00000008U)      /**< Macro de campo de bit GPIO8_EDGE_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO9_LEVEL_LOW(x)      (x & 0x00000010U)      /**< Macro de campo de bit GPIO9_LEVEL_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO9_LEVEL_HIGH(x)     (x & 0x00000020U)      /**< Macro de campo de bit GPIO9_LEVEL_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO9_EDGE_LOW(x)       (x & 0x00000040U)      /**< Macro de campo de bit GPIO9_EDGE_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO9_EDGE_HIGH(x)      (x & 0x00000080U)      /**< Macro de campo de bit GPIO9_EDGE_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO10_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO10_LEVEL_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO10_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO10_LEVEL_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO10_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO10_EDGE_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO10_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO10_EDGE_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO11_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO11_LEVEL_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO11_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO11_LEVEL_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO11_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO11_EDGE_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO11_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO11_EDGE_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO12_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO12_LEVEL_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO12_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO12_LEVEL_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO12_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO12_EDGE_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO12_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO12_EDGE_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO13_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO13_LEVEL_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO13_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO13_LEVEL_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO13_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO13_EDGE_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO13_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO13_EDGE_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO14_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO14_LEVEL_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO14_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO14_LEVEL_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO14_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO14_EDGE_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO14_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO14_EDGE_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO15_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO15_LEVEL_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO15_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO15_LEVEL_HIGH registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO15_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO15_EDGE_LOW registro PROC0_INTE1 */
#define mIOBANK_PROC0_INTE1_GPIO15_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO15_EDGE_HIGH registro PROC0_INTE1 */

#define mIOBANK_PROC0_INTE2_GPIO16_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO16_LEVEL_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO16_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO16_LEVEL_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO16_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO16_EDGE_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO16_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO16_EDGE_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO17_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO17_LEVEL_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO17_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO17_LEVEL_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO17_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO17_EDGE_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO17_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO17_EDGE_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO18_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO18_LEVEL_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO18_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO18_LEVEL_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO18_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO18_EDGE_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO18_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO18_EDGE_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO19_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO19_LEVEL_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO19_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO19_LEVEL_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO19_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO19_EDGE_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO19_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO19_EDGE_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO20_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO20_LEVEL_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO20_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO20_LEVEL_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO20_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO20_EDGE_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO20_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO20_EDGE_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO21_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO21_LEVEL_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO21_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO21_LEVEL_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO21_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO21_EDGE_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO21_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO21_EDGE_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO22_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO22_LEVEL_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO22_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO22_LEVEL_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO22_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO22_EDGE_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO22_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO22_EDGE_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO23_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO23_LEVEL_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO23_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO23_LEVEL_HIGH registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO23_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO23_EDGE_LOW registro PROC0_INTE2 */
#define mIOBANK_PROC0_INTE2_GPIO23_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO23_EDGE_HIGH registro PROC0_INTE2 */

#define mIOBANK_PROC0_INTE3_GPIO24_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO24_LEVEL_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO24_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO24_LEVEL_HIGH registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO24_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO24_EDGE_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO24_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO24_EDGE_HIGH registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO25_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO25_LEVEL_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO25_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO25_LEVEL_HIGH registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO25_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO25_EDGE_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO25_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO25_EDGE_HIGH registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO26_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO26_LEVEL_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO26_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO26_LEVEL_HIGH registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO26_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO26_EDGE_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO26_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO26_EDGE_HIGH registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO27_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO27_LEVEL_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO27_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO27_LEVEL_HIGH registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO27_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO27_EDGE_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO27_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO27_EDGE_HIGH registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO28_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO28_LEVEL_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO28_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO28_LEVEL_HIGH registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO28_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO28_EDGE_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO28_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO28_EDGE_HIGH registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO29_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO29_LEVEL_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO29_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO29_LEVEL_HIGH registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO29_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO29_EDGE_LOW registro PROC0_INTE3 */
#define mIOBANK_PROC0_INTE3_GPIO29_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO29_EDGE_HIGH registro PROC0_INTE3 */

//------------------------------------------------------------------------

#define mIOBANK_PROC0_INTF0_GPIO0_LEVEL_LOW(x)      (x & 0x00000001U)       /**< Macro de campo de bit GPIO0_LEVEL_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO0_LEVEL_HIGH(x)     (x & 0x00000002U)       /**< Macro de campo de bit GPIO0_LEVEL_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO0_EDGE_LOW(x)       (x & 0x00000004U)       /**< Macro de campo de bit GPIO0_EDGE_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO0_EDGE_HIGH(x)      (x & 0x00000008U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO1_LEVEL_LOW(x)      (x & 0x00000010U)       /**< Macro de campo de bit GPIO1_LEVEL_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO1_LEVEL_HIGH(x)     (x & 0x00000020U)       /**< Macro de campo de bit GPIO1_LEVEL_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO1_EDGE_LOW(x)       (x & 0x00000040U)       /**< Macro de campo de bit GPIO1_EDGE_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO1_EDGE_HIGH(x)      (x & 0x00000080U)       /**< Macro de campo de bit GPIO1_EDGE_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO2_LEVEL_LOW(x)      (x & 0x00000100U)       /**< Macro de campo de bit GPIO2_LEVEL_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO2_LEVEL_HIGH(x)     (x & 0x00000200U)       /**< Macro de campo de bit GPIO2_LEVEL_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO2_EDGE_LOW(x)       (x & 0x00000400U)       /**< Macro de campo de bit GPIO2_EDGE_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO2_EDGE_HIGH(x)      (x & 0x00000800U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO3_LEVEL_LOW(x)      (x & 0x00001000U)       /**< Macro de campo de bit GPIO3_LEVEL_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO3_LEVEL_HIGH(x)     (x & 0x00002000U)       /**< Macro de campo de bit GPIO3_LEVEL_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO3_EDGE_LOW(x)       (x & 0x00004000U)       /**< Macro de campo de bit GPIO3_EDGE_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO3_EDGE_HIGH(x)      (x & 0x00008000U)       /**< Macro de campo de bit GPIO3_EDGE_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO4_LEVEL_LOW(x)      (x & 0x00010000U)       /**< Macro de campo de bit GPIO4_LEVEL_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO4_LEVEL_HIGH(x)     (x & 0x00020000U)       /**< Macro de campo de bit GPIO4_LEVEL_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO4_EDGE_LOW(x)       (x & 0x00040000U)       /**< Macro de campo de bit GPIO4_EDGE_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO4_EDGE_HIGH(x)      (x & 0x00080000U)       /**< Macro de campo de bit GPIO4_EDGE_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO5_LEVEL_LOW(x)      (x & 0x00100000U)       /**< Macro de campo de bit GPIO5_LEVEL_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO5_LEVEL_HIGH(x)     (x & 0x00200000U)       /**< Macro de campo de bit GPIO5_LEVEL_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO5_EDGE_LOW(x)       (x & 0x00400000U)       /**< Macro de campo de bit GPIO5_EDGE_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO5_EDGE_HIGH(x)      (x & 0x00800000U)       /**< Macro de campo de bit GPIO5_EDGE_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO6_LEVEL_LOW(x)      (x & 0x01000000U)       /**< Macro de campo de bit GPIO6_LEVEL_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO6_LEVEL_HIGH(x)     (x & 0x02000000U)       /**< Macro de campo de bit GPIO6_LEVEL_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO6_EDGE_LOW(x)       (x & 0x04000000U)       /**< Macro de campo de bit GPIO6_EDGE_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO6_EDGE_HIGH(x)      (x & 0x08000000U)       /**< Macro de campo de bit GPIO6_EDGE_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO7_LEVEL_LOW(x)      (x & 0x10000000U)       /**< Macro de campo de bit GPIO7_LEVEL_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO7_LEVEL_HIGH(x)     (x & 0x20000000U)       /**< Macro de campo de bit GPIO7_LEVEL_HIGH registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO7_EDGE_LOW(x)       (x & 0x40000000U)       /**< Macro de campo de bit GPIO7_EDGE_LOW registro PROC0_INTF0 */
#define mIOBANK_PROC0_INTF0_GPIO7_EDGE_HIGH(x)      (x & 0x80000000U)       /**< Macro de campo de bit GPIO7_EDGE_HIGH registro PROC0_INTF0 */

#define mIOBANK_PROC0_INTF1_GPIO8_LEVEL_LOW(x)      (x & 0x00000001U)      /**< Macro de campo de bit GPIO8_LEVEL_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO8_LEVEL_HIGH(x)     (x & 0x00000002U)      /**< Macro de campo de bit GPIO8_LEVEL_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO8_EDGE_LOW(x)       (x & 0x00000004U)      /**< Macro de campo de bit GPIO8_EDGE_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO8_EDGE_HIGH(x)      (x & 0x00000008U)      /**< Macro de campo de bit GPIO8_EDGE_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO9_LEVEL_LOW(x)      (x & 0x00000010U)      /**< Macro de campo de bit GPIO9_LEVEL_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO9_LEVEL_HIGH(x)     (x & 0x00000020U)      /**< Macro de campo de bit GPIO9_LEVEL_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO9_EDGE_LOW(x)       (x & 0x00000040U)      /**< Macro de campo de bit GPIO9_EDGE_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO9_EDGE_HIGH(x)      (x & 0x00000080U)      /**< Macro de campo de bit GPIO9_EDGE_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO10_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO10_LEVEL_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO10_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO10_LEVEL_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO10_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO10_EDGE_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO10_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO10_EDGE_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO11_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO11_LEVEL_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO11_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO11_LEVEL_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO11_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO11_EDGE_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO11_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO11_EDGE_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO12_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO12_LEVEL_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO12_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO12_LEVEL_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO12_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO12_EDGE_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO12_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO12_EDGE_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO13_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO13_LEVEL_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO13_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO13_LEVEL_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO13_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO13_EDGE_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO13_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO13_EDGE_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO14_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO14_LEVEL_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO14_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO14_LEVEL_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO14_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO14_EDGE_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO14_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO14_EDGE_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO15_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO15_LEVEL_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO15_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO15_LEVEL_HIGH registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO15_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO15_EDGE_LOW registro PROC0_INTF1 */
#define mIOBANK_PROC0_INTF1_GPIO15_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO15_EDGE_HIGH registro PROC0_INTF1 */

#define mIOBANK_PROC0_INTF2_GPIO16_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO16_LEVEL_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO16_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO16_LEVEL_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO16_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO16_EDGE_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO16_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO16_EDGE_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO17_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO17_LEVEL_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO17_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO17_LEVEL_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO17_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO17_EDGE_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO17_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO17_EDGE_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO18_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO18_LEVEL_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO18_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO18_LEVEL_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO18_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO18_EDGE_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO18_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO18_EDGE_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO19_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO19_LEVEL_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO19_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO19_LEVEL_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO19_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO19_EDGE_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO19_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO19_EDGE_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO20_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO20_LEVEL_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO20_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO20_LEVEL_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO20_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO20_EDGE_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO20_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO20_EDGE_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO21_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO21_LEVEL_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO21_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO21_LEVEL_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO21_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO21_EDGE_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO21_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO21_EDGE_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO22_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO22_LEVEL_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO22_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO22_LEVEL_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO22_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO22_EDGE_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO22_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO22_EDGE_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO23_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO23_LEVEL_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO23_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO23_LEVEL_HIGH registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO23_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO23_EDGE_LOW registro PROC0_INTF2 */
#define mIOBANK_PROC0_INTF2_GPIO23_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO23_EDGE_HIGH registro PROC0_INTF2 */

#define mIOBANK_PROC0_INTF3_GPIO24_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO24_LEVEL_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO24_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO24_LEVEL_HIGH registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO24_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO24_EDGE_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO24_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO24_EDGE_HIGH registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO25_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO25_LEVEL_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO25_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO25_LEVEL_HIGH registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO25_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO25_EDGE_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO25_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO25_EDGE_HIGH registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO26_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO26_LEVEL_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO26_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO26_LEVEL_HIGH registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO26_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO26_EDGE_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO26_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO26_EDGE_HIGH registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO27_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO27_LEVEL_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO27_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO27_LEVEL_HIGH registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO27_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO27_EDGE_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO27_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO27_EDGE_HIGH registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO28_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO28_LEVEL_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO28_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO28_LEVEL_HIGH registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO28_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO28_EDGE_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO28_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO28_EDGE_HIGH registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO29_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO29_LEVEL_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO29_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO29_LEVEL_HIGH registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO29_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO29_EDGE_LOW registro PROC0_INTF3 */
#define mIOBANK_PROC0_INTF3_GPIO29_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO29_EDGE_HIGH registro PROC0_INTF3 */

//--------------------------------------------------------------------

#define mIOBANK_PROC0_INTS0_GPIO0_LEVEL_LOW(x)      (x & 0x00000001U)       /**< Macro de campo de bit GPIO0_LEVEL_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO0_LEVEL_HIGH(x)     (x & 0x00000002U)       /**< Macro de campo de bit GPIO0_LEVEL_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO0_EDGE_LOW(x)       (x & 0x00000004U)       /**< Macro de campo de bit GPIO0_EDGE_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO0_EDGE_HIGH(x)      (x & 0x00000008U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO1_LEVEL_LOW(x)      (x & 0x00000010U)       /**< Macro de campo de bit GPIO1_LEVEL_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO1_LEVEL_HIGH(x)     (x & 0x00000020U)       /**< Macro de campo de bit GPIO1_LEVEL_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO1_EDGE_LOW(x)       (x & 0x00000040U)       /**< Macro de campo de bit GPIO1_EDGE_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO1_EDGE_HIGH(x)      (x & 0x00000080U)       /**< Macro de campo de bit GPIO1_EDGE_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO2_LEVEL_LOW(x)      (x & 0x00000100U)       /**< Macro de campo de bit GPIO2_LEVEL_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO2_LEVEL_HIGH(x)     (x & 0x00000200U)       /**< Macro de campo de bit GPIO2_LEVEL_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO2_EDGE_LOW(x)       (x & 0x00000400U)       /**< Macro de campo de bit GPIO2_EDGE_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO2_EDGE_HIGH(x)      (x & 0x00000800U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO3_LEVEL_LOW(x)      (x & 0x00001000U)       /**< Macro de campo de bit GPIO3_LEVEL_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO3_LEVEL_HIGH(x)     (x & 0x00002000U)       /**< Macro de campo de bit GPIO3_LEVEL_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO3_EDGE_LOW(x)       (x & 0x00004000U)       /**< Macro de campo de bit GPIO3_EDGE_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO3_EDGE_HIGH(x)      (x & 0x00008000U)       /**< Macro de campo de bit GPIO3_EDGE_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO4_LEVEL_LOW(x)      (x & 0x00010000U)       /**< Macro de campo de bit GPIO4_LEVEL_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO4_LEVEL_HIGH(x)     (x & 0x00020000U)       /**< Macro de campo de bit GPIO4_LEVEL_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO4_EDGE_LOW(x)       (x & 0x00040000U)       /**< Macro de campo de bit GPIO4_EDGE_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO4_EDGE_HIGH(x)      (x & 0x00080000U)       /**< Macro de campo de bit GPIO4_EDGE_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO5_LEVEL_LOW(x)      (x & 0x00100000U)       /**< Macro de campo de bit GPIO5_LEVEL_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO5_LEVEL_HIGH(x)     (x & 0x00200000U)       /**< Macro de campo de bit GPIO5_LEVEL_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO5_EDGE_LOW(x)       (x & 0x00400000U)       /**< Macro de campo de bit GPIO5_EDGE_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO5_EDGE_HIGH(x)      (x & 0x00800000U)       /**< Macro de campo de bit GPIO5_EDGE_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO6_LEVEL_LOW(x)      (x & 0x01000000U)       /**< Macro de campo de bit GPIO6_LEVEL_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO6_LEVEL_HIGH(x)     (x & 0x02000000U)       /**< Macro de campo de bit GPIO6_LEVEL_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO6_EDGE_LOW(x)       (x & 0x04000000U)       /**< Macro de campo de bit GPIO6_EDGE_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO6_EDGE_HIGH(x)      (x & 0x08000000U)       /**< Macro de campo de bit GPIO6_EDGE_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO7_LEVEL_LOW(x)      (x & 0x10000000U)       /**< Macro de campo de bit GPIO7_LEVEL_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO7_LEVEL_HIGH(x)     (x & 0x20000000U)       /**< Macro de campo de bit GPIO7_LEVEL_HIGH registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO7_EDGE_LOW(x)       (x & 0x40000000U)       /**< Macro de campo de bit GPIO7_EDGE_LOW registro PROC0_INTS0 */
#define mIOBANK_PROC0_INTS0_GPIO7_EDGE_HIGH(x)      (x & 0x80000000U)       /**< Macro de campo de bit GPIO7_EDGE_HIGH registro PROC0_INTS0 */

#define mIOBANK_PROC0_INTS1_GPIO8_LEVEL_LOW(x)      (x & 0x00000001U)      /**< Macro de campo de bit GPIO8_LEVEL_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO8_LEVEL_HIGH(x)     (x & 0x00000002U)      /**< Macro de campo de bit GPIO8_LEVEL_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO8_EDGE_LOW(x)       (x & 0x00000004U)      /**< Macro de campo de bit GPIO8_EDGE_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO8_EDGE_HIGH(x)      (x & 0x00000008U)      /**< Macro de campo de bit GPIO8_EDGE_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO9_LEVEL_LOW(x)      (x & 0x00000010U)      /**< Macro de campo de bit GPIO9_LEVEL_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO9_LEVEL_HIGH(x)     (x & 0x00000020U)      /**< Macro de campo de bit GPIO9_LEVEL_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO9_EDGE_LOW(x)       (x & 0x00000040U)      /**< Macro de campo de bit GPIO9_EDGE_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO9_EDGE_HIGH(x)      (x & 0x00000080U)      /**< Macro de campo de bit GPIO9_EDGE_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO10_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO10_LEVEL_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO10_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO10_LEVEL_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO10_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO10_EDGE_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO10_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO10_EDGE_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO11_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO11_LEVEL_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO11_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO11_LEVEL_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO11_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO11_EDGE_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO11_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO11_EDGE_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO12_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO12_LEVEL_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO12_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO12_LEVEL_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO12_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO12_EDGE_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO12_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO12_EDGE_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO13_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO13_LEVEL_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO13_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO13_LEVEL_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO13_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO13_EDGE_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO13_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO13_EDGE_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO14_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO14_LEVEL_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO14_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO14_LEVEL_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO14_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO14_EDGE_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO14_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO14_EDGE_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO15_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO15_LEVEL_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO15_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO15_LEVEL_HIGH registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO15_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO15_EDGE_LOW registro PROC0_INTS1 */
#define mIOBANK_PROC0_INTS1_GPIO15_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO15_EDGE_HIGH registro PROC0_INTS1 */

#define mIOBANK_PROC0_INTS2_GPIO16_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO16_LEVEL_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO16_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO16_LEVEL_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO16_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO16_EDGE_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO16_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO16_EDGE_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO17_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO17_LEVEL_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO17_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO17_LEVEL_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO17_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO17_EDGE_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO17_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO17_EDGE_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO18_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO18_LEVEL_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO18_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO18_LEVEL_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO18_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO18_EDGE_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO18_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO18_EDGE_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO19_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO19_LEVEL_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO19_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO19_LEVEL_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO19_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO19_EDGE_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO19_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO19_EDGE_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO20_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO20_LEVEL_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO20_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO20_LEVEL_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO20_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO20_EDGE_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO20_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO20_EDGE_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO21_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO21_LEVEL_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO21_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO21_LEVEL_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO21_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO21_EDGE_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO21_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO21_EDGE_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO22_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO22_LEVEL_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO22_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO22_LEVEL_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO22_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO22_EDGE_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO22_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO22_EDGE_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO23_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO23_LEVEL_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO23_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO23_LEVEL_HIGH registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO23_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO23_EDGE_LOW registro PROC0_INTS2 */
#define mIOBANK_PROC0_INTS2_GPIO23_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO23_EDGE_HIGH registro PROC0_INTS2 */

#define mIOBANK_PROC0_INTS3_GPIO24_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO24_LEVEL_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO24_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO24_LEVEL_HIGH registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO24_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO24_EDGE_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO24_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO24_EDGE_HIGH registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO25_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO25_LEVEL_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO25_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO25_LEVEL_HIGH registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO25_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO25_EDGE_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO25_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO25_EDGE_HIGH registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO26_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO26_LEVEL_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO26_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO26_LEVEL_HIGH registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO26_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO26_EDGE_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO26_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO26_EDGE_HIGH registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO27_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO27_LEVEL_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO27_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO27_LEVEL_HIGH registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO27_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO27_EDGE_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO27_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO27_EDGE_HIGH registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO28_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO28_LEVEL_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO28_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO28_LEVEL_HIGH registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO28_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO28_EDGE_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO28_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO28_EDGE_HIGH registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO29_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO29_LEVEL_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO29_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO29_LEVEL_HIGH registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO29_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO29_EDGE_LOW registro PROC0_INTS3 */
#define mIOBANK_PROC0_INTS3_GPIO29_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO29_EDGE_HIGH registro PROC0_INTS3 */

//--------------- Macros PROC1_INT -------------------------------/

#define mIOBANK_PROC1_INTE0_GPIO0_LEVEL_LOW(x)      (x & 0x00000001U)       /**< Macro de campo de bit GPIO0_LEVEL_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO0_LEVEL_HIGH(x)     (x & 0x00000002U)       /**< Macro de campo de bit GPIO0_LEVEL_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO0_EDGE_LOW(x)       (x & 0x00000004U)       /**< Macro de campo de bit GPIO0_EDGE_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO0_EDGE_HIGH(x)      (x & 0x00000008U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO1_LEVEL_LOW(x)      (x & 0x00000010U)       /**< Macro de campo de bit GPIO1_LEVEL_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO1_LEVEL_HIGH(x)     (x & 0x00000020U)       /**< Macro de campo de bit GPIO1_LEVEL_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO1_EDGE_LOW(x)       (x & 0x00000040U)       /**< Macro de campo de bit GPIO1_EDGE_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO1_EDGE_HIGH(x)      (x & 0x00000080U)       /**< Macro de campo de bit GPIO1_EDGE_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO2_LEVEL_LOW(x)      (x & 0x00000100U)       /**< Macro de campo de bit GPIO2_LEVEL_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO2_LEVEL_HIGH(x)     (x & 0x00000200U)       /**< Macro de campo de bit GPIO2_LEVEL_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO2_EDGE_LOW(x)       (x & 0x00000400U)       /**< Macro de campo de bit GPIO2_EDGE_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO2_EDGE_HIGH(x)      (x & 0x00000800U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO3_LEVEL_LOW(x)      (x & 0x00001000U)       /**< Macro de campo de bit GPIO3_LEVEL_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO3_LEVEL_HIGH(x)     (x & 0x00002000U)       /**< Macro de campo de bit GPIO3_LEVEL_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO3_EDGE_LOW(x)       (x & 0x00004000U)       /**< Macro de campo de bit GPIO3_EDGE_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO3_EDGE_HIGH(x)      (x & 0x00008000U)       /**< Macro de campo de bit GPIO3_EDGE_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO4_LEVEL_LOW(x)      (x & 0x00010000U)       /**< Macro de campo de bit GPIO4_LEVEL_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO4_LEVEL_HIGH(x)     (x & 0x00020000U)       /**< Macro de campo de bit GPIO4_LEVEL_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO4_EDGE_LOW(x)       (x & 0x00040000U)       /**< Macro de campo de bit GPIO4_EDGE_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO4_EDGE_HIGH(x)      (x & 0x00080000U)       /**< Macro de campo de bit GPIO4_EDGE_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO5_LEVEL_LOW(x)      (x & 0x00100000U)       /**< Macro de campo de bit GPIO5_LEVEL_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO5_LEVEL_HIGH(x)     (x & 0x00200000U)       /**< Macro de campo de bit GPIO5_LEVEL_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO5_EDGE_LOW(x)       (x & 0x00400000U)       /**< Macro de campo de bit GPIO5_EDGE_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO5_EDGE_HIGH(x)      (x & 0x00800000U)       /**< Macro de campo de bit GPIO5_EDGE_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO6_LEVEL_LOW(x)      (x & 0x01000000U)       /**< Macro de campo de bit GPIO6_LEVEL_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO6_LEVEL_HIGH(x)     (x & 0x02000000U)       /**< Macro de campo de bit GPIO6_LEVEL_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO6_EDGE_LOW(x)       (x & 0x04000000U)       /**< Macro de campo de bit GPIO6_EDGE_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO6_EDGE_HIGH(x)      (x & 0x08000000U)       /**< Macro de campo de bit GPIO6_EDGE_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO7_LEVEL_LOW(x)      (x & 0x10000000U)       /**< Macro de campo de bit GPIO7_LEVEL_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO7_LEVEL_HIGH(x)     (x & 0x20000000U)       /**< Macro de campo de bit GPIO7_LEVEL_HIGH registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO7_EDGE_LOW(x)       (x & 0x40000000U)       /**< Macro de campo de bit GPIO7_EDGE_LOW registro PROC1_INTE0 */
#define mIOBANK_PROC1_INTE0_GPIO7_EDGE_HIGH(x)      (x & 0x80000000U)       /**< Macro de campo de bit GPIO7_EDGE_HIGH registro PROC1_INTE0 */

#define mIOBANK_PROC1_INTE1_GPIO8_LEVEL_LOW(x)      (x & 0x00000001U)      /**< Macro de campo de bit GPIO8_LEVEL_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO8_LEVEL_HIGH(x)     (x & 0x00000002U)      /**< Macro de campo de bit GPIO8_LEVEL_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO8_EDGE_LOW(x)       (x & 0x00000004U)      /**< Macro de campo de bit GPIO8_EDGE_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO8_EDGE_HIGH(x)      (x & 0x00000008U)      /**< Macro de campo de bit GPIO8_EDGE_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO9_LEVEL_LOW(x)      (x & 0x00000010U)      /**< Macro de campo de bit GPIO9_LEVEL_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO9_LEVEL_HIGH(x)     (x & 0x00000020U)      /**< Macro de campo de bit GPIO9_LEVEL_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO9_EDGE_LOW(x)       (x & 0x00000040U)      /**< Macro de campo de bit GPIO9_EDGE_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO9_EDGE_HIGH(x)      (x & 0x00000080U)      /**< Macro de campo de bit GPIO9_EDGE_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO10_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO10_LEVEL_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO10_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO10_LEVEL_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO10_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO10_EDGE_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO10_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO10_EDGE_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO11_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO11_LEVEL_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO11_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO11_LEVEL_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO11_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO11_EDGE_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO11_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO11_EDGE_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO12_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO12_LEVEL_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO12_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO12_LEVEL_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO12_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO12_EDGE_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO12_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO12_EDGE_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO13_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO13_LEVEL_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO13_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO13_LEVEL_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO13_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO13_EDGE_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO13_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO13_EDGE_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO14_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO14_LEVEL_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO14_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO14_LEVEL_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO14_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO14_EDGE_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO14_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO14_EDGE_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO15_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO15_LEVEL_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO15_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO15_LEVEL_HIGH registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO15_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO15_EDGE_LOW registro PROC1_INTE1 */
#define mIOBANK_PROC1_INTE1_GPIO15_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO15_EDGE_HIGH registro PROC1_INTE1 */

#define mIOBANK_PROC1_INTE2_GPIO16_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO16_LEVEL_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO16_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO16_LEVEL_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO16_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO16_EDGE_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO16_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO16_EDGE_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO17_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO17_LEVEL_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO17_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO17_LEVEL_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO17_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO17_EDGE_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO17_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO17_EDGE_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO18_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO18_LEVEL_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO18_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO18_LEVEL_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO18_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO18_EDGE_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO18_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO18_EDGE_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO19_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO19_LEVEL_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO19_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO19_LEVEL_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO19_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO19_EDGE_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO19_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO19_EDGE_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO20_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO20_LEVEL_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO20_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO20_LEVEL_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO20_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO20_EDGE_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO20_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO20_EDGE_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO21_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO21_LEVEL_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO21_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO21_LEVEL_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO21_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO21_EDGE_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO21_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO21_EDGE_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO22_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO22_LEVEL_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO22_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO22_LEVEL_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO22_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO22_EDGE_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO22_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO22_EDGE_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO23_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO23_LEVEL_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO23_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO23_LEVEL_HIGH registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO23_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO23_EDGE_LOW registro PROC1_INTE2 */
#define mIOBANK_PROC1_INTE2_GPIO23_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO23_EDGE_HIGH registro PROC1_INTE2 */

#define mIOBANK_PROC1_INTE3_GPIO24_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO24_LEVEL_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO24_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO24_LEVEL_HIGH registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO24_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO24_EDGE_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO24_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO24_EDGE_HIGH registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO25_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO25_LEVEL_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO25_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO25_LEVEL_HIGH registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO25_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO25_EDGE_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO25_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO25_EDGE_HIGH registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO26_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO26_LEVEL_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO26_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO26_LEVEL_HIGH registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO26_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO26_EDGE_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO26_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO26_EDGE_HIGH registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO27_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO27_LEVEL_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO27_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO27_LEVEL_HIGH registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO27_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO27_EDGE_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO27_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO27_EDGE_HIGH registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO28_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO28_LEVEL_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO28_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO28_LEVEL_HIGH registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO28_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO28_EDGE_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO28_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO28_EDGE_HIGH registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO29_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO29_LEVEL_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO29_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO29_LEVEL_HIGH registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO29_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO29_EDGE_LOW registro PROC1_INTE3 */
#define mIOBANK_PROC1_INTE3_GPIO29_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO29_EDGE_HIGH registro PROC1_INTE3 */

//------------------------------------------------------------------------

#define mIOBANK_PROC1_INTF0_GPIO0_LEVEL_LOW(x)      (x & 0x00000001U)       /**< Macro de campo de bit GPIO0_LEVEL_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO0_LEVEL_HIGH(x)     (x & 0x00000002U)       /**< Macro de campo de bit GPIO0_LEVEL_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO0_EDGE_LOW(x)       (x & 0x00000004U)       /**< Macro de campo de bit GPIO0_EDGE_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO0_EDGE_HIGH(x)      (x & 0x00000008U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO1_LEVEL_LOW(x)      (x & 0x00000010U)       /**< Macro de campo de bit GPIO1_LEVEL_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO1_LEVEL_HIGH(x)     (x & 0x00000020U)       /**< Macro de campo de bit GPIO1_LEVEL_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO1_EDGE_LOW(x)       (x & 0x00000040U)       /**< Macro de campo de bit GPIO1_EDGE_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO1_EDGE_HIGH(x)      (x & 0x00000080U)       /**< Macro de campo de bit GPIO1_EDGE_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO2_LEVEL_LOW(x)      (x & 0x00000100U)       /**< Macro de campo de bit GPIO2_LEVEL_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO2_LEVEL_HIGH(x)     (x & 0x00000200U)       /**< Macro de campo de bit GPIO2_LEVEL_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO2_EDGE_LOW(x)       (x & 0x00000400U)       /**< Macro de campo de bit GPIO2_EDGE_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO2_EDGE_HIGH(x)      (x & 0x00000800U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO3_LEVEL_LOW(x)      (x & 0x00001000U)       /**< Macro de campo de bit GPIO3_LEVEL_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO3_LEVEL_HIGH(x)     (x & 0x00002000U)       /**< Macro de campo de bit GPIO3_LEVEL_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO3_EDGE_LOW(x)       (x & 0x00004000U)       /**< Macro de campo de bit GPIO3_EDGE_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO3_EDGE_HIGH(x)      (x & 0x00008000U)       /**< Macro de campo de bit GPIO3_EDGE_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO4_LEVEL_LOW(x)      (x & 0x00010000U)       /**< Macro de campo de bit GPIO4_LEVEL_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO4_LEVEL_HIGH(x)     (x & 0x00020000U)       /**< Macro de campo de bit GPIO4_LEVEL_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO4_EDGE_LOW(x)       (x & 0x00040000U)       /**< Macro de campo de bit GPIO4_EDGE_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO4_EDGE_HIGH(x)      (x & 0x00080000U)       /**< Macro de campo de bit GPIO4_EDGE_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO5_LEVEL_LOW(x)      (x & 0x00100000U)       /**< Macro de campo de bit GPIO5_LEVEL_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO5_LEVEL_HIGH(x)     (x & 0x00200000U)       /**< Macro de campo de bit GPIO5_LEVEL_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO5_EDGE_LOW(x)       (x & 0x00400000U)       /**< Macro de campo de bit GPIO5_EDGE_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO5_EDGE_HIGH(x)      (x & 0x00800000U)       /**< Macro de campo de bit GPIO5_EDGE_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO6_LEVEL_LOW(x)      (x & 0x01000000U)       /**< Macro de campo de bit GPIO6_LEVEL_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO6_LEVEL_HIGH(x)     (x & 0x02000000U)       /**< Macro de campo de bit GPIO6_LEVEL_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO6_EDGE_LOW(x)       (x & 0x04000000U)       /**< Macro de campo de bit GPIO6_EDGE_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO6_EDGE_HIGH(x)      (x & 0x08000000U)       /**< Macro de campo de bit GPIO6_EDGE_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO7_LEVEL_LOW(x)      (x & 0x10000000U)       /**< Macro de campo de bit GPIO7_LEVEL_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO7_LEVEL_HIGH(x)     (x & 0x20000000U)       /**< Macro de campo de bit GPIO7_LEVEL_HIGH registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO7_EDGE_LOW(x)       (x & 0x40000000U)       /**< Macro de campo de bit GPIO7_EDGE_LOW registro PROC1_INTF0 */
#define mIOBANK_PROC1_INTF0_GPIO7_EDGE_HIGH(x)      (x & 0x80000000U)       /**< Macro de campo de bit GPIO7_EDGE_HIGH registro PROC1_INTF0 */

#define mIOBANK_PROC1_INTF1_GPIO8_LEVEL_LOW(x)      (x & 0x00000001U)      /**< Macro de campo de bit GPIO8_LEVEL_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO8_LEVEL_HIGH(x)     (x & 0x00000002U)      /**< Macro de campo de bit GPIO8_LEVEL_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO8_EDGE_LOW(x)       (x & 0x00000004U)      /**< Macro de campo de bit GPIO8_EDGE_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO8_EDGE_HIGH(x)      (x & 0x00000008U)      /**< Macro de campo de bit GPIO8_EDGE_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO9_LEVEL_LOW(x)      (x & 0x00000010U)      /**< Macro de campo de bit GPIO9_LEVEL_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO9_LEVEL_HIGH(x)     (x & 0x00000020U)      /**< Macro de campo de bit GPIO9_LEVEL_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO9_EDGE_LOW(x)       (x & 0x00000040U)      /**< Macro de campo de bit GPIO9_EDGE_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO9_EDGE_HIGH(x)      (x & 0x00000080U)      /**< Macro de campo de bit GPIO9_EDGE_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO10_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO10_LEVEL_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO10_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO10_LEVEL_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO10_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO10_EDGE_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO10_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO10_EDGE_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO11_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO11_LEVEL_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO11_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO11_LEVEL_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO11_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO11_EDGE_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO11_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO11_EDGE_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO12_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO12_LEVEL_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO12_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO12_LEVEL_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO12_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO12_EDGE_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO12_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO12_EDGE_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO13_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO13_LEVEL_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO13_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO13_LEVEL_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO13_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO13_EDGE_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO13_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO13_EDGE_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO14_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO14_LEVEL_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO14_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO14_LEVEL_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO14_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO14_EDGE_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO14_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO14_EDGE_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO15_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO15_LEVEL_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO15_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO15_LEVEL_HIGH registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO15_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO15_EDGE_LOW registro PROC1_INTF1 */
#define mIOBANK_PROC1_INTF1_GPIO15_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO15_EDGE_HIGH registro PROC1_INTF1 */

#define mIOBANK_PROC1_INTF2_GPIO16_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO16_LEVEL_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO16_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO16_LEVEL_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO16_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO16_EDGE_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO16_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO16_EDGE_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO17_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO17_LEVEL_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO17_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO17_LEVEL_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO17_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO17_EDGE_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO17_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO17_EDGE_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO18_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO18_LEVEL_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO18_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO18_LEVEL_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO18_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO18_EDGE_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO18_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO18_EDGE_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO19_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO19_LEVEL_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO19_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO19_LEVEL_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO19_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO19_EDGE_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO19_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO19_EDGE_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO20_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO20_LEVEL_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO20_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO20_LEVEL_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO20_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO20_EDGE_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO20_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO20_EDGE_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO21_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO21_LEVEL_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO21_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO21_LEVEL_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO21_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO21_EDGE_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO21_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO21_EDGE_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO22_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO22_LEVEL_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO22_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO22_LEVEL_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO22_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO22_EDGE_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO22_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO22_EDGE_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO23_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO23_LEVEL_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO23_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO23_LEVEL_HIGH registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO23_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO23_EDGE_LOW registro PROC1_INTF2 */
#define mIOBANK_PROC1_INTF2_GPIO23_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO23_EDGE_HIGH registro PROC1_INTF2 */

#define mIOBANK_PROC1_INTF3_GPIO24_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO24_LEVEL_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO24_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO24_LEVEL_HIGH registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO24_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO24_EDGE_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO24_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO24_EDGE_HIGH registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO25_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO25_LEVEL_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO25_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO25_LEVEL_HIGH registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO25_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO25_EDGE_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO25_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO25_EDGE_HIGH registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO26_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO26_LEVEL_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO26_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO26_LEVEL_HIGH registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO26_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO26_EDGE_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO26_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO26_EDGE_HIGH registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO27_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO27_LEVEL_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO27_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO27_LEVEL_HIGH registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO27_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO27_EDGE_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO27_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO27_EDGE_HIGH registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO28_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO28_LEVEL_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO28_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO28_LEVEL_HIGH registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO28_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO28_EDGE_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO28_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO28_EDGE_HIGH registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO29_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO29_LEVEL_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO29_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO29_LEVEL_HIGH registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO29_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO29_EDGE_LOW registro PROC1_INTF3 */
#define mIOBANK_PROC1_INTF3_GPIO29_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO29_EDGE_HIGH registro PROC1_INTF3 */

//--------------------------------------------------------------------

#define mIOBANK_PROC1_INTS0_GPIO0_LEVEL_LOW(x)      (x & 0x00000001U)       /**< Macro de campo de bit GPIO0_LEVEL_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO0_LEVEL_HIGH(x)     (x & 0x00000002U)       /**< Macro de campo de bit GPIO0_LEVEL_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO0_EDGE_LOW(x)       (x & 0x00000004U)       /**< Macro de campo de bit GPIO0_EDGE_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO0_EDGE_HIGH(x)      (x & 0x00000008U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO1_LEVEL_LOW(x)      (x & 0x00000010U)       /**< Macro de campo de bit GPIO1_LEVEL_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO1_LEVEL_HIGH(x)     (x & 0x00000020U)       /**< Macro de campo de bit GPIO1_LEVEL_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO1_EDGE_LOW(x)       (x & 0x00000040U)       /**< Macro de campo de bit GPIO1_EDGE_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO1_EDGE_HIGH(x)      (x & 0x00000080U)       /**< Macro de campo de bit GPIO1_EDGE_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO2_LEVEL_LOW(x)      (x & 0x00000100U)       /**< Macro de campo de bit GPIO2_LEVEL_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO2_LEVEL_HIGH(x)     (x & 0x00000200U)       /**< Macro de campo de bit GPIO2_LEVEL_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO2_EDGE_LOW(x)       (x & 0x00000400U)       /**< Macro de campo de bit GPIO2_EDGE_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO2_EDGE_HIGH(x)      (x & 0x00000800U)       /**< Macro de campo de bit GPIO0_EDGE_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO3_LEVEL_LOW(x)      (x & 0x00001000U)       /**< Macro de campo de bit GPIO3_LEVEL_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO3_LEVEL_HIGH(x)     (x & 0x00002000U)       /**< Macro de campo de bit GPIO3_LEVEL_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO3_EDGE_LOW(x)       (x & 0x00004000U)       /**< Macro de campo de bit GPIO3_EDGE_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO3_EDGE_HIGH(x)      (x & 0x00008000U)       /**< Macro de campo de bit GPIO3_EDGE_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO4_LEVEL_LOW(x)      (x & 0x00010000U)       /**< Macro de campo de bit GPIO4_LEVEL_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO4_LEVEL_HIGH(x)     (x & 0x00020000U)       /**< Macro de campo de bit GPIO4_LEVEL_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO4_EDGE_LOW(x)       (x & 0x00040000U)       /**< Macro de campo de bit GPIO4_EDGE_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO4_EDGE_HIGH(x)      (x & 0x00080000U)       /**< Macro de campo de bit GPIO4_EDGE_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO5_LEVEL_LOW(x)      (x & 0x00100000U)       /**< Macro de campo de bit GPIO5_LEVEL_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO5_LEVEL_HIGH(x)     (x & 0x00200000U)       /**< Macro de campo de bit GPIO5_LEVEL_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO5_EDGE_LOW(x)       (x & 0x00400000U)       /**< Macro de campo de bit GPIO5_EDGE_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO5_EDGE_HIGH(x)      (x & 0x00800000U)       /**< Macro de campo de bit GPIO5_EDGE_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO6_LEVEL_LOW(x)      (x & 0x01000000U)       /**< Macro de campo de bit GPIO6_LEVEL_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO6_LEVEL_HIGH(x)     (x & 0x02000000U)       /**< Macro de campo de bit GPIO6_LEVEL_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO6_EDGE_LOW(x)       (x & 0x04000000U)       /**< Macro de campo de bit GPIO6_EDGE_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO6_EDGE_HIGH(x)      (x & 0x08000000U)       /**< Macro de campo de bit GPIO6_EDGE_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO7_LEVEL_LOW(x)      (x & 0x10000000U)       /**< Macro de campo de bit GPIO7_LEVEL_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO7_LEVEL_HIGH(x)     (x & 0x20000000U)       /**< Macro de campo de bit GPIO7_LEVEL_HIGH registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO7_EDGE_LOW(x)       (x & 0x40000000U)       /**< Macro de campo de bit GPIO7_EDGE_LOW registro PROC1_INTS0 */
#define mIOBANK_PROC1_INTS0_GPIO7_EDGE_HIGH(x)      (x & 0x80000000U)       /**< Macro de campo de bit GPIO7_EDGE_HIGH registro PROC1_INTS0 */

#define mIOBANK_PROC1_INTS1_GPIO8_LEVEL_LOW(x)      (x & 0x00000001U)      /**< Macro de campo de bit GPIO8_LEVEL_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO8_LEVEL_HIGH(x)     (x & 0x00000002U)      /**< Macro de campo de bit GPIO8_LEVEL_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO8_EDGE_LOW(x)       (x & 0x00000004U)      /**< Macro de campo de bit GPIO8_EDGE_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO8_EDGE_HIGH(x)      (x & 0x00000008U)      /**< Macro de campo de bit GPIO8_EDGE_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO9_LEVEL_LOW(x)      (x & 0x00000010U)      /**< Macro de campo de bit GPIO9_LEVEL_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO9_LEVEL_HIGH(x)     (x & 0x00000020U)      /**< Macro de campo de bit GPIO9_LEVEL_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO9_EDGE_LOW(x)       (x & 0x00000040U)      /**< Macro de campo de bit GPIO9_EDGE_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO9_EDGE_HIGH(x)      (x & 0x00000080U)      /**< Macro de campo de bit GPIO9_EDGE_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO10_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO10_LEVEL_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO10_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO10_LEVEL_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO10_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO10_EDGE_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO10_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO10_EDGE_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO11_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO11_LEVEL_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO11_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO11_LEVEL_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO11_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO11_EDGE_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO11_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO11_EDGE_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO12_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO12_LEVEL_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO12_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO12_LEVEL_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO12_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO12_EDGE_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO12_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO12_EDGE_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO13_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO13_LEVEL_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO13_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO13_LEVEL_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO13_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO13_EDGE_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO13_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO13_EDGE_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO14_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO14_LEVEL_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO14_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO14_LEVEL_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO14_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO14_EDGE_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO14_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO14_EDGE_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO15_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO15_LEVEL_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO15_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO15_LEVEL_HIGH registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO15_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO15_EDGE_LOW registro PROC1_INTS1 */
#define mIOBANK_PROC1_INTS1_GPIO15_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO15_EDGE_HIGH registro PROC1_INTS1 */

#define mIOBANK_PROC1_INTS2_GPIO16_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO16_LEVEL_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO16_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO16_LEVEL_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO16_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO16_EDGE_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO16_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO16_EDGE_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO17_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO17_LEVEL_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO17_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO17_LEVEL_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO17_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO17_EDGE_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO17_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO17_EDGE_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO18_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO18_LEVEL_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO18_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO18_LEVEL_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO18_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO18_EDGE_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO18_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO18_EDGE_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO19_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO19_LEVEL_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO19_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO19_LEVEL_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO19_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO19_EDGE_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO19_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO19_EDGE_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO20_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO20_LEVEL_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO20_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO20_LEVEL_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO20_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO20_EDGE_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO20_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO20_EDGE_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO21_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO21_LEVEL_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO21_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO21_LEVEL_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO21_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO21_EDGE_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO21_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO21_EDGE_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO22_LEVEL_LOW(x)     (x & 0x01000000U)       /**< Macro de campo de bit GPIO22_LEVEL_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO22_LEVEL_HIGH(x)    (x & 0x02000000U)       /**< Macro de campo de bit GPIO22_LEVEL_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO22_EDGE_LOW(x)      (x & 0x04000000U)       /**< Macro de campo de bit GPIO22_EDGE_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO22_EDGE_HIGH(x)     (x & 0x08000000U)       /**< Macro de campo de bit GPIO22_EDGE_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO23_LEVEL_LOW(x)     (x & 0x10000000U)       /**< Macro de campo de bit GPIO23_LEVEL_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO23_LEVEL_HIGH(x)    (x & 0x20000000U)       /**< Macro de campo de bit GPIO23_LEVEL_HIGH registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO23_EDGE_LOW(x)      (x & 0x40000000U)       /**< Macro de campo de bit GPIO23_EDGE_LOW registro PROC1_INTS2 */
#define mIOBANK_PROC1_INTS2_GPIO23_EDGE_HIGH(x)     (x & 0x80000000U)       /**< Macro de campo de bit GPIO23_EDGE_HIGH registro PROC1_INTS2 */

#define mIOBANK_PROC1_INTS3_GPIO24_LEVEL_LOW(x)     (x & 0x00000001U)       /**< Macro de campo de bit GPIO24_LEVEL_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO24_LEVEL_HIGH(x)    (x & 0x00000002U)       /**< Macro de campo de bit GPIO24_LEVEL_HIGH registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO24_EDGE_LOW(x)      (x & 0x00000004U)       /**< Macro de campo de bit GPIO24_EDGE_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO24_EDGE_HIGH(x)     (x & 0x00000008U)       /**< Macro de campo de bit GPIO24_EDGE_HIGH registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO25_LEVEL_LOW(x)     (x & 0x00000010U)       /**< Macro de campo de bit GPIO25_LEVEL_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO25_LEVEL_HIGH(x)    (x & 0x00000020U)       /**< Macro de campo de bit GPIO25_LEVEL_HIGH registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO25_EDGE_LOW(x)      (x & 0x00000040U)       /**< Macro de campo de bit GPIO25_EDGE_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO25_EDGE_HIGH(x)     (x & 0x00000080U)       /**< Macro de campo de bit GPIO25_EDGE_HIGH registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO26_LEVEL_LOW(x)     (x & 0x00000100U)       /**< Macro de campo de bit GPIO26_LEVEL_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO26_LEVEL_HIGH(x)    (x & 0x00000200U)       /**< Macro de campo de bit GPIO26_LEVEL_HIGH registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO26_EDGE_LOW(x)      (x & 0x00000400U)       /**< Macro de campo de bit GPIO26_EDGE_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO26_EDGE_HIGH(x)     (x & 0x00000800U)       /**< Macro de campo de bit GPIO26_EDGE_HIGH registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO27_LEVEL_LOW(x)     (x & 0x00001000U)       /**< Macro de campo de bit GPIO27_LEVEL_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO27_LEVEL_HIGH(x)    (x & 0x00002000U)       /**< Macro de campo de bit GPIO27_LEVEL_HIGH registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO27_EDGE_LOW(x)      (x & 0x00004000U)       /**< Macro de campo de bit GPIO27_EDGE_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO27_EDGE_HIGH(x)     (x & 0x00008000U)       /**< Macro de campo de bit GPIO27_EDGE_HIGH registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO28_LEVEL_LOW(x)     (x & 0x00010000U)       /**< Macro de campo de bit GPIO28_LEVEL_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO28_LEVEL_HIGH(x)    (x & 0x00020000U)       /**< Macro de campo de bit GPIO28_LEVEL_HIGH registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO28_EDGE_LOW(x)      (x & 0x00040000U)       /**< Macro de campo de bit GPIO28_EDGE_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO28_EDGE_HIGH(x)     (x & 0x00080000U)       /**< Macro de campo de bit GPIO28_EDGE_HIGH registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO29_LEVEL_LOW(x)     (x & 0x00100000U)       /**< Macro de campo de bit GPIO29_LEVEL_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO29_LEVEL_HIGH(x)    (x & 0x00200000U)       /**< Macro de campo de bit GPIO29_LEVEL_HIGH registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO29_EDGE_LOW(x)      (x & 0x00400000U)       /**< Macro de campo de bit GPIO29_EDGE_LOW registro PROC1_INTS3 */
#define mIOBANK_PROC1_INTS3_GPIO29_EDGE_HIGH(x)     (x & 0x00800000U)       /**< Macro de campo de bit GPIO29_EDGE_HIGH registro PROC1_INTS3 */

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

#define rIOBANK0_GPIO0_STATUS sIOBANK0.GPIO0_STATUS.WORD                                    /**< Acceder al registro completo GPIO0_STATUS */
#define bIOBANK0_GPIO0_OUTFROMPERI sIOBANK0.GPIO0_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO0_STATUS */
#define bIOBANK0_GPIO0_OUTTOPAD sIOBANK0.GPIO0_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO0_STATUS */
#define bIOBANK0_GPIO0_OEFROMPERI sIOBANK0.GPIO0_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO0_STATUS */
#define bIOBANK0_GPIO0_OETOPAD sIOBANK0.GPIO0_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO0_STATUS */
#define bIOBANK0_GPIO0_INFROMPAD sIOBANK0.GPIO0_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO0_STATUS */
#define bIOBANK0_GPIO0_INTOPERI sIOBANK0.GPIO0_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO0_STATUS */
#define bIOBANK0_GPIO0_IRQFROMPAD sIOBANK0.GPIO0_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO0_STATUS */
#define bIOBANK0_GPIO0_IRQTOPROC sIOBANK0.GPIO0_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO0_STATUS */

#define rIOBANK0_GPIO1_STATUS sIOBANK0.GPIO1_STATUS.WORD                                    /**< Acceder al registro completo GPIO1_STATUS */
#define bIOBANK0_GPIO1_OUTFROMPERI sIOBANK0.GPIO1_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO1_STATUS */
#define bIOBANK0_GPIO1_OUTTOPAD sIOBANK0.GPIO1_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO1_STATUS */
#define bIOBANK0_GPIO1_OEFROMPERI sIOBANK0.GPIO1_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO1_STATUS */
#define bIOBANK0_GPIO1_OETOPAD sIOBANK0.GPIO1_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO1_STATUS */
#define bIOBANK0_GPIO1_INFROMPAD sIOBANK0.GPIO1_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO1_STATUS */
#define bIOBANK0_GPIO1_INTOPERI sIOBANK0.GPIO1_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO1_STATUS */
#define bIOBANK0_GPIO1_IRQFROMPAD sIOBANK0.GPIO1_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO1_STATUS */
#define bIOBANK0_GPIO1_IRQTOPROC sIOBANK0.GPIO1_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO1_STATUS */

#define rIOBANK0_GPIO2_STATUS sIOBANK0.GPIO2_STATUS.WORD                                    /**< Acceder al registro completo GPIO2_STATUS */
#define bIOBANK0_GPIO2_OUTFROMPERI sIOBANK0.GPIO2_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO2_STATUS */
#define bIOBANK0_GPIO2_OUTTOPAD sIOBANK0.GPIO2_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO2_STATUS */
#define bIOBANK0_GPIO2_OEFROMPERI sIOBANK0.GPIO2_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO2_STATUS */
#define bIOBANK0_GPIO2_OETOPAD sIOBANK0.GPIO2_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO2_STATUS */
#define bIOBANK0_GPIO2_INFROMPAD sIOBANK0.GPIO2_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO2_STATUS */
#define bIOBANK0_GPIO2_INTOPERI sIOBANK0.GPIO2_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO2_STATUS */
#define bIOBANK0_GPIO2_IRQFROMPAD sIOBANK0.GPIO2_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO2_STATUS */
#define bIOBANK0_GPIO2_IRQTOPROC sIOBANK0.GPIO2_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO2_STATUS */

#define rIOBANK0_GPIO3_STATUS sIOBANK0.GPIO3_STATUS.WORD                                    /**< Acceder al registro completo GPIO3_STATUS */
#define bIOBANK0_GPIO3_OUTFROMPERI sIOBANK0.GPIO3_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO3_STATUS */
#define bIOBANK0_GPIO3_OUTTOPAD sIOBANK0.GPIO3_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO3_STATUS */
#define bIOBANK0_GPIO3_OEFROMPERI sIOBANK0.GPIO3_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO3_STATUS */
#define bIOBANK0_GPIO3_OETOPAD sIOBANK0.GPIO3_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO3_STATUS */
#define bIOBANK0_GPIO3_INFROMPAD sIOBANK0.GPIO3_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO3_STATUS */
#define bIOBANK0_GPIO3_INTOPERI sIOBANK0.GPIO3_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO3_STATUS */
#define bIOBANK0_GPIO3_IRQFROMPAD sIOBANK0.GPIO3_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO3_STATUS */
#define bIOBANK0_GPIO3_IRQTOPROC sIOBANK0.GPIO3_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO3_STATUS */

#define rIOBANK0_GPIO4_STATUS sIOBANK0.GPIO4_STATUS.WORD                                    /**< Acceder al registro completo GPIO4_STATUS */
#define bIOBANK0_GPIO4_OUTFROMPERI sIOBANK0.GPIO4_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO4_STATUS */
#define bIOBANK0_GPIO4_OUTTOPAD sIOBANK0.GPIO4_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO4_STATUS */
#define bIOBANK0_GPIO4_OEFROMPERI sIOBANK0.GPIO4_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO4_STATUS */
#define bIOBANK0_GPIO4_OETOPAD sIOBANK0.GPIO4_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO4_STATUS */
#define bIOBANK0_GPIO4_INFROMPAD sIOBANK0.GPIO4_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO4_STATUS */
#define bIOBANK0_GPIO4_INTOPERI sIOBANK0.GPIO4_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO4_STATUS */
#define bIOBANK0_GPIO4_IRQFROMPAD sIOBANK0.GPIO4_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO4_STATUS */
#define bIOBANK0_GPIO4_IRQTOPROC sIOBANK0.GPIO4_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO4_STATUS */

#define rIOBANK0_GPIO5_STATUS sIOBANK0.GPIO5_STATUS.WORD                                    /**< Acceder al registro completo GPIO5_STATUS */
#define bIOBANK0_GPIO5_OUTFROMPERI sIOBANK0.GPIO5_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO5_STATUS */
#define bIOBANK0_GPIO5_OUTTOPAD sIOBANK0.GPIO5_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO5_STATUS */
#define bIOBANK0_GPIO5_OEFROMPERI sIOBANK0.GPIO5_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO5_STATUS */
#define bIOBANK0_GPIO5_OETOPAD sIOBANK0.GPIO5_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO5_STATUS */
#define bIOBANK0_GPIO5_INFROMPAD sIOBANK0.GPIO5_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO5_STATUS */
#define bIOBANK0_GPIO5_INTOPERI sIOBANK0.GPIO5_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO5_STATUS */
#define bIOBANK0_GPIO5_IRQFROMPAD sIOBANK0.GPIO5_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO5_STATUS */
#define bIOBANK0_GPIO5_IRQTOPROC sIOBANK0.GPIO5_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO5_STATUS */

#define rIOBANK0_GPIO6_STATUS sIOBANK0.GPIO6_STATUS.WORD                                    /**< Acceder al registro completo GPIO6_STATUS */
#define bIOBANK0_GPIO6_OUTFROMPERI sIOBANK0.GPIO6_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO6_STATUS */
#define bIOBANK0_GPIO6_OUTTOPAD sIOBANK0.GPIO6_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO6_STATUS */
#define bIOBANK0_GPIO6_OEFROMPERI sIOBANK0.GPIO6_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO6_STATUS */
#define bIOBANK0_GPIO6_OETOPAD sIOBANK0.GPIO6_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO6_STATUS */
#define bIOBANK0_GPIO6_INFROMPAD sIOBANK0.GPIO6_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO6_STATUS */
#define bIOBANK0_GPIO6_INTOPERI sIOBANK0.GPIO6_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO6_STATUS */
#define bIOBANK0_GPIO6_IRQFROMPAD sIOBANK0.GPIO6_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO6_STATUS */
#define bIOBANK0_GPIO6_IRQTOPROC sIOBANK0.GPIO6_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO6_STATUS */

#define rIOBANK0_GPIO7_STATUS sIOBANK0.GPIO7_STATUS.WORD                                    /**< Acceder al registro completo GPIO7_STATUS */
#define bIOBANK0_GPIO7_OUTFROMPERI sIOBANK0.GPIO7_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO7_STATUS */
#define bIOBANK0_GPIO7_OUTTOPAD sIOBANK0.GPIO7_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO7_STATUS */
#define bIOBANK0_GPIO7_OEFROMPERI sIOBANK0.GPIO7_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO7_STATUS */
#define bIOBANK0_GPIO7_OETOPAD sIOBANK0.GPIO7_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO7_STATUS */
#define bIOBANK0_GPIO7_INFROMPAD sIOBANK0.GPIO7_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO7_STATUS */
#define bIOBANK0_GPIO7_INTOPERI sIOBANK0.GPIO7_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO7_STATUS */
#define bIOBANK0_GPIO7_IRQFROMPAD sIOBANK0.GPIO7_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO7_STATUS */
#define bIOBANK0_GPIO7_IRQTOPROC sIOBANK0.GPIO7_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO7_STATUS */

#define rIOBANK0_GPIO8_STATUS sIOBANK0.GPIO8_STATUS.WORD                                    /**< Acceder al registro completo GPIO8_STATUS */
#define bIOBANK0_GPIO8_OUTFROMPERI sIOBANK0.GPIO8_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO8_STATUS */
#define bIOBANK0_GPIO8_OUTTOPAD sIOBANK0.GPIO8_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO8_STATUS */
#define bIOBANK0_GPIO8_OEFROMPERI sIOBANK0.GPIO8_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO8_STATUS */
#define bIOBANK0_GPIO8_OETOPAD sIOBANK0.GPIO8_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO0_STATUS */
#define bIOBANK0_GPIO8_INFROMPAD sIOBANK0.GPIO8_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO8_STATUS */
#define bIOBANK0_GPIO8_INTOPERI sIOBANK0.GPIO8_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO8_STATUS */
#define bIOBANK0_GPIO8_IRQFROMPAD sIOBANK0.GPIO8_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO8_STATUS */
#define bIOBANK0_GPIO8_IRQTOPROC sIOBANK0.GPIO8_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO8_STATUS */

#define rIOBANK0_GPIO9_STATUS sIOBANK0.GPIO9_STATUS.WORD                                    /**< Acceder al registro completo GPIO9_STATUS */
#define bIOBANK0_GPIO9_OUTFROMPERI sIOBANK0.GPIO9_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO9_STATUS */
#define bIOBANK0_GPIO9_OUTTOPAD sIOBANK0.GPIO9_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO9_STATUS */
#define bIOBANK0_GPIO9_OEFROMPERI sIOBANK0.GPIO9_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO9_STATUS */
#define bIOBANK0_GPIO9_OETOPAD sIOBANK0.GPIO9_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO9_STATUS */
#define bIOBANK0_GPIO9_INFROMPAD sIOBANK0.GPIO9_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO9_STATUS */
#define bIOBANK0_GPIO9_INTOPERI sIOBANK0.GPIO9_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO9_STATUS */
#define bIOBANK0_GPIO9_IRQFROMPAD sIOBANK0.GPIO9_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO9_STATUS */
#define bIOBANK0_GPIO9_IRQTOPROC sIOBANK0.GPIO9_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO9_STATUS */

#define rIOBANK0_GPIO10_STATUS sIOBANK0.GPIO10_STATUS.WORD                                    /**< Acceder al registro completo GPIO10_STATUS */
#define bIOBANK0_GPIO10_OUTFROMPERI sIOBANK0.GPIO10_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO10_STATUS */
#define bIOBANK0_GPIO10_OUTTOPAD sIOBANK0.GPIO10_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO10_STATUS */
#define bIOBANK0_GPIO10_OEFROMPERI sIOBANK0.GPIO10_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO10_STATUS */
#define bIOBANK0_GPIO10_OETOPAD sIOBANK0.GPIO10_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO10_STATUS */
#define bIOBANK0_GPIO10_INFROMPAD sIOBANK0.GPIO10_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO10_STATUS */
#define bIOBANK0_GPIO10_INTOPERI sIOBANK0.GPIO10_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO10_STATUS */
#define bIOBANK0_GPIO10_IRQFROMPAD sIOBANK0.GPIO10_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO10_STATUS */
#define bIOBANK0_GPIO10_IRQTOPROC sIOBANK0.GPIO10_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO10_STATUS */

#define rIOBANK0_GPIO11_STATUS sIOBANK0.GPIO11_STATUS.WORD                                    /**< Acceder al registro completo GPIO11_STATUS */
#define bIOBANK0_GPIO11_OUTFROMPERI sIOBANK0.GPIO11_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO11_STATUS */
#define bIOBANK0_GPIO11_OUTTOPAD sIOBANK0.GPIO11_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO11_STATUS */
#define bIOBANK0_GPIO11_OEFROMPERI sIOBANK0.GPIO11_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO11_STATUS */
#define bIOBANK0_GPIO11_OETOPAD sIOBANK0.GPIO11_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO11_STATUS */
#define bIOBANK0_GPIO11_INFROMPAD sIOBANK0.GPIO11_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO11_STATUS */
#define bIOBANK0_GPIO11_INTOPERI sIOBANK0.GPIO11_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO11_STATUS */
#define bIOBANK0_GPIO11_IRQFROMPAD sIOBANK0.GPIO11_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO11_STATUS */
#define bIOBANK0_GPIO11_IRQTOPROC sIOBANK0.GPIO11_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO11_STATUS */

#define rIOBANK0_GPIO12_STATUS sIOBANK0.GPIO12_STATUS.WORD                                    /**< Acceder al registro completo GPIO12_STATUS */
#define bIOBANK0_GPIO12_OUTFROMPERI sIOBANK0.GPIO12_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO12_STATUS */
#define bIOBANK0_GPIO12_OUTTOPAD sIOBANK0.GPIO12_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO12_STATUS */
#define bIOBANK0_GPIO12_OEFROMPERI sIOBANK0.GPIO12_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO12_STATUS */
#define bIOBANK0_GPIO12_OETOPAD sIOBANK0.GPIO12_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO12_STATUS */
#define bIOBANK0_GPIO12_INFROMPAD sIOBANK0.GPIO12_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO12_STATUS */
#define bIOBANK0_GPIO12_INTOPERI sIOBANK0.GPIO12_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO12_STATUS */
#define bIOBANK0_GPIO12_IRQFROMPAD sIOBANK0.GPIO12_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO12_STATUS */
#define bIOBANK0_GPIO12_IRQTOPROC sIOBANK0.GPIO12_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO12_STATUS */

#define rIOBANK0_GPIO13_STATUS sIOBANK0.GPIO13_STATUS.WORD                                    /**< Acceder al registro completo GPIO13_STATUS */
#define bIOBANK0_GPIO13_OUTFROMPERI sIOBANK0.GPIO13_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO13_STATUS */
#define bIOBANK0_GPIO13_OUTTOPAD sIOBANK0.GPIO13_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO13_STATUS */
#define bIOBANK0_GPIO13_OEFROMPERI sIOBANK0.GPIO13_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO13_STATUS */
#define bIOBANK0_GPIO13_OETOPAD sIOBANK0.GPIO13_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO13_STATUS */
#define bIOBANK0_GPIO13_INFROMPAD sIOBANK0.GPIO13_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO13_STATUS */
#define bIOBANK0_GPIO13_INTOPERI sIOBANK0.GPIO13_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO13_STATUS */
#define bIOBANK0_GPIO13_IRQFROMPAD sIOBANK0.GPIO13_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO13_STATUS */
#define bIOBANK0_GPIO13_IRQTOPROC sIOBANK0.GPIO13_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO13_STATUS */

#define rIOBANK0_GPIO14_STATUS sIOBANK0.GPIO14_STATUS.WORD                                    /**< Acceder al registro completo GPIO14_STATUS */
#define bIOBANK0_GPIO14_OUTFROMPERI sIOBANK0.GPIO14_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO14_STATUS */
#define bIOBANK0_GPIO14_OUTTOPAD sIOBANK0.GPIO14_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO14_STATUS */
#define bIOBANK0_GPIO14_OEFROMPERI sIOBANK0.GPIO14_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO14_STATUS */
#define bIOBANK0_GPIO14_OETOPAD sIOBANK0.GPIO14_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO14_STATUS */
#define bIOBANK0_GPIO14_INFROMPAD sIOBANK0.GPIO14_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO14_STATUS */
#define bIOBANK0_GPIO14_INTOPERI sIOBANK0.GPIO14_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO14_STATUS */
#define bIOBANK0_GPIO14_IRQFROMPAD sIOBANK0.GPIO14_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO14_STATUS */
#define bIOBANK0_GPIO14_IRQTOPROC sIOBANK0.GPIO14_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO14_STATUS */

#define rIOBANK0_GPIO15_STATUS sIOBANK0.GPIO15_STATUS.WORD                                    /**< Acceder al registro completo GPIO15_STATUS */
#define bIOBANK0_GPIO15_OUTFROMPERI sIOBANK0.GPIO15_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO15_STATUS */
#define bIOBANK0_GPIO15_OUTTOPAD sIOBANK0.GPIO15_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO15_STATUS */
#define bIOBANK0_GPIO15_OEFROMPERI sIOBANK0.GPIO15_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO15_STATUS */
#define bIOBANK0_GPIO15_OETOPAD sIOBANK0.GPIO15_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO15_STATUS */
#define bIOBANK0_GPIO15_INFROMPAD sIOBANK0.GPIO15_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO15_STATUS */
#define bIOBANK0_GPIO15_INTOPERI sIOBANK0.GPIO15_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO15_STATUS */
#define bIOBANK0_GPIO15_IRQFROMPAD sIOBANK0.GPIO15_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO15_STATUS */
#define bIOBANK0_GPIO15_IRQTOPROC sIOBANK0.GPIO15_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO15_STATUS */

#define rIOBANK0_GPIO16_STATUS sIOBANK0.GPIO16_STATUS.WORD                                    /**< Acceder al registro completo GPIO16_STATUS */
#define bIOBANK0_GPIO16_OUTFROMPERI sIOBANK0.GPIO16_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO16_STATUS */
#define bIOBANK0_GPIO16_OUTTOPAD sIOBANK0.GPIO16_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO16_STATUS */
#define bIOBANK0_GPIO16_OEFROMPERI sIOBANK0.GPIO16_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO16_STATUS */
#define bIOBANK0_GPIO16_OETOPAD sIOBANK0.GPIO16_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO16_STATUS */
#define bIOBANK0_GPIO16_INFROMPAD sIOBANK0.GPIO16_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO16_STATUS */
#define bIOBANK0_GPIO16_INTOPERI sIOBANK0.GPIO16_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO16_STATUS */
#define bIOBANK0_GPIO16_IRQFROMPAD sIOBANK0.GPIO16_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO16_STATUS */
#define bIOBANK0_GPIO16_IRQTOPROC sIOBANK0.GPIO16_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO16_STATUS */

#define rIOBANK0_GPIO17_STATUS sIOBANK0.GPIO17_STATUS.WORD                                    /**< Acceder al registro completo GPIO17_STATUS */
#define bIOBANK0_GPIO17_OUTFROMPERI sIOBANK0.GPIO17_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO17_STATUS */
#define bIOBANK0_GPIO17_OUTTOPAD sIOBANK0.GPIO17_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO17_STATUS */
#define bIOBANK0_GPIO17_OEFROMPERI sIOBANK0.GPIO17_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO17_STATUS */
#define bIOBANK0_GPIO17_OETOPAD sIOBANK0.GPIO17_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO17_STATUS */
#define bIOBANK0_GPIO17_INFROMPAD sIOBANK0.GPIO17_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO17_STATUS */
#define bIOBANK0_GPIO17_INTOPERI sIOBANK0.GPIO17_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO17_STATUS */
#define bIOBANK0_GPIO17_IRQFROMPAD sIOBANK0.GPIO17_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO17_STATUS */
#define bIOBANK0_GPIO17_IRQTOPROC sIOBANK0.GPIO17_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO17_STATUS */

#define rIOBANK0_GPIO18_STATUS sIOBANK0.GPIO18_STATUS.WORD                                    /**< Acceder al registro completo GPIO18_STATUS */
#define bIOBANK0_GPIO18_OUTFROMPERI sIOBANK0.GPIO18_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO18_STATUS */
#define bIOBANK0_GPIO18_OUTTOPAD sIOBANK0.GPIO18_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO18_STATUS */
#define bIOBANK0_GPIO18_OEFROMPERI sIOBANK0.GPIO18_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO18_STATUS */
#define bIOBANK0_GPIO18_OETOPAD sIOBANK0.GPIO18_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO18_STATUS */
#define bIOBANK0_GPIO18_INFROMPAD sIOBANK0.GPIO18_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO18_STATUS */
#define bIOBANK0_GPIO18_INTOPERI sIOBANK0.GPIO18_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO18_STATUS */
#define bIOBANK0_GPIO18_IRQFROMPAD sIOBANK0.GPIO18_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO18_STATUS */
#define bIOBANK0_GPIO18_IRQTOPROC sIOBANK0.GPIO18_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO18_STATUS */

#define rIOBANK0_GPIO19_STATUS sIOBANK0.GPIO19_STATUS.WORD                                    /**< Acceder al registro completo GPIO19_STATUS */
#define bIOBANK0_GPIO19_OUTFROMPERI sIOBANK0.GPIO19_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO19_STATUS */
#define bIOBANK0_GPIO19_OUTTOPAD sIOBANK0.GPIO19_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO19_STATUS */
#define bIOBANK0_GPIO19_OEFROMPERI sIOBANK0.GPIO19_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO19_STATUS */
#define bIOBANK0_GPIO19_OETOPAD sIOBANK0.GPIO19_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO19_STATUS */
#define bIOBANK0_GPIO19_INFROMPAD sIOBANK0.GPIO19_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO19_STATUS */
#define bIOBANK0_GPIO19_INTOPERI sIOBANK0.GPIO19_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO19_STATUS */
#define bIOBANK0_GPIO19_IRQFROMPAD sIOBANK0.GPIO19_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO19_STATUS */
#define bIOBANK0_GPIO19_IRQTOPROC sIOBANK0.GPIO19_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO19_STATUS */

#define rIOBANK0_GPIO20_STATUS sIOBANK0.GPIO20_STATUS.WORD                                    /**< Acceder al registro completo GPIO20_STATUS */
#define bIOBANK0_GPIO20_OUTFROMPERI sIOBANK0.GPIO20_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO20_STATUS */
#define bIOBANK0_GPIO20_OUTTOPAD sIOBANK0.GPIO20_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO20_STATUS */
#define bIOBANK0_GPIO20_OEFROMPERI sIOBANK0.GPIO20_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO20_STATUS */
#define bIOBANK0_GPIO20_OETOPAD sIOBANK0.GPIO20_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO20_STATUS */
#define bIOBANK0_GPIO20_INFROMPAD sIOBANK0.GPIO20_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO20_STATUS */
#define bIOBANK0_GPIO20_INTOPERI sIOBANK0.GPIO20_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO20_STATUS */
#define bIOBANK0_GPIO20_IRQFROMPAD sIOBANK0.GPIO20_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO20_STATUS */
#define bIOBANK0_GPIO20_IRQTOPROC sIOBANK0.GPIO20_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO20_STATUS */

#define rIOBANK0_GPIO21_STATUS sIOBANK0.GPIO21_STATUS.WORD                                    /**< Acceder al registro completo GPIO21_STATUS */
#define bIOBANK0_GPIO21_OUTFROMPERI sIOBANK0.GPIO21_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO21_STATUS */
#define bIOBANK0_GPIO21_OUTTOPAD sIOBANK0.GPIO21_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO21_STATUS */
#define bIOBANK0_GPIO21_OEFROMPERI sIOBANK0.GPIO21_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO21_STATUS */
#define bIOBANK0_GPIO21_OETOPAD sIOBANK0.GPIO21_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO21_STATUS */
#define bIOBANK0_GPIO21_INFROMPAD sIOBANK0.GPIO21_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO21_STATUS */
#define bIOBANK0_GPIO21_INTOPERI sIOBANK0.GPIO21_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO21_STATUS */
#define bIOBANK0_GPIO21_IRQFROMPAD sIOBANK0.GPIO21_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO21_STATUS */
#define bIOBANK0_GPIO21_IRQTOPROC sIOBANK0.GPIO21_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO21_STATUS */

#define rIOBANK0_GPIO22_STATUS sIOBANK0.GPIO22_STATUS.WORD                                    /**< Acceder al registro completo GPIO22_STATUS */
#define bIOBANK0_GPIO22_OUTFROMPERI sIOBANK0.GPIO22_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO22_STATUS */
#define bIOBANK0_GPIO22_OUTTOPAD sIOBANK0.GPIO22_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO22_STATUS */
#define bIOBANK0_GPIO22_OEFROMPERI sIOBANK0.GPIO22_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO22_STATUS */
#define bIOBANK0_GPIO22_OETOPAD sIOBANK0.GPIO22_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO22_STATUS */
#define bIOBANK0_GPIO22_INFROMPAD sIOBANK0.GPIO22_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO22_STATUS */
#define bIOBANK0_GPIO22_INTOPERI sIOBANK0.GPIO22_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO22_STATUS */
#define bIOBANK0_GPIO22_IRQFROMPAD sIOBANK0.GPIO22_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO22_STATUS */
#define bIOBANK0_GPIO22_IRQTOPROC sIOBANK0.GPIO22_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO22_STATUS */

#define rIOBANK0_GPIO23_STATUS sIOBANK0.GPIO23_STATUS.WORD                                    /**< Acceder al registro completo GPIO23_STATUS */
#define bIOBANK0_GPIO23_OUTFROMPERI sIOBANK0.GPIO23_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO23_STATUS */
#define bIOBANK0_GPIO23_OUTTOPAD sIOBANK0.GPIO23_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO23_STATUS */
#define bIOBANK0_GPIO23_OEFROMPERI sIOBANK0.GPIO23_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO23_STATUS */
#define bIOBANK0_GPIO23_OETOPAD sIOBANK0.GPIO23_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO23_STATUS */
#define bIOBANK0_GPIO23_INFROMPAD sIOBANK0.GPIO23_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO23_STATUS */
#define bIOBANK0_GPIO23_INTOPERI sIOBANK0.GPIO23_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO23_STATUS */
#define bIOBANK0_GPIO23_IRQFROMPAD sIOBANK0.GPIO23_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO23_STATUS */
#define bIOBANK0_GPIO23_IRQTOPROC sIOBANK0.GPIO23_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO23_STATUS */

#define rIOBANK0_GPIO24_STATUS sIOBANK0.GPIO24_STATUS.WORD                                    /**< Acceder al registro completo GPIO24_STATUS */
#define bIOBANK0_GPIO24_OUTFROMPERI sIOBANK0.GPIO24_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO24_STATUS */
#define bIOBANK0_GPIO24_OUTTOPAD sIOBANK0.GPIO24_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO24_STATUS */
#define bIOBANK0_GPIO24_OEFROMPERI sIOBANK0.GPIO24_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO24_STATUS */
#define bIOBANK0_GPIO24_OETOPAD sIOBANK0.GPIO24_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO24_STATUS */
#define bIOBANK0_GPIO24_INFROMPAD sIOBANK0.GPIO24_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO24_STATUS */
#define bIOBANK0_GPIO24_INTOPERI sIOBANK0.GPIO24_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO24_STATUS */
#define bIOBANK0_GPIO24_IRQFROMPAD sIOBANK0.GPIO24_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO24_STATUS */
#define bIOBANK0_GPIO24_IRQTOPROC sIOBANK0.GPIO24_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO24_STATUS */

#define rIOBANK0_GPIO25_STATUS sIOBANK0.GPIO25_STATUS.WORD                                    /**< Acceder al registro completo GPIO25_STATUS */
#define bIOBANK0_GPIO25_OUTFROMPERI sIOBANK0.GPIO25_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO25_STATUS */
#define bIOBANK0_GPIO25_OUTTOPAD sIOBANK0.GPIO25_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO25_STATUS */
#define bIOBANK0_GPIO25_OEFROMPERI sIOBANK0.GPIO25_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO25_STATUS */
#define bIOBANK0_GPIO25_OETOPAD sIOBANK0.GPIO25_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO25_STATUS */
#define bIOBANK0_GPIO25_INFROMPAD sIOBANK0.GPIO25_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO25_STATUS */
#define bIOBANK0_GPIO25_INTOPERI sIOBANK0.GPIO25_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO25_STATUS */
#define bIOBANK0_GPIO25_IRQFROMPAD sIOBANK0.GPIO25_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO25_STATUS */
#define bIOBANK0_GPIO25_IRQTOPROC sIOBANK0.GPIO25_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO25_STATUS */

#define rIOBANK0_GPIO26_STATUS sIOBANK0.GPIO26_STATUS.WORD                                    /**< Acceder al registro completo GPIO26_STATUS */
#define bIOBANK0_GPIO26_OUTFROMPERI sIOBANK0.GPIO26_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO26_STATUS */
#define bIOBANK0_GPIO26_OUTTOPAD sIOBANK0.GPIO26_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO26_STATUS */
#define bIOBANK0_GPIO26_OEFROMPERI sIOBANK0.GPIO26_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO26_STATUS */
#define bIOBANK0_GPIO26_OETOPAD sIOBANK0.GPIO26_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO26_STATUS */
#define bIOBANK0_GPIO26_INFROMPAD sIOBANK0.GPIO26_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO26_STATUS */
#define bIOBANK0_GPIO26_INTOPERI sIOBANK0.GPIO26_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO26_STATUS */
#define bIOBANK0_GPIO26_IRQFROMPAD sIOBANK0.GPIO26_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO26_STATUS */
#define bIOBANK0_GPIO26_IRQTOPROC sIOBANK0.GPIO26_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO26_STATUS */

#define rIOBANK0_GPIO27_STATUS sIOBANK0.GPIO27_STATUS.WORD                                    /**< Acceder al registro completo GPIO27_STATUS */
#define bIOBANK0_GPIO27_OUTFROMPERI sIOBANK0.GPIO27_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO27_STATUS */
#define bIOBANK0_GPIO27_OUTTOPAD sIOBANK0.GPIO27_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO27_STATUS */
#define bIOBANK0_GPIO27_OEFROMPERI sIOBANK0.GPIO27_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO27_STATUS */
#define bIOBANK0_GPIO27_OETOPAD sIOBANK0.GPIO27_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO27_STATUS */
#define bIOBANK0_GPIO27_INFROMPAD sIOBANK0.GPIO27_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO27_STATUS */
#define bIOBANK0_GPIO27_INTOPERI sIOBANK0.GPIO27_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO27_STATUS */
#define bIOBANK0_GPIO27_IRQFROMPAD sIOBANK0.GPIO27_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO27_STATUS */
#define bIOBANK0_GPIO27_IRQTOPROC sIOBANK0.GPIO27_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO27_STATUS */

#define rIOBANK0_GPIO28_STATUS sIOBANK0.GPIO28_STATUS.WORD                                    /**< Acceder al registro completo GPIO28_STATUS */
#define bIOBANK0_GPIO28_OUTFROMPERI sIOBANK0.GPIO28_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO28_STATUS */
#define bIOBANK0_GPIO28_OUTTOPAD sIOBANK0.GPIO28_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO28_STATUS */
#define bIOBANK0_GPIO28_OEFROMPERI sIOBANK0.GPIO28_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO28_STATUS */
#define bIOBANK0_GPIO28_OETOPAD sIOBANK0.GPIO28_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO28_STATUS */
#define bIOBANK0_GPIO28_INFROMPAD sIOBANK0.GPIO28_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO28_STATUS */
#define bIOBANK0_GPIO28_INTOPERI sIOBANK0.GPIO28_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO28_STATUS */
#define bIOBANK0_GPIO28_IRQFROMPAD sIOBANK0.GPIO28_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO28_STATUS */
#define bIOBANK0_GPIO28_IRQTOPROC sIOBANK0.GPIO28_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO28_STATUS */

#define rIOBANK0_GPIO29_STATUS sIOBANK0.GPIO29_STATUS.WORD                                    /**< Acceder al registro completo GPIO29_STATUS */
#define bIOBANK0_GPIO29_OUTFROMPERI sIOBANK0.GPIO29_STATUS.BITS.OUTFROMPERI                   /**< Acceder al campo de bits OUTFROMPERI del registro GPIO29_STATUS */
#define bIOBANK0_GPIO29_OUTTOPAD sIOBANK0.GPIO29_STATUS.BITS.OUTTOPAD                         /**< Acceder al campo de bits OUTTOPAD del registro GPIO29_STATUS */
#define bIOBANK0_GPIO29_OEFROMPERI sIOBANK0.GPIO29_STATUS.BITS.OEFROMPERI                     /**< Acceder al campo de bits OEFROMPERI del registro GPIO29_STATUS */
#define bIOBANK0_GPIO29_OETOPAD sIOBANK0.GPIO29_STATUS.BITS.OETOPAD                           /**< Acceder al campo de bits OETOPAD del registro GPIO29_STATUS */
#define bIOBANK0_GPIO29_INFROMPAD sIOBANK0.GPIO29_STATUS.BITS.INFROMPAD                       /**< Acceder al campo de bits INFROMPAD del registro GPIO29_STATUS */
#define bIOBANK0_GPIO29_INTOPERI sIOBANK0.GPIO29_STATUS.BITS.INTOPERI                         /**< Acceder al campo de bits INTOPERI del registro GPIO29_STATUS */
#define bIOBANK0_GPIO29_IRQFROMPAD sIOBANK0.GPIO29_STATUS.BITS.IRQFROMPAD                     /**< Acceder al campo de bits IRQFROMPAD del registro GPIO29_STATUS */
#define bIOBANK0_GPIO29_IRQTOPROC sIOBANK0.GPIO29_STATUS.BITS.IRQTOPROC                       /**< Acceder al campo de bits IRQTOPROC del registro GPIO29_STATUS */

/****************************************************************************************
 ****************************************************************************************
 * REGISTROS GPIO CTRL
 ****************************************************************************************
*****************************************************************************************/

#define rIOBANK0_GPIO0_CTRL sIOBANK0.GPIO0_CTRL.WORD                            /**< Acceder al registro completo GPIO0_CTRL */
#define bIOBANK0_GPIO0_FUNCSEL sIOBANK0.GPIO0_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO0_CTRL */
#define bIOBANK0_GPIO0_OUTOVER sIOBANK0.GPIO0_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO0_CTRL */
#define bIOBANK0_GPIO0_OEOVER sIOBANK0.GPIO0_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO0_CTRL */
#define bIOBANK0_GPIO0_INOVER sIOBANK0.GPIO0_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO0_CTRL */
#define bIOBANK0_GPIO0_IRQOVER sIOBANK0.GPIO0_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO0_CTRL */

#define rIOBANK0_GPIO1_CTRL sIOBANK0.GPIO1_CTRL.WORD                            /**< Acceder al registro completo GPIO1_CTRL */
#define bIOBANK0_GPIO1_FUNCSEL sIOBANK0.GPIO1_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO1_CTRL */
#define bIOBANK0_GPIO1_OUTOVER sIOBANK0.GPIO1_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO1_CTRL */
#define bIOBANK0_GPIO1_OEOVER sIOBANK0.GPIO1_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO1_CTRL */
#define bIOBANK0_GPIO1_INOVER sIOBANK0.GPIO1_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO1_CTRL */
#define bIOBANK0_GPIO1_IRQOVER sIOBANK0.GPIO1_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO1_CTRL */

#define rIOBANK0_GPIO2_CTRL sIOBANK0.GPIO2_CTRL.WORD                            /**< Acceder al registro completo GPIO2_CTRL */
#define bIOBANK0_GPIO2_FUNCSEL sIOBANK0.GPIO2_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO2_CTRL */
#define bIOBANK0_GPIO2_OUTOVER sIOBANK0.GPIO2_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO2_CTRL */
#define bIOBANK0_GPIO2_OEOVER sIOBANK0.GPIO2_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO2_CTRL */
#define bIOBANK0_GPIO2_INOVER sIOBANK0.GPIO2_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO2_CTRL */
#define bIOBANK0_GPIO2_IRQOVER sIOBANK0.GPIO2_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO2_CTRL */

#define rIOBANK0_GPIO3_CTRL sIOBANK0.GPIO3_CTRL.WORD                            /**< Acceder al registro completo GPIO3_CTRL */
#define bIOBANK0_GPIO3_FUNCSEL sIOBANK0.GPIO3_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO3_CTRL */
#define bIOBANK0_GPIO3_OUTOVER sIOBANK0.GPIO3_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO3_CTRL */
#define bIOBANK0_GPIO3_OEOVER sIOBANK0.GPIO3_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO3_CTRL */
#define bIOBANK0_GPIO3_INOVER sIOBANK0.GPIO3_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO3_CTRL */
#define bIOBANK0_GPIO3_IRQOVER sIOBANK0.GPIO3_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO3_CTRL */

#define rIOBANK0_GPIO4_CTRL sIOBANK0.GPIO4_CTRL.WORD                            /**< Acceder al registro completo GPIO4_CTRL */
#define bIOBANK0_GPIO4_FUNCSEL sIOBANK0.GPIO4_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO4_CTRL */
#define bIOBANK0_GPIO4_OUTOVER sIOBANK0.GPIO4_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO4_CTRL */
#define bIOBANK0_GPIO4_OEOVER sIOBANK0.GPIO4_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO4_CTRL */
#define bIOBANK0_GPIO4_INOVER sIOBANK0.GPIO4_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO4_CTRL */
#define bIOBANK0_GPIO4_IRQOVER sIOBANK0.GPIO4_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO4_CTRL */

#define rIOBANK0_GPIO5_CTRL sIOBANK0.GPIO5_CTRL.WORD                            /**< Acceder al registro completo GPIO5_CTRL */
#define bIOBANK0_GPIO5_FUNCSEL sIOBANK0.GPIO5_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO5_CTRL */
#define bIOBANK0_GPIO5_OUTOVER sIOBANK0.GPIO5_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO5_CTRL */
#define bIOBANK0_GPIO5_OEOVER sIOBANK0.GPIO5_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO5_CTRL */
#define bIOBANK0_GPIO5_INOVER sIOBANK0.GPIO5_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO5_CTRL */
#define bIOBANK0_GPIO5_IRQOVER sIOBANK0.GPIO5_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO5_CTRL */

#define rIOBANK0_GPIO6_CTRL sIOBANK0.GPIO6_CTRL.WORD                            /**< Acceder al registro completo GPIO6_CTRL */
#define bIOBANK0_GPIO6_FUNCSEL sIOBANK0.GPIO6_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO6_CTRL */
#define bIOBANK0_GPIO6_OUTOVER sIOBANK0.GPIO6_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO6_CTRL */
#define bIOBANK0_GPIO6_OEOVER sIOBANK0.GPIO6_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO6_CTRL */
#define bIOBANK0_GPIO6_INOVER sIOBANK0.GPIO6_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO6_CTRL */
#define bIOBANK0_GPIO6_IRQOVER sIOBANK0.GPIO6_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO6_CTRL */

#define rIOBANK0_GPIO7_CTRL sIOBANK0.GPIO7_CTRL.WORD                            /**< Acceder al registro completo GPIO7_CTRL */
#define bIOBANK0_GPIO7_FUNCSEL sIOBANK0.GPIO7_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO7_CTRL */
#define bIOBANK0_GPIO7_OUTOVER sIOBANK0.GPIO7_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO7_CTRL */
#define bIOBANK0_GPIO7_OEOVER sIOBANK0.GPIO7_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO7_CTRL */
#define bIOBANK0_GPIO7_INOVER sIOBANK0.GPIO7_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO7_CTRL */
#define bIOBANK0_GPIO7_IRQOVER sIOBANK0.GPIO7_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO7_CTRL */

#define rIOBANK0_GPIO8_CTRL sIOBANK0.GPIO8_CTRL.WORD                            /**< Acceder al registro completo GPIO8_CTRL */
#define bIOBANK0_GPIO8_FUNCSEL sIOBANK0.GPIO8_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO8_CTRL */
#define bIOBANK0_GPIO8_OUTOVER sIOBANK0.GPIO8_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO8_CTRL */
#define bIOBANK0_GPIO8_OEOVER sIOBANK0.GPIO8_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO8_CTRL */
#define bIOBANK0_GPIO8_INOVER sIOBANK0.GPIO8_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO8_CTRL */
#define bIOBANK0_GPIO8_IRQOVER sIOBANK0.GPIO8_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO8_CTRL */

#define rIOBANK0_GPIO9_CTRL sIOBANK0.GPIO9_CTRL.WORD                            /**< Acceder al registro completo GPIO9_CTRL */
#define bIOBANK0_GPIO9_FUNCSEL sIOBANK0.GPIO9_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO9_CTRL */
#define bIOBANK0_GPIO9_OUTOVER sIOBANK0.GPIO9_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO9_CTRL */
#define bIOBANK0_GPIO9_OEOVER sIOBANK0.GPIO9_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO9_CTRL */
#define bIOBANK0_GPIO9_INOVER sIOBANK0.GPIO9_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO9_CTRL */
#define bIOBANK0_GPIO9_IRQOVER sIOBANK0.GPIO9_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO9_CTRL */

#define rIOBANK0_GPIO10_CTRL sIOBANK0.GPIO10_CTRL.WORD                            /**< Acceder al registro completo GPIO10_CTRL */
#define bIOBANK0_GPIO10_FUNCSEL sIOBANK0.GPIO10_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO10_CTRL */
#define bIOBANK0_GPIO10_OUTOVER sIOBANK0.GPIO10_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO10_CTRL */
#define bIOBANK0_GPIO10_OEOVER sIOBANK0.GPIO10_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO10_CTRL */
#define bIOBANK0_GPIO10_INOVER sIOBANK0.GPIO10_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO10_CTRL */
#define bIOBANK0_GPIO10_IRQOVER sIOBANK0.GPIO10_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO10_CTRL */

#define rIOBANK0_GPIO11_CTRL sIOBANK0.GPIO11_CTRL.WORD                            /**< Acceder al registro completo GPIO11_CTRL */
#define bIOBANK0_GPIO11_FUNCSEL sIOBANK0.GPIO11_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO11_CTRL */
#define bIOBANK0_GPIO11_OUTOVER sIOBANK0.GPIO11_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO11_CTRL */
#define bIOBANK0_GPIO11_OEOVER sIOBANK0.GPIO11_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO11_CTRL */
#define bIOBANK0_GPIO11_INOVER sIOBANK0.GPIO11_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO11_CTRL */
#define bIOBANK0_GPIO11_IRQOVER sIOBANK0.GPIO11_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO11_CTRL */

#define rIOBANK0_GPIO12_CTRL sIOBANK0.GPIO12_CTRL.WORD                            /**< Acceder al registro completo GPIO12_CTRL */
#define bIOBANK0_GPIO12_FUNCSEL sIOBANK0.GPIO12_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO12_CTRL */
#define bIOBANK0_GPIO12_OUTOVER sIOBANK0.GPIO12_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO12_CTRL */
#define bIOBANK0_GPIO12_OEOVER sIOBANK0.GPIO12_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO12_CTRL */
#define bIOBANK0_GPIO12_INOVER sIOBANK0.GPIO12_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO12_CTRL */
#define bIOBANK0_GPIO12_IRQOVER sIOBANK0.GPIO12_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO12_CTRL */

#define rIOBANK0_GPIO13_CTRL sIOBANK0.GPIO13_CTRL.WORD                            /**< Acceder al registro completo GPIO13_CTRL */
#define bIOBANK0_GPIO13_FUNCSEL sIOBANK0.GPIO13_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO13_CTRL */
#define bIOBANK0_GPIO13_OUTOVER sIOBANK0.GPIO13_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO13_CTRL */
#define bIOBANK0_GPIO13_OEOVER sIOBANK0.GPIO13_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO13_CTRL */
#define bIOBANK0_GPIO13_INOVER sIOBANK0.GPIO13_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO13_CTRL */
#define bIOBANK0_GPIO13_IRQOVER sIOBANK0.GPIO13_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO13_CTRL */

#define rIOBANK0_GPIO14_CTRL sIOBANK0.GPIO14_CTRL.WORD                            /**< Acceder al registro completo GPIO14_CTRL */
#define bIOBANK0_GPIO14_FUNCSEL sIOBANK0.GPIO14_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO14_CTRL */
#define bIOBANK0_GPIO14_OUTOVER sIOBANK0.GPIO14_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO14_CTRL */
#define bIOBANK0_GPIO14_OEOVER sIOBANK0.GPIO14_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO14_CTRL */
#define bIOBANK0_GPIO14_INOVER sIOBANK0.GPIO14_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO14_CTRL */
#define bIOBANK0_GPIO14_IRQOVER sIOBANK0.GPIO14_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO14_CTRL */

#define rIOBANK0_GPIO15_CTRL sIOBANK0.GPIO15_CTRL.WORD                            /**< Acceder al registro completo GPIO15_CTRL */
#define bIOBANK0_GPIO15_FUNCSEL sIOBANK0.GPIO15_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO15_CTRL */
#define bIOBANK0_GPIO15_OUTOVER sIOBANK0.GPIO15_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO15_CTRL */
#define bIOBANK0_GPIO15_OEOVER sIOBANK0.GPIO15_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO15_CTRL */
#define bIOBANK0_GPIO15_INOVER sIOBANK0.GPIO15_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO15_CTRL */
#define bIOBANK0_GPIO15_IRQOVER sIOBANK0.GPIO15_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO15_CTRL */

#define rIOBANK0_GPIO16_CTRL sIOBANK0.GPIO16_CTRL.WORD                            /**< Acceder al registro completo GPIO16_CTRL */
#define bIOBANK0_GPIO16_FUNCSEL sIOBANK0.GPIO16_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO16_CTRL */
#define bIOBANK0_GPIO16_OUTOVER sIOBANK0.GPIO16_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO16_CTRL */
#define bIOBANK0_GPIO16_OEOVER sIOBANK0.GPIO16_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO16_CTRL */
#define bIOBANK0_GPIO16_INOVER sIOBANK0.GPIO16_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO16_CTRL */
#define bIOBANK0_GPIO16_IRQOVER sIOBANK0.GPIO16_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO16_CTRL */

#define rIOBANK0_GPIO17_CTRL sIOBANK0.GPIO17_CTRL.WORD                            /**< Acceder al registro completo GPIO17_CTRL */
#define bIOBANK0_GPIO17_FUNCSEL sIOBANK0.GPIO17_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO17_CTRL */
#define bIOBANK0_GPIO17_OUTOVER sIOBANK0.GPIO17_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO17_CTRL */
#define bIOBANK0_GPIO17_OEOVER sIOBANK0.GPIO17_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO17_CTRL */
#define bIOBANK0_GPIO17_INOVER sIOBANK0.GPIO17_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO17_CTRL */
#define bIOBANK0_GPIO17_IRQOVER sIOBANK0.GPIO17_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO17_CTRL */

#define rIOBANK0_GPIO18_CTRL sIOBANK0.GPIO18_CTRL.WORD                            /**< Acceder al registro completo GPIO18_CTRL */
#define bIOBANK0_GPIO18_FUNCSEL sIOBANK0.GPIO18_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO18_CTRL */
#define bIOBANK0_GPIO18_OUTOVER sIOBANK0.GPIO18_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO18_CTRL */
#define bIOBANK0_GPIO18_OEOVER sIOBANK0.GPIO18_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO18_CTRL */
#define bIOBANK0_GPIO18_INOVER sIOBANK0.GPIO18_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO18_CTRL */
#define bIOBANK0_GPIO18_IRQOVER sIOBANK0.GPIO18_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO18_CTRL */

#define rIOBANK0_GPIO19_CTRL sIOBANK0.GPIO19_CTRL.WORD                            /**< Acceder al registro completo GPIO19_CTRL */
#define bIOBANK0_GPIO19_FUNCSEL sIOBANK0.GPIO19_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO19_CTRL */
#define bIOBANK0_GPIO19_OUTOVER sIOBANK0.GPIO19_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO19_CTRL */
#define bIOBANK0_GPIO19_OEOVER sIOBANK0.GPIO19_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO19_CTRL */
#define bIOBANK0_GPIO19_INOVER sIOBANK0.GPIO19_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO19_CTRL */
#define bIOBANK0_GPIO19_IRQOVER sIOBANK0.GPIO19_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO19_CTRL */

#define rIOBANK0_GPIO20_CTRL sIOBANK0.GPIO20_CTRL.WORD                            /**< Acceder al registro completo GPIO20_CTRL */
#define bIOBANK0_GPIO20_FUNCSEL sIOBANK0.GPIO20_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO20_CTRL */
#define bIOBANK0_GPIO20_OUTOVER sIOBANK0.GPIO20_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO20_CTRL */
#define bIOBANK0_GPIO20_OEOVER sIOBANK0.GPIO20_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO20_CTRL */
#define bIOBANK0_GPIO20_INOVER sIOBANK0.GPIO20_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO20_CTRL */
#define bIOBANK0_GPIO20_IRQOVER sIOBANK0.GPIO20_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO20_CTRL */

#define rIOBANK0_GPIO21_CTRL sIOBANK0.GPIO21_CTRL.WORD                            /**< Acceder al registro completo GPIO21_CTRL */
#define bIOBANK0_GPIO21_FUNCSEL sIOBANK0.GPIO21_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO21_CTRL */
#define bIOBANK0_GPIO21_OUTOVER sIOBANK0.GPIO21_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO21_CTRL */
#define bIOBANK0_GPIO21_OEOVER sIOBANK0.GPIO21_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO21_CTRL */
#define bIOBANK0_GPIO21_INOVER sIOBANK0.GPIO21_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO21_CTRL */
#define bIOBANK0_GPIO21_IRQOVER sIOBANK0.GPIO21_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO21_CTRL */

#define rIOBANK0_GPIO22_CTRL sIOBANK0.GPIO22_CTRL.WORD                            /**< Acceder al registro completo GPIO22_CTRL */
#define bIOBANK0_GPIO22_FUNCSEL sIOBANK0.GPIO22_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO22_CTRL */
#define bIOBANK0_GPIO22_OUTOVER sIOBANK0.GPIO22_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO22_CTRL */
#define bIOBANK0_GPIO22_OEOVER sIOBANK0.GPIO22_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO22_CTRL */
#define bIOBANK0_GPIO22_INOVER sIOBANK0.GPIO22_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO22_CTRL */
#define bIOBANK0_GPIO22_IRQOVER sIOBANK0.GPIO22_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO22_CTRL */

#define rIOBANK0_GPIO23_CTRL sIOBANK0.GPIO23_CTRL.WORD                            /**< Acceder al registro completo GPIO23_CTRL */
#define bIOBANK0_GPIO23_FUNCSEL sIOBANK0.GPIO23_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO23_CTRL */
#define bIOBANK0_GPIO23_OUTOVER sIOBANK0.GPIO23_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO23_CTRL */
#define bIOBANK0_GPIO23_OEOVER sIOBANK0.GPIO23_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO23_CTRL */
#define bIOBANK0_GPIO23_INOVER sIOBANK0.GPIO23_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO23_CTRL */
#define bIOBANK0_GPIO23_IRQOVER sIOBANK0.GPIO23_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO23_CTRL */

#define rIOBANK0_GPIO24_CTRL sIOBANK0.GPIO24_CTRL.WORD                            /**< Acceder al registro completo GPIO24_CTRL */
#define bIOBANK0_GPIO24_FUNCSEL sIOBANK0.GPIO24_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO24_CTRL */
#define bIOBANK0_GPIO24_OUTOVER sIOBANK0.GPIO24_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO24_CTRL */
#define bIOBANK0_GPIO24_OEOVER sIOBANK0.GPIO24_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO24_CTRL */
#define bIOBANK0_GPIO24_INOVER sIOBANK0.GPIO24_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO24_CTRL */
#define bIOBANK0_GPIO24_IRQOVER sIOBANK0.GPIO24_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO24_CTRL */

#define rIOBANK0_GPIO25_CTRL sIOBANK0.GPIO25_CTRL.WORD                            /**< Acceder al registro completo GPIO25_CTRL */
#define bIOBANK0_GPIO25_FUNCSEL sIOBANK0.GPIO25_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO25_CTRL */
#define bIOBANK0_GPIO25_OUTOVER sIOBANK0.GPIO25_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO25_CTRL */
#define bIOBANK0_GPIO25_OEOVER sIOBANK0.GPIO25_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO25_CTRL */
#define bIOBANK0_GPIO25_INOVER sIOBANK0.GPIO25_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO25_CTRL */
#define bIOBANK0_GPIO25_IRQOVER sIOBANK0.GPIO25_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO25_CTRL */

#define rIOBANK0_GPIO26_CTRL sIOBANK0.GPIO26_CTRL.WORD                            /**< Acceder al registro completo GPIO26_CTRL */
#define bIOBANK0_GPIO26_FUNCSEL sIOBANK0.GPIO26_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO26_CTRL */
#define bIOBANK0_GPIO26_OUTOVER sIOBANK0.GPIO26_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO26_CTRL */
#define bIOBANK0_GPIO26_OEOVER sIOBANK0.GPIO26_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO26_CTRL */
#define bIOBANK0_GPIO26_INOVER sIOBANK0.GPIO26_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO26_CTRL */
#define bIOBANK0_GPIO26_IRQOVER sIOBANK0.GPIO26_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO26_CTRL */

#define rIOBANK0_GPIO27_CTRL sIOBANK0.GPIO27_CTRL.WORD                            /**< Acceder al registro completo GPIO27_CTRL */
#define bIOBANK0_GPIO27_FUNCSEL sIOBANK0.GPIO27_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO27_CTRL */
#define bIOBANK0_GPIO27_OUTOVER sIOBANK0.GPIO27_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO27_CTRL */
#define bIOBANK0_GPIO27_OEOVER sIOBANK0.GPIO27_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO27_CTRL */
#define bIOBANK0_GPIO27_INOVER sIOBANK0.GPIO27_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO27_CTRL */
#define bIOBANK0_GPIO27_IRQOVER sIOBANK0.GPIO27_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO27_CTRL */

#define rIOBANK0_GPIO28_CTRL sIOBANK0.GPIO28_CTRL.WORD                            /**< Acceder al registro completo GPIO28_CTRL */
#define bIOBANK0_GPIO28_FUNCSEL sIOBANK0.GPIO28_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO28_CTRL */
#define bIOBANK0_GPIO28_OUTOVER sIOBANK0.GPIO28_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO28_CTRL */
#define bIOBANK0_GPIO28_OEOVER sIOBANK0.GPIO28_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO28_CTRL */
#define bIOBANK0_GPIO28_INOVER sIOBANK0.GPIO28_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO28_CTRL */
#define bIOBANK0_GPIO28_IRQOVER sIOBANK0.GPIO28_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO28_CTRL */

#define rIOBANK0_GPIO29_CTRL sIOBANK0.GPIO29_CTRL.WORD                            /**< Acceder al registro completo GPIO29_CTRL */
#define bIOBANK0_GPIO29_FUNCSEL sIOBANK0.GPIO29_CTRL.BITS.FUNCSEL                 /**< Acceder al campo de bits FUNCSEL del registro GPIO29_CTRL */
#define bIOBANK0_GPIO29_OUTOVER sIOBANK0.GPIO29_CTRL.BITS.OUTOVER                 /**< Acceder al campo de bits OUTOVER del registro GPIO29_CTRL */
#define bIOBANK0_GPIO29_OEOVER sIOBANK0.GPIO29_CTRL.BITS.OEOVER                   /**< Acceder al campo de bits OEOVER del registro GPIO29_CTRL */
#define bIOBANK0_GPIO29_INOVER sIOBANK0.GPIO29_CTRL.BITS.INOVER                   /**< Acceder al campo de bits INOVER del registro GPIO29_CTRL */
#define bIOBANK0_GPIO29_IRQOVER sIOBANK0.GPIO29_CTRL.BITS.IRQOVER                 /**< Acceder al campo de bits IRQOVER del registro GPIO29_CTRL */

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