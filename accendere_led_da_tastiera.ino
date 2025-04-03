void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  delay(2000);
  Serial.println("In attesa di un comando: a - accende il led; s - spegne il led");  //nb è case insensitive!
}

void loop(){
  char comando=Serial.read();
  if (comando=='a'){
    digitalWrite(13,HIGH);
    Serial.println("acceso");
  }
  if (comando=='s'){
    digitalWrite(13, LOW);
    Serial.println("spento");
  }
}

