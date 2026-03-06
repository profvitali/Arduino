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

### Crepuscolare:
1. Realizzare l'algoritmo che mi permette di accendere in automatico una luce quando c'è buio. Si definisca, a piacimento, un valore di soglia al di sotto del quale la luce dovrà accendersi.
2. Realizzare l'algoritmo di un "crepuscolare adattivo". Avendo a disposizione 4 LED regolare l'accensione di questi in rapporto alla luce. _e.g_ buio completo si accendono 4 LED, buio al 50% accendo 2 LED...
