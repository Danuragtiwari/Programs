//blnking multiple leds code
//code to blink 4 leds 

int a;
void setup()
{
  Serial.begin(9600);
  for(a=1;a<=4;a++){
    pinMode(a,OUTPUT);
  }
}
 
void loop() {
   Serial.println("test");
  Serial.println(a);
  for(a=1;a<=4;a++){
    digitalWrite(a,HIGH);
    delay(1000);
    digitalWrite(a,LOW);
    delay(1000);
  }
for(a=4;a>=1;a--){
    digitalWrite(a,HIGH);
    delay(1000);
    digitalWrite(a,LOW);
    delay(1000);
  }
}
