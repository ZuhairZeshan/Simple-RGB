#define RED 3
#define GREEN 5
#define BLUE 6

void setup() {
 pinMode(RED,OUTPUT);
 pinMode(GREEN,OUTPUT);
 pinMode(BLUE,OUTPUT);
 
}

void loop() {
 digitalWrite(RED,HIGH);
 delay(1000);
 digitalWrite(RED,LOW);
 //delay(1000);
 digitalWrite(GREEN,HIGH);
 delay(1000);
 digitalWrite(GREEN,LOW);
 //delay(1000);
 digitalWrite(BLUE,HIGH);
 delay(1000);
 digitalWrite(BLUE,LOW);
 //delay(1000);
}