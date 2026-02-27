QUI TROVI:
      - variabili e tipologie di dato
      - operatori
      - controllori di flusso

Qualunque programma utilizzeremo farà uso di variabili per immagazzinare le informazioni da gestire. Le variabili non sono nient’altro che porzioni di memoria in cui andremo a conservare tali informazioni al fine poterle utilizzare, richiamare, modificare…
La sintassi della variabile è la seguente:
      <tipo_di_dato> <nome_variabile> = <valore>
Le costanti invece rimangono invariate durante l’esecuzione del programma;
      const <tipo_di_dato> <NOME_COSTANTE> = <valore>
      #define <NOME_COSTANTE> <valore>

Vediamo alcuni esempi:
COSTANTI:
      const int numero_dita_mano = 5      //int quando i numeri sono di tipo intero
      const float pigreco = 3.1415926      //float usato quando il numero ha la virgola, ATENZIONE VA USATO IL PUNTO!!!
      #define pippo 8
VARIABILI
      int età = 16
      boolean mi_trovo_in_laboratorio = true //boolean usato quando i valori sono 0-1 oppure true-false oppure HIGH-LOW
      char lettera = 'A'   // Il tipo char contiene un singolo carattere alfanumerico (lettera o numero), memorizzato sotto forma di numero a 8 bit, secondo la codifica ASCII.

Esercitati tu:
      crea la variabile/costante ed associa il relativo valore:
            - costante di gravità
            - numero di nepero
            - numero di alunni in laboratorio
            - ora è mattina --> vero

OPERATORI ARITMETICI
prima di tutto devo dichiarare le variabili con cui opererò:

int operando1, operando2, risultato; //dichiarazione delle variabili variabili
//assegnazione
operando1 = 10;
operando2 = 3;

risultato = operando +5;            //addizione di 5 unità
risultato = operando1 + operando2;  //addizione
risultato = operando1 - operando2;  //sottrazione
risultato = operando1 * operando2;  //moltiplicazione
risultato = operando1 / operando2;  //divisione

risultato = operando2++;  //la variabile viene incremendata di 1
risultato = operando2--;  //la variabile viene decremendata di 1

__________________________________________________________________________
OPERATORI RELAZIONALI

int operando1 = 65;
int operando2 = 34;
bool risultato;

risultato = operando1 == operando2; //operando1 è uguale a operando2?
risultato = operando1 != operando2; //operando1 è diverso a operando2?
risultato = operando1 >= operando2; //operando1 è maggiore o uguale a operando2?
risultato = operando1 <= operando2; //operando1 è minore o uguale a operando2?
risultato = operando1 > operando2; //operando1 è maggiore di operando2?
risultato = operando1 < operando2; //operando1 è minore di operando2?

__________________________________________________________________________
OPERATORI BOOLEANI
bool op1 = true;
bool op2 = true;
bool op3 = false;
bool risultato;

risultato = op1 && op2;      // && corrsiponde a AND
risultato = op1 && op3;
risultato = op1 || op2;      // || corrsiponde a OR
risultato = op1 || op3;
risultato = !op1;            // ! corrsiponde a NOT
risultato = !op3;
risultato = op1 && !op3;
risultato = op1 || !op3;

__________________________________________________________________________
OPERATORI LOGICI

IF
      int miaVariabile = 7;
      
      if(miaVariabile > 5)                                    //condizione da controllare
      {
          Serial.println("miaVariabile è maggiore di 5");      //istruzione se la condizione è verificata
      }

IF-ELSE
      if(miaVariabile > 5)
       {
            Serial.println("miaVariabile è maggiore di 5");      //istruzione se la condizione è verificata
       }
      else
       {
            Serial.println("miaVariabile non è maggiore di 5");      //istruzione alternativa
       }

IF-IF ELSE-ELSE
      if(miaVariabile >= 0 && miaVariabile <= 5)
      {
          //codice eseguito se miaVariabile assume un valore compreso tra 0 e 5
      }
      else if(miaVariabile > 5 && miaVariabile <= 10)
      {
          //codice eseguito se miaVariabile assume un valore compreso tra 6 e 10
      }
      else
      {
          //codice eseguito in tutti gli altri casi - ovvero <0 e >10
      }

SWITCH
      switch(miaVariabile)                                    //condizione
      {
          case 0:
              Serial.println("Hai premuto il tasto 0");      //condizione 0
              break;
          case 1:
              Serial.println("Hai premuto il tasto 1");
              break;
          case 2:
              Serial.println("Hai premuto il tasto 2");
              break;
          case 3:
              Serial.println("Hai premuto il tasto 3");
              break;
          case [4…5…6…7…8]:
              
          case 9:
              Serial.println("Hai premuto il tasto 9");
              break;
          default:
              Serial.println("Tasto non riconosciuto");
              break;
      }

WHILE
      while(<condizione>)
      {//codice da eseguire all'interno del ciclo
      }

      esempio:
            int indice = 1;
            while(indice <= 10)
            {
                Serial.print("Iterazione numero "); //stampiamo sul monitor seriale il numero di iterazioni
                Serial.println(indice);
                ++indice; //incrementiamo la variabile di un'unità
            }
FOR
      for(<inizializzazione indice>; <condizione>; <incremento>)    //Dove <inizializzazione indice> contiene la dichiarazione e inizializzazione di una variabile indice analoga all’esempio fatto per il ciclo while; <condizione> è la condizione che deve essere vera per eseguire il corpo del ciclo e <incremento> è la condizione di incremento dell’indice.
      {    //codice eseguito ad ogni iterazione
      }

      


--> SEI ORA PRONTO PER ESERCITAZIONE 1






