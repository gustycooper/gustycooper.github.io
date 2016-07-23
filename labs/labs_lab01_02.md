---
title: Second Program Lab
keywords: course agreement,
summary: "<li>Understand how to use terminal input and output in your Java program.</li>"
sidebar: labs_sidebar
permalink: /labs_lab01_02/
toc: false
---

## Second Program Lab

## Java Input and Output

**Points**: Complete this entire section for 10 points.

Use BlueJ to write a Java program that reads numbers from the terminal window, performs some arithmetic operation, and displays the results.

1. The following is a Java program that reads two integers and prints their sum.  This program is more complex that your Hello World program because it uses the ```Scanner class```, which is in the ```java.util``` package.  For this week, you should just mimic the mechanics of creating and using a ```Scanner``` object for reading input.  You will learn the details of defining classes and constructing objects in [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects).   ```Scanner``` objects have several methods for reading input.  The example below uses the ```nextInt``` method.  You should use the Oracle Java documentation to discover other Scanner object methods.  For examples, ```nextDouble``` and ```nextLine```.  We will use many of the ```Scanner``` methods during this course.

   ```java
   import java.util.Scanner;
   public class SimpleIO {
      public static void main(String[] args) {
         Scanner in = new Scanner(System.in);
         System.out.print(“Enter an integer: “);
         int a = in.nextInt();
         System.out.print(“Enter an integer: “);
         int b = in.nextInt();
         System.out.print(“The sum of “ + a + “ and “ + b + “ is “);
         System.out.println(a+b);
      }
   }
   ```

2. Create the above program and execute it.

3. Update the above program so that it does the following.
   * a. Reads two doubles and computes the sum as double.
   * b. Reads two bytes and computes the sum as a byte.  You should enter a number that is too large for a byte to see what Java does.

