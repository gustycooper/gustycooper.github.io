---
title: Introduction
tags: [getting_started]
keywords: java, introduction, what's new, new features, portable
last_updated: May 1, 2016
summary: "This provides the introductory material for getting started in CPSC 220."
sidebar: mydoc_sidebar
permalink: /mydoc_intro_220/
---

## BBDT.1 Computer Definitions
**Computer** – A machine that stores and manipulates information under the control of a changeable program.

**Information** – Stuff that is good to know and can be communicated.  Information can be encoded in various forms.  We perceive information with our senses (eyes, ears, nose, and touch), store our perceptions in our brain, and share our perceptions with others.

We will be writing lots of programs.  A program will consist of algorithms and data.  The data is our information and the algorithms manipulate the data.  The data we create will be in variables.  Each variable will have a type.  The algorithms will use assignment statements, expressions, method calls, conditional statements, and loop statements.
 
Figure BBDT-1 – Communication of Information 

## BBDT.2 Computer Diagram (Eck 1.1)
The following diagram is a simpler version of the ones on pages 3 and 4 of Eck’s book.   The figure on page 3 shows the CPU accessing memory as a sequence of bytes.  The figure on page 4 shows the CPU accessing main memory, secondary memory, input devices, and output devices using a bus.  

 
Figure BBDT-2 - Computer Diagram 

## BBDT.3 Computer Diagram With Software (Eck 1.1)
The following diagram shows how software is stored on secondary memory (a disk, which is either a rotating disk or a solid state disk).  Software is loaded into main memory and executed by the Central Processing Unit (CPU) following the fetch-execute paradigm.  We will execute the code in Section BBDT.7 as a classroom exercise to demonstrate the fetch-execute cycle.  Newer computers are equipped with solid-state disks, which are more expensive per byte than the traditional rotating disk drives.  The Surface Pro and MacBook Pro/Air typically have solid-state disks.

 
Figure BBDT-3 - Computer Diagram with Programs

## BBDT.4 Compiling High-level Code (Eck 1.3)
A compiler generates machine code that can be directly executed by the CPU of a computer.  Machine code is binary code stored in memory; however, there is assembly language that is a one-to-one correspondence to machine code.  People can read assembly code.  We will walk through an example of assembly code.

 
Figure BBDT-4 - Compiling High-level Code

## BBDT.5 Interpreting Code (Eck 1.3)
An interpreter reads the source code and interprets the statements.  You will notice that an interpreter is a program executing on a CPU.  An interpreter has been compiled into machine code.  An interpreter is one of the programs 

 
Figure BBDT-5 - Interpreting Code

## BBDT.6 Java Byte Code Interpreting (Eck 1.3)
Java is executed by a combination of compiling and interpreting.  The Java source code is compiled into a Java-defined “assembly” language that is called Java byte code.  The byte code is interpreted by the Java interpreter.  The Java source code is contained in files with a .java extension.  The Java byte code is contained in files with a .class extension.  The .class files can be moved between computers.  You have to have a Java interpreter on a computer to run the .class files.

 
Figure BBDT-6 -Java Byte Code Interpreting

## BBDT.7 Demonstration of Assembly Code
This section shows a Java code snippet and the corresponding assembly code.

### BBDT.7.1 Java Code Snippet
The following Java code shows a simple algorithm, which will be translated into its corresponded assembly language in the next section.
{% raw %}
```java
int x = 1;
int y = 2;
int z;
if (x < y) {
  z = x + y;
}
else {
  z = x – y;
}
```
{% endraw %}

### BBDT.7.2 Assembly Code
The following is the corresponding assembly code for a generic assembly instruction set.  Each CPU has their own assembly language.  For example ARM CPUs (which are used in mobile devices such as smart phones and tablets) have different assembly language than the Intel I5 CPUs (which are used in laptops and desk tops).  You will be wise to realize that the following assembly language example is neither ARM nor Intel; however, it is reflective of most all assembly languages.

