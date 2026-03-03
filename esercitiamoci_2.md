# Esercitiamoci 2

Realizzare gli sketch che permettono di: 

### 2.1 Realizzare il codice che scrive i numeri da 0 a 20 e li stampa uno ad uno sul monitor

> [!TIP]
> Il tuo obiettivo deve essere scrivere il codice più semplice possibile. Prova a semplificare il codice utilizzando la funzione for o while.

### 2.2 Si realizzi un algoritmo che stampa i primi 10 numeri pari. Disegnare il diagramma di flusso e programmare lo sketch.

### 2.3 Definita una variabile si calcoli la potenza di questa elevata alla 23. Si mostri poi a monitor il risultato.


### 2.4 Leggere in input dal monitor seriale 3 numeri, calcolare la somma e indicare se la somma è maggiore di 12.

> [!NOTE]
>  Per leggere input da monitor seriale:
> ```
> if(Serial.available())
>  { 
>  variabile=Serial.parseInt();	//per leggere numeri interi
>  variabile=Serial.read(); 		//per loeggere input ma in ASCII!!
> }
> ```

### 2.5 


___
## Se sei un vero pro: 

Si deve automatizzare il sistema di riscaldamento di un laboratorio metrologico nel quale deve esser tenuta una temperatura costante per certificare le misurazioni. 
Associare il valore ricevuto in ingresso da un sensore di temperatura (inserito da tastiera) ad una variabile. 
Se il valore della temperatura è inferiore a 19 allora incrementare di un grado °C per volta il valore di temperatura fino ad arrivare al valore target. 
Realizzare tale funzione con i 3 operatori logici: if, for e while. Stampare a video l'aggiornamento della temperatura. 
Raggiunto il target aspetta 4secondi e si deve nuovamente inserire il valore.
