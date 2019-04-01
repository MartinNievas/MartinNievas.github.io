/*
*Programa de ejemplo para mostrar el manejo de LEDs
*mediante el código binario
*/
// pins for the LEDs:
const int redPin = 6;
const int greenPin = 3;
const int bluePin = 5;

int rojo, verde, azul;

void setup() {
  // initialize serial:
  Serial.begin(9600);
  // make the pins outputs:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
 
  while (Serial.available() > 0) {

   
    int color = Serial.parseInt();
    if(color > 111)
      color = 111;

    Serial.println("--------------color--------------");
    Serial.println(color);
    
    rojo = color % 10;
    color = color / 10;
    verde = color % 10;
    color = color / 10;
    azul = color % 10;
    
    if (Serial.read() == '\n') {
      digitalWrite(redPin, rojo);
      digitalWrite(greenPin, verde);
      digitalWrite(bluePin, azul);

      Serial.print("rojo:");
      Serial.println(rojo);
      Serial.print("verde:");
      Serial.println(verde);
      Serial.print("azul:");
      Serial.println(azul);
     
    }
  }
}
