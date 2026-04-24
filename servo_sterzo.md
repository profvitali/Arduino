# Sistema di sterzo servoalimentato modellini di auto RC 🚗

Si realizzi, ricercando sul web le informazioni mancanti, il sistema di sterzo di un modellino di automotibile Radio Comandata. Il movimento dello sterzo è azionato per mezzo di un servomotore. Il comando destra-sinistra viene impartito da un joystick opportunamente collegato.

![alt text](https://github.com/profvitali/Arduino/blob/main/immagini/joystick.png)
![alt text](https://github.com/profvitali/Arduino/blob/main/immagini/servosterzo_2.jpg)

> [!NOTE]
> L'output generato dal joystick è di tipo analogico poichè l'inclinazione è data da due potenziometri posti perpendicolarmente.
> Se lo utilizzassimo come digitale --> le ruote sterzano totalmente a destra o sinistra
> Se lo utilizzassimo come analogico --> le ruote sterzano proporzionalemente a quanto inclino il joystick; a patto che programmiamo in modo altrettanto proporzionale il movimento del servo.


## UPGRADE
Implementare l'uso del motore cc per comandare il movimento della macchina
