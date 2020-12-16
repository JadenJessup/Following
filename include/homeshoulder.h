#ifndef _HOMESHOULDER_H_
#define _HOMESHOULDER_H_
#include "shoulder.h"
#include "main.h"
// Sets the speeds of the left and right wheels of the chassis

void homeShoulder(int homePosition) {
printf("homing started, stand by \n");
delay(1000);

while(digitalRead(LIMIT_SWITCH) == 0) {// start a while loop with the condition lowerLimit == 1
shoulderSet(-100); //turn on shoulder in neg direction

}        //wait unitll lowerLimit == 0
shoulderSet(0);       //stop shoulder motor
encoderReset(encoder);        //reset sholderEncoder
          //set shoulderEncoder = lowerLimitPosition
while(encoderGet (encoder) < homePosition){      //start while loop with condition sholderEncoder == 0 (or another home position)
shoulderSet(100);          //turn on shouldMoter in pos direction
          //wait untill sholderEncoder== 0 //wait untill sholderEncoder== 0 (or other home position)
          //stop sholderMotor (the shoulder joint is now "homed") }
}
shoulderSet(0);
encoderReset(encoder);
printf("homing complete /n");
}

#endif // _HOMESHOULDER_H_
