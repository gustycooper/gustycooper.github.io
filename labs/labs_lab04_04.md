---
title: Millionaire Lab
keywords: millionaire, loop
last_updated: July 17, 2016
summary: "<li>Practice using a while loop to solve a problem.</li>"
sidebar: labs_sidebar
permalink: /labs_lab04_04/
toc: false
---

## When Will You Be a Millionaire

**Points**: Complete this entire section for 10 points.

This lab has been modeled after a similar lab in the [Udacity Java Course](https://www.udacity.com/course/intro-to-java-programming--cs046).

If you have $100.00 to invest and the interest rate is 1% annually, how many years before your investment is worth $1,000,000.00?  Create a Java class ```Millionaire``` that has a ```public static void main(String[] args)``` method that computes the answer.  You should use a ```Scanner``` to ask the user for their initial investment (```double```) and the interest rate (```double```).  You shall write a ```while``` loop that uses the input values to determine how long it will take to become a millionaire.  With big numbers, the Java technique of using an _ in a numeric literal can be helpful.  The following is an example of the literal billion with an underscore.

```java
int billion = 1_000_000_000;
```

The following is an example output of the main method of the Millionaire class.

```
Enter initial investment: 100
Enter interest rate (e.g., enter .01 for 1%): .01
You will be a millionaire in 926 years.
```

