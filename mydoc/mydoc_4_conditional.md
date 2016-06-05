---
title: Conditional Statements
tags: [conditional]
keywords: control flow, conditional, if, if-then
last_updated: May 1, 2016
summary: "Conditional Statements"
sidebar: mydoc_sidebar
permalink: /mydoc_4_conditional/
---

## If-then-else Statement (Eck 3.5)
An if-then-else statement evaluates a Boolean expression.  We discussed Boolean expressions in the Expression chapter.  If the expression is true, the statements in the then portion are executed.  If the expression is false, the statements in the else portion are executed.  Sometimes large buildings omit the 13th floor for superstitious reasons.  The following is an example if-then-else statement that changes a variable based upon a condition.

```java
if (floor > 13) {
  actualFloor = floor - 1;  // execute this if floor > 13
}
else {
  actualFloor = floor;      // execute this if floor <= 13
}
```

You should notice the Boolean expression is enclosed in parentheses, which are required.

## Two-way If Statement
The above if-then-else statement is a two-way if, meaning the flow goes one of two ways depending upon the value of the Boolean expression.   The meta-language for a two-way if is given by the following.  The first meta-language shows single statements and the second meta-language shows blocks of statements.  You should notice the Boolean expression is enclosed in parentheses, which are required.

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

## Statements and Blocks of Statements

The example in the beginning of this section shows a block that contains just one assignment statement.  The example can be equivalently coded with just single assignment statements as follows.

```java
if (floor > 13)
  actualFloor = floor - 1;  // execute this if floor > 13
else
  actualFloor = floor;      // execute this if floor <= 13
```

Either way is equivalent in this case.  I tend to always use a block of statements even when there is only one statement.  This allows me to insert additional statements without having to back fit { and } in the code to create a block – you  already have them.  You must always be aware the multiple statements must be in a block.  The following example may look correct, but it is a syntactical programming error.

```java
if (floor > 13)
  actualFloor = floor - 1;  // execute this if floor > 13
  anotherVariable = 5;      // cannot put two statements without { }
else
  actualFloor = floor;      // execute this if floor <= 13
```

## Statements – assignment, if, loops, blocks

The preceding section explains statements and blocks of statements using an assignment statement as the example statement.  The same type of thinking applies to any statement, for examples, if-statements and while-statements.  Where ever Java allows a <statement>  you can place any statement.  The following is an example of a two-way if where the else <statement> is another two-way if.  You should notice that we do not need to place the second two-way if in a block because it is a <statement>.

```java
if (floor > 13)
  actualFloor = floor - 1;    // execute this if floor > 13
else
  if (floor > 7)
    actualFloor = floor – 2;  // execute this if 7 < floor <= 13
  else
    actualFloor = floor;      // execute this if floor <= 7
```

C.1.4 One-way If Statement
Sometimes in programming, we do not need the else portion of an if-statement.  When the else portion is omitted, we have a one-way if statement.  The meta-language for a one-way if is given by the following.  The first meta-language shows single statements and the second meta-language shows blocks of statements.

```java
if ( <boolean-expression> )   // one-way
	<statement>


if ( <boolean-expression> ) { // one-way with block
	<statements>
}
```

The following is an example of a one-way if statement.

```java
String g = “Gusty”;
if (g.equals(“Gusty”)) {
  g = g + “ Cooper”;
}
```

## C.1.5 Multi-way If Statements

You can string a bunch of if statements together to create multi-way if statements.  The following is an example.

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

## C.1.6 Blocks and Scope (Eck 3.1)

In Java, you can declare a variable wherever you need one, but you must be aware of the scope of the variable.  The scope of a variable is the block in which it is enclosed.  Consider the following code that swaps the contents of x and y when x is greater than y.  The code introduces a temp variable that is only available within the if statement’s scope.

```java
if ( x > y ) {
	int temp;	// A temporary variable for use in this block.
	temp = x;	// Save a copy of the value of x in temp.
	x = y;	// Copy the value of y into x.
	y = temp;	// Copy the value of temp into y.
}
if (temp > 0) {…} // This is illegal because temp is not defined
```

## C.1.7 Use an If-Else When Mutual Exclusive

In programming there are many variations to algorithms that accomplish the same thing.  Consider the following two algorithms that assign x to 1 when x is negative; otherwise assign x to 2.  Both of the algorithms accomplish this goal; however, the algorithm on the easier to understand because the expression is mutually exclusive – it can only be one way or the other.  When this is the case, choosing an if-else is always easier to understand.

```java
int x = -1;				int x = -1;
if (x < 0)				if (x < 0)
	x = 1; 				x = 1;
else					if (x >= 0)
	x = 2;				x = 2;
```

## Dangling Else

Consider the following code where someone desires to print aaa when num is between 1 and 100 and print bbb when num <= 0.

```java
int num = -1;
if (num > 0)   
   if (num <= 100) 
      System.out.println( "aaa" );
else
   System.out.println( "bbb" );
System.out.println(“Done”);
```

Do not be fooled by my placing the else under the first if.  Java does not care about spacing.  The above code prints the following.

Done

The general rule is that an else is paired with the closest if.  The above code will print bbb num is >= 10.  I rewrite the above code with indentation that shows which if the else is paired with.

```java
int num = -1;
if (num > 0)   
   if (num <= 100) 
      System.out.println("aaa");
   else
      System.out.println("bbb");
System.out.println(“Done”);
```

We can use { } to force the else to pair with the first if as follows.

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

You may encounter an unwelcomed dangling else in your programming, but maybe you will not.  The preceding code is rather contrived.  The code does not print anything for positive numbers greater than 100.  Most likely, I would have used a Boolean expression with the first if as follows.  Note: this code is not exactly the same as the earlier code.

```java
int num = -1;
if ((num > 0) and (num <= 100))
   System.out.println("aaa");
else
   System.out.println("bbb");
System.out.println(“Done”);
```

## ints are not Booleans

Some languages treat an integer 0 as false and all other integers as true.  This allows code such as the following.

```java
int x = 1;
if (x) { // do this since x is not zero }
```

You cannot do this type of programming in Java.  You have to do something like the following.

if (x != 0) { // do this since x is not zero }

## If Statement Flow Charts

The meta-language shows the syntax of an if-statement.  A flow chart shows the semantics (or meaning) of an if-statement.  You can visualize the flow of control.  The following is the flow chart for a two-way if statement.

 
Figure CF-15 Two-way If-statement Flowchart
The following is the flow chart for a one-way if statement.

 
Figure CF-16 One-way If-statement Flowchart

## Switch Statement (Eck 3.6)

The Java switch statement is a convenient way to implement a multi-way if where the Boolean expressions evaluate to simple constants.  Consider the following multi-way if-statement where the Boolean expressions are simple constants.

```java
if (x == 1)      { // do something }
else if (x == 2) { // do something }
else if (x == 3) { // do something }
else             { // do something }
```

This multi-way if statement can be re-coded as a switch statement as follows.

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

## Switch without break Statements

Examining this is rather intuitive except for the break statement.  Java borrowed the switch statement from C/C++, retaining the awkward break statement as part of its semantics.  Without the break statement, the switch will continue from one case to the next.  Consider the following example.

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

The output for the preceding example is the following.

```java
case 1
case 2
default

## Switch Meta-language

The meta-language for a switch statement where each case has a break is given by the following.

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

## Switch for Rock-Paper-Scissors

The following code demonstrates a switch statement that is playing rock-paper-scissors.  Perhaps you want to try this to see who wins – you are the computer.

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
System.out.println("The computer’s move is " + computerMove);  // OK!

