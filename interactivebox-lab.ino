int potPin = A0;
int fsrPin = A1;
int redLED = 3;
int yellowLED = 2;
void setup() {
  //not need to declare ananlog pins as inputs
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  //first read your sensor values!
  int pot = analogRead(potPin); // read pin
  Serial.println(pot); //print to serial monitor
  analogWrite(redLED, pot/4);
  //pot = map(pot, 500, 600, 0, 255);

  int fsr = analogRead(fsrPin);
  //Serial.println(fsr);
  fsr = map(fsr, 450, 900, 0, 255);
  analogWrite(yellowLED, fsr);
}
  
