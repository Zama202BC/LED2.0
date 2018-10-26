int Red = 2;
int Green = 4;
int Blue = 3;
int micro = 0;

//Potentiometer 1
int Potentiometer1 = 1;
int val1 = 0;
int pval1 = 0;

//Potentiometer 2
int Potentiometer2 = 2;
int val2 = 0;
int pval2 = 0;

//Potentiometer 3
int Potentiometer3 = 3;
int val3 = 0;
int pval3 = 0;

void setup() {
  pinMode (Red, OUTPUT);
  pinMode (Green, OUTPUT);
  pinMode (Blue, OUTPUT);
  pinMode(Potentiometer1, OUTPUT);
  pinMode(Potentiometer2, OUTPUT);
  pinMode(Potentiometer3, OUTPUT);
  Serial.begin(9600);

  int i;
  for (i = 0; i < Red; i++)
    pinMode(Red, OUTPUT);

  for (i = 0; i < Green; i++)
    pinMode(Green, OUTPUT);

  for (i = 0; i < Blue; i++)
    pinMode(Blue, OUTPUT);
}

void loop() {
 pval1 = analogRead(Potentiometer1);
 pval2 = analogRead(Potentiometer2);
 pval3 = analogRead(Potentiometer3);
  
   if (pval1 != val1 || pval2 != val2 || pval3 != val3) {
   printstuff();
  }

  val1 = analogRead(Potentiometer1);
  val2 = analogRead(Potentiometer2);
  val3 = analogRead(Potentiometer3);

  micro = analogRead(Potentiometer1);
  delayMicroseconds(micro);
  digitalWrite (Red, HIGH);
  delayMicroseconds(micro);
  digitalWrite(Red, LOW);

  micro = analogRead(Potentiometer2);
  delayMicroseconds(micro);
  digitalWrite (Green, HIGH);
  delayMicroseconds(micro);
  digitalWrite(Green, LOW);

  micro = analogRead(Potentiometer3);
  delayMicroseconds(micro);
  digitalWrite (Blue, HIGH);
  delayMicroseconds(micro);
  digitalWrite(Blue, LOW);
}

void printstuff() {
  Serial.println("Potentiometer readout:");
  Serial.println(val1);
  Serial.println(val2);
  Serial.println(val3);
  Serial.println("----------------");
}
