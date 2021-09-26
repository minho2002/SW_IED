#define PIN7 7

void setup() {
  pinMode(7, OUTPUT);
  digitalWrite(7, 0);
  delay(1000);
}

void loop() {
  for (int i = 0; i < 5; i++){
    digitalWrite(7,1);
    delay(200);
    digitalWrite(7,0);
    delay(200);
  }
  digitalWrite(7,1);
  while(1) {
    ;
  }
}