{% raw %}
```
load 1, R1
store R1, x
load 2, R2
store R2, y
compare R1, R2
jump GEQ, ELSE
add R1,R2,R3
store R3, z
jump ENDIF
ELSE: subtract R1, R2, R3
	Store R3, z
ENDIF: …
```
{% endraw %}

## BBDT.8 Portability

Code is portable if it can be moved from one computer to another, with little (or no modifications).  Assembly code is NOT portable – it only runs on the computer that has that assembly code.  High level code is portable.  For programs in C/C++ or other compiled languages, you will have to recompile the code before running on another machine.  For programs written in Java or other byte code languages, you can move the byte code and run it in the Java RTE.

## BBDT.9 Numbers – Decimal and Binary

Today’s number systems have a place value and a base.  The base is the number of symbols.  Beginning from the right and moving left, each place in a number has a value that corresponds to baseposition.  Decimal or base-10 has ten digits.  We use base-10 most likely because we have 10 fingers.  Everyone should realize the Romans did not use a place value system (e.g. M is 1000).  The Hindus started using place value numbers around 500.  The Hindus discovered ZERO around 650.  The Hindu numbering system was discovered right around the time of the expansion of Islam.  Arabic mathematicians adopted the system – hence Hindu-Arabic numbers.  Leonardo Fibonacci wrote a book Liber Abaci in 1202 where he extolled the virtues of place-value numbers; however, the western world did not adopt place value until around 1500.

 
Figure BBDT-7 - Decimal Number System

Binary is base-2.  There are two digits: 0 and 1.  It is just like decimal.  The following figure shows binary 0b101101, which is equivalent decimal 45

Figure BBDT-8 - Binary Number System

One think we have to consider with numbers is how many numbers can be encoded in a specific number of digits.  In decimal, we intuitively know the answer.  Three decimal digits can encode 1000 numbers, which are 0, 1, …, 999.  The formula for computing the total numbers for N digits is 10N.  The generic version of this formula is basenumOfDigits.   This means that a binary number in three digits can encode 8 numbers (23), which are shown below as binary and decimal.

Binary	       Decimal
000		0
001		1
010		2
011		3
100		4
101		5
110		6
111		7

An 8-bit quantity can represent 256 numbers (28).  A 16-bit quantity can represent 65536 numbers (216).  A 32-bit quantity can represent 4294967296 numbers (232).

## BBDT.10 Converting Between Bases
Input: Number, Base (both integers)
Output: Number converted to Base

Example: Convert(20,16); // convert 20 to base 16 (hex) 
// the answer is 0x14

// We will build answer from right to left
Convert(Number, Base)
    while (Number != 0) {
        digit = Number % Base      // modulo
        Number = Number / Base // integer division
        Add digit to answer
    }

## BBDT.11 Integers in a Computer
Let’s examine a 3-bit quantity, which can hold 8 (or 23) numbers.  If we want to represent only positive numbers, we can represent them as follows.
bin     dec
000      0
001      1
010      2
011      3
100      4
101      5
110      6
111      7

If we want to represent both positive and negative numbers, we can consider the first bit to be a sign bit to create signed magnitude numbers.  This means that each number has the same magnitude and a sign indicates whether the number is positive or negative   This is how we manipulate numbers in our brains.  For example, 512 is a magnitude with +512 being positive and -512 being negative.  The same 512 is on both the positive and negative numbers.  This results in the following for binary, which has two representations of zero.
bin     dec
011      3
010      2
001      1
000      0
100     -0
101     -1
110     -2
111     -3

Our brains process signed magnitude rather well, but computers do not.  Computers represent signed integers in twos-complement.  The following shows twos-complement for 3 bits.
bin     dec
011      3
010      2
001      1
000      0
111     -1
110     -2
101     -3
100     -4
 
Notice how twos-complement has only one representation of zero.  You will also notice how we get 3 positive numbers (22-1), one zero, and 4 negative numbers (22).  If we have an 8-bit twos-complement integer, we would have 127 positive numbers (27-1), one zero, and 128 negative numbers (27).  The general formula for a twos-complement number of N bits is the following.
•	2N-1-1 positive numbers
•	one zero
•	2N-1 negative numbers

