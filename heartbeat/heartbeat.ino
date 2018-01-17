void setup (){
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop (){
  delay(1000);
  int time = millis();
  digitalWrite(13,HIGH);
  Serial.print(time/1000);
  Serial.println(" sec have elasped");
  digitalWrite(13,LOW);
}

