int ledPin = 12;  //Il led è connesso al pin 12
//#define ledPin 12 //alternativamente
int pulsante = 7;  //Il pulsante è connesso al pin 7
int stato_led = 0; 
void setup() {
  pinMode(ledPin, OUTPUT);  //Il pin del led è un'uscita 
  pinMode(pulsante, INPUT);  //Il pin del pulsante è un'entrata 
  }
void loop() {
 
  stato_led = digitalRead(pulsante);  //Lettura del pulsante  

  if (stato_led == 1){  //Se il valore del pulsante è 1                        
    digitalWrite(ledPin, HIGH);  //Accendi il led    
  }  
  else {  //Altrimenti:                                        
    digitalWrite(ledPin, LOW);  //Spegni il led   
  }  
} 
