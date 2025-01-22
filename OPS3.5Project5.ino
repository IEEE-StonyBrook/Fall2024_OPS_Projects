long zero;
#define IR 17
#define LED_PINB 11
#define LED_PING 10
#define LED_PINR 9

void setup() {
  pinMode(IR, INPUT);
  pinMode(LED_PINB, OUTPUT);
  pinMode(LED_PING, OUTPUT);
  pinMode(LED_PINR, OUTPUT);
  zero = 0;
  Serial.begin(9600);
  for (int i = 0; i < 100; i++)
    zero += analogRead(IR);
  zero /= 100;
}

void loop() {
  int val = analogRead(IR);
  constrain(val, 0, 800);
  val = map(val, zero, 1023, 255, 0);
  Serial.println(val);
  setColor(130, 0, val);

}
void setColor(int redValue, int greenValue,  int blueValue) {
  analogWrite(LED_PINR, redValue);
  analogWrite(LED_PING,  greenValue);
  analogWrite(LED_PINB, blueValue);
}
