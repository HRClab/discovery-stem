#include<Servo.h>//Servo Library to control the motors
Servo a,b,c,d;
//Check pin connections before running
int pin2=11;
int pin3=13;
int pin1=9;
int pin4=7;
/* motor a located on Y+ arm (#1)
   motor b located on X+ arm (#2)
   motor c located on Y- arm (#3)
   motor d located on X- arm (#4)
*/
/*  lower bound for each motor 
    motor 1 837 
    motor 2 1184
    motor 3 1183 
    motor 4 1145*/
//Restrict the upper bound to 1500 for all motor    
//inital period of 'no motion' for safety (ESC stuff...) 
void arming(){
  a.attach(pin1);
  b.attach(pin2);
  c.attach(pin3);
  d.attach(pin4);
  Serial.println("Initializing.....");
 for (int i=550;i<830;i++){
  a.writeMicroseconds(i);  //writeMicroseconds() gives a better inital speed at lower and probably safer values
  b.writeMicroseconds(i);   
  c.writeMicroseconds(i);
  d.writeMicroseconds(i);  
  delay(45);}
  Serial.println("Complete");
}
//Setup block
void setup() {
   Serial.begin(9600);
   arming(); 

}
//run the motors
void spinning(){
 int s1,s2,s3,s4;
 Serial.println("Enter a speed input to motor 1:");
while(Serial.available()==0);
s1=Serial.parseInt();
Serial.println("Enter a speed input to motor 2:");
while(Serial.available()==0);
s2=Serial.parseInt();
Serial.println("Enter a speed input to motor 3:");
while(Serial.available()==0);
s3=Serial.parseInt();
Serial.println("Enter a speed input to motor 4:");
while(Serial.available()==0);
s4=Serial.parseInt();
  a.writeMicroseconds(s1);
  b.writeMicroseconds(s2);
  c.writeMicroseconds(s3);
  d.writeMicroseconds(s4);
  delay(5000);

}
//Main loop
void loop() {
  spinning(); // call spinning in the loop
Serial.println("Wanna test again:(y/n)");
char esc=Serial.read();
if (esc=='n'){
  a.writeMicroseconds(0);
  b.writeMicroseconds(0);
  c.writeMicroseconds(0);
  d.writeMicroseconds(0);
  while(1){} 
}
}








