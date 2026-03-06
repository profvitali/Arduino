# Segnali Analogici

> [!TIP]
> Le istruzioni fondamentali per il comando di segnali digitali sono:
>```
> pinMode() // impostare un pin come input o come output, solitamente posto nel setup
> analogRead()  // legge un pin analogico, usato per input
> analogWrite()  //scrive in valore analogico, usato per output
> ```


## Utilizzo di un fotoresistore

In questo esercizio utilizzeremo il sensore per rilevare l'intensità luminosa della stanza e ne leggeremo il valore sul monitor.

```c
int luminosita;  //Il valore letto dalla fotoresistenza
void setup() {
  Serial.begin(9600);
}
void loop() {
  luminosita = analogRead(A0);  //Lettura della luminosità
  Serial.println(luminosita);  //permette di visualizzare il VALORE di luminosità rilevato
  delay(10);                   //Aspetta 10 ms
}
```

### Esercizi:
1. Realizzare il programma che: quando il pulsante viene premuto il LED rimane acceso
2. Realizzare il programma che mi permette di accendere e spegnere il LED con due pulsanti distinti. Il pulsante di Accensione deve essere collegato al pin 8, il pulsante di spegnimento deve essere collegato al pin 9
3. Realizzare il programma che permette di contare il numero di _"click"_ eseguiti da un pulsante
4. Realizzare il programma che mi permette di modifare il valore di una variabile utilizzando due pulsanti, uno la farà incrementare, l'altro decrementare
5. Realizzare l'algoritmo di funzionamento di un **telegrafo**. Inserendo una parola nel monitor seriale questa deve essere trasformata in un segnale morse che fa suonare un buzzer.
Si raccomanda 
