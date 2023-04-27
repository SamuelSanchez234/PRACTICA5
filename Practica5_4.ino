  #include <Keypad.h>
const int FILAS = 4;
const int COLUMNAS= 4;
const int buz=2;
const int radar = 12;
int lee;
char keys[FILAS][COLUMNAS]={
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};
byte pinesFila[FILAS]={A0,A1,A2,A4};
byte pinesColumna[COLUMNAS]={8,9,10,11};
Keypad teclado=Keypad(makeKeymap(keys), pinesFila, pinesColumna,FILAS,COLUMNAS);
char teclaPrecionada;



char pass[6]="58127"; //Poner en el arreglo 1 posicion mas a la que tendra la contraseña correcta
char ingresaPass[6]; // tiene que tener el mismo tamaño del arreglo de la contraseña correcta
int indice=0;
#define salida(pin) pinMode(pin,OUTPUT);
#define entrada(pin) pinMode(pin,INPUT);
#define encender_b(pin) tone(pin,100);
#define apagar_b(pin) noTone(pin);
void setup()
{
Serial.begin(9600);
entrada(radar);
salida(buz);
encender_b(buz);
apagar_b(buz);
}


void loop(){
teclaPrecionada=teclado.getKey(); //detecta que en el teclado se pulso un boton
if(teclaPrecionada){
ingresaPass[indice]=teclaPrecionada; // le asigna lo que ingresamos a el arreglo que va a ser comparado
indice++; //cambiara la posicion del arreglo para poder asignar los caracteres
Serial.print(teclaPrecionada);
}
lee=digitalRead(radar);
if (lee == 1)
{
encender_b(buz);
}



if(indice==5){ //cuando se llegue al limite del arreglo verificara si esta correcta o no la contraseña
if(strcmp(pass,ingresaPass)==0){ //Verifica que la contraseña esta correcta
apagar_b(buz);
delay(5000);
Serial.println(" Acceso permitido");
}
indice=0;
}
}