#define LEDVM 33
#define LEDAM 25
#define LEDVD 26
#define LEDVM2 5
#define LEDAM2 18
#define LEDVD2 19

void setup() {
  pinMode(LEDVM, OUTPUT);
  pinMode(LEDAM, OUTPUT);
  pinMode(LEDVD, OUTPUT);
  pinMode(LEDVM2,OUTPUT);
  pinMode(LEDAM2,OUTPUT);
  pinMode(LEDVD2,OUTPUT);
}

void loop() {
digitalWrite(LEDVM, HIGH);
digitalWrite(LEDVD2, HIGH);
delay(4000);
digitalWrite(LEDVD2, LOW);
digitalWrite(LEDAM2, HIGH);
delay(2000);
digitalWrite(LEDVM, LOW);
digitalWrite(LEDAM2, LOW);
digitalWrite(LEDVM2, HIGH);
digitalWrite(LEDVD, HIGH);
delay(4000);
digitalWrite(LEDVD, LOW);
digitalWrite(LEDAM, HIGH);
delay(2000);
digitalWrite(LEDVM2, LOW);
digitalWrite(LEDAM, LOW);


}

