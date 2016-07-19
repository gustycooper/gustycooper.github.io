---
title: MyMath Type - Take 2 Lab
keywords: mymath
last_updated: July 17, 2016
summary: "<li>Practice maintenace programming by adding methods to MyMath class.</li> <li>Practice using loops and conditionals to solve problems.</li>"
sidebar: labs_sidebar
permalink: /labs_lab04_05/
toc: false
---

## Create a Java MyMath Type - Take 2

**Points**: Complete this entire section for 10 points.

In this lab, you will add two new methods to [MyMath](/gustycooper.github.io/labs_lab03_04).  The new methods are described as follows.

* ```int numDigits(int number)``` – returns the number of decimal digits in number.  
* ```int coins(int cents)``` – returns the minimal number of coins – quarter, dime, nickel, and penny – that are required to make the amount cents. For example, the minimal number of coins to make 76 cents of change is 4 (3 quarters and 1 penny). 

You will be able to construct and manipulate objects of type MyMath as follows.

```java
MyMath m = new MyMath();
double average = m.average(10, 50, 20, 100);
double largest = m.largest(50, 20);
int i = m.numDigits(1049); // i is 4
int j = m.numDigits(34);   // j is 2
int c = m.coins(0);   // c is 0 
int c = m.coins(76);  // c is 4 
int c = m.coins(73);  // c is 7
```

To create the algorithms for ```numDigits``` and ```coins``` methods, you should first work through several examples by hand.  This will help you discover the algorithm.  In fact, I find it helpful to always begin with simple concrete cases that I can solve by hand.  I work on these cases until I understand the algorithm enough to capture it as pseudo code, after which I transcribe the algorithm into a programming language.

Let’s think about the ```numDigits``` algorithm.  Consider the number 105 for example, which has 3 digits.  Notice you can repeatedly perform integer division three times as shown below.  The number of divisions is the answer.  Work another concrete example, and then generalize into an algorithm using a loop and integer division.  You should realize that the Java division operator on int operands computes how many times the divisor goes into the dividend, which is an int.  The loop will terminate when the divisor goes into the dividend 0 times.

```java
105 / 10 is 10 – 10 goes into 150 10 times, with a remainder of 5
 10 / 10 is  1 – 10 goes into 10 1 times, with a remainder of 0
  1 / 10 is  0 – 10 goes into 1 0 times, with a remainder of 1
```

Let’s think about the ```coins``` algorithm.  You intuitively know (a) 76 cents can be 3 quarters and 1 penny for a minimum of 4 coins, (b) thirty cents can be 1 quarter and 1 nickel for 2 coins, and (c) twenty cents can be 2 dimes.  What is the algorithm?  You first count the number of quarters you can get, then count the number of dimes, then nickels, and finally pennies.  Sometimes you cannot get a particular coin.  For the 76 cents example, you cannot get any dimes or nickels.  Work several concrete examples to discover the algorithm.  The algorithm can be created with a sequence of if statements that use integer division and remainder.
  
Use BlueJ to construct and manipulate some MyMath objects.  The following are example commands in the BlueJ Codepad after you have constructed myMath1.

```java
> myMath1.average(1.0, 3, 4.0, 8);
4.0   (double)
> myMath1.largest(1.0, 100);
100.0   (double)
> myMath1.numDigits(105);
3   (int)
> myMath1.coins(76);
4   (int)
```

