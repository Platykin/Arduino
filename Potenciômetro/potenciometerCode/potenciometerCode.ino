#define ledPin 7
#define buttonPin 2

int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

  Serial.begin(9600);
  delay(400);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Butão ESTÁ apertado");
  } 
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Butão não ta apertado");
  }
  delay(100);
}