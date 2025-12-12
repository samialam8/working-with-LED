/*
 * user_button_led.c
 *
 *  Created on: Dec 12, 2025
 *      Author: mohammadsamialam
 */

/*
 * Controls an LED based on the state of a user button.
 * The function initializes the GPIO pins for the user button and LED,
 * and continuously reads the state of the user button to control the LED.
 */


#include "main.h"

void user_button_led(){
	GPIO_PinState pinState = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13);

	if (pinState == GPIO_PIN_SET) {
		/* Delay for a short period to debounce the switch */
		HAL_Delay(50);

		/* Turn on the LED */
		HAL_GPIO_WritePin(BLUE_LED_GPIO_Port, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(RED_LED_GPIO_Port, GPIO_PIN_9, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port, GPIO_PIN_5, GPIO_PIN_SET);

	} else {
		/* Turn off the LED */
		HAL_GPIO_WritePin(BLUE_LED_GPIO_Port, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(RED_LED_GPIO_Port, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port, GPIO_PIN_5, GPIO_PIN_RESET);
	}
}
