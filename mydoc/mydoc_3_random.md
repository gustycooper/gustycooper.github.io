---
title: Java Random
tags: [object, class]
keywords: objects, method
last_updated: May 21, 2016
summary: "<li>Understand Java Random</li> <Understand Java Random has a set of values and a set of operations.</li> <li>Understand how to call Randome instance methods</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_3_random/
---

## Java Random

## Random Generator

We can also use a ```Random``` class to generate a random number.    The ```Random``` class is in the ```java.util``` package so you have to ```import java.util.Random```.  The following code snippet demonstrates how to create a variable of type ```Random```, allocate a ```Random``` object, and call the methods.  We study the details of objects and classes in [Simple Objects](/gustycooper.github.io/mydoc_2_simple_objects). 

```java
import java.util.Random;  // must be at the top of your .java file

Random generator = new Random(42); // seed get same stream for testing
int i = generator.nextInt(n); // 0 <= i < n
double x = generator.nextDouble(); // 0 <= x < 1
```

You should notice that ```Math.random()``` is a ```static``` method in the ```Math``` class and the ```nextInt(int n)``` and ```nextDouble()``` are methods in a ```Random``` object.  You have to construct a ```Random``` object before you can call those methods.
