---
title: Split the Bill (Labs - Lab 3)
keywords: split the bill
summary: "Lab 3, Split the Bill"
sidebar: labs_sidebar
permalink: /labs_lab03_02/
toc: false
---

## Create a Java Program to Split the Bill – 10 Points
**Points**: Complete this entire section for 10 points.

When friends dine together in restaurants, they often split the bill.  For example, if 5 friends are dining where the bill is $50 and we are giving a 20% tip, then the total is $60 divided by 5 people, which means each person pays $12.

Write a Java ```SplitTheBill``` class that has two public static methods: ```main``` and ```pay```. Both ```main()``` and ```pay()``` will be ```public static``` methods since we will not create objects of type ```SplitTheBill```.  

```public static double pay(double bill, double tip, int numOfPeople)``` – the 3 formal arguments are the total of the bill, the percent tip we want to give, and the total number of people in the group.  The pay method computes and returns the amount each person in the group should pay. The following is an example call.

```java
double amount = pay(50, .20, 5) ; // amount is 12.0
```

public static void main(String[] args) – This is your program’s main method that calls your pay method to test that it is correct.  Use System.out.print, System.out.println, and a Scanner object to create the dialog for running your program.  The following is an example dialog.

```java
Enter restaurant bill: 20
Enter tip (.2 for 20%): .2
Enter number of people dining: 4
Price per person is 6.0
```

