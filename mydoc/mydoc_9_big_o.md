---
title: Big O
tags: [recursion]
keywords: big O
last_updated: June 13, 2016
summary: "Recursion"
sidebar: mydoc_sidebar
permalink: /mydoc_9_big_o/
---

## Big O

Computer Scientists and mathematicians use the notation of Big-O to describe the complexity (or efficiency or asymptotic behavior) of algorithms.  Big-O is rather complex, but we will study Big O from an intuitive perspective, which is easy to understand.  We do not involve complex mathematics.  For our Big O, we simply count the number of steps in an algorithm, and the number of step is our definition of complexity.  From [Algorithms](/gustycooper.github.io/mydoc_1_algorithms) we learned that an algorithm is a sequence of steps that solves a problem.  We also know an algorithm accepts input and produces output.  Our Big O value is the number of steps based upon the size of the input.  Consider the following code (code is an algorithm) that has two methods - ```add``` that adds the first two elements of an array and ```average``` that computes the average of the elements in an array.  We studied the average pattern in [Arrays](/gustycooper.github.io/mydoc_6_arrays).

```java
 1 public static double add(double[] da) {
 2    double z = da[0] + da[1];
 3    return z;
 4 }
 5
 6 public static double average(double[] da) {
 7    double sum = 0;
 8    for (double d : da)
 9       sum += d;
10    return sum / da.length;
11 }
12
13 // code snippet
14 double[] da = {1,2,3,4,5,6};
15
16 double s = add(da);        // da has 6 elements
17 double ave = average(da)   // da has 6 elements
18
```

We count the execution steps of ```add``` that result from the call on line 16 as follows.

* The ```add``` method has two statements, which are on lines 2 and 3.
* Line 2 executes 1 time and line 3 executes 1 time.
* ```add``` has 2 execution steps.
* Using this style of counting, we can say the Big O for ```add``` is 2, which is written O(2).
* The number of steps for the method ```add``` is always 2 - the number of steps is independent of the input size.

We count the execution steps of ```average``` as caused by the call on line 17 as follows.

* The ```average``` method has four statements, which are on lines 7, 8, 9, and 10.
* Line 7 executes 1 time.
* Line 8 executes 1 time.
* The number of iterations of the ```for``` loops on lines 2 and 3 depends upon the length of the input parameter ```da```.  The call on line 16 results in 6 iterations.  * In this example line 8 executes 6 times and line 9 executes 6 times.
* The total number of execution steps is dominated by the loop iterations.  In this case the total is 1 + 1 + 6 + 6 which is 14.
* Using this style of counting, we can say the Big O for ```average``` is 14, which is O(14).
* The number of steps for the method ```average``` is varies depending upon the size of the input - the number of steps is independent of the input size.

To further demonstrate that ```add``` is independent of the input size and ```average``` is dependent, we change lines 14 and 15 to create an array of ```10_000``` elements.  The following shows our new lines. 

```java
14 double[] da = new double[10_000];
15 Arrays.fill(da, 10.0);
16 double s = add(da);        // da has 10_000 elements
17 double ave = average(da);  // da has 10_000 elements
```

We count the execution steps of ```add``` that result from the call on our updated line 16 as follows.

* The ```add``` method has two statements, which are on lines 2 and 3.
* Line 2 executes 1 time and line 3 executes 1 time.
* ```add``` has 2 execution steps.
* Using this style of counting, we can say the Big O for ```add``` is 2, which is written O(2).

We count the execution steps of ```average``` as caused by the call on our updated line line 17 as follows.

* The ```average``` method has four statements, which are on lines 7, 8, 9, and 10.
* Line 7 executes 1 time.
* Line 8 executes 1 time.
* The number of iterations of the ```for``` loops on lines 2 and 3 depends upon the length of the input parameter ```da```.  The call on line 16 results in 10_000 iterations.
  * In this example line 8 executes 10_000 times and line 9 executes 10_000 times.
* The total number of execution steps is dominated by the loop iterations.  In this case the total is 1 + 1 + 10_000 + 10_000 which is 20_002.
* Using this style of counting, we can say the Big O for ```average``` is 20_002, which is O(20_002).
* In this case the size of input is 10_000.  We can rewrite the Big O based upon the size of the input as follows - Big O is ```2 * 10_000```, which is O(2 * 10_000).
* The Big O value for ```average``` based upon the size of the input is ```2*N```, which is O(2N), where N is ia.length.

We can choose the definition of a step.  We began discussion by assigning a step to each line in the method.  We simplify our defintion of steps as follows.

* An algorithm like ```add``` that only contains sequential statements (does not contain loops) and the number of steps is independent of the input size has a Big O of 1, which is O(1).
* An algorithm like ```average``` that contains sequential statements and a loop that is dependent on the input size has a Big O of N, which is O(N). 


We expand our understand of Big O as we study [Recursion](/gustycooper.github.io/mydoc_9_recursion), [Searching](/gustycooper.github.io/mydoc_9_searching), and [Sorting](/gustycooper.github.io/mydoc_9_sorting).  A few observations to ponder as we go forth.

* Obviously an O(1) algorithm that takes one step is is faster than an O(N) algorithm that takes N steps.  
* We will discover nested loops take more steps for each level of nexting.  If the outer loop takes N steps and the inner loop takes N steps, the two loop combined take N<sup>2</sup> steps.  The Big-O for this is O(N<sup>2</sup>.  Consider the following method ```sum``` that has nested loops.  The method ```sum``` takes 9 steps (or 3<sup>2</sup>) when called on line 12.  

```java
 01 int sum(int[][] a2d) {
 02    int sum = 0;
 03    for (int i = 0; i < a2d.length; i++)
 04       for (int j = 0; j < a2d[i].length; j++)
 05          sum += a2d[i][j];
 06    return sum;
 07 }
 08 
 09 int[][] ia2d = { {1,2,3},
 10                  {4,5,6},
 11                  {7,8,9} };
 12 int s = sum(ia2d);
```

For Big-O, we count the number of steps based upon the size of input.  Big O describes the worst-case scenario.  The following shows Big-O given the input size in N.

* number of steps is 1 - Big-O is O(1) - this is referred to as a constant algorithm - this is a really fast algorithm.
  * Algorithm executes in the same number of steps regardless of the input size.
* number of steps is N - Big-O is O(N) - this is referred to as a linear algorithm - this is a fast algorithm.
  * Algorithm execution time grows linearly & proportionally to size of input
  * Input size 10 items takes one sec, size 100 takes 2 secs, size 1000 takes 3 secs 
* number of steps is N log N - Big-O is O(N log N) - this is referred to as N Log N algorithm - this is a fast algorithm
  * Binary search is N log N, which is extremely efficient when dealing with large data sets.
  * O(N log N) has a growth curve that peaks at the beginning and slowly flattens out as the size of the data sets increase
* number of steps is N<sup>2</sup> - Big-O is O(N<sup>2</sup>) - this is referred to as N-squared algorith - this is a slow algorithm.
  * Algorithm execution time grows proportionally to square of size of input
  * Algorithms with two nested loops are N<sup>2</sup>. More nested loops result in a worse Big-O - O(N<sup>3</sup>) has three nested loops and O(N<sup>4</sup>) has four nexted loops.
  * Bubble Sort is an example of an algorithm with N<sup>2</sup>
* number of steps is c<sup>N</sup> - Big-O is O(c<sup>n</sup>) – this is referred to as an exponential algorithm – this is a slower algorithm.
* number of steps is N! - Big-O is O(N!) - this is referred to as an N factorial algorithm - N factorial is a terribly slow algorithm.

