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

Edit the `setup` code so that it looks like the code below.
```
...
void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
}
...
```
In the Arduino window, press the "right arrow" button at the top. This
does two things:
* *compiles* the code into a format that can be read by the Arduino
* uploads the code to Arduino (this step may take some time)

If everything went well, "Done Uploading" should appear below
the text editor.

To test your code, open the "Serial Monitor" using one of these methods:
* Click **Tools -> Serial Monitor**
* On Windows, type `CTRL+SHIFT+M`
* On Mac OSX, type `COMMAND+SHIFT+M`

The serial monitor should display "Hello World".

If you click the white "reset" button on the Arduino, the program will
start over and "Hello World" will be written again. Give it a try.


### A note on spaces
In C++, the spacing of the lines does not matter (unlike in Python),
but you must be careful to put semicolons in the right places. 
