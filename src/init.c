#include "main.h"



void initializeIO() {

    // configure the pin that the limit switch is plugged into as an input
    pinMode(LIMIT_SWITCH, INPUT);
}

void initialize() {

   encoder = encoderInit(QUAD_TOP_PORT 4, QUAD_BOTTOM_PORT 3, false);
   frontsonar = ultrasonicInit(1, 2);
}
