int a[8]={D1,D2,D3,D4,D5,D6,D7,D8};


int i=0,j=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  pinMode(D8,OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
  for(i=3,j=4;i>=0,j<=7;i--,j++)
  {
    digitalWrite(a[i],HIGH);
    digitalWrite(a[j],HIGH);
    delay(1000);
    digitalWrite(a[i],LOW);
    digitalWrite(a[j],LOW);
    delay(1000);
  }
}
