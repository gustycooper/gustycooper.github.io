---
title: Compute Largest (Labs - Lab 2)
keywords: largest
last_updated: June 5, 2016
summary: "Lab 2, Compute Largest"
sidebar: labs_sidebar
permalink: /labs_lab02_05/
toc: false
---

## Create a Java Method to Return the Largest

**Points**: Complete this entire section for 10 points.

Write a Java ```Math2 class``` that has two ```public static method```s: ```main and ```largest.

```public static double largest(double x1, double x2)``` – returns the largest of ```x1``` and ```x2```.  You shall use the Java conditional operators ```?:``` in implementing largest.  The following is an example statement that computes the larger of two numbers.

```java
double largest = (x1 > x2) ? x1 : x2;
```

The following are example calls to your largest method.

```java
double d = largest(1.0, 100); // d is 100.0
```

```public static void main(String[] args)``` – This is your program’s ```main``` method that calls your ```largest``` method to test that it is correct.   Use ```System.out.print```, ```System.out.println```, and a ```Scanner``` object to create the dialog for running your program.  The following is an example dialog.

```java
Enter number 1: 40
Enter number 2: 1.23
Largest is 40.0
```

**Bonus Points**: Complete this for an additional 5 points.

```public static double largest(double x1, double x2, double x3)``` – returns the largest of ```x1```, ```x2```, and ```x3```.  You shall use the Java conditional operators ```?:``` in implementing largest.  

