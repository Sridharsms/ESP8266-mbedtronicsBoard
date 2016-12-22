/*
 The blue LED on the ESP-01 module is connected to GPIO1
 (which is also the TXD pin; so we cannot use Serial.print() at the same time)

*/

/* GPIO4 & GPIO5 are swapped in the ESP IC */
void setup() {
  /* Lets initilze in the DIP Switch Order */
  pinMode(15, OUTPUT);     //GPIO15 connected to RELAY
  pinMode(5, OUTPUT);     // Initialize the GPIO4 LED ( means 5 ,swapped)
  pinMode(16, OUTPUT);    // GPIO16 connected to BUZZER
  pinMode(14, OUTPUT);    // GPIO14 connected to RED-LED
  pinMode(12, OUTPUT);    // GPIO12 connected to GREEN-LED
  pinMode(13, OUTPUT);    // GPIO13 connected to BLUE-LED
  
  pinMode(2, OUTPUT);     // If you want to Blink internal LED. Initialize the LED_BUILTIN pin as an output, the one which blinks on the ESP8266 IC
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(15, HIGH);   //RELAY ON
  digitalWrite(5, HIGH);    // Turn the LED on 
  digitalWrite(16, HIGH);    // BUZZER ON
  digitalWrite(14, HIGH);  		//RGB -RED ON
  delay(2000); 
  digitalWrite(14, LOW);  		//RGB -RED ON
  digitalWrite(12, HIGH);		//RGB -GREEN ON
  delay(2000);
  digitalWrite(12, LOW);  		//RGB -RED ON
  digitalWrite(13, HIGH);		//RGB -BLUE ON
  delay(2000);
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);		// Internal LED
  delay(2000);                      
  digitalWrite(15, LOW);   //RELAY ON
  digitalWrite(5, LOW);    // Turn the LED on 
  digitalWrite(16, LOW);    // BUZZER ON
  digitalWrite(14, LOW);  		//RGB -RED ON
  digitalWrite(12, LOW);		//RGB -GREEN ON
  digitalWrite(13, LOW);		//RGB -BLUE ON
  digitalWrite(2, LOW);		// Internal LED
  delay(2000);
}
