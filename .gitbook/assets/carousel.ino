#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include <SPI.h>
#include <avr/interrupt.h>

// Keep track of the motor's position 
volatile long pos = 0;
volatile int actual_pos = 2; // Specify the initial number here

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

// NEMA17 stepper motor
Adafruit_StepperMotor *motor = AFMS.getStepper(200, 2); 

// Linear actuator
Adafruit_StepperMotor *linear_motor = AFMS.getStepper(400, 1);

// To read the SPI input
volatile byte received;
volatile bool newData = false;

void setup() {

  // SPI setup
  pinMode(MISO, OUTPUT);
  SPCR |= _BV(SPE);        
  SPI.attachInterrupt();  

  // Feedback signal setup
  pinMode(2, INPUT_PULLUP); // Ea+
  pinMode(3, INPUT_PULLUP); // Eb+
  attachInterrupt(digitalPinToInterrupt(2), readEncoder, CHANGE);
  attachInterrupt(digitalPinToInterrupt(3), readEncoder, CHANGE);

  AFMS.begin();  
  motor->setSpeed(60); 
  linear_motor->setSpeed(120);

  Serial.begin(115200);
}

// SPI reading
ISR(SPI_STC_vect) {
  received = SPDR;
  newData = true;
  SPDR = received; 
}

void loop() {

  if (newData) {
    
    int value = received; 

    int diff = value-actual_pos;
    actual_pos = value;

    // Algo to determine how to turn the carousel (faster way)
    if (abs(diff)<=5){
      if(diff > 0){
        Serial.println("Motor moved forward");
        motor->step(diff*20, FORWARD, MICROSTEP);
      }else{
        Serial.println("Motor moved backward");
        motor->step(-diff*20, BACKWARD, MICROSTEP);
      }
    }
    else{
      if(diff > 0){
        Serial.println("Motor moved backward");
        motor->step((10-diff)*20, BACKWARD, MICROSTEP);
      }else{
        Serial.println("Motor moved forward");
        motor->step((10-(-diff))*20, FORWARD, MICROSTEP);
      }
    }

    // Push front then back the linear actuator
    delay(1000);
    linear_motor->step(2000, FORWARD, INTERLEAVE);
    delay(1000);
    linear_motor->step(2000, BACKWARD, INTERLEAVE);
    delay(1000);

    newData = false;
  }
  
}

// Reading of the encoder
void readEncoder() {
  static uint8_t lastState = 0;

  uint8_t A = digitalRead(2);
  uint8_t B = digitalRead(3);

  uint8_t currentState = (A << 1) | B;

  // Algo to read the differential signal between A and B
  if ((lastState == 0 && currentState == 1) ||
      (lastState == 1 && currentState == 3) ||
      (lastState == 3 && currentState == 2) ||
      (lastState == 2 && currentState == 0)) {
    pos--;
  }
  else if ((lastState == 0 && currentState == 2) ||
           (lastState == 2 && currentState == 3) ||
           (lastState == 3 && currentState == 1) ||
           (lastState == 1 && currentState == 0)) {
    pos++;
  }

  lastState = currentState;
}