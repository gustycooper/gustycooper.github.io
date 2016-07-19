---
title: Compute Temperature Lab
keywords: temperature
last_updated: July 16, 2016
summary: "<li>Practice writing a method and main - Compute Temperature.</li> <li>Practice using System.out and Scanner.</li>"
sidebar: labs_sidebar
permalink: /labs_lab02_06/
toc: false
---

## Create Java Methods to Compute Temperature

**Points**: Complete this entire section for 10 points.

Write a Java ```Temperature class``` that has ```public static method```s described below.

```public static double celsius(double fahrenheit)``` – returns the Celsius equivalent of the parameter fahrenheit.

```public static double kelvin(double fahrenheit)``` – returns the Kelvin equivalent of the parameter fahrenheit.

* The conversion algorithms shall be as follows.
  * To convert from Fahrenheit to Celsius, subtract 32, and then multiply by 5/9. 
  * To convert from Celsius to Kelvin, add 273.15.  You shall call the celsius() method of Temperature when implementing the kelvin() method.


The following are example calls to your ```celsius``` and ```kelvin``` methods.

```java
double c = celsius(32); // c is 0.0
double k = kelvin(32);  // k is 273.15
```

```public static void main(String[] args)``` – This is your program’s ```main``` method that calls your ```celsius``` and ```kelvin``` methods to test they are correct.   Use ```System.out.print```, ```System.out.println```, and a ```Scanner``` object to create the dialog for running your program.  The following is an example dialog.

```java
Conversions of freezing: 32.0
Celsius Expected: 0
Celsius Actual: 0.0
Kelvin Expected: 273.15
Kelvin Actual: 273.15

Conversions of boiling: 212.0
Celsius Expected: 100
Celsius Actual: 100.0
Kelvin Expected: 373.15
Kelvin Actual: 373.15

Conversions of a hot July day: 89.6
Celsius Expected: 32
Celsius Actual: 32.0
Kelvin Expected: 305.15
```

