int Relay1 = 7; // 
int Relay2 = 6; //  WaterSensor Power
int Relay3 = 5; //
int Relay4 = 4; //

void setup()  { 
  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(Relay3, OUTPUT);
  pinMode(Relay4, OUTPUT);
} 


void loop()  {    
    
    
    digitalWrite(Relay1,HIGH);
    digitalWrite(Relay2,LOW);
    digitalWrite(Relay3,HIGH);
    digitalWrite(Relay4,HIGH);
}
