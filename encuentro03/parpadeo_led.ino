//Salidas
const int led = 7;

void setup()
{
  pinMode(led,OUTPUT);     //defino pin de led como salida
  digitalWrite(led, LOW);  //arranco con estado LOW la salida LED
}

void loop()
{
  digitalWrite(led, HIGH); //enciendo el LED
  delay(500); //espero 500mseg
  digitalWrite(led,LOW); //apago el LED
  delay(200); //espero 200mseg
}