---
title: Loop Patterns
tags: [loop]
keywords: control flow, loop, for loop, while loop, do-while loop, loop patterns
last_updated: May 1, 2016
summary: "Loop Patterns"
sidebar: mydoc_sidebar
permalink: /mydoc_4_loop_patterns/
---

## Fence Post Problem – Off-by-one Error

Suppose you want to build a fence that is 16 yards long, and you want each section of the fence to 4 yards long.  How many fence posts do you need?  The correct answer is 5; however, many people will divide 16 by 4 to say they need 4 posts.  The correct answer is in the following figure.

![Fence Post Problem](../images/fencePost.png "Fence Post Problem")
 
In a loop, the fence post problem is when the loop iterates one extra time or one less time.  Consider the following for loop, which attempts to print four numbers, but prints five.

```java
for (int i = 0; i <= 4; i++) {
    System.out.println(i);
}
```

You should be careful with loops that walk through a ```String```.  Consider the following loop that is counting non-vowels in the ```String``` word.  The loop has a fence post problem.  Can you spot it?

```java
int totCons = 0;
for (int i = 0; i <= word.length(); i++) {
    String letter = word.substring(i, i+1);
    if (!”aeiou”.contains(letter.toLowerCase())) {
        totCons++;
    }
}
```

On the last iteration of the loop, the variable i will contain the value 5.  This means the statement ```String letter = word.substring(5,6);``` and 6 is beyond the range of characters in word – a ```String``` index out of range error.

## Common Loop Patterns

There are several loop patterns that are useful in many programming problems.  The patterns discussed in this section include the following.

1. Loop to compute an average
2. Loop to fine the largest (or smallest) element
3. Loop to count matches
4. Loop to find the first match
5. Loop to find the position of the first match
6. Loop finding all matches

## Sentinel Loop

A **sentinel loop** is one that terminates when the loop encounters a **sentinel**, which is a preknown entity that tells us to stop.  For example, you could iteratively read positive numbers (one at a time) from a user.  You would stop reading when the user inputs a negative number.  In this case, the negative number is the sentinel, which is guarding the input like a sentinel.

## Loop to Compute an Average

How many inputs do we read to be computed in our average?  In this example of a loop to compute the average, we will use a sentinel to stop reading from the user.  We will read ```double```s until the users enters a sentinel ```“q”```, which tells us to stop reading numbers.  Our algorithm will use a Java ```Scanner```, which has a peek-ahead method ```hasNextDouble()``` which returns ```true``` when the next input items is a ```double```.  This means when the user enters a ```"q"```, ```hasNextDouble()``` returns ```false```.

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

## Loop to Find the Largest (or Smallest)

The loop to find the largest assumes that the first value is the largest.  Then we examine other values, updating the largest whenever a new value is largest than the current largest.  The following is pseudo code for finding the largest.

```java
largestVal is first value from the user
while there are more values
   inputVal is next value from the user
   if inputVal > largestVal
     largestVal = inputVal
```

You can create a similar algorithm for smallest by changing the comparison operator.  A portion of the code from the Compute and Average is changed below to find the largest number input by a user.

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


This algorithm finds the largest in terms of input from some user (or possibly a file), but the same algorithm applies to arrays and arrayLists, which we will study in the near future.

## Loop to Find Largest Number in a File

We can connect a Java Scanner to an input file, and read numbers from a file to find the largest number.  The code for doing this is given by the following.

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
## Loop to Count Matches

## Loop to Find the First Match

## Loop to Find the Position of the First Match

## Loop to Find All Matches

## Accumulator Pattern

The patterns find larges, count matches, find first match, etc. are specific examples of the accumulator loop pattern, which initializes some data structure prior to a loop and then accumulates data as the loop iterates.  

## Nested Loops

## Loops and Simulation

We will write a program that simulates throwing darts at a circle in a square.  We will randomly throw our darts, and assume that all of them hit the square.  When we do this, most of the darts will be in the circle, but a few will be in the corners outside of the circle.  The ratio of number of darts in the circle to the total darts thrown is an approximation of the circle’s area / the square’s area, which is pi/4.  We can let our circle’s center point be at (0,0), and let the squares coordinates go from -1 to 1.  To represent the point where our dart lands, we will generate two random numbers x and y, where both are between -1 and 1.  If the distance between our random point where the dart lands and the center point (0,0) is less than 1, our dart is in the circle, otherwise it is in the corners outside of the circle.  The code for this is given by the following.

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

## Debugging

When your program does not work like it is supposed to, your program contains bugs.  Bugs are not syntax errors. Bugs are when you program runs, but does not do what you thought you told it to do.  Debugging is trying to figure out what you did wrong when trying to write your code in the first place.  There are two primary ways of debugging.  One is to place print statements in your code to print values of variables at various points in the algorithm.  These values serve as clues, which you can examine to determine what has gone wrong.  The second way to debug is to use a debugger.  Most IDEs provide you with a debug.  BlueJ has a nice introductory debugger, which means it is not overly complex.  Debugging consists of three concepts.

1. Breakpoint – You set breakpoints on statements in your code.  When you program runs and hits a breakpoint, your program stops

2. Single step – Once you have stopped at a breakpoint, you can step one statement at a time.  There are two ways of stepping.
   * a. Step over – This means to execute the entire statement.  For simple statements – like assignment statements – this is intuitive.  For a method call, a step over executes the entire method.
   * b. Step into – This steps into a method so that you now must single step through the method.  NOTE: You do not want to step into a method like System.out.println().

3. Inspect variables  - Once your program is stopped, you can examine the content of your variables.  You can hit a breakpoint, examine variables, step, examine, step, and so forth.


 these values can show you 
