---
title: Control Flow
tags: [control flow]
keywords: control flow, conditional, if, if-then, loop, for loop, while loop, do-while loop
last_updated: May 1, 2016
summary: "Control Flow"
sidebar: mydoc_sidebar
permalink: /mydoc_4_control_flow/
---

Control Flow
At this point, we understand Java primitive data types, how to create our own data types in a Java class, how to declare variables using primitive data types and classes, how to define instance variables in a class, how to define class constructors, how to define methods in a class, how to return values from methods, how to create a block statement, how to create assignment statements, and how to create expressions.  So far our methods have used mostly a sequential flow of statements, method/function calls, and conditional expressions.  At this point we are ready to add conditional statements and loop statements to our programming techniques.  There are four primary forms of control flow.

* Sequential Statements – our program executes each statement in order, one right after the other.  
* Method Calls – At first glance a method call appears to be sequential execution.  A statement may be a method call or an expression may contain a method call.  When we encounter a method call, the current execution is suspended and the code in the method is executed.  When the method is complete, control returns to the point right after the method call.  If the method call returns a value, that value is used in the expression.
* Conditional Statements – If-then-else statements that evaluate a Boolean expression to determine which of two paths to execute next.  You can connect several if-then-else statements together to get multiple paths.  Java also provides a switch statement, which is somewhat like a specialized if-then-else statement.
* Loops – Statements that execute a block of statements multiple times.  Java provides several varieties of loop statements.
CF.1 If-then-else Statement (Eck 3.5)
An if-then-else statement evaluates a Boolean expression.  We discussed Boolean expressions in the Expression chapter.  If the expression is true, the statements in the then portion are executed.  If the expression is false, the statements in the else portion are executed.  Sometimes large buildings omit the 13th floor for superstitious reasons.  The following is an example if-then-else statement that changes a variable based upon a condition.

{% raw %}
```java
if (floor > 13) {
  actualFloor = floor - 1;  // execute this if floor > 13
}
else {
  actualFloor = floor;      // execute this if floor <= 13
}
```
{% endraw %}

You should notice the Boolean expression is enclosed in parentheses, which are required.
## CF.1.1 Two-way If Statement
The above if-then-else statement is a two-way if, meaning the flow goes one of two ways depending upon the value of the Boolean expression.   The meta-language for a two-way if is given by the following.  The first meta-language shows single statements and the second meta-language shows blocks of statements.  You should notice the Boolean expression is enclosed in parentheses, which are required.

{% raw %}
```java
if ( <boolean-expression> )   // two-way
	<statement1>
else
	<statement2>

if ( <boolean-expression> ) { // two-way with block
	<statements>
} 
else {
	<statements>
}
```
{% endraw %}
## CF.1.2 Statements and Blocks of Statements
The example in the beginning of this section shows a block that contains just one assignment statement.  The example can be equivalently coded with just single assignment statements as follows.

{% raw %}
```java
if (floor > 13)
  actualFloor = floor - 1;  // execute this if floor > 13
else
  actualFloor = floor;      // execute this if floor <= 13

Either way is equivalent in this case.  I tend to always use a block of statements even when there is only one statement.  This allows me to insert additional statements without having to back fit { and } in the code to create a block – you  already have them.  You must always be aware the multiple statements must be in a block.  The following example may look correct, but it is a syntactical programming error.

{% raw %}
```java
if (floor > 13)
  actualFloor = floor - 1;  // execute this if floor > 13
  anotherVariable = 5;      // cannot put two statements without { }
else
  actualFloor = floor;      // execute this if floor <= 13
```
{% endraw %}
## CF.1.3 Statements – assignment, if, loops, blocks
The preceding section explains statements and blocks of statements using an assignment statement as the example statement.  The same type of thinking applies to any statement, for examples, if-statements and while-statements.  Where ever Java allows a <statement>  you can place any statement.  The following is an example of a two-way if where the else <statement> is another two-way if.  You should notice that we do not need to place the second two-way if in a block because it is a <statement>.

{% raw %}
```java
if (floor > 13)
  actualFloor = floor - 1;    // execute this if floor > 13
