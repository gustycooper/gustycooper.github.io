---
title: Potato Class Lab
keywords: loop, while, for
last_updated: July 17, 2016
summary: "<li>Practice writing a Potato class.</li> <li>Practice writing loops and conditional statements.</li>"
sidebar: labs_sidebar
permalink: /labs_lab04_02/
toc: false
---

## Create a Java Potato Class

**Points**: Complete this entire section for 10 points.

Some may remember the children’s counting rhythm, “One potato, two potato, three potato, four…, five potato, six potato, seven potato, more.”

Create a Potato class that has the following public interface.

```java
     Potato()          // Constructs a Potato
     void count(int c) // prints the children’s counting rhythm
```

Use BlueJ to construct and manipulate some Potato objects.  The following are example commands in the BlueJ Codepad after you have constructed potato1.

```
potato1.count(5);
One potato 
two potato 
three potato 
four…
five potato
potato1.potato(0);  // prints nothing 
potato1.count(10); 
One potato 
two potato 
three potato 
four…
five potato
six potato
seven potato
more.
One potato
two potato
```

One way to implement the count method is to use Java’s modulo operator (%) and a switch statement.  The following shows this technique.  You have to place the switch statement inside a loop that correctly counts the int counter.

```java
switch (counter % 8) {
   case 0: System.out.println(“more”); break;
   case 1: System.out.println(“One potato”); break;
   … more code …
   case 7: System.out.println(“seven potato”); break;
}
```

