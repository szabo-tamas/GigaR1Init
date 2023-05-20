# GigaR1Init
STM32CubeIDE Project for Arduino Giga R1 Wifi
## What is this
This is an STM32CubeIDE workspace with a single project for _Arduino GIGA R1 Wifi_ initialization. Using this project, you can use the GIGA board without the Arduino environment.

## How to use
Clone the repo to your hard drive. Open it as a workspace, and open the _Source_ project. The _IOC_ file can be modified as necessary.

In the _Documents_ directory you can find some useful information about the board, and the current pinout.

## Status
- uC is up and running.
- The external SDRAM is tested at the beginning of the software.
- freeRTOS is running on both cores. A simple blinking LED demo is running on the board.

## Known issues
- The SDMMC interface is connected to the WiFi module, so the MX_SDMMC1_SD_Init function is not called (this will generate a warning). This has currently no priority.

## ToDo
- Set up the QSPI and the external Flash. Add some FS support.
- Implement data exchange between the two cores.
- Test LTDC