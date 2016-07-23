---
title: Passing Primitive Types Labs
keywords: parameter, primitive
last_updated: July 20, 2016
summary: "<li>Practice passing primitive types as parameters to methods.</li> <li>Create a better understanding of pass by value with primitive types.</li>"
sidebar: labs_sidebar
permalink: /labs_passing_primitive_types/
toc: false
---

## Create a Java Program that Passes Primitive Types

**Points**: Complete this entire section for 10 points.

Java is pass by value.  Called methods can manipulate - change, swap, do whatever - formal parameters, but their corresponded actual parameters are unchanged.  

Create a class ```SwapInts``` that has two ```public static void``` methods, ```swap``` and ```main```.  The swap code is shown as follows.  The ```swap``` method actually swaps the contents of its formal parameters.  You can add a ```println``` at the end of the method to verify this if you like.

```
public static void swap(int x, int y) {
   int t = x;
   x = y;
   y = t;
// System.out.println("Formal Paramters - x: " + x + " y: " + y);
}
```

Your ```main``` method shall call ```swap``` as follows.  You can try addtional example calls to swap.

```java
public static void main(String[] args) {
   int x = 10;
   int y = 100;
   swap(x,y);
   System.out.println("After swap");
   System.out.println("x is " + x + " and y is " + y);
}
```

