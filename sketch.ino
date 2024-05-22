const int ledPreSt []= {2,0,4,16};
const int ledReg [] = {17,5,18,19};
const int numLedPreSt = sizeof(ledPreSt)/sizeof(ledPreSt[0]);
const int numLedReg = sizeof(ledReg)/sizeof(ledReg[0]);
const int espera = 800;

void setup() {
  for (int i =0; i < numLedPreSt; i++){
    pinMode(ledPreSt[i], OUTPUT);
  }
  for (int r =0; r< numLedReg;r++){
    pinMode(ledReg[r], OUTPUT);
  }
}

void loop() {
  for(int i = 0; i< numLedPreSt; i++){
    digitalWrite(ledPreSt[i], HIGH);
    delay(espera);
  }
  for(int r = 0; r< numLedPreSt; r++){
    digitalWrite(ledReg[r], HIGH);
    delay(espera);
    digitalWrite(ledReg[r], LOW);
    //delay(espera);
  }
  for( int d = 0; d <= numLedPreSt; d++){
    digitalWrite(ledPreSt[d], LOW);
  }
  delay(espera);

}