There is a simple algorithm to convert between a positive and negative number in twos-complement, which is change all the bits and add one.  Let’s continue with our 3-bit example and convert a positive 2 to a negative 2.
•	Positive 2: 010
•	Change all the bits: 101
•	Add one: 101+1 is 110, which is negative 2

Twos complement also allows us to simply add numbers and subtraction takes care of itself.  Consider adding 1 and -1.
    001	 (1)
   +111    +(-1) 
--------------------
    000	 (0)
Let’s add 24 and 37
  00011000   24      
+ 00100101   37
----------------
  00111101   61

Let’s convert 37 to a negative 37
  11011010   Change bits
+        1   Add 1
-----------
  11011011   2’s Comp (-37)  

Let’s add 24 and -37.
  00011000    24
+ 11011011   -37
-----------------
  11110011   -13
 
## BBDT.12 Floating Point Numbers in a Computer
The first step in understanding floating-point numbers in a computer is to understand scientific notation.  All floating-point numbers can be represented in scientific notation, which has a fraction part (also called the mantissa) and exponent part.  Here are few numbers that have the same fraction, but different exponents.
 
3.14159 is equivalent to .314159 * 101
31415.9 is equivalent to .314159 * 105
31.4159 is equivalent to .314159 * 102
 
The following puts those numbers into a somewhat computer form, where all we care about is the exponent and fraction.  
exp   fraction
 1  .  314159
 5  .  314159
 2  .  314159

The fraction .314159 is 
3*.1 + 1 *.01 + 4*.001 + 1*.0001 + 5*.00001 + 9*.000001

Another way to write this is
3* 1/10 + 1* 1/100 + 4* 1/1000 + 1* 1/10000 + 5* 1/100000 + 9* 1/1000000

Of course, a computer only has binary so we will represent the fraction as a binary fraction.  For example, suppose we want to represent the fraction .625, which is ½ + ⅛.  We represent this fraction as 1*½ + 0*¼ + 1*⅛.  We can multiply .625 by 22, to get 2.5.  Putting all of this together in an 8-bit fraction that has 4-bits for a positive exponent and 4-bits for mantissa, we get the following
exp    fraction
0010 . 1010

This simple model is just slightly more complicated on real computers.  We can have positive and negative floating-point numbers, and the exponent can be both positive and negative.  Floating point binary numbers have a sign bit to indicate whether it is positive or negative.  The exponent is represented in a bias notation.  Suppose you had a 3-bit exponent.  The following represents a bias notation for the exponent. value.
bin     exp
000     -3
001     -2
010     -1
011      0
100      1
101      2
110      3
111      4

Floating point numbers in computers are stored with normalized mantissas, which means the fractional part has a 1 in the most significant fractional bit.  The decimal floating-point number 1234.567 is normalized as 1.234567 x 103.   Notice that only one digit appears before the decimal.  The exponent expresses the number of positions the decimal point was moved left  (positive exponent) or moved right (negative exponent).  The binary floating-point number 1101.101 is normalized as 1.101101 x 23.  Moving the binary point 3 positions to the left, and multiplying by 23 accomplishes this.  The following shows normalization of binary floating-point numbers.

 Binary Value	Normalized As	Exponent
 1101.101		1.101101		3
 .00101		1.01			-3
 1.0001		1.0001		0
 10000011.0		1.0000011		7
 
The following figure shows IEEE 745 floating-point numbers.

 
Figure BBDT-9 IEEE 754 Floating-point Format
Some examples of floating point numbers in the IEEE format are as follows.

Binary Value	Biased Exponent	Sign, Exponent, Mantissa	
  -1.11		127		1  	01111111  11000000000000000000000	
  +1101.101		130		0  	10000010  10110100000000000000000	
  -.00101		124		1  	01111100  01000000000000000000000	
  +100111.0		132		0  	10000100  00111000000000000000000	
  +.0000001101011	120		0  	01111000  10101100000000000000000
