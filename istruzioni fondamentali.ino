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


--> SEI ORA PRONTO PER ESERCITAZIONE 1
https://github.com/profvitali/Arduino/blob/main/operatori%20matematici.ino



