#include <Arduino.h>
#include "SensorBH1750.h"

#define debug_port Serial
SensorBH1750 sensorBH1750;

void setup() {
    debug_port.begin(115200);
    if (sensorBH1750.init()) {
        debug_port.println("Init Sensor BH1750 Success");
    } else {
        debug_port.println("Init Sensor BH1750 Fail");
    }
}

void loop() {
    float lux = sensorBH1750.getLux();
    debug_port.printf("Lux = %f\n", lux);
    delay(1000);
}
