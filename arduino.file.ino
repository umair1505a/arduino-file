#define A 9
#define B 11
void setup() {
  // put your setup code here, to run once:
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);

}

void loop() {
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  delay(500);
  digitalWrite(B,LOW);
  digitalWrite(A,HIGH);
  delay(500);
  
  // put your main code here, to run repeatedly:

}
