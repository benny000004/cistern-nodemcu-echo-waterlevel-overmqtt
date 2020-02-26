#define WIFI_SSID ""       //enter SSID and pass without <>
#define WIFI_PASS ""

#define MQTT_SERVER_IP ""
#define MQTT_SERVER_PORT 1883

#define MQTT_CLIENT_NAME "cistern-sensor"
#define MQTT_SERVER_USER_ID ""      // leave quotes empty, if no authentication is required
#define MQTT_SERVER_PASS ""

#define MQTT_TOPIC_NAME_LEVEL_PERCENT "cistern/level/percent"
#define MQTT_TOPIC_NAME_LEVEL_LITERS "cistern/level/liters"
#define MQTT_TOPIC_NAME_LEVEL_CM "cistern/level/cm"

#define TRIGGER_PIN 2  //~GPIO2 (Sonoff Basic R2 IO2)
#define ECHO_PIN 3     //~GPIO3 (Sonoff Basic R2 RX PIN)

#define SENSOR_DISTANCE_TO_MAX_VOLUME 0        // in cm - minimum is 21
#define SENSOR_OFFSET 3                         // use ruler and the mqtt topic cistern/level/cm to calibrate this value


#define IDLE_TIME 60                      // in seconds (Standard 60)

#define TIME_PERIOD_BETWEEN_READINGS 1   // in seconds
#define SAMPLE_SIZE 10

#define CISTERN_HEIGHT 102      // in cm
#define CISTERN_LENGTH 115      // in cm
#define CISTERN_WIDTH 95       // in cm - only needed if cistern is cuboid, if you have a cylindric cistern, you can leave this empty
#define CISTERN_FORM "cuboid"   // possible values: cuboid, cylindric (small letters, case-sensitive)




/** ===============ADVANCED SETTINGS==================== **/

#define TRIGGER_PULSE_WIDTH 20      // in microseconds - adjust this setting if your sensor doesn't send the pulse - minimum of 20 µS is recommended otherwise you will get wrong results, even if manual says minimum 10µS

#define READING_TIMEOUT 26      // in milliseconds - max is 60ms - post-pulse time period after which the MCU gives up waiting for a return signal
