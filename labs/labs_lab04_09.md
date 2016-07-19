---
title: Credit Card Lab
keywords: credit, card
last_updated: July 17, 2016
summary: "<li>Practice using loops and conditionals to solve a credit card problem.</li>"
sidebar: labs_sidebar
permalink: /labs_lab04_09/
toc: false
---

## Create a Java Credit Card Type

**Points**: Complete this entire section for 10 points.

NOTE: The Credit Card lab is a rendition of a project created by Karen Anewalt.

You are to implement a CreditCard class that has the following public interface.

* ```CreditCard(long cardNumber)``` - constructs a credit card
* ```boolean isValid()``` - returns ```true``` if the card number is valid, returns ```false``` if invalid

Before providing the pseudo code for the credit card validation algorithm, let’s discuss an algorithm to pick each digit of an integer, beginning at the rightmost digit.  This is essentially an algorithm that converts a decimal number to a decimal number.   Consider the number 452.  We can perform the following steps.

1. 452 % 10 yields 2 and 452 / 10 yields 45.
2. 45 % 10 yields 5 and  45 / 10 yields 4.
3. 4 % 10 yields 4 and   4 / 10 yields 0

We can generalize the above steps into the following algorithm to compute the sum of the digits in the number 452.

```java
int n = 452;
int sum = 0;
while (n > 0) {
  int digit = n % 10;
  sum = sum + digit;
  n = n / 10; // integer divide
}
System.out.println(sum); // 11, which is sum of 452
```

Now that you know how to pick digits from an integer, the pseudo code for this credit card validation algorithm, which you will use to implement the isValid() method is the following.

```java
    Pseudocode for isValid
    sum = 0
    count = 0
    for each digit starting from the right
       count ++
       if count is odd
          sum = sum + digit
       else if (digit < 5)
          sum = sum + 2 * digit
       else
          sum = sum + 2 * digit - 9
    if the last digit of the sum is zero
       The card number is valid
```

You should note that this discussion is leading you to an implementation where Credit Card numbers are numbers.  You will quickly discover that Credit Card numbers are too large to fit into an ```int```, and that you need to use a Java ```long``` type.  The following are some credit card numbers, with the suffix ```L``` indicating they are ```long```s.

* 4417123456789113L – Valid 
* 4417123456879113L – Invalid 
* 4111111111111111L – Valid
* 5155555511115151L – Valid
* 4147400100642181L – Invalid

You could pursue an alternative design where you store Credit Card numbers as ```String```s.  You have already used the ```String substring()``` method in your [Twitter](/gustycooper.github.io/labs_lab04_07).  You can loop through a ```String``` credit card number backwards, using ```substring``` to examine each number (which is really a ```String```).  You can use the ```Integer.parseInt(str)``` method to convert the ```String``` to an ```int```.  The following demonstrates this concept.

```java
String num = "123";
int i = Integer.parseInt(num.substring(2,3));
i
3   (int)
```

Now you have a choice as to how you want to design your ```CreditCard``` class.  If you choose to represent Credit Card numbers as ```String```, your public interface will be the following.

* ```CreditCard(String cardNumber)``` - constructs a credit card
* ```boolean isValid()``` - returns ```true``` if the card number is valid, returns ```false``` if invalidd

You should implement a ```CreditCardTester class``` that has a ```public static void main(String[] args)```.  Your tester should create CreditCard objects for the Credit Card numbers provided above.  You should print out the expected value and the actual value.  The following is an example run of your ```CreditCardTester main()```.

```java
Test our CreditCard class.

Actual: 4417123456789113 is true
Expected: true
Actual: 4417123456879113 is false
Expected: false
Actual: 4111111111111111 is true
Expected: true
Actual: 5155555511115151 is true
Expected: true
Actual: 4147400100642181 is false
Expected: false
```

