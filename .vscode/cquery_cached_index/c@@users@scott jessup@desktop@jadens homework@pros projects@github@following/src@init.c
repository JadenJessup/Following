/** @file init.c
 * @brief File for initialization code
 *
 * This file should contain the user initialize() function and any functions related to it.
 *
 * PROS contains FreeRTOS (http://www.freertos.org) whose source code may be
 * obtained from http://sourceforge.net/projects/freertos/files/ or on request.
 */

#include "main.h"
#define LIMIT_SWITCH 1
#define QUAD_TOP_PORT 4
#define QUAD_BOTTOM_PORT 3



void initializeIO() {

    // configure the pin that the limit switch is plugged into as an input
    pinMode(LIMIT_SWITCH, INPUT);
}

void initialize() {

   encoder = encoderInit(QUAD_TOP_PORT, QUAD_BOTTOM_PORT, false);
   sonar = ultrasonicInit(1, 2);
}
