
#ifndef GPIO_H
#define GPIO_H

/** @file gpio.h
 ** @brief Declaración del objeto gpio
 **/

/* === Headers files inclusions ================================================================ */

#include <stdint.h>
#include <stdbool.h>

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */

/* === Public data type declarations =========================================================== */

typedef struct gpio_s * gpio_t;

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

/**
 * @brief Función para crear un puerto digital
 *
 * @param port Numero de puerto GPIO correspondiente
 * @param bit  Numero de bit asignado al puerto
 * @return gpio_t Puntero al objeto creado
 */
gpio_t gpioCreate(uint8_t port, uint8_t bit);

/**
 * @brief Define un gpio como salida
 *
 * @param self gpio a configurar
 * @param output configura al gpio como salida a true y como entrada a false
 */
void gpioSetDirection(gpio_t gpio, bool output);

/**
 * @brief Configura el estado de la salida en 1 o 0 acorde al valor de state
 *
 * @param self gpio a configurar
 * @param state configura el valor del estado del gpio
 */
void gpioSetState(gpio_t gpio, bool state);

/**
 * @brief Función para consultar el estado de un puerto digital
 *
 * @param gpio Puntero al objeto obtenido al llamar a la función GpioCreate
 * @return true El puerto digital esta encendido
 * @return false El puerto digital esta apagado
 */
bool gpioGetState(gpio_t gpio);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* GPIO_H */
