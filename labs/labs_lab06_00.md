---
title: Arrays, ArrayLists Labs
keywords: array, arraylist
last_updated: July 21, 2016
summary: "<li>Practice using arrays and ArrayLists in solving problems.</li> <li>Practice looping patterns with arrays and ArrayLists.</li>"
sidebar: labs_sidebar
permalink: /labs_lab06_00/
toc: false
---

## Array, ArrayLists Overview

In this lab, we return to looping patterns, but this time we use them on arrays and array lists.  For examples, we implement a ```MyIntegers class``` with an array that has to be extended when it becomes full and we update our ```Person``` class so that friends is an array list of ```Person```.

## Netbeans Installation

We use Netbeans to complete this lab.  See [Java Downloads](/gustycooper.github.io/mydoc_0_downloads) for instuctions on installing Netbeans.  Installing Netbeans provides you with 10 lab points.

##  Submission Requirements

Follow guidance in [Sample Lab Submission](/gustycooper.github.io/labs_lab00_00) for submitting your lab points.

## Sample Lab

This section provides a sample lab specication and a solution.  You can follow this sample in creating your solutions to the various labs in Java Expression Labs.

### Sample Lab Specification: Count Values

Write a Java ```CountValues``` class that does the following.

```public static int countValue(double[] da, double value)``` - returns the count of ```value``` in ```da```.

```public static void main(String[] args)``` - uses a ```Scanner``` for input and ```System.out.println``` for output to accomplish the following.

```java
Enter number of values in array: 5
Enter value[0] for array: 2.0
Enter value[1] for array: 4.0
Enter value[2] for array: 6.0
Enter value[3] for array: 4.0
Enter value[4] for array: 4.0
Enter search value: 4.0
The count of 4.0 is 3.
```

### Sample Lab Solution: Count Values

The solution to this problem is the following code.

```java
import java.util.Scanner;

public class AddDouble {

   public static double countValue(double[] da, double value) {
      int count = 0;
      for (double d : da)
         if (d == value)
            count++;
      return count;
   }

   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      System.out.print("Enter number of values in array: ");
      int size = in.nextInt();
      System.out.println();
      double[] da = new double[size];
      for (int i = 0; i < size; i++) {
         System.out.println("Enter value[" + i + "] for array: ");
         double x = in.nextDouble();
         da[i] = x;
         System.out.println();
      }
      System.out.print("Enter search value: ");
      double value = in.nextDouble();
      System.out.println("The count of  " + value + " is " countValue(da, value));
   }
}
```

## Questions

**Points**: Answer these questions for 10 points.  You have to handwrite or type the answers to get the points.  For each question that you do not answer, subtract one point.  If you do not answer any questions, you get negative points.

1. True/False: It's easy to insert and delete elements from the middle of an array.

2. True/False: It’s easy to insert and delete elements form the middle of an ```ArrayList```.

3. True/False: Arrays can be used to create large numbers of variables at once.

4. True/False: Arrays can be used to create a variable that references a large number of elements.

5. True/False: Arrays can be used in conjunction with a loop to manipulate all the array elements in a iterative way.

6. True/False: The for-each loop is a convenient way to loop through a partial number of elements in an array or an ```ArrayList```.

7. True/False: Arrays are of flexible size, in that if you add more elements to the end of them, they automatically expand to make them fit.

8. True/False: ```ArraysList```s are of flexible size, in that if you add more elements to the end of them, they automatically expand to make them fit.

9. True/False: You can pass them to functions, just like you can ordinary variables.

10. True/False: If you create an array called ```x``` with 14 elements, ```x[14]``` is the last valid value in the array.

11. When would you choose to use an array as part of your problem solution?

12. When would you choose to use an ```ArrayList``` as part of your problem solution?

