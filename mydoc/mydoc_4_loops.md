---
title: Loops
tags: [loop]
keywords: control flow, loop, for loop, while loop, do-while loop
last_updated: May 1, 2016
summary: "Loops"
sidebar: mydoc_sidebar
permalink: /mydoc_4_loops/
---

## While Loop (Eck 3.3)

The while loop is the only loop structure you need to solve all problems; however, the for loop and do-while loop provide nice alternatives to simplify various situations.  A while loop has a controlling Boolean expression.  As long as the Boolean expression of a while loop is true, the loop body will continue executing.  A while loop is also called an indefinite loop because you do not know how many times the loop will iterate – the loop iterates until the controlling Boolean expression becomes false.  A while loop may iterate 0 times if the controlling Boolean expression is false upon initial evaluation.  A while loop may iterate an infinite number of times if the controlling Boolean expression never becomes false.  Infinite is a bit misleading, because we cannot compute infinitiy.  

## While Statement Meta-language

Just like the if-statement, a while loop has meta-language that shows a single statement and a block of statements.  The meta-language for each is given by the following.

```java
while (<boolean-expression>)
	<statement>

while (<boolean-expression >) { 
	<statements>
}
```

## While Statement Flow Chart
The flowchart for a while loop is given by the following figure.

 
Figure CF-17  While Loop Flow Chart

## While Statement Examples

The following is a simple example of a while loop.

```java
int number = 1;                // The number to be printed.
while(number<6){               //Keep going as long as number is <6.
	System.out.println(number);
	number = number + 1;     // Go on to the next number.
}
```

The following example shows a while statement in solving the 3N+1 problem.  I have copied this example from David Eck’s book.

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

## For Loop (Eck 3.4)

The for loop is a convenience loop.  You can accomplish a for loop with a while loop, but the for loop provides a clear, concise notation that is used in creating many programming problems.  Consider the following while loop that prints the numbers for 1 to 5 to the System console.

```java
int counter = 1;
while (counter <= 5) {
  System.out.println(counter + ".");
  counter++;
}
```

This while loop can be programmed as the following for loop.

for (int counter = 1; counter<=5; counter++) {
  System.out.println(counter + ".");

You should notice several intersecting constructs, which I have color coded so you can see how each one has been sort of cut and pasted from the while into the for.

## For Loop Meta-language

The for loop meta-language for a one-statement and block of statements is given by the following.

```java
for ( <initialization>; <continuation-condition>; <update> ) 	<statement>

for ( <initialization>; <continuation-condition>; <update> ) { 	<statements>
}
```

## Typical Counting For Loop

The for loop pattern for counting is given by the following.

```java
for(<variable> = <min>; <variable> <= <max>; <variable>++) { 
	<statements>
}
```

The following is a simple example of the counting for loop that counts from 1 to 10.

```java
for(N=1; N<=10; N++) 
	System.out.println( N );
```

Often counting for loops begin at 0 and count to a length so the continuation condition uses a less-than relational operator.  The following is an example that is examining processing a Java 

## Do While Loop (Eck 3.3)

The Do While loop is similar to the While loop except the controlling expression is at the end of the loop.  This guarantees that a Do While loop will iterate at least one time.

 
Figure CF-18 Do While Flow Chart

## Nice Use of Do While

The following are two ways of asking a user to enter a number that is less than 100 where we repeatedly ask the user until a correct answer is provided.

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

Both of the above solutions are rather ugly, the following do-while is prettier.  The do-while loop is good for input validation.

```java
do {
  System.out.print("Enter a value < 100: ");
  value = in.nextInt();
} while (value < 100);
```

## Break and Continue Statements (Eck 3.3.3)

Java has two statements that are sometimes useful in loops.  The break statement allows you to exit the loop.  The continue statement allow you to skip the remaining code in the loop and go back to the top of the loop.  

The following while loop searches a string for a space and breaks when the first space is encountered.

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

