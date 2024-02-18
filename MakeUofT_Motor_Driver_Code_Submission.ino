#include <Arduino.h>
unsigned long currentTime = 800, T1 = 0, T2 = 0; //milliseconds
int const x = 1;

// Motor var
const int stepPin = 3;
const int dirPin = 4;
const bool condition = true;
int speed = 800; // range 2000 - 800 (min to max)


void setup() {
pinMode(3,OUTPUT);
pinMode(4, OUTPUT);
int T1 = millis();
}
void loop() {
  if (x == 1){
  T1 = millis();
  pinMode(dirPin, HIGH);
  while(T1+4000>millis()){
  digitalWrite(stepPin, HIGH);
  delayMicroseconds(speed);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(speed);
  }
  T1 = millis();
  pinMode(dirPin,LOW);
  while(T1+4000>millis()){
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(speed);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(speed);
  }
  }
  else {
    
    bool CW = true;
    if(!CW){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(speed);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(speed);
    }
    else{
      digitalWrite(stepPin, LOW);
      delayMicroseconds(speed);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(speed);
    }
  }

  delay(1000);

  //extra code posted bellow for for customizability
  // T1 = millis();
  // switch (x){
  //   case(1):{                     // go forward for four seconds. Then go backwards for four seconds
  //     digitalWrite(dirPin,HIGH);//fwd
  //     T2 = millis();
  //     while(T2-T1<currentTime){ //currentTime will equal 4 here
  //       digitalWrite(stepPin, HIGH);
  //       delayMicroseconds(speed);
  //       digitalWrite(stepPin, LOW);
  //       delayMicroseconds(speed);
  //       T2 = millis();
  //     }
  //     delay(3000);
  //     digitalWrite(dirPin, LOW);//back
  //     T1 = millis();
  //     while(T2-T1<currentTime){ //currentTime will equal 4 here
  //       digitalWrite(stepPin, HIGH);
  //       delayMicroseconds(speed);
  //       digitalWrite(stepPin, LOW);
  //       delayMicroseconds(speed);
  //       T2 = millis();
  //     }
  //       break;
  //   }
  //   case(2):{
  //       digitalWrite(dirPin,!HIGH);
  //       T2 = millis();
  //       while(T2-T1<currentTime){
  //       digitalWrite(stepPin, HIGH);
  //       delayMicroseconds(speed);
  //       digitalWrite(stepPin, LOW);
  //       delayMicroseconds(speed);
  //       T2 = millis();
  //     }
  //       break;
  //   }

  // }
  // delay(500);
}
