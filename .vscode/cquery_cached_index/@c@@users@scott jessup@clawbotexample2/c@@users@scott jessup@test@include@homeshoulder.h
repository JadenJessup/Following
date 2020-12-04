#ifndef _HOMESHOULDER_H_
#define _HOMESHOULDER_H_

#include "main.h"
// Sets the speeds of the left and right wheels of the chassis

void homeShoulder(int homePosition) {
printf("homing started, stand by \n");
delay(1000);

while(digitalRead(LowerLimit) == 1 ) {// start a while loop with the condition lowerLimit == 1
shoulderSet(-100); //turn on shoulder in neg direction

}        //wait unitll lowerLimit == 0
motorStopAll();        //stop shoulder motor
encoderReset(shoulderEncoder);        //reset sholderEncoder
          //set shoulderEncoder = lowerLimitPosition
while(encoderGet (shoulderEncoder) < lowerLimitPosition){      //start while loop with condition sholderEncoder == 0 (or another home position)
          //turn on shouldMoter in pos direction
          //wait untill sholderEncoder== 0 //wait untill sholderEncoder== 0 (or other home position)
          //stop sholderMotor (the shoulder joint is now "homed") }

}
printf("homing complete /n");
}

#endif // _HOMESHOULDER_H_
