---
title: Interface
tags: [class, object]
keywords: interface
last_updated: June 1, 2016
summary: "Interface"
sidebar: mydoc_sidebar
permalink: /mydoc_5_interface/
---

## Interfaces (Eck 5.7)

XXX

## (Eck 5.5.4)

XXX
## Abstract Classes (Eck 5.5.5)

XXX

## Nested Classes (Eck 5.8)

XXX 

## Parameterized Classes – Generic Types (Eck 10.1)

A generic type is a generic class or interface that is parameterized over types.  See box example at https://docs.oracle.com/javase/tutorial/java/generics/types.html. 

XXX

## Let’s Create Our Own Class mathInJava with Static Methods

XXX

See section 8.9 to see the mathInJava class methods converted to static, which is a better implementation because the methods are only dependent upon their input parameters.

```java
public class mathInJava {

/* computes the fraction

          1
  -----------------
          1 - s
   s +  --------
            n
*/
  public double amdahlSpeedup(double s, double n) {
    return 1 / (s + (1 - s) / n);
  }

/* computes the fraction

   (a - c)(b - d)
   --------------
   (b - c)(a - d)
*/
  public double crossRatio(double a, double b, double c, double d) {
  //return (a-c)(b-d) / (b-c)(a-d) first solution
  //return (a-c)*(b-d) / (b-c)*(a-d) second solution
    return ((a-c)*(b-d)) / ((b-c)*(a-d));
  }

/* compute the average of four values */
  public double average(int a, int b, int c, int d) {
  //return (a + b + c + d) / 4; first solution
    return (a + b + c + d) / 4.0;
  }
}
```
 
