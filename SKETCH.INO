void setup() {
pinMode(2, OUTPUT);
pinMode(4, OUTPUT);
}

void loop() {
digitalWrite(2,1);
delay(5000);
digitalWrite(2,0);
digitalWrite(4,1);
delay(6000);
digitalWrite(4,0);
delay(2000);
}