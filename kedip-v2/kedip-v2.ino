/*
  Kedip V2  
  Modifikasi program kedip:
  - Menggunakan XOR
  - Lamanya lampu nyala/mati menggunakan random
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int ledStatus = 1;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  randomSeed (analogRead(0));
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, ledStatus);   // Tulis status LED (1 = HIGH = Nyala, 0 = LOW = Mati)
  delay(random(1, 10)*500);       // wait between 1-5 seconds
  ledStatus ^= 1;                 // Ubah status LED dengan XOR
}
