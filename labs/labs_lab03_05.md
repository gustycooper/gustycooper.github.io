---
title: Dice Type Lab
keywords: class, dice
last_updated: July 16, 2016
summary: "<li>Practice writing a Dice type.</li>  <li>Practice creating instance variables, constructors, and instance methods within your Dice type.</li> <li>Practice creating test cases for your Dice type.</li> <li>Practice placing your test cases in DiceTester class that has a main method.</li> <li>Practice using your Dice type to declare variables.</li> <li>Practice constructing objects of your Perons type.</li> <li>Practice calling instance methods in the Dice objects you construct.</li> "
sidebar: labs_sidebar
permalink: /labs_lab03_05/
toc: false
---

## Create a Java Dice Type

**Points**: Complete this entire section for 15 points.

In this section you will write a Java ```Dice class``` that implements two ```roll``` methods.  One of the ```roll``` methods will use the ```Math.random``` method.  This code will be like that created in [Dice](/gustycooper.github.io/labs_lab02_07).  The other ```roll``` method will use a ```java.util.Random``` object.  Since both ```roll``` methods have the same signature, you will name the methods ```roll1``` (uses ```Math.random```) and ```roll2``` (uses ```java.util.Random```).  The ```Math.random``` method is available without an ```import``` statement, but you will have to include the following line 

```java
import java.util.Random;
```

in order to create ```java.util.Random objects```.  The ```java.util.Random``` constructor objects accepts a seed value, which will generate the same sequence of random values.  The following code generates a random number between 1 and 6 using ```Math.random``` and ```java.util.Random```.

```java
int i1 = generator.nextInt(5)+1;
int i2 = (int)(6*Math.random())+1;
```

The Java Dice class has the following attributes.

* ```Dice(int seed)``` – this constructor will construct a ```Random``` generator object using a specific seed value.  The following is example for the constructor that initializes a ```private``` instance variable ```Random``` generator.

  ```java
  generator = new Random(seed);
  ```

* ```int roll1()``` – uses ```Math.random()``` to returns random number between 1 and 6

* ```int roll2()``` – uses the instance variable that references a ```java.util.Random``` object to return a random number between 1 and 6

Write a ```DiceTester class``` that has a ```public static void main()``` method that uses your ```Dice class``` to test that it is correct.  Your ```DiceTester``` should create two ```Dice``` objects (e.g., ```d1``` and ```d2```) with the same seed value.  You should make a sequence of calls to ```d1.roll1()```, ```d2.roll1```, ```d1.roll2()```, and ```d2.roll2()``` of both dice to demonstrate ```roll1()``` for ```d1``` and ```d2``` has two different sequences of numbers and the ```roll2()``` has the same sequence of numbers for both ```d1``` and ```d2```.  The following is an example output from ```DiceTester```.

```d1.roll1()``` and ```d2.roll1()``` will roll a different sequence of numbers
```d1.roll2()``` and ```d2.roll2()``` will roll the same sequence of numbers

```java
d1.roll1(): 1   d2.roll1(): 1   d1.roll2(): 4   d2.roll2(): 4

d1.roll1(): 6   d2.roll1(): 3   d1.roll2(): 2   d2.roll2(): 2

d1.roll1(): 6   d2.roll1(): 1   d1.roll2(): 4   d2.roll2(): 4

d1.roll1(): 3   d2.roll1(): 2   d1.roll2(): 1   d2.roll2(): 1

d1.roll1(): 5   d2.roll1(): 1   d1.roll2(): 3   d2.roll2(): 3
```