If a decimal fraction can be easily represented as a sum of fractions in the 
 form (1/2 + 1/4 + 1/8 + ... ), it is fairly easy to discover the corresponding binary real.  Here are a few simple examples

 Decimal Fraction	    Factored As...	Binary Real	
 	1/2	    		1/2				.1	
 	1/4	    		1/4				.01	
 	3/4	    		1/2 + 1/4			.11	
 	1/8	    		1/8				.001	
 	7/8	    		1/2 + 1/4 + 1/8		.111	
 	3/8	    		1/4 + 1/8			.011	
 	1/16	    		1/16				.0001	
 	3/16	    		1/8 + 1/16			.0011	
 	5/16	    		1/4 + 1/16			.0101

A computer can represent some floating point numbers quite well.  For example, .5 and .125; however some are just approximations.  How well can a computer represent .1?  Not too well.  The following algorithm as typed into the BlueJ Code Pad does not compute 1.0, which is what you think it should.
double y=.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y
0.9999999999999999   (double)

## BBDT.13 Java Elementary Data Types

A data type is a set of values and a set of operations.  When considering Java elementary data types such as byte, short, int, etc., the set of operations are the normal arithmetic operations.  The set of values are restricted by the individual type.  For example, the set of values for the type byte are -128 to 127.

We know that memory is a sequence of bytes, where each byte is 8-bits.  A byte can encode 256 (or 28) digits.  We can connect bytes together to make larger quantities.  Java elementary data types map directly to connected bytes of memory.
* byte – one byte
* short – two bytes
* char – two bytes
* int – four bytes
* long – eight bytes
* float – four bytes
* double – eight bytes

The following figure shows memory as bytes and how Java elementary data types align.
 
Figure BBDT-10 Memory and Java Elementary Data Types

## BBDT.14 Algorithm Introduction (Eck 3.2)

An algorithm is a sequence of steps that solves a problem.  We will also say that an algorithm has to terminate.  If an algorithm does not terminate, it cannot solve a problem.

We will create the steps of our algorithms using the following basic control structures.
* Sequential – perform the operation of a step and move to the next step
* Conditional – perform a test on some condition which determines which sequence of steps to execute
* Loop – execute a sequence of steps in a repetitive iteration

As we will soon discover, the most used sequential operation in programming is the assignment statement that assigns the value of some expression to a variable.

Suppose that you are about to purchase a car, and I tell you the following.
* One car costs $20,000.00 and gets 20mpg.
* Another car costs $30,000.00 and gets 30mpg.

If I ask you are to construct an algorithm in your brain that determines which of the cars you want to purchase, do you have enough information to construct an algorithm in your brain?  In this case you are trying to make a decision and your probably need some other parameters such as how much money you make each year, how far you plan to drive the car, and what percentage of you income you can afford to spend on operating your car.  For example, if you plan to drive your car 25,000 miles per year, gas will cost $3.50 per gallon, and you want to spend less that $3000 per year in gas; you could create some algorithm to help you decide which car to purchase.  You could compute the cost per year of each car and make a decision based on the lesser cost.  The algorithm may look like the following.

{% raw %}
For each car compute
   gas cost = miles driven / mpg * price per gal
total cost = purchase price + gas cost
if total cost car 1 < total cost car 2
   buy car 1
else
   buy car 2
{% endraw %}

The message from this discussion is that you need to specify enough information to create an algorithm.

The preceding algorithm is called pseudo code because it resembles code of some programming language, but it is not precise enough for a compiler to translate into machine code.  We can execute the algorithm in our brain.

The following subsections describe various algorithms.  The lego-based algorithms are renditions of those from a Udacity course.

### BBDT.14.1 Algorithm (Pseudo-code: ordering legos) 

For this algorithm, I give you a sequence of legos that are as follows.  

    b y b y b y

The challenge is to create an algorithm that results in the legos ordered such that the blue legos first followed by the yellow legos.  The following is the solution.

    b b b y y y

