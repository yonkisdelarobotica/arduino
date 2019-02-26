/*
  yonkisdelarobotica.com
  
  Entradas Digitales: Boton A-B

  Al pulsar el botón A encendemos el LED, y al pulsar el botón B lo apagamos.
  Se mostrará en el monitor serie cuando se pulsen los botones.
  Materiales:
  2 x pulsador de membrana de 4 pines
  2 x resistencias de 10kohm
  1 x diodo led
  1 x resitencia 220ohm
  
*/

// Nombramos los pines de los botones y el LED:
int BotonA = 9;
int BotonB = 8;
int led = 10;

// La función setup se ejecuta solo una vez:
void setup() {
  // Incializamos la comunicación Serie a 9600 bits por segundo:
  Serial.begin(9600);
  // Declarar los botones como entradas y el led como salida:
  pinMode(BotonA, INPUT);
  pinMode(BotonB, INPUT);
  pinMode(led, OUTPUT);
}

// La función loop se ejecuta repetidas veces, es un bucle:
void loop() {
  // Comprobamos los botones, y si estan pulsados actuamos en consecuencia:
  if (digitalRead(BotonA)== HIGH){
    // Si el botón A esta pulsado encendemos el LED. Lo mostramos por el monitor serie
    Serial.println("Boton A Pulsado, enciendo LED");
    digitalWrite(led,HIGH);
    delay(1);        // retardo de 1ms para estabilizar
  }
  // Comprobamos ahora el otro botón.
  if (digitalRead(BotonB)== HIGH){
    // Si el botón B esta pulsado apagamos el LED. Lo mostramos por el monitor serie
    Serial.println("Boton B Pulsado, apago LED");
    digitalWrite(led,LOW);
    delay(1);        // retardo de 1ms para estabilizar
  }
}
