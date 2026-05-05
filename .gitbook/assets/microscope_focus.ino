#include <Wire.h>
#include <Adafruit_MotorShield.h>

// Constants for the program
#define Z_LIMIT 350
#define COUNT_PER_REV 400

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

// Declaration of the motor on M3, M4
Adafruit_StepperMotor *motor = AFMS.getStepper(COUNT_PER_REV, 2); 

// Read input from user
String input = "";

// This variable stores the total position
int position = 0;

void setup() {
 
  // Start motorshield and set speed
  AFMS.begin();  
  motor->setSpeed(100); 

  Serial.begin(115200);
}

void loop(){

  // Check if input command free
  if (Serial.available() > 0) {
    
    input = Serial.readStringUntil('\n'); 
    int value = input.toInt(); 
    
    // Convert the distance in µm to a number of count for the motor
    int count = convertCommand(value);

    // Print the status in the terminal
    Serial.println("-------------");
    Serial.print("The microscope moved of ");
    Serial.print(value);
    Serial.println("µm");
    Serial.print("Position of the microscope: ");
    Serial.print(position);
    Serial.println("µm");

    //Check if the motor needs to go forward or backward
    if(count >= 0){

      // Check if the motor stays in the 7mm range
      if(position+value >= Z_LIMIT){
        Serial.println("The microscope reached its maximum height!");
        motor->step(convertCommand(Z_LIMIT-position), FORWARD, INTERLEAVE);
        position += Z_LIMIT-position;
      }
      else{
        motor->step(count, FORWARD, INTERLEAVE);
        // Update the total position
        position += value;
      }
  
    }
    else{

      // Check if the motor stays in the 7mm range
      if(position+value <= -Z_LIMIT){
        Serial.println("The microscope reached its minimum height!");
        motor->step(abs(convertCommand(Z_LIMIT-position)), BACKWARD, INTERLEAVE);
        position += Z_LIMIT-position;
      }
      else{
        motor->step(abs(count), BACKWARD, INTERLEAVE);
        // Update the total position
        position += value;

      }
      
    }
    
  }
}

// Convert a distance to a number of count the motor has to turn
// for the positioning stage to shift of this distance
int convertCommand(int value){
  return (value*COUNT_PER_REV)/500;
}