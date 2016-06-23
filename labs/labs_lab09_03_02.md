---
title: Sort a Few Numbers
keywords: sorting
last_updated: June 22, 2016
summary: "Sorting a Few Numbers"
sidebar: labs_sidebar
permalink: /labs_lab09_03_02/
toc: false
---

## Sort a Few Numbers

**Points**: Complete this entire section for 20 points.

Create two Java methods for sorting ```int```s. The first method has 2 parameters and the second method has 3 parameters.  By implementing these methods, you will appreciate sorting gets complicated as more numbers are sorted.

```java
int[] sort(int i1, int i2)
int[] sort(int i1, int i2, int i3)
```

The following code snippet demonstrates using ```sort```.

```java
int[] sortedNumbers;

sortedNumbers = sort(3, 100, -1);
System.out.println(Arrays.toString(sortedNumbers));
// prints [-1, 3, 100]
```

The array ```sortedNumbers``` contains ```{-1, 3, 100}```.

Test your ```sort``` methods to make sure they are correct.

