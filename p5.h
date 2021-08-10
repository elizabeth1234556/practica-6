/*
 * p5.h
 *
 *  Created on: 8 ago. 2021
 *      Author: user
 */

#ifndef P5_H_
#define P5_H_

#define OUTPUT 1
#define INPUT 0
#define ON 1
#define OFF 0

	void pinMode(unsigned char puerto, int bit, unsigned char mode);
	void digitalWrite(unsigned char puerto, int bit, unsigned char data);

#endif /* P5_H_ */
