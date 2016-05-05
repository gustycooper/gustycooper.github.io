---
title: Algorithms and Programming
tags: [getting_started]
keywords: java, algorithms, design, programming
last_updated: May 1, 2016
summary: "This describes algorithms and programming"
sidebar: mydoc_sidebar
permalink: /mydoc_1_algorithms_programming/
---

## Programming

Writing a program is primarily creating algorithms and data structures.  In fact you can purchase a book published in 1976 by Niklaus Wirth (the creator of the programming language Pascal) that is titled, Algorithms + Data Structures = Programs.  At this point the only data structures we know are the Java elementary data types, but we will learn others and how to create our own.   Creating the algorithms for programs is similar to that in BBDT.14.  We will use the same control flows; however, we have to be more precise and understand the syntax of the programming language, which is Java for us.  

There are two basic types of knowledge – knowledge what and knowledge how.  Knowledge what is just facts that you stick in your brain.  For example, you know the world is round and that the U.S. dropped the first atomic bomb on Hiroshima.  Knowledge how is knowing how to do things.  For example, you know how to ride a bicycle and how to cook a hamburger.   Programming involves both types of knowledge.  The knowledge we want to establish in this class is knowledge how – we want to learn how to write programs.  We will learn knowledge what with respect to Java and its intricacies, but the knowledge how we learn will be applicable to any programming language.

We will update the basics of programming to involve the following aspects. 

* Programming language syntax
  * This is knowledge what
  * The syntax is tedious and you have to understand it.
* Creating an algorithm and its data structures that solves a problem
  * This is knowledge how
  * This is the semantics or meaning of our program.
  * This is creative that gets better the more you practice.
  * This is the part we really want to learn this semester, and we have lots of labs and projects on which to practice

## Types of Programming Errors

We will encounter two types of errors in our programming.

