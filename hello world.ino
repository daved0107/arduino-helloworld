void setup(){
pinMode(13, OUTPUT); // Aqui se indica que el pin 13 digital se convierta en modo salida
}

void loop(){
digitalWrite(13, HIGH); //Se indica que el pin 13 estara en un nivel alto
delay(1000); //El led estara parpadeando 1 segundo en modo encendido
digitalWrite(13, LOW); //Se indica que el led se apagara en el pin 13
delay(1000); //Esperaremos 1 segundo para que se apague
}