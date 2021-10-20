int potPin = A0;
int fsrPin = A1;
int yellowLED = 3;
int speakerPin = 8;

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
pinMode(fsrPin, INPUT);
pinMode (speakerPin, OUTPUT);
pinMode(yellowLED, OUTPUT);

}

void loop() {
  
  //first read your sensor values!
  int pot = analogRead(potPin); // read pin
  Serial.println(pot); //print to serial monitor
  analogWrite(yellowLED, pot/4);
  //pot = map(pot, 500, 600, 0, 255);

  int fsr = analogRead(fsrPin);
  Serial.println(fsr);

  int mappedVal = map(fsr, 200, 600, 100, 1000);
  tone(speakerPin, mappedVal);
}
