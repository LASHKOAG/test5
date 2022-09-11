int led = 8;
int _delay = 1000;
void BlinkTest(){
  
}

void setup() {
  pinMode(led, OUTPUT);
}


void loop() {
    digitalWrite(led, HIGH); 
    delay(_delay); 
    digitalWrite(led, LOW); 
    delay(_delay);

    while(1){}
}
