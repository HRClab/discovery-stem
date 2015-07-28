# Arduino Programming

In this lesson we will introduce some of the techniques for
programming small computers called *Arduinos*.

Arduinos are often used on small robots such as quadcopters, since
they are light-weight, easy-to-use, and fairly inexpensive.

We will program the Arduinos using the programming language C++. In
some other lessons, we will program with the language Python. Be
careful, because the two languages are a bit different. 


## The beginning file

We will start with a file that looks like this:

```
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
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
```
In the code above, there are several comments. These do not change the
behavior of the program, but they can be used to explain the code to
programmers.

We will modify the code until it is doing interesting things. 

## Hello World

In order to start programming the Arduino, we will write a simple
program called "Hello World".

Edit the `setup` code so that it looks like the code below. (Do not
modify the rest of the code.)
```
void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
}
```
In the Arduino window, press the "right arrow" button at the top. This
does two things:
* *compiles* the code into a format that can be read by the Arduino
* uploads the code to Arduino (this step may take some time)

If everything went well, "Done Uploading" should appear below
the text editor.

To test your code, open the "Serial Monitor", click **Tools -> Serial Monitor**

The serial monitor should display "Hello World".

If you click the white "reset" button on the Arduino, the program will
start over and "Hello World" will be written again. Give it a try.


### A note on spaces
In C++, the spacing of the lines does not matter (unlike in Python),
but you must be careful to put semicolons in the right places. 

## Variables

Now we will see how you can use variables to store information and
perform calculations.

### Defining a variable
Edit `setup` code again so that it looks like the code below:

```
void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
  
  int x = 2;
  Serial.print("Variable x has value ");
  Serial.println(x);
}
```
Upload the code using the "right arrow" button, and examine the
  behavior with the serial monitor.

In C++, we must be careful about how we *initialize* variables.

The line `int x = 2` should be interpreted as "create an integer
called 'x' with value 2."

### Defining a new variable from a calculation

Now we will perform a basic calculation and define a new variable to
hold the result.

Edit the `setup` code again so that it reads
```
void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
  
  int x = 2;
  Serial.print("Variable x has value ");
  Serial.println(x);
  
  int y = x * 3;
  Serial.print("Variable y has value ");
  Serial.println(y); 
}
```
Upload the code and test it.

### Changing the value of a variable

Sometimes it is useful to change the value of a variable as the result
of a calculation. To see how this works, change `setup` again so that
it reads:
```
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
```
There are a few things to note:
* You cannot interpret the  expression `x = x + y` as you would in
  math. (It would be incorrect!) Instead, it should be interpreted as:

  "The new value of variable `x` is the current value of variable `x` plus the
  current value of variable `y`"
* When changing the value of a variable, we do not write the term
  `int` again, since we've already written above that `x` is an
  `int`.

## The loop

For robot applications, we will typically have calculations that must
be performed repeatedly. These repeated calculations are performed by
the loop section of the code.

Before editing the `loop` code, we will define a variable that can be
accessed by the `loop` function. Change the code above `void setup()`
as follows
```
int i = 0;

void setup() {
...
```
Now change the loop function to read:
```
void loop() {
  i = i + 1;
  Serial.print("Variable i has value ");
  Serial.println(i);
  delay(1000);
}
```
Upload the code and test it with the serial monitor.

The command `delay(1000)` makes the loop wait for 1 second (1000 ms)
before restarting. This makes the output easier to read in the serial
monitor. 

What do you think would happen if you placed the command `int i = 0;`
inside the loop?