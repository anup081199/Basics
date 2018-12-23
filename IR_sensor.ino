int a;
void setup() {
  // put your setup code here, to run once:
  pinMode(D1,INPUT);
  pinMode(D7,OUTPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  a=digitalRead(D1);
  if(a==1)
  {
    Serial.println("no OBSTACLE in PATH");
    //Serial.println("someone in proximity");
    digitalWrite(D7,LOW);
    
  }
  if(a==0)
  {
    Serial.println("OBSTACLE in PATH");
    //Serial.println("no one in proximity");
    digitalWrite(D7,HIGH);
    
    
  }

}
