---
title: ArrayLists
tags: [collection]
keywords: arraylists
last_updated: June 15, 2016
summary: "ArrayLists"
sidebar: mydoc_sidebar
permalink: /mydoc_6_arraylists/
---

## A.9 ArrayLists

ArrayLists are similar to arrays, but you can keep adding new elements without having to perform an algorithm as described in the previous section – Java does this algorithm for you.  With ArrayLists you loose the concise [] notation for accessing elements – you have to call methods.  An ArrayList<T> uses Java generic types, which allows you to declare ArrayLists of various types; however, those types have to be objects.  An ArrayList is in the java.util package, so it must be imported.  Some of the more used ArrayList methods are the following.

```java
add(element) – adds element at the end 
add(index, element) – adds element at index, sliding others to the right
get(index) – returns element at index
remove(index) – removes element at index, sliding others to left
remove(element) – removes first element found, if found
indexOf(element) – returns index of element, or -1 if not found
contains(element) – returns true if element in ArrayList
isEmpty() – returns true of ArrayList is empty
size() – returns the number of elements in ArrayList
```

The following subsections provide a simple examples of how to use an array list.  All of the examples require the following import.

```java
import java.util.ArrayList;
```

## A.9.1 ArrayList Example 1

```java
ArrayList<String> strs = new ArrayList<String>();
strs.add("aaa");
strs.add("bbb");
strs.add("ccc");
String s = strs.toString(); // s has "[aaa, bbb, ccc]"
```

## A.9.2 ArrayList Example 2

```java
ArrayList<Double> al = new ArrayList<String>();
al.add(1.2);  // index 0
al.add(2.3);  // index 1
al.add(4.5);  // index 2
String s = al.toString(); // s has "[1.2, 2.3, 4.5]"
double d = al.get(2); // d has 4.5
int s = al.size() // s has 3
al.add(1,2.0);
s = al.toString(); // s has "[1.2, 2.0, 2.3, 4.5]"
al.remove(0);
s = al.toString(); // s has "[2.0, 2.3, 4.5]"
```

Notice the Double vice double.  Java boxing.  XXX

## A.10 Arrays and ArrayLists – When to Use Which

Arrays and ArrayLists can both be used for the same type of programming. How do you choose which one to use.  The following are some ideas to ponder.

1.	Array syntax with brackets is more compact and easier to read.
2.	If you know the size and values, array is best because easier syntax.
String[] workdays = { "Mo", "Tu", "We", "Th", "Fr" };
3.	Numbers is ArrayLists are not efficient.  This is because 
4.	ArrayList<Double> values = new ArrayList<Double>();  XXX More explanation… Notice the uppercase Double, which is a wrapper class.  If you need lots of numbers, then use an array.

## A.11 Java Exceptions, Try, and Throw (Eck 3.7)

XXX

## Arrays as Parameters

Arrays are references. This means that when we pass an arrays as a parameter, we are passing its handle or reference. So, we can change the contents of the array inside the method.

```java
  public static void tryArray(char[] b) {
    b[0] = 'x';
    b[1] = 'y';
    b[2] = 'z';
  }
```

When the following code is executed, the array a does indeed have the new values in the array.

```java
    char[] a = {'a', 'b', 'c'};
    tryArray(a);
    System.out.println("a[0] = " + a[0] + ", a[1] = " + a[1] + 
                       ", a[2] =" + a[2]);
```

The print statements produces "a[0] = x, a[1] = y, a[2] = z".


