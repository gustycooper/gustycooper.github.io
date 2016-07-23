---
title: Passing Reference Types Labs
keywords: parameter, reference
last_updated: July 20, 2016
summary: "<li>Practice passing reference types as parameters to methods.</li> <li>Create a better understanding of pass by reference with reference types.</li>"
sidebar: labs_sidebar
permalink: /labs_passing_reference_types/
toc: false
---

## Create a Java Program that Passes Reference Types

**Points**: Complete this entire section for 10 points.

Java is pass by value; however, when you pass a reference type, the called method can reach change the object such that the calling method's object is changed.  

This lab provides code for you to use, but you are welcome to experiment by changing the code.  You have to create and run this class to get the points.  Notice how the ```swap``` method swaps the contents of the two objects created in ```main```.

The ```SwapReference``` class is given by the following.

```java
public class SwapReference {
    private static class TwoValues {
        int i;
        double x;
        public String toString() {
            return "" + i + " " + x;
        }
    }

    public static void swap(TwoValues tv1, TwoValues tv2) {
        int ti = tv1.i;
        double tx = tv1.x;
        tv1.i = tv2.i;
        tv1.x = tv2.x;
        tv2.i = ti;
        tv2.x = tx;
    }

    public static void main(String[] args) {
        TwoValues tv1 = new TwoValues();
        TwoValues tv2 = new TwoValues();
        tv1.i = 10;
        tv1.x = 10.0;
        tv2.i = 100;
        tv2.x = 100.0;
        System.out.println("Before Swap");
        System.out.println("tv1: " + tv1 + " tv2: " + tv2);        
        swap(tv1, tv2);
        System.out.println("After Swap");
        System.out.println("tv1: " + tv1 + " tv2: " + tv2);
    }
}
```

