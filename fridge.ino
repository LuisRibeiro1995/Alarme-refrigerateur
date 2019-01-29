void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {

 int lumiere = analogRead(0);   
  Serial.println(lumiere);
  
  if (lumiere > 300) {
    
    delay(10000);
    int lumiere = analogRead(0);
    
    if(lumiere > 300){
      digitalWrite(8,HIGH);
    }
  
  } else {
    
      digitalWrite(8,LOW);

    }
    
}
