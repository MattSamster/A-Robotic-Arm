#include <TeensyThreads.h>
volatile int data = 0;
volatile int x = 0;

//step pins assigned as follows: 13-1, 14-2, 15-3
//dirn pins assigned as follows: 12-1, 11-2, 10-3
void motor1(){
  for(int x = 0; x < 50; x++){
  digitalWrite(11, HIGH);
  digitalWrite(14, HIGH);
  delay(500);
  digitalWrite(14, LOW);
  delay(500);
  }
  for(int x = 0; x < 50; x++){
  digitalWrite(11, LOW);
  digitalWrite(14, HIGH);
  delay(500);
  digitalWrite(14, LOW);
  delay(500);
  }
}
void motor2() {
  for(int y = 0; y < 50; y++){
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  }
  for(int y = 0; y < 50; y++){
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  }
}

void motor3() {
  for(int z = 0; z < 50; z++){
  digitalWrite(10, HIGH);
  digitalWrite(15, HIGH);
  delay(500);
  digitalWrite(15, LOW);
  delay(500);
  }for(int z = 0; z < 50; z++){
  digitalWrite(10, LOW);
  digitalWrite(15, HIGH);
  delay(500);
  digitalWrite(15, LOW);
  delay(500);
  }
}
void setup() {
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  threads.addThread(motor1, 1);
  threads.addThread(motor2, 1);
  threads.addThread(motor3, 1);
}
void loop() {
}
