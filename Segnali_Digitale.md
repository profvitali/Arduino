# Comandare Segnali Digitali

> [!TIP]
> Le istruzioni fondamentali per il comando di segnali digitali sono:
>```
> pinMode() // impostare un pin come input o come output, solitamente posto nel setup
> digitalWrite() // impostare un pin digitale a HIGH o LOW, utilizzato per comandare output
> digitalRead() // legge lo stato di un pin digitale, utilizzato per rilevare input
> ```


## Accendere un LED

```
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
```
tone(buzzPin,1000,2000);
```
 
NOTA: La funzione tone attiva il buzzer per il tempo indicato ma passa immediatamente alla riga di comando successiva per cui è necessario impostare un delay pari al tempo di buzz
_Esempio:_
```
tone(buzzPin,1000,2000);       // suono frequenza 1000 e durata 2sec
delay(2000);
```

