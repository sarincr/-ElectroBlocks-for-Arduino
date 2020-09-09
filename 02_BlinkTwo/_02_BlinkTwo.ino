struct RGB {
	int red;
	int green;
	int blue;
};
double i = 0;


void setup() {
	pinMode(13, OUTPUT);
	pinMode(12, OUTPUT);

}


void loop() {
  for (i = 1; i <= 10; i += 10) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    delay(1000);
  }

}
