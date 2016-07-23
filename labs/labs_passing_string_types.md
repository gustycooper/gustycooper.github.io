---
title: Passing String Types Labs
keywords: parameter, string
last_updated: July 20, 2016
summary: "<li>Practice passing String types as parameters to methods.</li> <li>Create a better understanding of pass by value with String types.</li>"
sidebar: labs_sidebar
permalink: /labs_passing_string_types/
toc: false
---

## Create a Java Program that Passes Reference Types

**Points**: Complete this entire section for 10 points.

Java is pass by value; however, when you pass a reference type, the called method can reach change the object such that the calling method's object is changed.  A Java ```String``` is reference type, but Strings are immutable - there are no methods that change their values.  Simply swapping the formal parameters is just like swapping the values of primitive types - the value of the actual parameters are not changed.  

This lab provides code for you to use, but you are welcome to experiment by changing the code.  You have to create and run this class to get the points.  Notice how the ```swap``` method does not swap the contents of the two ```String```s created in ```main```.

The ```SwapStrings``` class is given by the following.

```java
public class SwapStrings {
    public static void swap(String s1, String s2) {
        String t = s1;
        s1 = s2;
        s2 = t;
    }

    public static void main(String[] args) {
        String x = "Hello", y = "Goodbye";
        System.out.println("Before Swap");
        System.out.println("x: " + x + " y: " + y);        
        swap(x, y);
        System.out.println("After Swap");
        System.out.println("x: " + x + " y: " + y);

    }
}
```