* Syntax – missing semicolon, missing {
  * These are compile time errors.  For BlueJ, you have to select the Compile button.  For Netbeans, these will be shown as you create code.
  * These are easy to discover.
* Semantics – Code does not do what it is supposed to do.
  * These are runtime errors.
  * These can be difficult to discover.

## Programming – Input and Output

Another way to think about programs is input and output.  A program will accept some input data, perform its algorithm, and generate output data.  The computer diagram in Figure BBDT-2 shows input and output as two primary boxes.  The program executes on the CPU transforming the input into output.

## Programming – Data Structures and Variables

We have constructed a model of programming where our program will consist of the following.

* Input – there will be some input to our program.
* Data Structures – our program will represent the input as some data in the form of structures.  Our program will also create various intermediate forms of data in the form of structures.  At this point we do not have a clear picture of these data structures; however, you can envision the simplest of data structures, which is just a variable that is one of the Java elementary data types.  Later we will learn how variables can be more complex data structures.
* Algorithms – our program will have various algorithms that transform data from one format to another.
* Output – our program will generate some output based upon the input and our algorithms and data structures.

## Programming – Literals and Variables

A literal is something that you know its value upon examination.  For example, the numbers 1, 3.14159, 10000, and 512.12 are literals.  

We will study strings, which also have literals – examples are “Gusty” and “This is a String Literal.”

Variables are names that we assign values to.  See next section for declaring variables of elementary data types.

## Programming – Declaring Variables of Elementary Data Types

We have learned that Java elementary data types fit in specific memory locations.  For example, an int will fit in 4 consecutive bytes.  When we declare a variable of these types, we are allocating memory for that variable.  The contents of that variable are stored in the memory locations allocated to the variable.  The meta-language for declaring variables is the following.

{% raw %}
```
<type-name> <variable-name-or-names>;
```
{% endraw %}

where \<type-name\> is ```byte```, ```short```, ```char```, ```int```, ```long```, ```float```, or ```double```.  A variable name must begin with a letter and followed by letters, numbers, and underscore.  The following are some example declarations.
 
{% raw %}
```java
int numberOfStudents;
double x, y;
char firstInitial, middleInitial, lastInitial;
byte b;
double principal;    // Amount of money invested.
double interestRate; // Rate as a decimal, not percentage.
```
{% endraw %}

You can also assign a value with the declaration.

{% raw %}
```java
int number = 4;
byte bb = 120;
double myPi = Math.PI;
```
{% endraw %}

## camelCase

You will notice the style of naming variables where they begin with a lowercase letter with an uppercase letter helping you read the variable (i.e., interestRate).  This style of naming is referred to as camelCase, and it is quite popular in object-oriented programming.  You could alternatively use the underscore (_) to help read (i.e, interest_rate).

## Declaring Variables, Memory, Types, and Values

In Java each variable is declared to be a specific type.  A variable is a memory location that has been given a name so you can reference it.  The variable contains a specific value, which must the specified type.  Your program will manipulate (either access or change) the value of the variable.

## Programming – Java is a Strongly Typed Language

All variables in Java will be a specific type, for example int or double.  Once you have a variable of a specific type, you cannot change the type – for example an int variable will always be an int.  Sometimes you have to convert from one type to another, and there are some cases where Java will automatically perform the type conversion.  For example, if you mix int and double in expressions, Java will automatically convert the int to a double.  This makes sense intuitively.  In other cases, Java will not make the conversion; however, you can tell Java to perform the conversion.  Suppose I have the following two variables defined.

{% raw %}
```java
int number = 4;
byte bb = 120;
```
{% endraw %}

We know that an int is four-bytes long while a byte is just a single byte, which means the set of values for the variable number is much larger that the set of values for the variable bb.  This means the following assignment is illegal in Java.

{% raw %}
```java
bb = number; // illegal assignment
```
{% endraw %}

However, we know that the current value in number is 4, which fits into a byte.  We can perform the following cast to make the assignment legal.

{% raw %}
```java
bb = (byte)number; // legal assignment with (byte) cast
```
{% endraw %}

An example of casting a double to a int is shown as follows.

{% raw %}
```java
int number = 4;
double myPi = 3.14159;
number = (int)myPi; // assigns 3 to number
```
{% endraw %}

## Software Development Process

Programming is typically done within the context of a software development process.  A software develop process can be thought of as an algorithm for creating programs.  I will often refer to this process as ASDIDM, where this is an acronym for the following sequence of steps that solves the problem of creating programs.

* Analyze – understand the problem
* Specify – state what the problem is.  This captures the requirements of the software.  This is usually accomplished using text that the programmer and the end-user can read and agree upon.  Large software development organizations will have specialized requirements management tools.
* Design – create how the problem is solved.  This captures the high-level algorithms of the software.  We will use pseudo code similar to that show in section BBDT.13. (Eck 4.6)
* Implement – create the code. This step will be our main focus.  Sometimes the design is detailed enough that the code can (somewhat) easily be created from the design.  At other times, the design captures the overall ideas leaving more effort to create the code.
* Debug – test the code.  We can divide this step into two activities.  One is creating test cases and running the test cases.  Sometimes the test cases do not work.  When this happens we can perform the second activity, which is debugging the code to see why the test case did not work.  The term debug originated when computers were large machines with relays.  A moth got stuck in a relay causing the program to run incorrectly.  The program was debugged.
* Maintain – correct problems and add new capabilities to the code.  The maintain step is usually accomplished by performing a new iteration of ASDIDM, where you fix bugs in your software and/or add new capabilities.
 
This class will focus on programming, which primarily involves design, implement, and debug/test.  I will provide you with problems, which can be considered the specifications.  You will have to design your program, create the code, and test your code to make sure it satisfies the specified requirements.

### Functional Decomposition Development

XXX

### Object-oriented Development

XXX
We will discuss this in more detail during week 5.

### Agile Software Development

XXX

## Creating Programs – Editors and IDE ([Eck 2.6](http://math.hws.edu/javanotes/c2/s6.html))

We will write Java programs or Java code.  Java code is simply a text file so you can use just about any text editor create the code.  For example, I sometime use VIM, and old, but trustworthy, UNIX editor.  When using VIM, I can compile my Java code by using the javac compiler from my UNIX command shell.  I can then run the resulting byte code using the java byte-code interpreter from my UNIX command shell.

We will use an Interactive Development Environment to create and run our Java code.  We will begin with BlueJ, which is a simple IDE.  I think BlueJ will allow you to more easily become familiar with objects.  In week 5 we will begin using Netbeans, which is more complex.  Netbeans has many features – I do not know how to use all of the features.

## JVM, JDK, and JRE ([Eck 2.6](http://math.hws.edu/javanotes/c2/s6.html))


JVM, JDK, and JRE area often mentioned when discussing Java.  They can be confusing at first, and I sometimes still get them confused.  You can always look them up.
* JVM – Java Virtual Machine.  This is the code that executes the Java Byte Code.  You can think of Java Byte Code as Java specific assembly language.  The JVM is like a virtual computer that knows how to execute the Java Byte Code.
* JRE – Java Runtime Environment.  The JRE includes the JVM as well as the various libraries that come with Java and you will need to execute your Java byte code.
* JDK – Java Development Kit.  The JDK includes the JRE as well as the development tools such as the Java compiler and Java debugger.

We will use Java Standard Edition Development Kit 8.

## Java Syntax – An Introduction

Java syntax can be a bit confusing at first, as it has strategically placed semicolons, curly brackets, and parentheses.
* Semicolon – a single statement is terminated with a semicolon.  For example an assignment statement,
x = 3.0;
* Curly braces – a block of statements is enclosed by curly braces {}.  The closing curly brace is not terminated by a semicolon.  For example the simple class and main function show curly braces.
public class HelloWorld {
   public static void main(String[] args) {
      System.out.println(“Hello World!”);
   }
}
* Parentheses are used in expressions to force a specific expression evaluation; however, parentheses are also used to enclose the controlling expressions of conditionals and loops.  For example, the following if statement shows parentheses, curly braces, and semicolons
{% raw %}
```java
if (a < b) {
    a = b;
} else {
    b = a;
}
```
{% endraw %}

There are other syntax rules such as operators in expressions, keywords for if statements, keywords for loops, etc.  We will tackle these as we move forward.

The spacing in Java does not make any difference.  The previous if statement can be coded as follows.

{% raw %}
```java
if (a < b) {a = b;} else {b = a;}
```
{% endraw %}

You should establish a good programming style that makes your code easy to read.

## Output to the Standard Output Stream

For our first program, we will need to write output to the Java standard output stream, which in BlueJ will be a window called the BlueJ Terminal Window.  A terminal window is a text-based window for interacting with UNIX or LINUX.  Sometimes, I may call the standard output stream the system console.  The standard output stream is already open, and you do not have to import anything to access the method.  There are two methods that we will use which are the following.
* System.out.print(data) – this prints data to the current line on the terminal, leaving the terminal on that line.
* System.out.println(data) – this prints data to the current line on the terminal and puts a line feed afterwards, advancing the terminal to the next line

The data will be converted to a printable format.  If you have several variables to print you have to “concatenate” them.  The following is an example.

{% raw %}
```java
System.out.println(“Num 1 is “ + 4 + “ and num 2 is “ + 3.14 + “.”);
```
{% endraw %}

## Java Blocks, Sequence of Assignment Statements

The most used statement in programming is an assignment statement.  We have already used it in several of the preceding sections.  The following are some example Java assignment statements.

{% raw %}
```java
x = 3.0;        
i = 32000;      
long l = 32000;  // declares l and assigns it a value
```
{% endraw %}

In Java the meta-language for an assignment is the following.

{% raw %}
\<variable\> = \<expression\>;
{% endraw %}

In the previous examples, <expression> was a simple numeric literal.  We will study expressions in more detail shortly.  The third example combines the declaration of a variable with an assignment statement. 

In Java we can create a block of statements by enclosing them between { and }.  The following is a block of the preceding statements.  You should notice that there are no semicolons after { or }.

{% raw %}
```java
{
   x = 3.0;        
   i = 32000;      
   long l = 32000;  // declares l and assigns it a value
}
```
{% endraw %}

We will use a block of statements in our first Java program.  We will use a block of statements many times throughout this course.

We will learn that the assignment operator (=) is just like other operators, and it can be mixed into complex expressions; however, undersanding the semantics of when using assignment in an expression can be difficult.  You are best served by using simple assignment statements.

## First Java Program (Eck 2.1)

Our fist Java program will simply manipulate the elementary Java data types and print some information to the output console.  Every program in Java must be in a class.  We will learn more about classes next week.  The name of the file and class must match.  For the most part the IDE will ensure this for you.  You first program will look something like the following, which is a classic hello world program.  More details are provided in Lab 1.

{% raw %}
```java
public class HelloWorld {
   public static void main(String[] args) {
      System.out.println(“Hello World!”);
   }
}
```
{% endraw %}

## Computer Science

Computer science can mean several things.  You may think of computer science as writing programs, establishing networks, putting various workstations on the networks, creating websites, creating databases, removing malware from computers, or any combination of these things.  

A more theoretical definition of computer science is studying what can be computed.  By computed we can construct an algorithm (and its accompanying data structures) that will execute its sequence of steps and terminate when finished.  We know that we can write computer programs to perform computations, but computer scientists also use abstract machines to determine computability.  A Turing Machine – named for its creator Alan Turing who had the movie Imitation Game created about him – is an example abstract machine.  The following is a question about the 3N+1 Algorithm discussed earlier.  

Will the algorithm for 3N+1 terminate for all possible initial values of N? 

We know it terminates for everything tried, but we have not answered the general question.

For this class, we will consider computer science to be **designing, analyzing, and evaluating algorithms and their accompanying data structure**.
