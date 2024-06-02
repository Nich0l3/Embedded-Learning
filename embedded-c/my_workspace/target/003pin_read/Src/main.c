/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	uint32_t volatile *const pClkCtrlReg = (uint32_t*)0x40023830; // base + offset (0x30)

	uint32_t volatile *const pPortAModeReg  = (uint32_t*)0x40020000;
	uint32_t volatile *const pPortAOutReg = (uint32_t*)0x40020014;
	uint32_t volatile const *const pPortAInReg = (uint32_t*) 0x40020010; // input register should be treated as read-only

	//  1. Enable the peripheral clock enable register for GPIOA (0th bit) peripheral in the RCC_AHB1ENR
	// PA0 and PA5 are in same port no extra clock enable register is required
	*pClkCtrlReg |= 1 << 0;

	// 2. Configure the GPIO port mode register, after configuring clock enable register

	// a. Clear the MODER5 -> LED, to remove existing data
	*pPortAModeReg &= ~(3 << 10); // 3 - 0b11
	// clear MODER0 -> INPUT
	*pPortAModeReg &= ~(3 << 0);

	/*	00: Input (reset state)
		01: General purpose output mode
		10: Alternate function mode
		11: Analog mode
	 */

	// b. 	set the MODER5 in output (here PA5)- 1 0
	*pPortAModeReg |= (1 << 10);
	// 		set MODER0 in input () here PA0
	*pPortAModeReg &= ~(3 << 0); // NOT REQUIRED THO :)

	// 3. Set 5th bit of the output data register to make I/O pin-5 as HIGH

	while(1){
		// Read pin status of pin PA0 (GPIO INPUT DATA REGISTER)
		uint8_t volatile pinStatus = (uint8_t)(*pPortAInReg & 0x1); // masking for 0th bit to get data from 32 bit data

		if (pinStatus){
			*pPortAOutReg |= (1 << 5); // set
		}else{
			*pPortAOutReg &= ~(1 << 5); // reset
		}
	}
}
