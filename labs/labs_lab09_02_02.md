---
title: Recursive Linear Search
keywords: searching
last_updated: June 22, 2016
summary: "Recursive Linear Search"
sidebar: labs_sidebar
permalink: /labs_lab09_02_02/
toc: false
---

## Recursive Linear Search

**Points**: Complete this entire section for 20 points.

Write a recursive linear search method 

```public static int recursiveLinearSearch(int[] ia, int ele, int pos)``` - The method searches for ```ele``` in position ```pos``` of ```int[] ia```, returning ```pos``` if ```ele``` is in ```ia[pos]```; otherwise, the method returns a call to itself that looks in the next position. Your method should return a -1 if the value is not found or ```pos``` in invalid. In fact, the recursion causes ```pos``` to become equal to ```ia.length```, which returns -1 for ```ele``` not found.  The following are examples of calling ```recursiveLinearSearch```.

```java
int val = recursiveLinearSearch(new int[]{1,2,3,10,5,6},10,0);
System.out.println(val);
```

Results in the following displayed in the console output.

```java
3
```

```java
int val = recursiveLinearSearch(new int[]{1,2,3,10,5,6},8,0);
System.out.println(val);
```

Results in the following displayed in the console output.

```java
-1
```

