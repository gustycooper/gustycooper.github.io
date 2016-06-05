---
title: First Classes and Objects (Labs - Lab 3)
keywords: loop
last_updated: June 5, 2016
summary: "Lab 3, Overview"
sidebar: labs_sidebar
permalink: /labs_lab03_00/
toc: false
---

## Lab 3 Overview

Lab 3 is your first opportunity to create your own class, declare variable, and construct objects.  This concept may appear difficult at first, but before long you will be an expert.  All of the problems can be solved using ```main``, ```Scanner``` for input, ``System.out``` for output, helper methods with parameters that you write, and expressions.  A few of the problems require a conditional expression.

##  Submission Requirements

On Canvas submit 

* Your lab score
* The name of your teammate who verified your work.
* The UMW Honor Pledge with your name serving as an electronic signature.

## Sample Lab

This section provides a sample lab specication and a solution.  You can follow this sample in creating your solutions to the various labs in Lab 3.  For labs that you create a ```class``` that is a type, you will create two classes, each in its onw file.

1. The class that is your type, e.g., ```public class Person``` in file ```Person.java```.  Recall that a Java ```class``` that is used for a type has the following pattern.

   ```java
   public class MyType {
      // instance variables
      // constructors
      // instance methods
   }
   ```

2. The class that tests your type, e.g., ```public class PersonTester``` in file ```PersonTester.java```.  This class will have a ```main``` method that declares and uses variables of type ```MyType```.

### Sample Lab Specification: Flower

Write a Java ```class``` that creates a ```Flower``` type, which has the following attributes.

* Instance variables for color and height.
* ```Flower(String color)``` - constructs a flower that is color ```color``` and height of 0 inches
* ```water()``` - causes the flower to grow two inches
* ```squirrelHungry()``` - causes the flower to be 0 inches
* ```dye(Sring color)``` - dyes the flower to be ```color```
* ```getColor()``` - returns the color of the flower
* ```getHeight()``` - returns the height of the flower

### Sample Lab Solution: Flower

File: **Flower.java**

```java
public class Flower {

   String color;
   int height;

   public Flower(Sting c) {
      color = c;
      height = 0;
   }

   public void water() {
      height += 2;
   }

   public void squirrelHungry() {
      height = 0;
   }

   public void dye(String c) {
      color = c;
   }

   public String getColor() {
      return color;
   }

   public int getHeight() {
      return height;
   }
}
```

File: **FlowerTester.java**

```java
public class FlowerTester {

   public static void main(String[] args) {
      Flower f = new Flower("Yellow");
      System.out.println(f.color() + " " + f.height());
      f.water();
      f.water();
      f.dye("Blue);
      System.out.println(f.color() + " " + f.height());
   }
}
```

## Questions

1. What is a literal?  Provide examples for int, double, boolean, and String.

2. True/False: A Java String is a primitive data type.

3. Object-oriented programming uses classes and objects. What are classes and what are objects? What is the relationship between classes and objects?

4. What are instance variables and instance methods?

5. What is a constructor? What is the purpose of a constructor in a class?

6. Suppose that Kumquat is the name of a class and that fruit is a variable of type Kumquat. What is the meaning of the statement “fruit = new Kumquat();”? That is, what does the computer do when it executes this statement? (Try to give a complete answer. The computer does several things.)

7. Modify the following class so that the two instance variables are private and there is a getter method and a setter method for each instance variable:

   ```java
   public class Player {
      String name;
      int score;
   }
   ```

8. True/False: Suppose there is a method declared as follows.  If your main method wants to call getCellNumber, it must have a variable named exactly “friend” that it passes as the argument.

   ```java
   private static String getCellNumber(String friend) 
   ```

9. True/False: There is no limit on how many lines of code a method can contain, but it can be called only once.

10. True/False: Two different methods can each have a variable named “x”. If one of the methods changes its value of “x”, this has no effect on the value of the other method's “x” variable.

11. True/False: The variables used by Java methods are stored in something called the “stack.”

12. True/False: When a “return” statement is encountered while executing the code in a method, the method immediately terminates and gives an output. No more code in that method is executed at that time.

13. True/False: An “instance variable” is a variable which has a potentially different value for each instance of a class.

14. True/False: When an object comes into existence, sometimes a constructor is called, but sometimes not.

15. True/False: A class may only have one constructor, although it may have any name the programmer desires.

16. True/False: Making an instance variable “static” basically means that there is only one value for the variable shared by all objects of that type.

17. True/False: In Java, a two-dimensional array must be perfectly rectangular: all rows must be the same size.

18. Bessie is looking through a Java file, trying to find the class's constructor. What two things are true about all constructors that will help her locate it?

19. The methods of a class can be called.  Methods have parameters.  Discuss the concept of parameters.  What is the difference between formal parameters and actual parameters.

20. Explain how you use the terms method, subroutine, and function.

21. A subroutine/method/function is said to have a contract. What is meant by the contract? When you want to use a subroutine/method/function, why is it important to understand its contract? The contract has both "syntactic" and "semantic" aspects. What is the syntactic aspect? What is the semantic aspect?

22. A "black box" has an interface and an implementation. Explain what is meant by the terms interface and implementation.

