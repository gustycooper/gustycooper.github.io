---
title: Java Meta Language
tags: [Java meta language]
keywords: meta language
last_updated: May 1, 2016
summary: "Meta Language"
sidebar: mydoc_sidebar
permalink: /mydoc_A_meta_language/
---

## Appendix A: Java Language Meta Language and Tips

The meta-language in this Appendix is from our David Eck’s online textbook.  David has these spread throughout his book.  I have collected them together in an appendix.

## public static void main

A public static void main() function is usually the entry point of your program.  main(String[] args) has an String array as its argument, where the “command line” arguments are passed as parameters.  For example, if the following is how your program in invoked.

java myProgram one two three

{% raw %}
```java
arg[0] has “one”
arg[1] has “two”
arg[2] has “three”
```
{% endraw %}

For most of our problems, we do not pass command line arguments.  BlueJ allows you to pass parameters.

The following show the syntax of a main() function and a public class that has a main() function.

## static void main method.

```java
public static void main(String[] args) {
	<statements>
}
```

## Program with a static void main method.

{% raw %}
```java
public class <program-name> {
	<optional-variable-declarations-and-subroutines>
	public static void main(String[] args) {
		<statements> 
	}
	<optional-variable-declarations-and-subroutines>
}
```
{% endraw %}

## Simple Variable Declaration

{% raw %}
```java
<type-name> <variable-name-or-names>;

int numberOfStudents;
String name;
double x, y;
boolean isFinished;
char firstInitial, middleInitial, lastInitial;
double principal;    // Amount of money invested.
double interestRate; // Rate as a decimal, not percentage.
```
{% endraw %}

You can also assign a value with the declaration.

{% raw %}
```java
int number = 4;
String name = “Gusty”;
double myPi = Math.PI;
```
{% endraw %}

## Array Variable Declaration and Allocation

{% raw %}
```java
<type-name>[] <variable-name-or-names> = new <type-name>[<array-len>];
```
{% endraw %}

Declaring an array creates a reference.  You need to create the actual array.  This can be done in two ways: (1) with new or (2) use {} to populate the array when declared.

{% raw %}
```java
int[] A = new int[100];
int x = A.length // x is 100
int[][] A = new int[5][7];
int[] B = {1,2,3,4};
```
{% endraw %}

## Definition of an enum type

{% raw %}
```java
enum <enum-type-name> { <list-of-enum-values> }
enum Season { SPRING, SUMMER, FALL, WINTER }
Season vacation;
vacation = Season.SUMMER;
```
{% endraw %}

## Method Definition

{% raw %}
```java
<modifiers> <return-type> <method-name> ( <parameter-list> ) {    
    <statements>
}
<modifiers> 
   public – method may be called from objects or outside of the class
   static – method exists independent of an object
<return-type>
   any Java type
<parameter-list> 
   <type-name> <parameter-name>, …, <type-name> <parameter-name>
```
{% endraw %}

## Expressions – Operator Precedence

Unary operators             | ++, --, !, unary -, unary +, type-cast
--------------------------- | --------------------------------------
Multiplication and division | *,  /,  %
Addition and subtraction    | +,- 
Relational operators        | <,>,<=,>= 
Equality and inequality     | ==, !=
Boolean and                 | &&
Boolean or                  | \|\|
Conditional operator        | ?:
Assignment operators        | =,  +=,  -=,  *=,  /=,  %=

Examples:

```java
x = x + 1; x++; x += 1; // equivalent
x = x++ // does not change x
```

## Conditional Operator

```
<boolean-expression> ? <expression1> : <expression2>
```


```java
next = (N % 2 == 0) ? (N/2) : (3*N+1);
```


## Assignment Statement

```java
<variable> = <expression>;

rate = 0.07;				int A = 17;
interest = rate * principal;		double X;
test = true;				short B;
test = rate > 0.05;			X = A;  // OK
					B = A;  // illegal, must cast A
```

## Block


