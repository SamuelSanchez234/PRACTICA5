
#include <Keypad.h>
char A=10,B=11,C=12,D=13,E=2,F=3,G=4;
char D1 = 5;

const byte filas = 4;
const byte columnas = 4;
char letras[filas][columnas]= {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}

};

byte pinesf[filas] = {A0,A1,A2,A3};
byte pinesc[columnas] = {5,6,7,8,};
Keypad teclado = Keypad(makeKeymap(letras),pinesf,pinesc,filas,columnas);
char estado;

void setup(){
Serial.begin(9600);
}

void loop(){

estado = teclado.getKey();

Serial.println(estado);

if(estado == '1'){
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
delay(1000);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);

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
digitalWrite(D,HIGH);
delay(1000);
digitalWrite(F,LOW);
digitalWrite(B,LOW);
digitalWrite(G,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
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

 if(estado == 'A'){
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(B,HIGH);
digitalWrite(G,HIGH);
digitalWrite(E,HIGH);
digitalWrite(C,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(F,LOW);
digitalWrite(B,LOW);
digitalWrite(G,LOW);
digitalWrite(E,LOW);
digitalWrite(C,LOW);
}  

 if(estado == 'B'){
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
  
 if(estado == 'C'){
digitalWrite(A,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
}  
  
 if(estado == 'D'){
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
  
 if(estado == '#'){
digitalWrite(A,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
}
  
 if(estado == '*'){
digitalWrite(A,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(D1,LOW);
}  
  
}