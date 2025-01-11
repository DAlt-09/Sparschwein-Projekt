void setup() {
  Serial.begin(9600);

  for (int i = 1; i <= 8; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 1; i <= 8; i++) {
    if (digitalRead(i)) {
      switch (i) {
        case 1: Serial.println(0.01); break;
        case 2: Serial.println(0.02); break;
        case 3: Serial.println(0.05); break;
        case 4: Serial.println(0.10); break;
        case 5: Serial.println(0.20); break;
        case 6: Serial.println(0.50); break;
        case 7: Serial.println(1.00); break;
        case 8: Serial.println(2.00); break;
      }
    }
  }
}
