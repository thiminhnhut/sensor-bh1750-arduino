#ifndef SensorBH1750_h
#define SensorBH1750_h

#include <BH1750.h>

class SensorBH1750: public BH1750 {
public:
    SensorBH1750();

    SensorBH1750(byte address);

    bool init();

    bool init(Mode mode);

    float getLux();
};
#endif
