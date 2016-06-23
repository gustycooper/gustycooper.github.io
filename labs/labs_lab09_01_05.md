---
title: Recursive Array Printing
keywords: recursion, recursive
last_updated: June 22, 2016
summary: "Recursive Array Printing"
sidebar: labs_sidebar
permalink: /labs_lab09_01_05/
toc: false
---

## Recursive Array Printing

**Points**: Complete this entire section for 10 points.

Write a recursive method 

```java
public static void printArray(int[] ia, int i).  
```

The method will print the i<sup>th</sup> element of ```ia``` and then call itself to print the i-1<sup>th</sup> element.  Your method shall ensure the formal parameter ```i``` is with the index range of ```ia```.  The following are examples of calling ```printArray```.

```java
printArray(new int[]{1,2,3,4,5,6},5);
```

Results in the following displayed in the console output.

```java
6 5 4 3 2 1
```

```java
printArray(new int[]{1,2,3,4,5,6},7);
```

Results in the following displayed in the console output.

```java
Array index is invalid
```

