
ESERCITIAMOCI 1 
  Eseguire lo sketch riportato di seguito ed eseguire le seguenti operazioni:
addizione
sottrazione
moltiplicazione 
divisione
incremento di una unità per entrambe le variabili
diminuzione di una unità per entrambe le variabili


addizione di una costante chiamata “K”

  
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

____________________________________________________________________________________________________________________________
//OPERATORI RELAZIONALI

int operando1, operando2;  
bool risultato;  //NB potrà essere solamente solo vero/falso

operando1 = 65;
operando2 = 34;

risultato = operando1 == operando2; //operando1 è uguale a operando2?
risultato = operando1 != operando2; //operando1 è diverso a operando2?
risultato = operando1 >= operando2; //operando1 è maggiore o uguale a operando2?
risultato = operando1 <= operando2; //operando1 è minore o uguale a operando2?
risultato = operando1 > operando2; //operando1 è maggiore di operando2?
risultato = operando1 < operando2; //operando1 è minore di operando2?


//OPERATORI BOOLEANI O OPERATORI LOGICI

bool op1 = true;
bool op2 = true;
bool op3 = false;

bool risultato;

risultato = op1 && op2;      //AND
risultato = op1 && op3;
risultato = op1 || op2;      //OR
risultato = op1 || op3;
risultato = !op1;            //NOT
risultato = !op3;
risultato = op1 && !op3;     //op1 and not_op3
risultato = op1 || !op3;

