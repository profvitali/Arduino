# Servomotore


```c
#include <Servo.h> //Inserire la libreria Servo
Servo Servo1; //Il nome del servomotore è Servo1, può assumere una posizione tra 0 e 180°
int pos;

void setup() {
  Servo1.attach (9); //Il Servo1 ha il jumper del segnale collegato al pin digitale #9
}

void loop() {
  //Imposto la posizione a cui si deve spostare il Servo1
  // primo ciclo con step di 30° scritti manualmente
  delay (500);
  Servo1.write (0);
  delay (500);
  Servo1.write (30);
  delay (500);
  Servo1.write (60);
  delay (500);
  Servo1.write (90);
  delay (500);
  Servo1.write (60);
  delay (500);
  Servo1.write (30);

  // secondo ciclo con step di 1° utilizzando ciclo FOR
  for (pos = 0; pos <= 180; pos += 1) { // da 0 a 180 gradi
    Servo1.write(pos);              // Modifica la posizione del servo
    delay(15);                       // Ritardo introdotto prima di cambiare posizione
  }
  for (pos = 180; pos >= 0; pos -= 1) { // da 180 a 0 gradi
    Servo1.write(pos);              // Modifica la posizione del servo
    delay(15);                       // Ritardo introdotto prima di cambiare posizione
  }
}


```

