#include <SimpleFOC.h>

Encoder encoder = Encoder(A_HALL1, A_HALL2, 2048, A_HALL3);

void doA() { encoder.handleA(); }
void doB() { encoder.handleB(); }
void doIndex() { encoder.handleIndex(); }

void setup() {
    Serial.begin(115200);
    encoder.init();
    encoder.enableInterrupts(doA, doB, doIndex);
}

void loop() {
    encoder.update();
    Serial.println(encoder.getAngle());
    delay(100);
}