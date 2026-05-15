# Esercitiamoci 1

## Parte A
Eseguire lo sketch riportato di seguito ed eseguire le seguenti operazioni:

- addizione
- sottrazione
- moltiplicazione 
- divisione
- addizione di una costante chiamata “K”
- elevare alla potenza di grado 3
- realizzare una espressione a piacimento che usa tutti i quattro operatori contemporaneamente

aggiuntivi
- definendo le variabili "base" e "altezza" si calcoli l'area di un triangolo
- definendo "densità" "altezza" e "g" si calcoli la pressione agente sul fondo di un recipiente

SKECTCH:
```c
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
```

> [!NOTE]
> Per interagire con il monitor seriale utilizzeremo:
> 
> `Serial.begin(9600);` è una funzione fondamentale in Arduino IDE che avvia la comunicazione seriale tra la scheda e un computer o altro dispositivo, impostando la velocità in baud rate (solitamente 9600 o 115200). Si inserisce nel void setup(). Il baud rate determina la velocità con cui i dati vengono trasmessi e ricevuti (normalmente bit al secondo). Se il trasmettitore e il ricevitore non sono impostati sullo stesso baud rate, la comunicazione verrà interrotta. Dispositivi diversi supportano baud rate diversi e impostare lo stesso baud rate su ricevitore e trasmettitore consentirà loro di comunicare correttamente.
>
> `Serial.print(data)` Invia dati al monitor seriale senza andare a capo.
> 
> `Serial.println(data)` Invia dati al monitor seriale e va a capo automaticamente.
>
> `Serial.available()` Restituisce il numero di byte disponibili per la lettura nel buffer seriale.
>
> `Serial.read()` Legge il primo byte di dati in arrivo.
>
> `Serial.parseInt()` Cerca il prossimo numero intero nella stringa seriale.
>
> `Serial.flush()` Svuota il buffer di ricezione (in attesa che i dati vengano trasmessi). 

## Parte B

implementando quanto fatto sopra, programmare i sequenti confronti:
- operando1 è uguale a operando2?
- operando1 è diverso da operando2?
- operando1 è maggiore o uguale a operando2?
- operando1 è minore a operando2?
- definendo "densità" "altezza" e "g" e "pressione_critica" si calcoli se la pressione agente sul fondo di un recipiente risulta inferiore a quella critica
