## 001_LED_Toggle
This project will show programming of the STM32 Nucleo-F466RE board to toggle LEDs.

## Overview
This project illustrates the process of switching LEDs on and off using GPIO pins on an STM32 microcontroller. The core application inside main.c executes a continuous loop that repeatedly toggles the LED outputs.

## Features
Central LED Toggle Logic: A dedicated function, led_toggle(), defined in led_toggle.c, manages all LED-switching operations.
Function Behavior: The led_toggle() routine controls three LEDs—blue, green, and red—each connected to specific GPIO pins. The function toggles them one after another, producing a repeating cycle of LED activity.
