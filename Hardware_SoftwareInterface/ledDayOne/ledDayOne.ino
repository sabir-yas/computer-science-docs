
int led_pin1 =2;
int led_pin2 =13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin1, HIGH);
  digitalWrite(led_pin2, LOW);
  delay(1000);
  digitalWrite(led_pin1, LOW);
  digitalWrite(led_pin2, HIGH);
  delay(1000);

}
