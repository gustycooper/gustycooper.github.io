---
title: Sort a Few Strings
keywords: sorting
last_updated: June 22, 2016
summary: "Sorting a Few Strings"
sidebar: labs_sidebar
permalink: /labs_lab09_03_03/
toc: false
---

## Sort a Few Strings

**Points**: Complete this entire section for 10 points.

Create two Java method for sorting ```String```s. The first method has 2 parameters and the second method has 3 parameters.

```java
ArrayList<String> sort(String s1, String s2)
ArrayList<String> sort(String s1, String s2, String s3)
```

The following code snippet demonstrates using ```sort```.


```java
String a = "watermelon";
String b = "apple";
String c = "grape";
ArrayList<String> sortedStrings;

sortedStrings = sort(a, b, c);
System.out.println(sortedStrings.toString());
// prints ["apple", "grape", "watermelon"]
```

The ```ArrayList sortedStrings``` contains ```{"apple", "grape", "watermelon"}```.

Test your ```sort``` methods to make sure they are correct.

