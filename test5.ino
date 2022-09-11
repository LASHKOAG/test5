int pin = 8;
int time_2 = 1000;

void setup() {
  pinMode(pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(time_2);                       // wait for a second                     // wait for a second

 digitalWrite(pin, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(time_2);                       // wait for a second

}
