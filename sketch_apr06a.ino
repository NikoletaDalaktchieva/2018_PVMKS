#include <Esplora.h>

int LED_stip = 10;       
int switch_btn = 9;    
int reading;
int sensor = 0;
int photocell = 0;

void setup()
{
  pinMode(sensor, OUTPUT);
  Serial.begin(9600);
  pinMode(switch_btn, INPUT);
  pinMode(LED_stip, OUTPUT);
}

void loop()
{ 
    photocell = (analogRead(0)/4);
    analogWrite(sensor, photocell);
    Serial.println(photocell);
    
    if(photocell < 2)
      digitalWrite(LED_stip, HIGH); 
    else
      digitalWrite(LED_stip, LOW); 
    delay(1000);
}
