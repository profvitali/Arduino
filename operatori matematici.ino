// in questa sezione vi spiegherò come utilizzare gli operatori matematici più utilizzati


<tipo_di_dato> <nome_variabile> = <valore>


//OPERATORI ARITMETICI

//dichiarazione delle variabili variabili
int operando1, operando2, risultato; 

//assegnazione dei valori alle variabili
operando1 = 10;
operando2 = 3;

//addizione
risultato = operando1 + operando2;
//sottrazione
risultato = operando1 - operando2;
//moltiplicazione
risultato = operando1 * operando2;
//divisione
risultato = operando1 / operando2;


// è possibile inoltre utilizzare le seguenti forme contratte:
int numero = 3; // dichiaro variabile NUMERO e le assegno un valore pari a 3
numero = numero + 5;  // sommo alla variabile una quantità di 5
numero +=5            // sommo alla variabile una quantità di 5
numero -=5
numero *=5
numero /=5

//operatori unari
numero++;   //incremento di un'unità la variab "numero"
numero--;   //decremento di un'unità la variab "numero"

int risultatoA = ++numero - 4;
risultatoA = numero++ + 4;

____________________________________________________________________________________________________________________________
//ESERCITIAMOCI 1  
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

