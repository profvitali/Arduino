# Comandare un Output Digitale

## Accendere un LED

```
void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  delay(2000);
  Serial.println("In attesa di un comando: a - accende il led; s - spegne il led");  //nb è case insensitive!
}

void loop(){
  char comando=Serial.read();
  if (comando=='a'){
    digitalWrite(12,HIGH);
    Serial.println("acceso");
  }
  if (comando=='s'){
    digitalWrite(12, LOW);
    Serial.println("spento");
  }
}
```
