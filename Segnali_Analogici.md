# Segnali Analogici

> [!TIP]
> Le istruzioni fondamentali per il comando di segnali digitali sono:
>```c
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
1. Realizzare il programma che: 