else
  if (floor > 7)
    actualFloor = floor – 2;  // execute this if 7 < floor <= 13
  else
    actualFloor = floor;      // execute this if floor <= 7
```
{% endraw %}
C.1.4 One-way If Statement
Sometimes in programming, we do not need the else portion of an if-statement.  When the else portion is omitted, we have a one-way if statement.  The meta-language for a one-way if is given by the following.  The first meta-language shows single statements and the second meta-language shows blocks of statements.

{% raw %}
```java
if ( <boolean-expression> )   // one-way
	<statement>


if ( <boolean-expression> ) { // one-way with block
	<statements>
}
```
{% endraw %}

The following is an example of a one-way if statement.

{% raw %}
```java
String g = “Gusty”;
if (g.equals(“Gusty”)) {
  g = g + “ Cooper”;
}
```
{% endraw %}
C.1.5 Multi-way If Statements
You can string a bunch of if statements together to create multi-way if statements.  The following is an example.

{% raw %}
```java
if (g.equals(“Gusty”)) {
  g = “Bicyclist”;
} else if (g.equals(“Jerri Anne”)) {
  g = “Chef”;
} else if (g.equals(“Barrack”)) {
  g = “President”;
} else {
  g = “nobody”;
}
System.out.println(“The occupation is “ + g);
```
{% endraw %}

## C.1.6 Blocks and Scope (Eck 3.1)

In Java, you can declare a variable wherever you need one, but you must be aware of the scope of the variable.  The scope of a variable is the block in which it is enclosed.  Consider the following code that swaps the contents of x and y when x is greater than y.  The code introduces a temp variable that is only available within the if statement’s scope.

{% raw %}
```java
if ( x > y ) {
	int temp;	// A temporary variable for use in this block.
	temp = x;	// Save a copy of the value of x in temp.
	x = y;	// Copy the value of y into x.
	y = temp;	// Copy the value of temp into y.
}
if (temp > 0) {…} // This is illegal because temp is not defined
```
{% endraw %}

C.1.7 Use an If-Else When Mutual Exclusive
In programming there are many variations to algorithms that accomplish the same thing.  Consider the following two algorithms that assign x to 1 when x is negative; otherwise assign x to 2.  Both of the algorithms accomplish this goal; however, the algorithm on the easier to understand because the expression is mutually exclusive – it can only be one way or the other.  When this is the case, choosing an if-else is always easier to understand.
{% raw %}
```java
int x = -1;				int x = -1;
if (x < 0)				if (x < 0)
	x = 1; 				x = 1;
else					if (x >= 0)
	x = 2;				x = 2;
```
{% endraw %}
## CF.1.8 Dangling Else
Consider the following code where someone desires to print aaa when num is between 1 and 100 and print bbb when num <= 0.

{% raw %}
```java
int num = -1;
if (num > 0)   
   if (num <= 100) 
      System.out.println( "aaa" );
else
   System.out.println( "bbb" );
System.out.println(“Done”);
```
{% endraw %}

Do not be fooled by my placing the else under the first if.  Java does not care about spacing.  The above code prints the following.

Done

The general rule is that an else is paired with the closest if.  The above code will print bbb num is >= 10.  I rewrite the above code with indentation that shows which if the else is paired with.

{% raw %}
```java
int num = -1;
if (num > 0)   
   if (num <= 100) 
      System.out.println("aaa");
   else
      System.out.println("bbb");
System.out.println(“Done”);
```
{% endraw %}

We can use { } to force the else to pair with the first if as follows.

{% raw %}
```java
int num = -1;
if (num > 0) 
{
   if (num <= 100) 
      System.out.println("aaa");
}
else
   System.out.println("bbb");
