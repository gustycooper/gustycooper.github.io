---
title: Compute Split the Bill and Pay Check (Labs - Lab 2)
keywords: pay check, split the bill
last_updated: June 13, 2016
summary: "<li>Practice creating a class that has methods with the same name.</li> <li>Practice using System.out and Scanner.</li>"
sidebar: labs_sidebar
permalink: /labs_lab02_03a/
toc: false
---

## Create a Java Program to Compute Paycheck and Split the Bill

**Points**: Complete this entire section for 10 points.

[Split the Bill](/gustycooper.github.io/labs_lab02_02) and [Compute Pay Check](/gustycooper.github.io/labs_lab02_03) each created a ```pay``` method.  The formal parameters for these two ```pay``` methods are different, which allows us to put both ```pay``` methods in the same class.

Write a Java ```TwoPays``` class that has three public static methods: ```main```, ```pay```, and ```pay```.  All three methods will be ```public static``` functions.  Yo have to copy the code from [Split the Bill](/gustycooper.github.io/labs_lab02_02) and [Compute Pay Check](/gustycooper.github.io/labs_lab02_03) into ```TwoPays```.

```public static double pay(double bill, double tip, int numOfPeople)``` – the 3 formal arguments are the total of the bill, the percent tip we want to give, and the total number of people in the group.  The pay method computes and returns the amount each person in the group should pay. The following is an example call.

```public static double pay(int hours, double hourlyRate)``` – the two formal arguments are the number of hours worked and the hourly rate.  The ```pay``` method computes and returns the total pay for that week.  You shall use the Java conditional operators ?: in implementing pay.  The following is an example statement that computes the number of overtime hours.

```public static void main(String[] args)``` – This is your program’s ```main``` method that calls your ```pay``` methods to test them.  Use ```System.out.print```, ```System.out.println```, and a ```Scanner``` object to create the dialog for running your program.  Combine the dialogs from [Split the Bill](/gustycooper.github.io/labs_lab02_02) and [Compute Pay Check](/gustycooper.github.io/labs_lab02_03). 

