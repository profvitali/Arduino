# Potenziometro

Il Potenziometro è un componente attraverso il quale è possibile variare il valore di una resistenza interna attraverso una "manopola" e quindi la corrispondente tensione ai suoi capi. Esso è caratterizzato da tre pin, di cui due rispettivamente per la massa e la tensione di riferimento (es. 5 V) ed il terzo per l'uscita che va collegato all'Arduino.

Supponiamo di voler realizzare un semplice programma attraverso il quale leggere il valore di tensione del potenziometro ed inviarla in tempo reale al nostro PC di sviluppo attraverso la porta seriale (utilizzando il cavo USB). Il cablaggio necessario al funzionamento è quello riportato nell'immagine di seguito:

![alt text](https://github.com/profvitali/Arduino/blob/main/immagini/potenziometro.png)

Il codice che permette il comprenderne il funzionamento è il seguente:

```c
int potenziometroPin = 0;
int value = 0;
void setup()
{
	Serial.begin(9600); // inizializzazione porta seriale
}
void loop()
{
	value = analogRead(potenziometroPin); // leggo valore potenziometro
	Serial.println(value); // scrivo il valore sulla seriale come debugging
	delay(500);
}
```

> [!NOTE]
> I valori ottenuti in seguito alla conversione da analogico a digitale varino da 0 a 1023 al variare della posizione del potenziometro dal minimo (0V) al massimo (5V).


