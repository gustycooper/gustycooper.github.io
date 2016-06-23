---
title: Recursive ArrayList Printing
keywords: recursion, recursive
last_updated: June 22, 2016
summary: "Recursive ArrayList Printing"
sidebar: labs_sidebar
permalink: /labs_lab09_01_06/
toc: false
---

## Recursive ArrayList Printing

**Points**: Complete this entire section for 10 points.

Write a recursive method 

```java
public static void printArrayList(ArrayList<Integer> ial)  
```

The method will print the first element of the ```ia```l, remove it, and then call itself to print the remaining elements.  You should include error checking so that you do not try to print an empty ```ArrayList```.  The following are examples of calling ```printArrayList```.

```java
Integer[] ia = {1,2,3,4,5,6};  // Notice the type of ia
ArrayList<Integer> ial = new ArrayList<Integer>(Arrays.asList(ia));
printArrayList(ial);
```

results in the following displayed in the console output.

```java
1 2 3 4 5 6
```

You should also realized that at this point your ```printArrayList``` method has removed all elements of ```ial```, which means the following statement prints ```true``` to the console output.  

```java
System.out.println(ial.isEmpty());
```


