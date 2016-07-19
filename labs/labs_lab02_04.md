---
title: Compute Average Lab
keywords: average
last_updated: July 16, 2016
summary: "<li>Practice writing a method and main - Compute Average</li> <li>Practice using System.out and Scanner.</li>"
sidebar: labs_sidebar
permalink: /labs_lab02_04/
toc: false
---

## Create a Java Method that Returns the Average

**Points**: Complete this entire section for 10 points.

Write a Java ```Math1 class``` that has two ```public static method```s: ```main``` and ```average```. 

```public static double average(double x1,double x2,double x3,double x4)``` – returns the average of four ```double```s.  The following is an example call

```java
double d = average(1.0, 3, 4.0, 8); // d is 4.0
```

```public static void main(String[] args)``` – This is your program’s ```main``` method that calls your ```average``` method to test that it is correct.  Use ```System.out.print```, ```System.out.println```, and a ```Scanner``` object to create the dialog for running your program.  The following is an example dialog.

```java
Enter number 1: 4
Enter number 2: 5
Enter number 3: 6
Enter number 4: 7
Average is 5.5
```

You will reuse your ```Average``` code in [Simple Objects - MyMath Type Lab](/gustycooper.github.io/labs_lab03_04).
