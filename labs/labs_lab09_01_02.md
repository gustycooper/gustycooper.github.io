---
title: Recursive Fibonacci Method
keywords: recursion, recursive
last_updated: June 22, 2016
summary: "Recursive Power Method"
sidebar: labs_sidebar
permalink: /labs_lab09_01_02/
toc: false
---

## Recursive Fibonacci Method

**Points**: Complete this entire section for 10 points.

Write iterative and recursive methods that computes the n<sup>th</sup> Fibonacci number.  A Fibonacci number is one from the sequence is 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …  The zeroth Fibonacci number is 0, the 1st Fibonacci number is 1, the 2nd is 1, the 3rd is 3, the 4th is 5, the 5th is 5, the 6th is 8, the 7th is 13, and so on.  As you can see, the Fibonacci number f<sub>n</sub> is computed by adding f<sub>n-2</sub> and f<sub>n-1</sub>.   For example the 8th Fibonacci number is 13, which results by adding the 6th and 7th Fibonacci numbers, which are 5 and 8.  It is easy to see that the recursive definition of Fibonacci is given by the following pseudo code.

```java
function fibo(N) returns an integer
  if N is less or equal to 1
    return 1
  else
    return fibo(N-1) + fibo(N-2)
```

An alternative (but equivalent) algorithm uses the conditional operator.

```java
function fibo(N) returns an integer
  return (N<2) ? N : fibo(N-1) + fibo(N-2)
```

These are correct algorithms, but they are inefficient and they have an exponential Big-O(2<sup>n</sup>).

An iterative algorithm to compute Fibonacci numbers can be visualized by the following.

```
Iteration fibo(n)		X     Y
 				0	1
 	1	2		1	1
 	2	3		1	2
 	3	4		2	3
 	4	5		3	5
 	5	6		5	8
 	6	7		8	13
 	7	8		13	21
 	8	9		21	34
 	9	10		34	55
```
 
You need to initially assign x = 0 and y = 1.  Then on each loop iteration, y is placed into x, and x+y is placed into y.  

The method signatures for you recursive and iterative methods can be

```
int fiboRecursive(int n)
int fiboIterative(int n)
```

When implementing ```fiboRecursive```, use a static integer that can count the number of calls.  

After you have tested ```fiboRecursive``` and ```fiboIterative``` to ensure they are correct, perform the following evaluations of your algorithms.  

* What value of the input parameter causes your fiboIterative to generate an incorrect answer?
* Why does this input parameter generate an incorrect answer?  How does this relate to Lab 1?
* What value of the input parameter causes your fiboRecursive to generate a stack overflow exception (StackOverflowError)?
* Why does this input parameter generate a stack overflow exception?  What is a stack overflow exception?
* How many calls to ```fiboRecursive``` result when the input parameter is 4, 5, 6?  What is the relationship between the input parameter and the number of calls?  Does the relationship support the fact that ```fiboRecursive``` is an O(2<sup>n</sup>) algorithm?

