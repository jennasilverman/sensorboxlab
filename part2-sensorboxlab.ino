//int fsrPin = A0;
//int speakerPin = 8;
//
//int numSound = 10;
//int soundsArray[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440}; //{C#, D, D#, E, F, F#, G, G#, A}
//
//void setup() {
//  // put your setup code here, to run once:
//  Serial.begin(9600);
//  for (int i=0; i<numSound; i++) {
//    tone(speakerPin, soundsArray[i]);
//    delay(1000);
//  }
//    noTone(speakerPin);
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  int fsr = analogRead(fsrPin);
//  Serial.println(fsr);
//
//  int mappedVal = map(fsr, 200, 800, 100, 1000);
//  tone(speakerPin, mappedVal);
//}
//
int fsrPin = A0;
int speakerPin = 8;

void setup() {
// put your setup code here, to run once:

pinMode(fsrPin, INPUT);
pinMode (speakerPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int fsr = analogRead(fsrPin);
  Serial.println(fsr);

  int mappedVal = map(fsr, 200, 600, 100, 1000);
  tone(speakerPin, mappedVal);
//
//  if(200<mappedVal<300){
//    tone(speakerPin,261);
//    }
//  else{
//    tone(speakerPin, 440);
//  }
}
