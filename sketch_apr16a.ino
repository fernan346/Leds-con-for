

void setup() {
  for(int h=1; h<=10;h++){pinMode(h,OUTPUT);}
}

void loop(){
  
  
  for(int h=1; h<=10;h++){
   digitalWrite(h,HIGH); delay(500);
   digitalWrite(h,LOW); delay(500);}
  for(int h=10; h>=1;h--){
    digitalWrite(h,HIGH); delay(500);
   digitalWrite(h,LOW); delay(500);}}
