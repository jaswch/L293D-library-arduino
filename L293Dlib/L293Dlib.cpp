#include "Arduino.h"

#include "L293Dlib.h"

L293Dlib::L293Dlib(int En,int IN13,int IN24){
  pinMode(En,OUTPUT);
  pinMode(IN13,OUTPUT);
  pinMode(IN24,OUTPUT);
  
  _En = En;
  _IN13 = IN13;
  _IN24 = IN24;
}


void L293Dlib::motorSpeed(int num) {
  analogWrite(_En,num);
}


void L293Dlib::forward() {
  digitalWrite(_IN13,HIGH);
  digitalWrite(_IN24,LOW);  
}


void L293Dlib::backward() {
  digitalWrite(_IN13,LOW);
  digitalWrite(_IN24,HIGH);  
}

void L293Dlib::stopMotor() {
  digitalWrite(_IN13,LOW);
  digitalWrite(_IN24,LOW);  
}