#include <stm32f4xx.h>
#include "6581.h"

// PB1 - clock
// PB2 - chip select

void delay(int count)
{
    // volatile so that the compiler doesn't optimise it out
    volatile int i;

    for (i = 0; i < count; i++)
    {
    }
}

int SID_writeRegister(unsigned char reg, unsigned char value) {
	if(reg > 0x18)
		return -1;

	GPIO_SetBits(GPIOA, reg); // set address
	GPIO_SetBits(GPIOD, value); // set data

	/*
	GPIO_WriteBit(GPIOB, GPIO_Pin_2, 0); // select the chip
	delay(100000); // wait ca. 1ms ???
	GPIO_WriteBit(GPIOB, GPIO_Pin_2, 1); // deselect the chip
	delay(100000); // wait ca. 1ms ???
	*/

	return 0;
}
