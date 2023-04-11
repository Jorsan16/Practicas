int A = 10;
int B = 11;
int C = 12;

/* este es un codigo para 
hacer un contador de 0 a 7 en Binario
    */



void setup() {

  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);

}

void loop() {
  digitalWrite(A,LOW); //Haciendo el Numero 0
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  delay(500);

  digitalWrite(A,LOW); //Haciendo el numero 1
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  delay(500);

  digitalWrite(A,LOW); //Haciendo el numero 2
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  delay(500);

  digitalWrite(A,LOW); //Haciendo el numero 3
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  delay(500);

  digitalWrite(A,HIGH); //Haciendo el numero 4
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  delay(500);

  digitalWrite(A,HIGH); //Haciendo el numero 5
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  delay(500);

  digitalWrite(A,HIGH); //Haciendo el numero 6
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  delay(500);

  digitalWrite(A,HIGH); //Haciendo el numero 7
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  delay(500);

}
