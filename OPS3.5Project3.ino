//define input pin for potentiometer
#define pot A7
//define pins for LEDs
#define gLED 6
#define bLED 9
#define rLED 3

void setup() {
  //declare pins (OUTPUT or INPUT)
  pinMode(pot, INPUT);
  pinMode(gLED, OUTPUT);
  pinMode(bLED, OUTPUT);
  pinMode(rLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Get value from potentiometer
  int x = analogRead(pot);
  setColor(255, 0, 100); // Red Color
  delay(x);
  setColor(0,  251, 0); // Green Color
  delay(x);
  setColor(0, 0, 255); // Blue Color
  delay(x);
  setColor(255, 255, 255); // White Color
  delay(x);
  setColor(255, 0, 243); // Purple Color
  delay(x);
  setColor(115, 242,  243); // Light Blue
  delay(x);
}
void setColor(int redValue, int greenValue,  int blueValue) {
  analogWrite(rLED, redValue);
  analogWrite(gLED,  greenValue);
  analogWrite(bLED, blueValue);
}
