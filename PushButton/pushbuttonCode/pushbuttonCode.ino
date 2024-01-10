#define AnalogLDR A0
#define ledPin 13

int limiar = 2.1;
int Leitura = 0;
float voltagemLDR;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  delay(100);
}

void loop(){
  Leitura = analogRead(AnalogLDR);
  voltagemLDR = Leitura * (5.0/1024);
  Serial.print("Leitura sensor LDR= ");
  Serial.println(voltagemLDR);

  if(voltagemLDR > limiar){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}