System.out.println(“Done”);
```
{% endraw %}

You may encounter an unwelcomed dangling else in your programming, but maybe you will not.  The preceding code is rather contrived.  The code does not print anything for positive numbers greater than 100.  Most likely, I would have used a Boolean expression with the first if as follows.  Note: this code is not exactly the same as the earlier code.

{% raw %}
```java
int num = -1;
if ((num > 0) and (num <= 100))
   System.out.println("aaa");
else
   System.out.println("bbb");
System.out.println(“Done”);
```
{% endraw %}
## CF.1.9 ints are not Booleans
Some languages treat an integer 0 as false and all other integers as true.  This allows code such as the following.

{% raw %}
```java
int x = 1;
if (x) { // do this since x is not zero }
```
{% endraw %}

You cannot do this type of programming in Java.  You have to do something like the following.

if (x != 0) { // do this since x is not zero }
## CF.1.10 If Statement Flow Charts
The meta-language shows the syntax of an if-statement.  A flow chart shows the semantics (or meaning) of an if-statement.  You can visualize the flow of control.  The following is the flow chart for a two-way if statement.

 
Figure CF-15 Two-way If-statement Flowchart
The following is the flow chart for a one-way if statement.

 
Figure CF-16 One-way If-statement Flowchart
## CF.2 Switch Statement (Eck 3.6)
The Java switch statement is a convenient way to implement a multi-way if where the Boolean expressions evaluate to simple constants.  Consider the following multi-way if-statement where the Boolean expressions are simple constants.

{% raw %}
```java
if (x == 1)      { // do something }
else if (x == 2) { // do something }
else if (x == 3) { // do something }
else             { // do something }
```
{% endraw %}

This multi-way if statement can be re-coded as a switch statement as follows.

{% raw %}
```java
switch (x) {
   case 1:
      // do something
      break;
   case 2:
      // do something
      break;
   case 3:
      // do something
      break;
   default:
      // do something
} // end of switch
```
{% endraw %}

## CF.2.1 Switch without break Statements

Examining this is rather intuitive except for the break statement.  Java borrowed the switch statement from C/C++, retaining the awkward break statement as part of its semantics.  Without the break statement, the switch will continue from one case to the next.  Consider the following example.

{% raw %}
```java
int a = 1;
switch (a) {
   case 1:
      System.out.println(“case 1”);
   case 2:
      System.out.println(“case 2”);
   default:
      System.out.println(“default”);
} // end of switch
```
{% endraw %}

The output for the preceding example is the following.

{% raw %}
```java
case 1
case 2
default
## CF.2.2 Switch Meta-language
The meta-language for a switch statement where each case has a break is given by the following.

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
```
{% endraw %}

## CF.2.3 Switch for Rock-Paper-Scissors

The following code demonstrates a switch statement that is playing rock-paper-scissors.  Perhaps you want to try this to see who wins – you are the computer.

{% raw %}
```java
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
```
{% endraw %}
System.out.println("The computer’s move is " + computerMove);  // OK!

## CF.3 While Loop (Eck 3.3)

The while loop is the only loop structure you need to solve all problems; however, the for loop and do-while loop provide nice alternatives to simplify various situations.  A while loop has a controlling Boolean expression.  As long as the Boolean expression of a while loop is true, the loop body will continue executing.  A while loop is also called an indefinite loop because you do not know how many times the loop will iterate – the loop iterates until the controlling Boolean expression becomes false.  A while loop may iterate 0 times if the controlling Boolean expression is false upon initial evaluation.  A while loop may iterate an infinite number of times if the controlling Boolean expression never becomes false.  Infinite is a bit misleading, because we cannot compute infinitiy.  
## CF.3.1 While Statement Meta-language
Just like the if-statement, a while loop has meta-language that shows a single statement and a block of statements.  The meta-language for each is given by the following.

{% raw %}
```java
while (<boolean-expression>)
	<statement>

while (<boolean-expression >) { 
	<statements>
}
```
{% endraw %}

## CF.3.2 While Statement Flow Chart
The flowchart for a while loop is given by the following figure.

 
Figure CF-17  While Loop Flow Chart
## CF.3.2 While Statement Examples
The following is a simple example of a while loop.

{% raw %}
```java
int number = 1;                // The number to be printed.
while(number<6){               //Keep going as long as number is <6.
	System.out.println(number);
	number = number + 1;     // Go on to the next number.
}
```
{% endraw %}

The following example shows a while statement in solving the 3N+1 problem.  I have copied this example from David Eck’s book.

{% raw %}
```java
N = 401; // N is the input number
counter = 0;
while (N != 1) {
   if (N % 2 == 0)
      N = N / 2;
   else
      N = 3 * N + 1;
   System.out.println(N);
   counter = counter + 1;
}
```
{% endraw %}
## CF.4 For Loop (Eck 3.4)
The for loop is a convenience loop.  You can accomplish a for loop with a while loop, but the for loop provides a clear, concise notation that is used in creating many programming problems.  Consider the following while loop that prints the numbers for 1 to 5 to the System console.

{% raw %}
```java
int counter = 1;
while (counter <= 5) {
  System.out.println(counter + ".");
  counter++;
}
```
{% endraw %}

This while loop can be programmed as the following for loop.

for (int counter = 1; counter<=5; counter++) {
  System.out.println(counter + ".");

You should notice several intersecting constructs, which I have color coded so you can see how each one has been sort of cut and pasted from the while into the for.
## CF.4.1 For Loop Meta-language
The for loop meta-language for a one-statement and block of statements is given by the following.

{% raw %}
```java
for ( <initialization>; <continuation-condition>; <update> ) 	<statement>

for ( <initialization>; <continuation-condition>; <update> ) { 	<statements>
}
```
{% endraw %}

## CF.4.2 Typical Counting For Loop

The for loop pattern for counting is given by the following.

{% raw %}
```java
for(<variable> = <min>; <variable> <= <max>; <variable>++) { 
	<statements>
}
```
{% endraw %}

The following is a simple example of the counting for loop that counts from 1 to 10.

{% raw %}
```java
for(N=1; N<=10; N++) 
	System.out.println( N );
```
{% endraw %}

Often counting for loops begin at 0 and count to a length so the continuation condition uses a less-than relational operator.  The following is an example that is examining processing a Java 

## CF.5 Do While Loop (Eck 3.3)

The Do While loop is similar to the While loop except the controlling expression is at the end of the loop.  This guarantees that a Do While loop will iterate at least one time.

 
Figure CF-18 Do While Flow Chart
## CF.5.1 Nice Use of Do While

The following are two ways of asking a user to enter a number that is less than 100 where we repeatedly ask the user until a correct answer is provided.

{% raw %}
```java
int value = 99;
while (value < 100) {
  System.out.print("Enter a value < 100: ");
  value = in.nextInt();
}

System.out.print("Enter a value < 100: ");
int value = in.nextInt();
while (value < 100) {
  System.out.print("Enter a value < 100: ");
  value = in.nextInt();
}
```
{% endraw %}

Both of the above solutions are rather ugly, the following do-while is prettier.  The do-while loop is good for input validation.

{% raw %}
```java
do {
  System.out.print("Enter a value < 100: ");
  value = in.nextInt();
} while (value < 100);
```
{% endraw %}

## CF.6 Break and Continue Statements (Eck 3.3.3)

Java has two statements that are sometimes useful in loops.  The break statement allows you to exit the loop.  The continue statement allow you to skip the remaining code in the loop and go back to the top of the loop.  

The following while loop searches a string for a space and breaks when the first space is encountered.

{% raw %}
```java
String s = “Coffee cup.”;
int i = 0;
while (i < s.length()) {
   if (s.substring(i, i+1).equals(“ “)) {
      break;
   }
   i++;
}
if (i == s.length()) {
   System.out.println(s + “ does not contain a space”);
} else {
   System.out.println(“First space in “ + s + “ is “ + i);
}
```
{% endraw %}
## CF.7 Fence Post Problem – Off-by-one Error

Suppose you want to build a fence that is 16 yards long, and you want each section of the fence to 4 yards long.  How many fence posts do you need?  The correct answer is 5; however, many people will divide 16 by 4 to say they need 4 posts.  The correct answer is in the following figure.

 
Figure CF-19 Fence Post Problem
Loops often go one time too many or one time not enough.  Consider the following for loop, which attempts to print four numbers.

{% raw %}
```java
for (int i = 0; i <= 4; i++) {
    System.out.println(i);
}
```
{% endraw %}

You should be careful with loops that walk through a String.  Consider the following loop that is counting non-vowels in the String word.  The loop has a fence post problem.  Can you spot it?

{% raw %}
```java
int totCons = 0;
for (int i = 0; i <= word.length(); i++) {
    String letter = word.substring(i, i+1);
    if (!”aeiou”.contains(letter.toLowerCase())) {
        totCons++;
    }
}
```
{% endraw %}

On the last iteration of the loop, the variable i will contain the value 5.  This means the statement String letter = word.substring(5,6); and 6 is beyond the range of characters in word – a String index out of range error.

## CF.8 Common Loop Patterns

There are several loop patterns that are useful in many programming problems.  The patterns discussed in this section include the following.
1. Loop to compute an average
2. Loop to fine the largest (or smallest) element
3. Loop to count matches
4. Loop to find the first match
5. Loop to find the position of the first match
6. Loop finding all matches

## CF.8.1 Sentinel Loop

A sentinel loop is one that terminates when the loop encounters a sentinel, which is a preknown entity that tells us to stop.  For example, you could iteratively read positive numbers (one at a time) from a user.  You would stop reading when the user inputs a negative number.  In this case, the negative number is the sentinel, which is guarding the input like a sentinel.
## CF.8.2 Loop to Compute an Average
How many inputs do we read to be computed in our average?  In this example of a loop to compute the average, we will use a sentinel to stop reading from the user.  We will read doubles until the users enters a sentinel “q”, which tells us to stop reading numbers.  Our algorithm will use a Java scanner, which as a peek-ahead method hasNextDouble() which returns true when the next input items is a double.

{% raw %}
```java
Scanner in = new Scanner(System.in);
double value;    // will contain each value input by user
int count = 0;   // initialize the count of user’s numbers to 0
double sum = 0;  // initialize the sum of user’s numbers to 0
System.out.println("Enter a double or q to quit: ");
if (in.hasNextDouble()) {
  while (in.hasNextDouble()) {
    value = in.nextDouble();
    sum = sum + value;  // we could do sum += value;
    count++;
    System.out.println("Enter a double or q to quit: ");
  }
  return sum  / count;
}
else {
  System.out.println("Error message");
}
```
{% endraw %}

## CF.8.3 Loop to Find the Largest (or Smallest)

The loop to find the largest assumes that the first value is the largest.  Then we examine other values, updating the largest whenever a new value is largest than the current largest.  The following is pseudo code for finding the largest.

{% raw %}
```java
largestVal is first value from the user
while there are more values
   inputVal is next value from the user
   if inputVal > largestVal
     largestVal = inputVal
```
{% endraw %}

You can create a similar algorithm for smallest by changing the comparison operator.  A portion of the code from the Compute and Average is changed below to find the largest number input by a user.

{% raw %}
```java
double largest;
boolean haveFirst = false;
System.out.println("Enter a double or q to quit: ");
if (in.hasNextDouble()) {
  while (in.hasNextDouble()) {
    value = in.nextDouble();
    if (!haveFirst) {
      largest = value;
      haveFirst = true;
    } else if (value > largest) {
      largest = value;
    }
    System.out.println("Enter a double or q to quit: ");
  }
  return largest;
}
else {
  System.out.println("Error message");
}
```
{% endraw %}


This algorithm finds the largest in terms of input from some user (or possibly a file), but the same algorithm applies to arrays and arrayLists, which we will study in the near future.

## CF.8.3.1 Loop to Find Largest Number in a File

We can connect a Java Scanner to an input file, and read numbers from a file to find the largest number.  The code for doing this is given by the following.

{% raw %}
```java
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class LargestNumInFile {
   public static void main(String[] args) throws FileNotFoundException{
        File inputFile = new File("inputFile.txt"); 
        Scanner in = new Scanner(inputFile);
        double largest = in.nextDouble();
        while (in.hasNextDouble()) {
            double input = in.nextDouble();
             if (input > largest) {
                largest = input;
             }
        }
        System.out.println("Largest value: " + largest);
    }
}
```
{% endraw %}
## CF.8.4 Loop to Count Matches

## CF.8.5 Loop to Find the First Match

## CF.8.6 Loop to Find the Position of the First Match

## CF.8.7 Loop to Find All Matches

## CF.0 Nested Loops

## CF.10 Loops and Simulation

We will write a program that simulates throwing darts at a circle in a square.  We will randomly throw our darts, and assume that all of them hit the square.  When we do this, most of the darts will be in the circle, but a few will be in the corners outside of the circle.  The ratio of number of darts in the circle to the total darts thrown is an approximation of the circle’s area / the square’s area, which is pi/4.  We can let our circle’s center point be at (0,0), and let the squares coordinates go from -1 to 1.  To represent the point where our dart lands, we will generate two random numbers x and y, where both are between -1 and 1.  If the distance between our random point where the dart lands and the center point (0,0) is less than 1, our dart is in the circle, otherwise it is in the corners outside of the circle.  The code for this is given by the following.

{% raw %}
```java
import java.util.Random;
import java.util.Scanner;
public class Darts {
    public static void main(String[] args) {
        Random generator = new Random(42);
        Scanner in = new Scanner(System.in);
        System.out.println("Enter number of dart throws: ");
        int dartThrows = in.nextInt();

        int insideCircle = 0;
        for (int i = 1; i <= dartThrows; i++) {
            double x = generator.nextDouble() * 2 - 1;
            double y = generator.nextDouble() * 2 - 1;
            if (x * x + y * y <= 1) { // unit circle: short-cut exp
                insideCircle++;
            }
        }
        double piEstimate = 4.0 * insideCircle / dartThrows;
        System.out.println("PI Estimate: " + piEstimate);
    }
}
```
{% endraw %}

## CF.10 Debugging

When your program does not work like it is supposed to, your program contains bugs.  Bugs are not syntax errors. Bugs are when you program runs, but does not do what you thought you told it to do.  Debugging is trying to figure out what you did wrong when trying to write your code in the first place.  There are two primary ways of debugging.  One is to place print statements in your code to print values of variables at various points in the algorithm.  These values serve as clues, which you can examine to determine what has gone wrong.  The second way to debug is to use a debugger.  Most IDEs provide you with a debug.  BlueJ has a nice introductory debugger, which means it is not overly complex.  Debugging consists of three concepts.
1. Breakpoint – You set breakpoints on statements in your code.  When you program runs and hits a breakpoint, your program stops
2. Single step – Once you have stopped at a breakpoint, you can step one statement at a time.  There are two ways of stepping.
   a. Step over – This means to execute the entire statement.  For simple statements – like assignment statements – this is intuitive.  For a method call, a step over executes the entire method.
   b. Step into – This steps into a method so that you now must single step through the method.  NOTE: You do not want to step into a method like System.out.println().
3. Inspect variables  - Once your program is stopped, you can examine the content of your variables.  You can hit a breakpoint, examine variables, step, examine, step, and so forth.


 these values can show you 
