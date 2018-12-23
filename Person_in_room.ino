int ir1,ir2,s;
int i=0,j=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(D1,INPUT);
  pinMode(D2,INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  ir1=digitalRead(D1);
  ir2=digitalRead(D2);
  if(ir1==0)
  {
    i++;
  }
  if(ir2==0)
  {
    j++;
  }
  s=i-j;
  Serial.println(s);
  2
  

}
