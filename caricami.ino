void setup() {
  Serial.begin(9600); //impostiamo il baudrate della porta seriale
  int operando1, operando2, risultato; //dichiarazione delle variabili
  //assegnazione
  operando1 = 5;
  operando2 = 8;
   //addizione
  risultato = operando1 + operando2;
  Serial.print("Addizione: "); //stampa a monitor la scritta tra gli apici
  Serial.println(risultato);  //stampa a monitor sulla stessa riga
}
void loop() {   // qui potete lasciare vuoto  
}

