int pin = 8;
int time_2 = 1000;

void BlinkSimple(){
    digitalWrite(pin, HIGH); 
    delay(time_2); 
    digitalWrite(pin, LOW); 
    delay(time_2);
}

void setup() {
  pinMode(pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    BlinkSimple();

    while(1){}
}
