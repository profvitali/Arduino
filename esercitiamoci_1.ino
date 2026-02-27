
ESERCITIAMOCI 1 
Eseguire lo sketch riportato di seguito ed eseguire le seguenti operazioni:
  -addizione
  -sottrazione
  -moltiplicazione 
  -divisione
  -addizione di una costante chiamata “K”
  -elevare alla potenza di grado 3
  -realizzare una espressione a piacimento che usa tutti i quattro operatori contemporaneamente

  definendo le variabili "base" e "altezza" si calcoli l'area di un triangolo
  definendo "densità" "altezza" e "g" si calcoli la pressione agente sul fondo di un recipiente
  

________________________________________________________________________________________________  
void setup() {
  Serial.begin(9600);                   //impostiamo il baudrate della porta seriale
  int operando1, operando2, risultato;  //dichiarazione delle variabili
  //assegnazione
  operando1 = 5;
  operando2 = 8;
   //addizione
  risultato = operando1 + operando2;
  Serial.print("Addizione: ");           //stampa a monitor la scritta tra gli apici
  Serial.println(risultato);             //stampa a monitor sulla stessa riga
}

void loop() {   // qui potete lasciare vuoto  
}
