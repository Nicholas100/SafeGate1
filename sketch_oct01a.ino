#include <DHT.h>
#include <DHT_U.h>

//Programa de controle ao motor.
  bool motor_a=6;
 bool motor_b=3;
 
 void setup() {
 Serial.begin(9600);
 pinMode(motor_a,OUTPUT);
}
void loop() {
 if(Serial.available()){
 readBluetooth = Serial.read();//Valor lido na Serial será guardado na variável readBluetooth
 if(readBluetooth == 'a'){
  }
 if(readBluetooth == 'a'){
 digitalWrite(motor_a,HIGH); 
  }
  if(readBluetooth == 'b'){
  digitalWrite(motor_b,LOW);
    }
 
