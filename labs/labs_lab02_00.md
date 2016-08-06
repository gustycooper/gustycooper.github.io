---
title: Java Expression Labs
keywords: loop
last_updated: July 16, 2016
summary: "The learning objectives for the entire Java Expression Labs. <li>Practice expressions using the BlueJ Codepad.</li> <li>Practice writing a methods and main</li> <li>Practice using System.out and Scanner.</li> <li>Practice creating a class that has methods with the same name.</li>"
sidebar: labs_sidebar
permalink: /labs_lab02_00/
toc: false
---

## Java Expression Labs Overview

All of the problems in Java Expression Labs can be solved in a Java class that has ```main``, ```Scanner``` for input, ``System.out``` for output, helper methods with parameters that you write, and expressions.  A few of the problems require a conditional expression.

## Programming Contest

To receive maximum points on this lab, submit a solution to [Programming Contest](/gustycooper.github.io/programmingContest) Problem B - Who is Closer.

##  Submission Requirements

Follow guidance in [Sample Lab Submission](/gustycooper.github.io/labs_lab00_00) for submitting your lab points.

## Sample Lab

This section provides a sample lab specication and a solution.  You can follow this sample in creating your solutions to the various labs in Java Expression Labs.

### Sample Lab Specification: Add Double

Write a Java ```AddDouble``` class that does the following.

```public static double addDouble(double x, double y)``` - returns the sum of ```x``` and ```y```.

```public static void main(String[] args)``` - uses a ```Scanner``` for input and ```System.out.println``` for output to accomplish the following.

```java
Enter a number: 63.2
Enter a number: -3.2
63.2 + -3.2 = 60.0
```

### Sample Lab Solution: Add Double

The solution to this problem is the following code.

```java
import java.util.Scanner;

public class AddDouble {

   public static double addDouble(double x, double y) {
      return x + y;
   }

   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      System.out.println("Enter a number: ");
      double x = in.nextDouble();
      System.out.println("Enter a number: ");
      double y = in.nextDouble();
      System.out.println(x + " + " + y + " + " + (x+y));
   }
}
```

## Questions

**Points**: Answer these questions for 20 points.  You have to handwrite or type the answers to get the points.  For each question that you do not answer, subtract one point.  If you do not answer any questions, you get negative points.

1. See [Java Expressions in Codepad](/gustycooper.github.io/labs_lab02_01) for questions on evaluating expressions.  You should understand how to evaluate Java expressions so that you can compute in your mind the same answer as Java.

2. Explain an assignment statement.  Be sure to include a description of both sides of the assignment operator (=).

3. Write the truth tables for ```&&```, ```||```, and ```!```.

4. Write the truth table for ```P && Q || R```.

5. What is meant by precedence of operators?  Write the Java Operator Precedence.

6. True/False: In Java, the operators = and == are used interchangeably (i.e., they mean the same thing.)

7. True/False: The first Java assignment statement is a shorthand version of the second.

   ```java
   points += 2; 
   points = points + 2;
   ```

8. Does the following code have a problem? Y/N ___, if so, explain how to remove.

   ```java
   double gravity = 9.8;
   ```

9. Does the following code have a problem? Y/N ___, if so, explain how to remove.

   ```java
   int pie = 3.14159;
   ```

10. Put the following three statements in the BlueJ Code Pad, observe the answers, and provide an explanation.

    ```java
    2 + 3 + “test”
    “test” + 2 + 3
    “test” + 2 * 3
    ```
   
11. What is an integrated development environment?

12. True/False: If I have two Java ```String```s, ```s1``` and ```s2```, the following is how to compare them for equality.  If this is not the correct way, describe the correct way.

    ```java
    s1 == s2
    ```


13. Provide the meaning for the following Java operators.

     ```java
     ++
     &&
     !=
     ```
   
14. Is the following code sequence legal?  If so, what are the values of ```a```, ```b```, and ```c```?  Use the BlueJ Code Pad to type these in if needed.  Do you think this is good programming style?

    ```java
    int a = 5;
    int c = 10;
    boolean b  = a + c < (c = 20)
    ```
   
15. True/False: Java does not have a conditional operator.

16. True/False: The Java shortcut assignment statement only works for the addition operator as follows.

    ```java
    points += 2;
    ```

17. True/False: If I have two Java ```doubles```, ```d1``` and ```d2```, the following is how to compare them for equality.  If this is not the correct way, describe the correct way.

    ```java
    d1 == d2
    ```

18. If I have two Java variables defined as follows.  Provide the code that allows me to assign ```myInt``` to ```myShort```.

    ```java
    int myInt = 25;
    short myShort = 0;
    ```

19. Provide two assignment statements that assign the variable ```randomNumber``` to a random number between 1 and 6.  Use ```Math.random()``` for one assignment statement and a ```java.util.Random``` object for the other assignment statement.

20. Does the following code have a problem? Y/N ___, if so, explain how to remove.

    ```java
    int pie = 3; // crude approximation of pie
    double dPie = pie + .14159
    ```

21. Does the following code have a problem? Y/N ___, if so, explain how to remove.

    ```java
    double pie = 3.14159; // approximation of pie
    int iPie = pie - .14159
    ```

22. What does it mean to say Java short circuits the Boolean operators ```&&``` and ```||```?  Provide examples of how this short circuit works.

24. We know that Java implements a ```short``` as 2 bytes of memory.  We also know that we can represent 65536 numbers in 16 bits.  The Java wrapper class ```Short``` shows the largest value for a short as follows.  Explain this difference.

    ```java
    int maxShort = Short.MAX_VALUE;  // maxShort is 32767
    ```

