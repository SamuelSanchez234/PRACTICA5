#include <Adafruit_NeoPixel.h>//Incluimos la librería en el código
#define PIN 10
#define pixeles 5
#include <Keypad.h>
char A=10,B=11,C=12,D=13,E=2,F=3,G=4;

const byte filas = 4;
const byte columnas = 4;
char letras[filas][columnas]= {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}

};

byte pinesf[filas] = {A1,A2,A3,A43};
byte pinesc[columnas] = {4,6,7,8};
Keypad teclado = Keypad(makeKeymap(letras),pinesf,pinesc,filas,columnas);
char estado;

Adafruit_NeoPixel pixels(7, 5, NEO_GRB + NEO_KHZ800);

#define esperar 300 

void setup() {
  pixels.begin(); 
  Serial.begin(9600);
}

void loop() {
  estado = teclado.getKey();

Serial.println(estado);
 
  if(estado == 'A'){
   pixels.clear(); 
 pixels.setPixelColor(3, pixels.Color(150, 0, 0));
  pixels.show();
  delay(esperar);
 pixels.setPixelColor(2, pixels.Color(0, 150, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(0, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(150, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(150, 200, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(6, pixels.Color(0, 150, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(150, 200, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(0, pixels.Color(150, 100, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(150, 0, 200));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(150, 100, 175));
  pixels.show();
  delay(esperar);
  }
  
  if(estado == 'B'){
  pixels.clear();
     pixels.setPixelColor(6, pixels.Color(150, 0, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(0, 150, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(0, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(150, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(150, 200, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(0, 150, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(0, pixels.Color(150, 200, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(150, 100, 30));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(150, 0, 200));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(150, 100, 175));
  pixels.show();
  delay(esperar);
  }
  
  if(estado == 'C'){
    pixels.setPixelColor(0, pixels.Color(200, 10, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(6, pixels.Color(22, 145, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(145, 0, 22));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(90, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(150, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(0, 200, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(200, 200, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(150, 0, 30));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(0, 145, 200));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(0, pixels.Color(150, 0, 175));
  pixels.show();
  delay(esperar);
  }

  if(estado == 'D'){
   pixels.setPixelColor(0, pixels.Color(200, 10, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(22, 145, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(145, 0, 22));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(90, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(150, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(0, 200, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(6, pixels.Color(200, 200, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(150, 0, 30));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(0, 145, 200));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(150, 0, 175));
  pixels.show();
  delay(esperar);
  }

if(estado == '1'){
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
delay(1000);
digitalWrite(B,LOW);
digitalWrite(C,LOW);

}

if(estado == '2'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(G,HIGH);
digitalWrite(E,HIGH);
digitalWrite(D,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(G,LOW);
digitalWrite(E,LOW);
digitalWrite(D,LOW);
}

if(estado == '3'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(G,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(G,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
}

if(estado == '4'){
digitalWrite(F,HIGH);
digitalWrite(B,HIGH);
digitalWrite(G,HIGH);
digitalWrite(C,HIGH);
delay(1000);
digitalWrite(F,LOW);
digitalWrite(B,LOW);
digitalWrite(G,LOW);
digitalWrite(C,LOW);
}

if(estado == '5'){
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
}

if(estado == '6'){
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
}

 if(estado == '7'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
}

 if(estado == '8'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
}
 
 if(estado == '9'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
}
 

 if(estado == '0'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
}   
  
  
}