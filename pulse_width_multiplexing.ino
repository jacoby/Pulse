/*
  PWM - Showing off Pulse Width Multiplexing
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int interval = 1500 ;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  for ( int i = 1 ; i < interval ; i++ ) {
    int j = interval - i ;
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delayMicroseconds(i);               // wait for a second
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delayMicroseconds(j);               // wait for a second
  }
  for ( int i = 1 ; i < interval ; i++ ) {
    int j = interval - i ;
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delayMicroseconds(j);               // wait for a second
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delayMicroseconds(i);               // wait for a second
  }
 delay(1000);
}
