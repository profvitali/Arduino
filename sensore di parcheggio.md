# Sensore ad ultrasuoni
Questo programma permette di rilevare la distanza di un oggetto posto di fronte al sensore e scriverla sul monitor seriale.

```c
const int pinTrigger = 9;   //emettitore
const int pinEcho    = 10;  //ricevitore
 
void setup() {
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
  Serial.begin(9600);
  Serial.print( "Sensore Ultrasuoni: ");
}
 
void loop() {
  digitalWrite(pinTrigger, LOW);  // imposta l'uscita del trigger LOW
  digitalWrite(pinTrigger, HIGH);  // imposta l'uscita del trigger HIGH per 10 microsecondi
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);
 
  long durata = pulseIn(pinEcho, HIGH);  // calcolo del tempo attraverso il pin di echo
  long distanza = durata/58.31;   //motivo di ciò spiegato sopra
 
  Serial.print("distanza: ");
  // dopo 38ms è fuori dalla portata del sensore
  if( durata > 23324 ){
    Serial.println("Fuori portata");
  }
  else{
    Serial.print(distanza);
    Serial.println(" cm");
  }
   
  delay(1000);  // Aspetta 1000 millisecondi prima di generare l'impulso successivo
}
```



