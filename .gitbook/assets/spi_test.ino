#include <SPI.h>

// Read input from the serial monitor
String input = "";

void setup() {
  pinMode(53, OUTPUT); // SS
  SPI.begin();
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {

    // Read input
    input = Serial.readStringUntil('\n'); 
    int value = input.toInt(); 
    
    digitalWrite(53, LOW);        // select le slave
    byte response = SPI.transfer(value); // transfer value to slave (carousel)
    digitalWrite(53, HIGH);       // deselect slave
  }
}
