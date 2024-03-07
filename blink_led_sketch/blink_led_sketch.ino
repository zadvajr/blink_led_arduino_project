/*
This is my led blink project
It blinks an led for a second and turn it off for another second
*/

const int led_pin = 13; //output pin 13

void setup() {

  // put your setup code here, to run once:
  pinMode(led_pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin, HIGH);
  delay(500);
  digitalWrite(led_pin, LOW);
  delay(500);
  digitalWrite(led_pin, HIGH);
  delay(1000);
  digitalWrite(led_pin, LOW);
  delay(1000);

}
