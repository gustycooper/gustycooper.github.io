---
title: Recursive Number Conversion
keywords: sorting
last_updated: June 22, 2016
summary: "Recursive Number Conversion"
sidebar: labs_sidebar
permalink: /labs_lab09_03_05/
toc: false
---

## Recursive Integer to Binary

**Points**: Complete this entire section for 10 points.

Write a recursive method ```public static void intToBinary(int val)``` that prints the binary equivalent of the ```int``` parameter ```val```.  Recall the converting from decimal to binary is done by using the modulo operator and the division operator.  Consider the integer number 13, which is 0b1101.  The following shows the two operations.

```java
Step 1:
13 % 2 yields the digit 1 and 13 / 2 yields 6
Step 2: 
 6 % 2 yields the digit 0 and  6 / 2 yields 3
Step 3:
 3 % 2 yields the digit 1 and  3 / 2 yields 1
Step 4:
 1 / 2 yields the digit 1 and  1 / 2 yields 0 so we stop.
```

The binary equivalent of 13 is 0b1101, which is the digits concatenated in reverse order of the steps.

The recursion stops when ```val / 2``` is 0.  Each recursive call will generate a digit using ```val % 2```.  You have to arrange the recursive call and the print so the prints occur in reverse order.

