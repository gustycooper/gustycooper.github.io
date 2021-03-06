---
title: Java Random
tags: [object, class]
keywords: objects, method
last_updated: August 10, 2016
summary: "<li>Understand Java Random</li> <li>Understand the details of declaring variables, allocating objects, and using objects of type Random.</li> <li>Understand Java Random has a set of values and a set of operations.</li> <li>Understand how to call Randome instance methods</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_3_random/
---

## Java Random

We have used ```Math.random``` to generate a random numbers.  In this section, we learn the ```Random``` class, which can be used to generate random numbers. To do this we have to declare a variable of type ```Random```, allocate a ```Random``` object, and then call instance methods.   The ```Random``` class is in the ```java.util``` package so you have to ```import java.util.Random```.  The following code snippet demonstrates how to create a variable of type ```Random```, allocate a ```Random``` object, and call the methods.  

```java
import java.util.Random;  // must be at the top of your .java file

Random generator = new Random(42); // seed get same stream for testing
int i = generator.nextInt(n); // 0 <= i < n
double x = generator.nextDouble(); // 0 <= x < 1
```

```nextInt``` and ```nextDouble``` are ```Random``` object instance methods.  What is the ```Math.random()``` method?  It is a ```static``` method in the ```Math``` class. We will study the differences between instance and static in [Classes and Objects](/gustycooper.github.io/mydoc_5_classes_objects).

Seeding a ```Random``` object results in the same stream of random numbers each time a program is executed.

## Random Number Pattern

The Random Number Pattern uses a ```Random``` object and ```Math.random``` to generate a random ```int``` and ```double```.
<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Random Number Pattern
</b>
<br>
<pre>
import java.util.Random;

public class RandomNumberPattern {
   public static void main(String[] args) {
      Random generator = new Random(42); // seed get same stream for testing
      int i = generator.nextInt(6); // 0 <= i < 6
      i = generator.nextInt(6) + 1; // 1 <= i <= 6
      double x = generator.nextDouble(); // 0 <= x < 1
      x = Math.random(); // 0 <= x < 1
      i = (int)(6*Math.random())+1; // 1 <= i <= 6
   }
}
</pre>
</div>

