/*
 * Seven_Seg.c
 *
 *  Created on: Sep 20, 2019
 *      Author: Rafaat
 */


#include "Seven_Seg.h"

void SegmentDisplay(uint8 Digit)
{
	switch (Digit) {
		case 0 :
			Dio_write(PORT_A,PIN0,LOW);
			Dio_write(PORT_A,PIN1,LOW);
			Dio_write(PORT_A,PIN2,LOW);
			Dio_write(PORT_A,PIN3,LOW);

			break;
		case 1 :
			Dio_write(PORT_A,PIN0,HIGH);
			Dio_write(PORT_A,PIN1,LOW);
			Dio_write(PORT_A,PIN2,LOW);
			Dio_write(PORT_A,PIN3,LOW);

			break;
		case 2 :
			Dio_write(PORT_A,PIN0,LOW);
			Dio_write(PORT_A,PIN1,HIGH);
			Dio_write(PORT_A,PIN2,LOW);
			Dio_write(PORT_A,PIN3,LOW);

			break;
		case 3 :
			Dio_write(PORT_A,PIN0,HIGH);
			Dio_write(PORT_A,PIN1,HIGH);
			Dio_write(PORT_A,PIN2,LOW);
			Dio_write(PORT_A,PIN3,LOW);

			break;
		case 4 :
			Dio_write(PORT_A,PIN0,LOW);
			Dio_write(PORT_A,PIN1,LOW);
			Dio_write(PORT_A,PIN2,HIGH);
			Dio_write(PORT_A,PIN3,LOW);

			break;
		case 5 :
			Dio_write(PORT_A,PIN0,HIGH);
			Dio_write(PORT_A,PIN1,LOW);
			Dio_write(PORT_A,PIN2,HIGH);
			Dio_write(PORT_A,PIN3,LOW);

			break;
		case 6 :
			Dio_write(PORT_A,PIN0,LOW);
			Dio_write(PORT_A,PIN1,HIGH);
			Dio_write(PORT_A,PIN2,HIGH);
			Dio_write(PORT_A,PIN3,LOW);

			break;
		case 7 :
			Dio_write(PORT_A,PIN0,HIGH);
			Dio_write(PORT_A,PIN1,HIGH);
			Dio_write(PORT_A,PIN2,HIGH);
			Dio_write(PORT_A,PIN3,LOW);

			break;
		case 8 :
			Dio_write(PORT_A,PIN0,LOW);
			Dio_write(PORT_A,PIN1,LOW);
			Dio_write(PORT_A,PIN2,LOW);
			Dio_write(PORT_A,PIN3,HIGH);

			break;
		case 9 :
			Dio_write(PORT_A,PIN0,HIGH);
			Dio_write(PORT_A,PIN1,LOW);
			Dio_write(PORT_A,PIN2,LOW);
			Dio_write(PORT_A,PIN3,HIGH);

			break;

		default:
			break;
	}
}
