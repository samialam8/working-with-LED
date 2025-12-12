## Working UserButton with Led
![USERBUTTON1](https://github.com/user-attachments/assets/9cc4bf52-990c-405f-8af7-b58d143c5841)


## 002_UserButton_LED
This project manages an LED using the onboard push-button available on the STM32 Nano board. When the button is pressed, the LED stays ON; when the button is released, the LED switches OFF.

## Pin used
PA8, PA9, PB5
UserButton(Push Button): PC13

## Features
**LED Behavior:**

-The function reads the current state of the user button.

-When the button is pressed, it turns the LED ON.

-When the button is not pressed, it turns the LED OFF.

## Overview
The application uses the user_button_led() function (implemented in user_button_led.c) to configure the GPIO pins for both the user-button and the LED. The function runs continuously, reading the button’s status and updating the LED output in real time.








