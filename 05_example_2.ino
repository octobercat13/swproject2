#define PIN_LED 7
bool toggle = 1;
void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, LOW);
  delay(1000);
  digitalWrite(PIN_LED, HIGH);
  for(int i=0; i<=10; i++){
      digitalWrite(PIN_LED, toggle);
      delay(100);
      toggle = !toggle;
      
  }
  while(1) {}
}
