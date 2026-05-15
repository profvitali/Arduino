# Striscia LED

Comandare l'accensione ed il colore dei led che compongono una striscia 

```c
#include <Adafruit_NeoPixel.h>  //libreria Arduino che permette il controllo delle striesce LED

#define PIN 2	 // pin al quale è collegata la striscia LED

#define NUMPIXELS 12 // quantità di LED presenti sulla striscia

//istruzione che fornisce ad Arduino le caratteristiche della striscia LED
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int pausa = 100; 

int redColor = 0;
int greenColor = 0;
int blueColor = 0;

void setup() {
  // "accendo" la libreria della striscia per utilizzarne i comandi
  pixels.begin();
}

void loop() {
  setColor();

  for (int i=0; i < NUMPIXELS; i++) {		//accende in sequenza i LED
    // imposta il colore del LED 
    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));

   // questo comando invia alla strisce il comando di accensione secondo i parametri impostati sopra
    pixels.show();

    delay(pausa);
  }
}

// setColor()  imposta un colore randomico colorei dei LED
// il colore dei LED RGB impiega il codice colore RGB con valori che variano tra 0 e 255
void setColor(){
  redColor = random(0, 255);
  greenColor = random(0,255);
  blueColor = random(0, 255);
}
```

![alt text](https://github.com/profvitali/Arduino/blob/main/immagini/strisciaLED.png)


## Esercizi
1. tramite un joystick controllare l'accensione di un LED di colore verde. Il joystick "sposta" il led a destra o a sinistra.

2. Volendo implementare l'esercizio sopra, fare in modo che il LED una voltaraggiunta l'estremità della striscia cambi colore e rimanga tale fino al raggiungimento di un'altra estremità.


