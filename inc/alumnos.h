/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/**
 * @brief Estructura contenedora de los datos de un alumno.
 * Los datos almacenados son: nombre, apellido y documento.
 */
typedef struct alumno_s {
    char apellidos[30];         /**< Array de caracteres donde se almacenará el apellido */
    char nombres[30];           /**< Array de caracteres donde se almacenará el nombre */
    char documento[11];         /**< Array de caracteres donde se almacenará el documento */
} const * alumno_t;             

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Se encarga de formatear los datos de *alumno* en JSON, y colocarlos en una *cadena* de caracteres.
 * Toma los datos de *alumno*, los formatea y los coloca en el array apuntado por *cadena*
 * @param cadena    puntero al array de caracteres donde se almacenará el texto formateado.
 * @param espacio   tamaño del array apuntado por *cadena*
 * @param alumno    estructura contenedora de los datos del alumno.
 * @return  Verdadero si copió datos en cadena con el formato deseado.
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Coloca los datos de todos los alumnos en una cadena de caracteres con un formato JSON.
 * @param cadena    Puntero al array de caracteres donde se almacenara los datos formateados.
 * @param espacio   Tamaño del buffer apuntado por *cadena*.
 * @return Verdadero si se encuentran todos los alumnos en la cadena de caracteres, falso si hubo un error.
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
