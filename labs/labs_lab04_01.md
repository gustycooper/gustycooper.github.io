---
title: First Loops Lab
keywords: loop, while, for
last_updated: July 17, 2016
summary: "<li>Practice wrintg for, while, and do-while loops.</li> <li>Practice using an if statement within a loop.</li>"
sidebar: labs_sidebar
permalink: /labs_lab04_01/
toc: false
---

## Create a Java Program to Study and Play Video Games

**Points**: Complete this entire section for 10 points.

Create a Java class MyFirstLoop that has a public static void main(String[] args) method that contains a while loop, a for loop, and a do-while loop.  Each of your loops will print Study to the console on 6 separate lines.  The following is example output (the numbers are part of your output).

```java
1. Study
2. Study
3. Study
4. Study
5. Study
6. Study
```

The following for loop accomplishes the above.

```java
for (int i = 1; i < 7; i++)
    System.out.println(i + “. Study”);
```

You have to write the equivalent while and do-while loops.

Update the code in your MyFirstLoop class so that it writes Study on the odd lines and Video Game on the even lines.  The following is an example output (the numbers are part of your output).

```java
1. Study
2. Video Game
3. Study
4. Video Game
5. Study
6. Video Game
```

You can choose to put the conditional code in one of the three loops.  The following code demonstrates determining whether an int number is even or odd.

```java
if (number % 2 == 0)
   System.out.println(“Even”);
else
   System.out.println(“Odd”);
```

