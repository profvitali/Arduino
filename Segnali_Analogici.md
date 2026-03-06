# Segnali Digitali

> [!TIP]
> Le istruzioni fondamentali per il comando di segnali digitali sono:
>```c 
> pinMode() // impostare un pin come input o come output, solitamente posto nel setup
> digitalWrite() // impostare un pin digitale a HIGH o LOW, utilizzato per comandare output
> digitalRead() // legge lo stato di un pin digitale, utilizzato per rilevare input
> ```


## Accendere un LED

In questo esercizio vedremo come comandare l'accensione di un LED. Per accenderlo dovremo scrivere nel monitor seriale la lettera _"a"_, mentre invece per spegnerlo dovremo premere la lettera _"b"_.

```c
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

## Buzzer
La funzione per utilizzare il buzzer è `tone(pinbuzzer,frequenza,durata);`

Se non specifico la durata il buzzer suona fino alla chiamata della funzione `noTone()`

_Esempio:_
```c
tone(buzzPin,1000,2000);
```
 
NOTA: La funzione tone attiva il buzzer per il tempo indicato ma passa immediatamente alla riga di comando successiva per cui è necessario impostare un delay pari al tempo di buzz
_Esempio:_
```c
tone(buzzPin,1000,2000);       // suono frequenza 1000 e durata 2sec
delay(2000);
```

## Utilizzare un pulsante

In questo esercizio vedremo come utilizzare un pulsante per accendere un LED. Quando il pulsante viene premuto il LED dovrà accendersi. Essendo un pulsante, nel momento in cui rilasceremo la pressione il LED si spegnerà.

```c
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
```

> [!IMPORTANT]
> La corrente non arriva al LED perchè è collegato in serie al pulsante, ora il funzionamento dei componenti dipende dal programma che scrivo.

### Esercizi:
1. Realizzare il programma che: quando il pulsante viene premuto il LED rimane acceso
2. Realizzare il programma che mi permette di accendere e spegnere il LED con due pulsanti distinti. Il pulsante di Accensione deve essere collegato al pin 8, il pulsante di spegnimento deve essere collegato al pin 9
3. Realizzare il programma che permette di contare il numero di _"click"_ eseguiti da un pulsante
4. Realizzare il programma che mi permette di modifare il valore di una variabile utilizzando due pulsanti, uno la farà incrementare, l'altro decrementare
5. Realizzare l'algoritmo di funzionamento di un **telegrafo**. Inserendo una parola nel monitor seriale questa deve essere trasformata in un segnale morse che fa suonare un buzzer.
Si raccomanda 
