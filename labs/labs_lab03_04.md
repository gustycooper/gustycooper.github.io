---
title: MyMath Type
keywords: class, mymath
last_updated: June 5, 2016
summary: "Lab 2, MyMath Type"
sidebar: labs_sidebar
permalink: /labs_lab03_04/
toc: false
---

## Create a Java MyMath Type

**Points**: Complete this entire section for 10 points.

This section will implement the same ```average``` and ```largest``` methods from [Average](/gustycooper.github.io/labs_lab02_04) and [Largest](/gustycooper.github.io/labs_lab02_05) as instance methods in one class, ```MyMath```.  If you completed bonus in [Largest](/gustycooper.github.io/labs_lab02_05), include both ```largest``` methods in ```MyMath```.  This time the ```average``` and ```largest``` methods will not be ```static```.  The ```MyMath class``` will not have any instance variables.  Since we do not have any instance variables, we will not require a constructor to initialize them.  This means we can use you can use the default ```MyMath()``` constructor, which Java provides to us for free.  You will be able to construct objects of type ```MyMath``` as follows.

```java
MyMath m = new MyMath();
double average = m.average(10, 50, 20, 100);
double largest = m.largest(50, 20);
```

In addition to the ```average``` and ```largest``` methods, you shall include the following methods in your ```MyMath class```.

```public static double crement(double x, char op)``` – returns ```x + 1``` if ```op``` is ```‘+’```, otherwise returns ```x - 1```.  You shall use a conditional expression and the increment/decrement (++  --) operators in your implementation.

```public static double operate(double x, double y, char op)``` – returns ```x + y``` if ```op``` is ```‘+’```, otherwise returns ```x - y```.  You shall use a conditional expression in your implementation.  You can also try to use the increment/decrement (+=  -=) operators in your implementation.

Use BlueJ to construct and manipulate some myMath1 objects.  The following are example commands in the BlueJ Codepad after you have constructed ```myMath1```.

```java
> myMath1.average(10, 50, 20, 100)
45.0   (double)
> myMath1.largest(50,20)
50.0   (double)
> myMath1.average(1.0, 3, 4.0, 8)
4.0   (double)
> myMath1.largest(1.0, 100)
100.0   (double)
> myMath1.crement(5,'+')
6.0   (double)
> myMath.operate(10,432,'-')
-422.0   (double)
> myMath1.largest(10,50,2)
50.0   (double)
```

