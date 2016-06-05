---
title: TwoPays Type
keywords: class, twopays
last_updated: June 5, 2016
summary: "Lab 2, TwoPays Type"
sidebar: labs_sidebar
permalink: /labs_lab03_03/
toc: false
---

## Create a Java TwoPays Type

**Points**: Complete this entire section for 10 points.

The work for this section implements the same two ```pay``` methods from [Split the Bill](/gustycooper.github.io/labs_lab02_02) and [Paycheck](/gustycooper.github.io/labs_lab02_03) as instance methods in one class, ```TwoPays```.  We can have two instance methods in the same class with the same name as long as each has different parameters.  The signature of a method is its return type along with the types of its parameters.  In this case our two ```pay``` methods have the following signatures, which are different.

```java
double pay(double bill, double tip, int numOfPeople)
double pay(int hours, double hourlyRage)
```

When we place the two ```pay``` methods in ```TwoPays```, they are instance methods and not ```static```.  The ```TwoPays class``` does not have instance variables - just the two ```pay``` methods.  Since we do not have any instance variables, we do not require an constructor to initialize them.  This means we can use you can use the default ```TwoPays()``` constructor, which Java provides to us for free.  Once you have successfully created the ```TwoPay class```, you construct objects of type ```TwoPays``` as follows.

```java
TwoPays tp = new TwoPays();
double weeksWages = tp.pay(10,50);
double amountPerPerson = tp.pay(50,20,5);
```

Use BlueJ to construct and manipulate some TwoPays objects.  The following are example commands in the BlueJ Codepad after you have constructed ```twoPays1```.

```
> twoPays1.pay(50,.2,5);
12.0   (double)
> twoPays1.pay(50,10);
550.0   (double)
```