```java
{
	<statements> 
}

{
	System.out.print("The answer is ");
	System.out.println(ans);
}

{  // This block exchanges the values of x and y
   int temp;	// A temporary variable for use in this block.
   temp = x;	// Save a copy of the value of x in temp.
   x = y;		// Copy the value of y into x.
   y = temp;	// Copy the value of temp into y.

}
```

## If Statement

{% raw %}
```java
if ( <boolean-expression> )   // two-way
	<statement1>
else
	<statement2>

if ( <boolean-expression> )   // one-way
	<statement>

if ( <boolean-expression> ) { // two-way with block
	<statements>
} 
else {
	<statements>
}

if ( <boolean-expression> ) { // one-way with block
	<statements>
}

if ( x > y ) {
	int temp;	// A temporary variable for use in this block.
	temp = x;	// Save a copy of the value of x in temp.
	x = y;	// Copy the value of y into x.
	y = temp;	// Copy the value of temp into y.
}

int x = -1;				int x = -1;
if (x < 0)				if (x < 0)
	x = 1; 				x = 1;
else					if (x >= 0)
	x = 2;				x = 2;
```
{% endraw %}

## While Loop Statement – may not execute loop body

{% raw %}
```java
while (<boolean-expression>)
	<statement>
```
{% endraw %}
Since the statement can be, and usually is, a block, most while loops have the form:
{% raw %}
```java
while (<boolean-expression >) { 
	<statements>
}
int number = 1;                // The number to be printed.
while(number<6){               //Keep going as long as number is <6.
	System.out.println(number);
	number = number + 1;     // Go on to the next number.
}
```
{% endraw %}

## Do While Statement – executes loop body at least one time

{% raw %}
```java
do
	<statement>
while ( <boolean-expression> );

do {
	<statements>
} while ( <boolean-expression> );
```
{% endraw %}

## For Loop Statement

{% raw %}
```java
for ( <initialization>; <continuation-condition>; <update> ) 	<statement>

for ( <initialization>; <continuation-condition>; <update> ) { 	<statements>
}

// Typical counting loop
for(<variable>=<min>; <variable><=<max>; <variable>++) { 
	<statements >
}

for(N=1; N<=10; N++) 
	System.out.println( N );
```
{% endraw %}

## Break and Continue Statements

{% raw %}
```java
break; 	// break out of loop and continue after the loop
continue;	// go back to beginning of loop

while (true) { // looks like it will run forever! 	System.out.print("Enter a positive number: ");
	N = TextIO.getlnInt();
	if(N>0) //the input value is OK, so jump out of loop
		break;
	System.out.println("Your answer must be > 0.");
}
```
{% endraw %}
// continue here after break

## Switch Statement – like a multi-way else

{% raw %}
```java
switch (<expression >) { 
   case <constant-1>:
      <statements-1 >
      break;		// required or flow goes to next case
   case <constant-2>:
      <statements-2 > 
      break;
     .
     . // (more cases) 
     .
   case <constant-N>: 
      <statements-N > 
      break;
   default:  // optional default case
      <statements-(N+1) >
} // end of switch statement

String computerMove;
switch ( (int)(3*Math.random()) ) {
   case 0:
      computerMove = "Rock";
      break;
   case 1:
      computerMove = "Paper";
      break;
   default:
      computerMove = "Scissors"; 
      break;
}
System.out.println("The computer’s move is " + computerMove);  // OK!
```
{% endraw %}

## Try-catch Statement

{% raw %}
```java
try {
   <statements-1> 
}
catch ( <exception-class-name> <variable-name > ) {
   <statements-2 >
}

double x;
try {
   x = Double.parseDouble(str);
   System.out.println( "The number is " + x );
}
   catch ( NumberFormatException e ) {
   System.out.println( "Not a legal number." );
   x = Double.NaN;
}
```
{% endraw %}

## Empty Statement

{% raw %}
```java
;  // empty statement
if ( done )
   ;
else
   System.out.println(“Not done yet.”)
```
{% endraw %}

