---
title: Loop Patterns
tags: [loop]
keywords: control flow, loop, for loop, while loop, do-while loop, loop patterns
last_updated: May 1, 2016
summary: "Loop Patterns"
sidebar: mydoc_sidebar
permalink: /mydoc_4_loop_patterns/
---

## Fence Post Error – Off-by-one Error

Suppose you want to build a fence that is 16 yards long, and you want each section of the fence to 4 yards long.  How many fence posts do you need?  The correct answer is 5; however, many people will divide 16 by 4 to say they need 4 posts.  You can easily observe the correct answer in the following figure.

![Fence Post Error](../images/fencePost.png "Fence Post Error")
 
In a loop, the fence post error is when the loop iterates one extra time or one less time.  You will create fence post errors throughout your programming career.  Most fence post errors are relatively easy to discover with good test cases.  Consider the following ```for``` loop, which attempts to print four numbers, but prints three.

```java
for (int i = 1; i < 4; i++) {
    System.out.println(i);
}
```

You should be careful with loops that process ```String```s.  The first character of a ```String``` is at position 0.  The length of a ```String``` is the number of characters in the ```String``` - for example, ```"Gusty"``` has a length of 5.  The last character in a ```String``` is a position length-1.  Consider the following loop that is counting non-vowels in the ```String``` word.  The loop has a fence post error.  On the last iteration of the loop, the variable ```i``` will contain the value 5.  This translates to the statement ```String letter = word.substring(5,6);``` and 6 is beyond the range of characters in ```word``` – a ```String``` index out of range exception.

```java
int totCons = 0;
for (int i = 0; i <= word.length(); i++) {
    String letter = word.substring(i, i+1);
    if (!”aeiou”.contains(letter.toLowerCase())) {
        totCons++;
    }
}
```

## Loop Patterns

There are several loop patterns that are used over and over in solving problems.   You want to put these patterns in your memory mansion so they can easily be recalled.   We will return to these patterns in [Arrays and ArrayLists](/gustycooper.github.io/mydoc_6_arrays_arraylists).  The patterns discussed in this section include the following.

1. Sentinel Pattern
2. Accumulator Pattern
3. Compute Sum/Average Pattern
4. Count Matches Pattern
5. Find Largest (or Smallest) Pattern
6. Find Position of First Match Pattern

## Sentinel Pattern

A **sentinel loop** is one that terminates when the loop encounters a **sentinel**, which is a preknown entity that tells us to stop.  For example, you could iteratively read positive numbers (one at a time) from a user.  You would stop reading when the user inputs a negative number.  In this case, the negative number is the sentinel, which is guarding the input like a sentinel.  The following loop demonstrates the Sentinel Pattern.  The loop reads numbers from a user.  The sentinel is when the user enters ```quit```.  Actually, the sentinel is any input that is not a number.

```java
Scanner in = new Scanner(System.in);
System.out.println("\nEnter sequence of nums, quit to see sum.");
double sum = 0.0;
/*
 * Sum is 0.0 if user does not enter numbers
 */
System.out.print("Enter value, q to quit: ");
while (in.hasNextDouble()) {  // enter quit to terminate
   sum += in.nextDouble();
   System.out.print("Enter value, q to quit: ");
}
System.out.println("Sum is " + sum);
```

## Accumulator Pattern

The Accumulator Pattern is a pattern for a pattern.  The Compute Average, Count Matches, Find Largest, etc. are specific instances of the Accumulator Pattern.  
The Accumulator Pattern initializes some data structure prior to a loop and then accumulates data as the loop iterates.  This pattern is shown in the following pseudo code.

```java
initialize data
loop begin
   update data
loop end
data has accumulated a value
```

## Compute Sum/Average Pattern

This section describes the Compute Average Pattern.  An average is the sum of N numbers divided by N.  Thus the Compute Average Pattern contains the compute sum pattern.The Compute Average Pattern initializes two variables to 0 prior to the loop.

* ```count``` counts the numbers entered by the user
* ```sum``` accumulates the sum of numbers entered by the user

The ```while``` loop is a sentinel loop that terminates when the user enters ```"quit"```.  Since the ```while``` expression is ```Scanner hasNextDouble``` method, the sentinel loop actually terminates when the user enters something other than a number.  On each iteration of the ```while``` loop, we read a ```double``` from the user, which is added to ```sum```.

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

## Find Largest (or Smallest) Pattern

This section describes finding the Find Largest Pattern.  You can change the comparison from ```>``` to ```<``` to find the smallest.  When finding the largest, you assume that the first values is the largest.  Then you repeately examine other values in a loop, updating the largest whenever a new value is largest than the current largest.  The following is pseudo code for finding the largest, which is a specific instance of the accumulator pattern.

```java
largestVal is first value from the user
while there are more values
   inputVal is next value from the user
   if inputVal > largestVal
     largestVal = inputVal
```

The code for finding the largest is given by the following.

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

## Find Largest Pattern for Numbers in a File

We can connect a Java ```Scanner``` to an input file, and read numbers from a file to find the largest number.  The code for doing this is given by the following.

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

## Count Matches Pattern

The section describes the Count Matches Pattern, which is a specific example of the Accumulator Pattern.  The Count Matches Pattern is demonstrated by counting digits in a ```long```.  Suppose ```long longVar``` contains 1001232121.  The count of digit 0 is 2, digit 1 is 4, digit 2 is 3, and digit 3 is 1.  Section "Numbers - Converting Between Bases" in [Numbers as Information](mydoc_1_numbers) contains pseudo code that converts to a particular base.  The following code implements the base conversion algorithm where we convert a ```long``` to decimal, picking out digits to compare.

```java
public static void countMatchingDigits() {
   Scanner in = new Scanner(System.in);
   int counter = 0;
   System.out.print("Enter an long: ");
   long number = in.nextLong();
   System.out.print("Enter a digit to match: ");
   int digitToMatch = in.nextInt();
   long temp = number;
   while (temp > 0) {
      int digit = (int)(temp % 10);
      if (digit == digitToMatch) {
         counter++;
      }
      temp = temp / 10;
   }
   System.out.println(number + " has " + counter + " digits of " + digitToMatch);
}
```

## Find Position of First Match Pattern

A ```String``` is a sequence of characters.  A ```String``` can also be a sentence with words.  The position of a match in a ```String``` is the index where the ```String``` begins.  For examples,

* The first ```'a'``` in ```"I am a teacher."``` is at position 2.
* The first ```"brick"``` in ```"Lego bricks are not masonry bricks"``` is at position 5.

The Find Poistion of First Match Pattern finds the index where the match begins.  The example in ths section uses ```String```, but this pattern works with any sequential collection such as arrays and ```ArrayList```s.

The following example finds the position of a space in a ```String```.  If the ```String``` does not contain a space, the position is determined to be -1.  You should notice this mimicks the semantics of the ```String``` method ```indexOf```.

```java
String s = "Thissentence hasaspace";
int firstSpace = -1;
for (int j = 0; j < s.length(); j++)
   if (s.charAt(j) == ' ') {
      firstSpace = j;
      break;
   }
        
System.out.println("First space in " + s + " is " + firstSpace);
```

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