One algorithm that works for this particular case is the following.

       Move to first y b and swap them

The resulting steps of applying this algorithm are the following.

1.  b y b y b y
2.  b b y y b y
3.  b b y b y y
4.  b b b y y y

### BBDT.14.2 Algorithm (Pseudo-code: cost of shopping)

For this exercise, you are purchasing two items in a coffee shop.  You will keep a running total of the cost of your items.  The pseudo-code to compute this total is as follows.

{% raw }
item prices are Coffee 4.85 and Scone 3.25
cost = 0
for each item
   tax = item price * 0.08
   tip = item price * 0.10
   cost = cost + item price + tax + tip
print cost in your brain
{% endraw }

### BBDT.14.3 Algorithm (Pseudo-code: 3N+1) (Eck 3.2.2)

David Eck describes the 3N+1 algorithm in our textbook.  He develops the algorithm, including the code.  We will simply examine the pseudo code as follows.

{% raw }
n = 10
while n > 1
  print n
  if n is even
    n = n / 2
  else
    n = 3 * n + 1
{% endraw }

### BBDT.14.4 Algorithm (Pseudo-code: Legos with Rules)

This example forces you to construct an algorithm with a specific set of rules, which are sort of like what computers do when you have to use assemble language.  The rules that you have to use in your algorithm are the following.  As you continue in your study of computer science, you will encounter Turing machines, which have simplified rules like these that process a tape of information.  In our case the tape of information is a sequence of yellow and blue legos.

* Move your eyesight one space to the right
* Move your eyesight one space to the left
* Move your eyesight all the way to the right
* Move your eyesight all the way to the left

You can still use ifs and loops in your solution, but the sequential steps have to be one of the rules.  You are to use the rules to construct an algorithm that will find the first pair of legos that are ordered y b.  The initial input of legos is the follows.

b b b y y b b

The algorithm for finding the first pair ordered y b is given by the following.

{% raw }
move your eyes all the way to the left
while the pair y b is not found do the following
  if the piece you are looking at is blue
    move your eyesight one space right
  else if the piece to the right is blue
    stop you found it
  else if the piece to the right is yellow
    move your eyesight one space right
{% endraw }

### BBDT.14.5 Not An Algorithm (Pseudo-code: Lego swapping)

This example is one that is not an algorithm because it does not terminate.  Termination is also a criteria of Turing machines, which define a concept of computable.  This algorithm attempts to order a sequence of yellow and blue legos such that such that they are ordered with one color first followed by the other color

{% raw }
while the legos are not in order
   locate first pair of nonmatching legos
   swap them
{% endraw }

This algorithm will work on some input.  For example, it will work on the following.

y y b y b b

However, if you attempt the algorithm on the sequence y b y b, it never terminates.  The first two steps (which are repeated forever) are given as follows.

1.  b y y b
2.  y b y b 

### BBDT.14.6 Algorithm (Pseudo-code: Lego Doorway)

If you own a house construction company, you probably have an algorithm for building a house.  You know how to study the plans, order the materials, and assemble them in a specific order.  This is particularly true when you have built the same house several times.  This example builds a doorframe with legos.  In this example, there are two kinds of legos: 1 is 8x2, the other is 2x2

{% raw }
place an 8x2 lego horizontally
stick a 2x2 lego on top of the left end of the 8x2 lego
repeat 3 times
  stick a 2x2 lego on top of the previous lego
stick a 2x2 lego on top of the right end of the 8x2 lego
repeat 3 times
  stick a 2x2 lego on top of the previous lego
place on 8x2 lego on top
{% endraw }

## BBDT.15 Programming

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

