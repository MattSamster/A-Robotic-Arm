#include <TeensyThreads.h>
const int dirpin1  = 2;
const int steppin1 = 3;
const int dirpin2  = 4; 
const int steppin2 = 5;
const int dirpin3  = 6;
const int steppin3 = 7;
double    present1 = 0; 
double    present2 = 0;
double    present3 = 0;
double    potangle1; 
double    potangle2;
double    potangle3;

void setup() {
  pinMode(steppin1, OUTPUT);
  pinMode(dirpin1, OUTPUT);
  pinMode(steppin2, OUTPUT);
  pinMode(dirpin2, OUTPUT);
  pinMode(steppin3, OUTPUT);
  pinMode(dirpin3, OUTPUT);
  Serial.begin(9600);
  potangle1 = analogRead(A5);
  potangle1 = map(potangle1, 0, 1023, 0, 250);
  present2 = potangle2;
  potangle2 = analogRead(A4);
  potangle2 = map(potangle2, 0, 1023, 0, 250);
  present3 = potangle3;
  potangle3 = analogRead(A3);
  potangle3 = map(potangle3, 0, 1023, 0, 250);
  present3 = potangle3;

  //thread setup
  
  int addThread
}

void motor1() {
  //StartStepper1
  potangle1 = analogRead(A5);
  potangle1 = map(potangle1, 0, 1023, 0, 250);
  delay(200);
  if(potangle1 != present1 && (abs(potangle1-present1) > 5))
    {
    if(potangle1 > present1 && (abs(potangle1-present1) > 5))
    {
    while(potangle1 > present1) // increase angle
      {
          digitalWrite(dirpin1, HIGH);
          digitalWrite(steppin1,HIGH); 
          delayMicroseconds(2000); 
          digitalWrite(steppin1,LOW); 
          delayMicroseconds(2000);
          present1 += 1.8; 
      } 
    }
    if(potangle1 < present1)
    {
    while(potangle1 < present1 && (abs(potangle1-present1) > 5)) //decrease angle
      {
          digitalWrite(dirpin1, LOW);
          digitalWrite(steppin1,HIGH); 
          delayMicroseconds(2000); 
          digitalWrite(steppin1,LOW); 
          delayMicroseconds(2000);
          present1 -= 1.8; 
      }
    }
    }
  //EndsStepper1
}

void motor2() {
  //StartStepper2
  potangle2 = analogRead(A4);
  potangle2 = map(potangle2, 0, 1023, 0, 250);
  delay(200);
  if(potangle2 != present2 && (abs(potangle2-present2) > 5))
    {
    if(potangle2 > present2 && (abs(potangle2-present2) > 5))
    {
    while(potangle2 > present2) // increase angle
      {
          digitalWrite(dirpin2, HIGH);
          digitalWrite(steppin2,HIGH); 
          delayMicroseconds(2000); 
          digitalWrite(steppin2,LOW); 
          delayMicroseconds(2000);
          present2 += 1.8; 
      } 
    }
    if(potangle2 < present2)
    {
    while(potangle2 < present2 && (abs(potangle2-present2) > 5)) //decrease angle
      {
          digitalWrite(dirpin2, LOW);
          digitalWrite(steppin2,HIGH); 
          delayMicroseconds(2000); 
          digitalWrite(steppin2,LOW); 
          delayMicroseconds(2000);
          present2 -= 1.8; 
      }
    }
    }
  //EndStepper2
}

void motor2() {
  //StartStepper3
  potangle3 = analogRead(A3);
  potangle3 = map(potangle3, 0, 1023, 0, 250);
  delay(200);
  if(potangle3 != present3 && (abs(potangle3-present3) > 5))
    {
    if(potangle3 > present3 && (abs(potangle3-present3) > 5))
    {
    while(potangle3 > present3) // increase angle
      {
          digitalWrite(dirpin3, HIGH);
          digitalWrite(steppin3,HIGH); 
          delayMicroseconds(2000); 
          digitalWrite(steppin3,LOW); 
          delayMicroseconds(2000);
          present3 += 1.8; 
      } 
    }
    if(potangle3 < present3)
    {
    while(potangle3 < present3 && (abs(potangle3-present3) > 5)) //decrease angle
      {
          digitalWrite(dirpin3, LOW);
          digitalWrite(steppin3,HIGH); 
          delayMicroseconds(2000); 
          digitalWrite(steppin3,LOW); 
          delayMicroseconds(2000);
          present3 -= 1.8; 
      }
    }
    }
  //EndStepper3
}
