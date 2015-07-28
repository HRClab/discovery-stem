/* 
    This is an empty Arduino project file.
    
    In this lesson you will build up the code to perform some simple behaviors.
*/

/*
  This text is called a comment. It is ignored by the compiler.
  
  Comments are used to add explanations to code to make it easier for 
  people to understand.
*/

// Comments can also be written like this.

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
  
  int x = 2;
  Serial.print("Variable x has value ");
  Serial.println(x);
  
  int y = x * 3;
  Serial.print("Variable y has value ");
  Serial.println(y); 
  
  x = x + y;
  Serial.print("Variable x now has value ");
  Serial.println(x);
}

void loop() {
  // put your main code here, to run repeatedly:

}
