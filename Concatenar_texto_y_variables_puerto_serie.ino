//Dos formas de imprimir lo mismo en el puerto serie
//Basado en --->  https://www.arduino.cc/en/Tutorial/StringAdditionOperator
//**************************************************************************


//unas variables cualesquiera solo para probar
int maxAngulo=177;
int minAngulo=9;


void setup() {
Serial.begin(9600);
while(!Serial){}  //Esperamos a que la conexion esté establecida.
Serial.println("Conexion serie establecida");

}
 
void loop() {
String stringTexto="";  //Es necesario usar una String para "darle una pista" al serial print. Sin definir una String no funciona

//Opcion 1
Serial.print("Introduce el angulo al que quieras ir entre "); Serial.print(minAngulo); Serial.print(" y "); Serial.println(maxAngulo);

Option 2
Serial.println (stringTexto + "Introduce el angulo al que quieras ir entre " + minAngulo + " y " + maxAngulo);

delay(3000);      //Importante este delay para poder enterarse de algo en el puerto serie

}
  

