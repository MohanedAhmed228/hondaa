#include "tm4c123gh6pm.h"

void lightLed(){
	if (total_Distance > 100){ 

	GPIO_PORTF_DATA |= 0x0E; 
}
	
}