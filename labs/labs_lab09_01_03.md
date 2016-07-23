---
title: Recursive Thinking
keywords: recursion, recursive
last_updated: June 22, 2016
summary: "Recursive Thinking"
sidebar: labs_sidebar
permalink: /labs_lab09_01_03/
toc: false
---

## Recursive Thinking

**Points**: Complete this entire section for 10 points.

Analyze the following code to determine what it computes.  You are welcome to type the code into Netbeans and run it several times to see what it does.

```java
public static int doesSomething(int a, int b) {
    if (b == 0)     return 0;
    if (b % 2 == 0) return doesSomething(a+a, b/2);
    return doesSomething(a+a, b/2) + a;
}
```

Update the above ```doesSomething``` method with the following changes to create a new method ```doesSomething2```.

* Replace the + operator is replaced with a * operator.  
* Replace return 0 with return 1.

What does ```doesSomething2``` compute?

