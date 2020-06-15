int in1=7;
int in2=6;
int in3=4;
int in4=2;
#define en1 5
#define en2 3
#define pot1 A0
#define pot2 A1
#define PB 9
void setup() {
  // put your setup code here, to run once:
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(en1,OUTPUT);
pinMode(en2,OUTPUT);
pinMode(pot1,INPUT);
pinMode(pot2,INPUT);
pinMode(PB,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int potValue1= analogRead(pot1);
int pwmOutput1=map(potValue1,0,1023,0,255);
int potValue2= analogRead(pot2);
int pwmOutput2=map(potValue2,0,1023,0,255);
analogWrite(en1,pwmOutput1);
analogWrite(en2,pwmOutput2);
if(digitalRead(9)==0){
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);}
if(digitalRead(9)==1){
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);}


 
}
