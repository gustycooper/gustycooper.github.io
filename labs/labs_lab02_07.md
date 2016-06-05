---
title: Compute Dice (Labs - Lab 2)
keywords: dice, random
last_updated: June 5, 2016
summary: "Lab 2, Compute Dice"
sidebar: labs_sidebar
permalink: /labs_lab02_07/
toc: false
---

## Create a Java Method to Compute a Dice Roll

**Points**: Complete this entire section for 10 points.

Write a Java ```Dice class``` that has ```public static roll``` described below.

``` public static int roll1()``` – uses ```Math.random()``` to returns random number between 1 and 6

In the section *Math.random Method* of [Methods](/gustycooper.github.io/mydoc_1a_methods) we studied how to generate random integers.  ```Math.random``` returns a ```double``` that has to be propberly manipulated.  The following code generates a random number between 1 and 6 using ```Math.random```.

```java
int i2 = (int)(6*Math.random())+1;
```

The following are example calls to your ```roll``` method.

```java
int r1 = roll(); // 1 <= r1 <= 6
int r2 = roll(); // 1 <= r2 <= 6
```

```public static void main(String[] args)``` – This is your program’s ```main``` method that calls your ```roll``` method to test they are correct.   Use ```System.out.print```, ```System.out.println```, and a ```Scanner``` object to create the dialog for running your program.  The following is an output where ```roll``` is called 5 times.

```java
roll 1: 1

roll 2: 6

roll 3: 6

roll 4: 3

roll 5: 5

```

