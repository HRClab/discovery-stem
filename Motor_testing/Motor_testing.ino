#include<Servo.h>//Servo Library to control the motors
Servo a;
//Check pin connections before running

int pin1=9;

/* motor 1 located on Y+ arm 
   motor 2 located on X+ arm 
   motor 3 located on Y- arm 
   motor 4 located on X- arm 
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
  Serial.println("Initializing.....");
 for (int i=550;i<830;i++){
  a.writeMicroseconds(i);  //writeMicroseconds() gives a better inital speed at lower and probably safer values
  delay(35);}
  Serial.println("Complete");
}
//Setup block
void setup() {
   Serial.begin(9600);
   arming(); 

}
//run the motors
void spinning(){
 int s1;
 Serial.println("Enter a speed input to motor 1:");
while(Serial.available()==0);
s1=Serial.parseInt();
  a.writeMicroseconds(s1);
  delay(5000);

}
//Main loop
void loop() {
  spinning(); // call spinning in the loop
Serial.println("Wanna test again:(y/n)");
char esc=Serial.read();
if (esc=='n'){
  a.writeMicroseconds(0);
  while(1){} 
}
}








