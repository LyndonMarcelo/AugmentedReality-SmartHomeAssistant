#include <Servo.h>
const int trigPin = 10;
const int echoPin = 9;
long duration;
int distance;

Servo servo1;

int led = 13;


void setup() {

  Serial.begin(250000);
  pinMode(led,OUTPUT);

  servo1.attach(12);
  servo1.write(0);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;

  //Serial.print("Distance: ");
  Serial.println(distance);

  if(Serial.available())
  {
    int data = Serial.read();
    if(data == 'A')
    {
      digitalWrite(led,HIGH);
    }

    if(data == 'B')
    {
      digitalWrite(led,LOW);
    }

    if(data == 'C')
    {
      servo1.write(90);
    }

    if(data == 'D')
    {
      servo1.write(0);
    }


    
    
  }


}
