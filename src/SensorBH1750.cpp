#include "SensorBH1750.h"

SensorBH1750::SensorBH1750() {

}

SensorBH1750::SensorBH1750(byte address):BH1750(address) {

}

bool SensorBH1750::init() {
    Wire.begin();
    return begin();
}

bool SensorBH1750::init(Mode mode) {
    Wire.begin();
    return begin(mode);
}

float SensorBH1750::getLux() {
    return readLightLevel();
}
