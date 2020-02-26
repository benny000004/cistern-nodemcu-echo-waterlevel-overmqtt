# cistern-sonoffbaiscr2-waterlevel-overmqtt
An Arduino sketch for the ESP8285 (Sonoff Basic R2) to read the waterlevel of your cistern utilizing JSN-SR04T Ultrasonic Sensor and transmit values via MQTT

## Use of Sonoff Basic R2
The JSN-SR04T-2.0 can be used either with 5V oder 3.3V. As the Sonoff Basic R2 has only 3.3V output voltage, it needs to be the V2 of the JSN-SR04T. As GPIOs you can use IO2 (GPIO2) which is on the back of the module and the RX-PIN (GPIO3) for communication with the sensor. Here it is important to set the correct pinMode(3, FUNCTION_3) in the code (already done). If you want to use the TX-PIN instead of IO2, you have to do the same with the TX-PIN -> pinMode(1, FUNCTION_3). Note: No serial debugging is possible when using these pins, therefore all codelines from morris178 for serial debugging are deleted in my code.

## Programming
For programming the Sonoff Basic R2 you have to use for initial commit the serial interface of the module and when connecting 3.3V, the button must be pressed to get into flash mode. After the initial programming you can use the network interface for programming and leave the ultrasonic connector connected. The Sonoff Basic R2 should be shown in the Arduino IDE.

## Configuration
The main configuration of the module is done in the config.h file. Here you can enter your wifi credentials as well as the MQTT-Server address, port and credentials (if needed). Do not change the trigger interval below 20 µS as it will cause erratic readings due to the short trigger interval. 20µS is a value where you can get correct results with 5V as well as with 3.3V input voltage.

## Calibration
Calibrate your sensor before usage with the SENSOR_OFFSET variable in the config.h file. It should show you correct readings in your MQTT Topic before you install it. Afterwards you can calibrate it again to ensure correct results. For calibration it is recommended to set the IDLE_TIME to 10 seconds or less for reducing the waiting time for new measurements.

Have fun!
