#define SS 10   // ST_CP  latch
#define MOSI 11 // DS     data
#define SCK 13  // SH_CP  clock
#define GREEN_LED A0

long tempoArray[] = {50, 100, 15, 1200};
int tempoIndex = 1;

long prevMillis = 0;
long prevMillisDelay = 0;
byte value = 0xFF;

void setup() {
  pinMode(SS, OUTPUT);
  pinMode(MOSI, OUTPUT);
  pinMode(SCK, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  digitalWrite(SS, HIGH);
}

void loop() {
  //    digitalWrite(SS, !digitalRead(SS));
  //    delay(1000);

  heartBeat(1.0);

  if (millis() - prevMillisDelay > 1000) {
    digitalWrite(SS, LOW);
    shiftOut(MOSI, SCK, MSBFIRST, value);
    shiftOut(MOSI, SCK, MSBFIRST, value);
    shiftOut(MOSI, SCK, MSBFIRST, value);
    digitalWrite(SS, HIGH);
    value = ~value;
    prevMillisDelay = millis();
  }

}

void heartBeat(float tempo) {
  if ((millis() - prevMillis) > (long)(tempoArray[tempoIndex] * tempo)) {

    if (++tempoIndex > 3)
      tempoIndex = 0;

    if (!(tempoIndex % 2)) {
      digitalWrite(GREEN_LED, HIGH);
      delay(tempoArray[tempoIndex]) ;
      digitalWrite(GREEN_LED, LOW);
    }

    tempoIndex++;
    prevMillis = millis();
  }
}
