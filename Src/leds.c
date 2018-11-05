/*
 * leds.c
 *
 *  Created on: 31 срхїз 2018
 *      Author: Sergey
 */


#include "main.h"
#include "stm32f7xx_hal.h"
#include "leds.h"




void blink_blue()
{
	HAL_GPIO_TogglePin(LD2_GPIO_Port,LD2_Pin);
}

void blink_red()
{
	HAL_GPIO_TogglePin(LD3_GPIO_Port,LD3_Pin);
}

