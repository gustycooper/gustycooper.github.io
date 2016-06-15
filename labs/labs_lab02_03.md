---
title: Compute Pay Check (Labs - Lab 2)
keywords: split the bill
last_updated: June 5, 2016
summary: "<li>Practice writing a method and main - Lab 2, Compute Pay Check.</li> <li>Practice using System.out and Scanner.</li>"
sidebar: labs_sidebar
permalink: /labs_lab02_03/
toc: false
---

## Create a Java Program to Compute Paycheck

**Points**: Complete this entire section for 10 points.

For some jobs, when you work over 40 hours in one week you get what is called “time and a half” meaning the employee gets paid 1.5 times their usual rate for any hours over 40.  For example, if a person gets paid $10 per hours and works 50 hours in a week, then the person gets paid $10 per hour for the first 40 hours and $15 per hour for 10 hours for a total of $550. 

Write a Java ```ComputePayCheck``` class that has two public static methods: ```main``` and ```pay```. Both ```main``` and ```pay``` will be ```public static``` functions.

```public static double pay(int hours, double hourlyRate)``` – the two formal arguments are the number of hours worked and the hourly rate.  The ```pay``` method computes and returns the total pay for that week.  You shall use the Java conditional operators ?: in implementing pay.  The following is an example statement that computes the number of overtime hours.

```java
int otHours = (hours > 40) ? hours-40 : 0;
```

The following are example calls to your pay method.

```java
double weeksWages = pay(10, 0);  // weeksWages is 0 
double weeksWages = pay(36, 10); // weeksWages is  360 
double weeksWages = pay(50, 10); // weeksWages is  550 
```

```public static void main(String[] args)``` – This is your program’s ```main``` method that calls your ```pay``` method to test that it is correct.  Use ```System.out.print```, ```System.out.println```, and a ```Scanner``` object to create the dialog for running your program.  The following is an example dialog.

```java
Enter hours worked: 50
Enter hourly rate: 10
Week's salary is 550.0
```

