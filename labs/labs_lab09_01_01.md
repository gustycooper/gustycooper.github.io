---
title: Recursive Power Method
keywords: recursion, recursive
last_updated: June 22, 2016
summary: "Recursive Power Method"
sidebar: labs_sidebar
permalink: /labs_lab09_01_01/
toc: false
---

## Recursive Power Method

**Points**: Complete this entire section for 10 points.

Write an iterative and recursive method that computes xn.  The iterative method will use a loop, and (of course) the recursive method will call itself.  You should recognize the following, which should be helpful in designing your algorithms and implementing your Java code.

```java
X3 is X * X * X
X4 is X * X * X * X, which is X * X3
```

The method signatures for your recursive and iterative methods can be 

* ```double powRecursive(double x, int n)``` - computes and returns x<sup>n</sup>
* ```double powIterative(double x, int n)``` - computes and returns x<sup>n</sup>

Test your ```powRecursive()``` and ```powIterative()``` methods to make sure they work.

Update your ```powRecursive()``` so that it works for both positive and negative exponents.  To do this, you should realize that the following equation is true.

x<sup>-n</sup> =  1/x<sup>n</sup> 

The following code shows example calls.

```java
double thousand = powRecursive(10.0, 3);   // 1_000
double point001 = powRecursive(10.0, -3);  // 0.001
```

