#define a A0
int b;
int c;
void setup()
{
Serial.begin(9600);
pinMode(a,INPUT);
 pinMode(13,OUTPUT);
}
void loop(){
b= analogRead(a);
c=map(((b-20)*3.04),0,1023,-40,125);
 if (c<90){
    Serial.println("1");
    digitalWrite(13, LOW);
  }else{
    digitalWrite(13, HIGH);
    Serial.println("0");
    Serial.println("1");
}
}