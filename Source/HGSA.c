int RED_PINOUT = 3;
int GREEN_PINOUT = 5;
int BLUE_PINOUT = 6;
int FSR_PININ = 0;
int fsrReading = 0;
int rand =  = random(0, 226);

void setup() {
  pinMode (RED_PINOUT, OUTPUT);
  pinMode (GREEN_PINOUT, OUTPUT);
  pinMode (BLUE_PINOUT, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  fsrReading = analogRead(FSR_PININ);
  int colour = constrain(fsrReading,0, 255);
  
  
  
  
  //float brightness = fsrReading % 355;
 // Serial.println(brightness);
 
  //int randColour = random(0, 100);
  //Serial.println colourScalar;
  
  analogWrite(RED_PINOUT, colour );
  analogWrite(GREEN_PINOUT, colour );
  analogWrite(BLUE_PINOUT, colour );
  
}