### BBDT.15.1 Types of Programming Errors
We will encounter two types of errors in our programming.
* Syntax – missing semicolon, missing {
  * These are compile time errors.  For BlueJ, you have to select the Compile button.  For Netbeans, these will be shown as you create code.
  * These are easy to discover.
* Semantics – Code does not do what it is supposed to do.
  * These are runtime errors.
  * These can be difficult to discover.

### BBDT.15.2 Programming – Input and Output

Another way to think about programs is input and output.  A program will accept some input data, perform its algorithm, and generate output data.  The computer diagram in Figure BBDT-2 shows input and output as two primary boxes.  The program executes on the CPU transforming the input into output.

### BBDT.15.3 Programming – Data Structures and Variables

We have constructed a model of programming where our program will consist of the following.
* Input – there will be some input to our program.
* Data Structures – our program will represent the input as some data in the form of structures.  Our program will also create various intermediate forms of data in the form of structures.  At this point we do not have a clear picture of these data structures; however, you can envision the simplest of data structures, which is just a variable that is one of the Java elementary data types.  Later we will learn how variables can be more complex data structures.
* Algorithms – our program will have various algorithms that transform data from one format to another.
* Output – our program will generate some output based upon the input and our algorithms and data structures.

### BBDT.15.4 Programming – Literals and Variables

A literal is something that you know its value upon examination.  For example, the numbers 1, 3.14159, 10000, and 512.12 are literals.  

We will study strings, which also have literals – examples are “Gusty” and “This is a String Literal.”

Variables are names that we assign values to.  See next section for declaring variables of elementary data types.

### BBDT.15.5 Programming – Declaring Variables of Elementary Data Types

We have learned that Java elementary data types fit in specific memory locations.  For example, an int will fit in 4 consecutive bytes.  When we declare a variable of these types, we are allocating memory for that variable.  The contents of that variable are stored in the memory locations allocated to the variable.  The meta-language for declaring variables is the following.

<type-name> <variable-name-or-names>;

where <type-name> is byte, short, char, int, long, float, or double.  A variable name must begin with a letter and followed by letters, numbers, and underscore.  The following are some example declarations.
 
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

#### BBDT.15.5.1 camelCase

You will notice the style of naming variables where they begin with a lowercase letter with an uppercase letter helping you read the variable (i.e., interestRate).  This style of naming is referred to as camelCase, and it is quite popular in object-oriented programming.  You could alternatively use the underscore (_) to help read (i.e, interest_rate).

#### BBDT.15.5.2 Declaring Variables, Memory, Types, and Values

In Java each variable is declared to be a specific type.  A variable is a memory location that has been given a name so you can reference it.  The variable contains a specific value, which must the specified type.  Your program will manipulate (either access or change) the value of the variable.

### BBDT.15.6 Programming – Java is a Strongly Typed Language

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

## BBDT.16 Software Development Process

Programming is typically done within the context of a software development process.  A software develop process can be thought of as an algorithm for creating programs.  I will often refer to this process as ASDIDM, where this is an acronym for the following sequence of steps that solves the problem of creating programs.
* Analyze – understand the problem
* Specify – state what the problem is.  This captures the requirements of the software.  This is usually accomplished using text that the programmer and the end-user can read and agree upon.  Large software development organizations will have specialized requirements management tools.
* Design – create how the problem is solved.  This captures the high-level algorithms of the software.  We will use pseudo code similar to that show in section BBDT.13. (Eck 4.6)
* Implement – create the code. This step will be our main focus.  Sometimes the design is detailed enough that the code can (somewhat) easily be created from the design.  At other times, the design captures the overall ideas leaving more effort to create the code.
* Debug – test the code.  We can divide this step into two activities.  One is creating test cases and running the test cases.  Sometimes the test cases do not work.  When this happens we can perform the second activity, which is debugging the code to see why the test case did not work.  The term debug originated when computers were large machines with relays.  A moth got stuck in a relay causing the program to run incorrectly.  The program was debugged.
* Maintain – correct problems and add new capabilities to the code.  The maintain step is usually accomplished by performing a new iteration of ASDIDM, where you fix bugs in your software and/or add new capabilities.
 
This class will focus on programming, which primarily involves design, implement, and debug/test.  I will provide you with problems, which can be considered the specifications.  You will have to design your program, create the code, and test your code to make sure it satisfies the specified requirements.

### BBDT.16.1 Functional Decomposition Development

XXX

### BBDT.16.2 Object-oriented Development

XXX
We will discuss this in more detail during week 5.

### BBDT.16.3 Agile Software Development

XXX

## BBDT.17 Creating Programs – Editors and IDE (Eck 2.6)

We will write Java programs or Java code.  Java code is simply a text file so you can use just about any text editor create the code.  For example, I sometime use VIM, and old, but trustworthy, UNIX editor.  When using VIM, I can compile my Java code by using the javac compiler from my UNIX command shell.  I can then run the resulting byte code using the java byte-code interpreter from my UNIX command shell.

We will use an Interactive Development Environment to create and run our Java code.  We will begin with BlueJ, which is a simple IDE.  I think BlueJ will allow you to more easily become familiar with objects.  In week 5 we will begin using Netbeans, which is more complex.  Netbeans has many features – I do not know how to use all of the features.

## BBDT.18 JVM, JDK, and JRE (Eck 2.6)

JVM, JDK, and JRE area often mentioned when discussing Java.  They can be confusing at first, and I sometimes still get them confused.  You can always look them up.
* JVM – Java Virtual Machine.  This is the code that executes the Java Byte Code.  You can think of Java Byte Code as Java specific assembly language.  The JVM is like a virtual computer that knows how to execute the Java Byte Code.
* JRE – Java Runtime Environment.  The JRE includes the JVM as well as the various libraries that come with Java and you will need to execute your Java byte code.
* JDK – Java Development Kit.  The JDK includes the JRE as well as the development tools such as the Java compiler and Java debugger.

We will use Java Standard Edition Development Kit 8.

## BBDT.19 Java Syntax – An Introduction

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

## BBDT.20 Output to the Standard Output Stream

For our first program, we will need to write output to the Java standard output stream, which in BlueJ will be a window called the BlueJ Terminal Window.  A terminal window is a text-based window for interacting with UNIX or LINUX.  Sometimes, I may call the standard output stream the system console.  The standard output stream is already open, and you do not have to import anything to access the method.  There are two methods that we will use which are the following.
* System.out.print(data) – this prints data to the current line on the terminal, leaving the terminal on that line.
* System.out.println(data) – this prints data to the current line on the terminal and puts a line feed afterwards, advancing the terminal to the next line

The data will be converted to a printable format.  If you have several variables to print you have to “concatenate” them.  The following is an example.

{% raw %}
```java
System.out.println(“Num 1 is “ + 4 + “ and num 2 is “ + 3.14 + “.”);
```
{% endraw %}

## BBDT.21 Java Blocks, Sequence of Assignment Statements

The most used statement in programming is an assignment statement.  We have already used it in several of the preceding sections.  The following are some example Java assignment statements.

{% raw %}
```java
x = 3.0;        
i = 32000;      
long l = 32000;  // declares l and assigns it a value
```
{% endraw %}

In Java the meta-language for an assignment is the following.

<variable> = <expression>;

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

## BBDT.22 First Java Program (Eck 2.1)

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

## BBDT.23 Computer Science

Computer science can mean several things.  You may think of computer science as writing programs, establishing networks, putting various workstations on the networks, creating websites, creating databases, removing malware from computers, or any combination of these things.  

A more theoretical definition of computer science is studying what can be computed.  By computed we can construct an algorithm (and its accompanying data structures) that will execute its sequence of steps and terminate when finished.  We know that we can write computer programs to perform computations, but computer scientists also use abstract machines to determine computability.  A Turing Machine – named for its creator Alan Turing who had the movie Imitation Game created about him – is an example abstract machine.  The following is a question about the 3N+1 Algorithm discussed earlier.  

Will the algorithm for 3N+1 terminate for all possible initial values of N? 

We know it terminates for everything tried, but we have not answered the general question.

For this class, I like to think of computer science as designing, analyzing, and evaluating algorithms and their accompanying data structure.
