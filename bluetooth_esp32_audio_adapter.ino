#include "AudioTools.h"
#include "BluetoothA2DPSink.h"

I2SStream i2s;
BluetoothA2DPSink a2dp_sink(i2s);

void setup() {
    auto cfg = i2s.defaultConfig();
    cfg.pin_bck = 25;
    cfg.pin_ws = 27;
    cfg.pin_data = 32;
    i2s.begin(cfg);
    a2dp_sink.start("Bluetooth Speaker Adapter");
}

void loop() {
}
