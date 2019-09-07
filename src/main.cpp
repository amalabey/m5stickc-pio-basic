#include <M5StickC.h>

int loop_count = 0;

void setup() {
  // put your setup code here, to run once:
  M5.begin();
  Serial.begin(115200);
  Serial.println("Starting - m5stick basic");

  M5.Lcd.println("initialising..");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.printf("Hello world from the loop...> %d \n", loop_count++);
  M5.Lcd.printf("running..%d \n", loop_count);
  sleep(1);
}