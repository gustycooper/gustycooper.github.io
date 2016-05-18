---
title: Arithmetic Expressions
tags: [expression]
keywords: expression, expressions, numeric expressions, arithmetic expressions, overflow, approximation, random
last_updated: May 17, 2016
summary: "<li>Understand Java arithmetic (numeric) expressions.</li> <li>Understand evaluating expressions to their resultant type</li> <li>Understand integer overflow</li> <li>Understand floating points are approximations</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_2_arithmetic_expressions/
---

## Arithmetic Expressions ([Eck 2.5](http://math.hws.edu/javanotes/c2/s5.html))

**Expressions** – syntactically correct combination of variables, literals, operators, and method calls that evaluate to a value with a specific type.  The following meta language shows where expressions are found within Java statements

**Arithmetic expressions** evaluate to a number, which in most cases is ```int``` or a ```double```.  You can cast the resulting expression to other primitive types.  Since arithmetic expressions follow the rules of arithmetic we have studied since elementary school, this section describes attributes about Java arithmetic expressions that are not intuitive.

## Arithmetic Operator Precedence

The bolded descriptions in the following table are the operators discussed in this section, listed in order from highest precedence (evaluated first) to lowest precedence (evaluated last):

Description | Operators
--------------------------- | --------------------------------------
Unary                       | ```++``` ```--``` ```!``` ```unary -``` ```unary +``` ```type-cast```
**Multiply Divide**             | ```*```  ```/```  ```%```
**Add Subtract**                | ```+```  ```-```
Relational                  | ```<```  ```>```  ```<=```  ```>=```
Equality                    | ```==```  ```!=```
Boolean and                 | ```&&```
Boolean or                  | ```||```
Conditional                 | ```?:```
Assignment                  | ```=```  ```+=```  ```-=```  ```*=```  ```/=```  ```%=```

Operators on the same line have the same precedence. When operators of the same precedence are strung together in the absence of parentheses, the arithmetic operators are evaluated left-to-right.  For example, ```A*B/C``` is evaluated as ```(A*B)/C```.

## Rules to Determine the Type of an Arithmetic Expression

An arithmetic expression contains operands and operators. 

* operands
  * variables - x, i, number
  * literals - 5, 62.44, 'a'
  * methods calls - You can understand this section without reading [Methods](/gustycooper.github.io/mydoc_1a_methods), which provides method details.  
* arithmetic operators: ```+ - * / %```

We will use  ```int``` and ```double``` in most all of our programs.  Occasionally, I have a lab that requires a ```long```. 

If all operands in an arithmetic expression are a mixture of ```int```, ```short```, ```byte```, and ```char```, the expression evaluates to ```int```.  The following expressions evaluate to ```int```.

```java
byte b = 1;
short s = 2;
int i = 3;
char c = 'g';

b + s + i + c
i * 20
s + 5
i + 2 * (c * b)
1 + 2 + 3
i / 2
i % 2
```

If all operands in an arithmetic expression are a mixture of  ```int```, ```short```, ```byte```, and ```char``` and at least one operand is a ```long```, the expression evaluates to ```long```.  Just add a ```long``` operand to any of the previous expressions, and it will evaluate to a ```long```.

If at least one operand in an arithmetic expression is a ```float``` and the expression does not contain any ```double``` operands, the expression evaluates to ```float```.

If at least one operand in an arithmetic expression is a ```double```, the expression evaluates to ```double```.

```java
double d = 3.5;
int i = 3;

i * 20.2
d + 5
i + 2 * (d * d)
1 + 2.002 + 3
i / d
```

## Division (```/```) and Remainder (```%```) Operators

Java does not have a specific operator for integer division because the rules for determining the type of expression evaluation make the normal division ```/``` operator ```int```.  ```int / int``` evaluates to an ```int```, where the fractional part of the result is discarded.  This type of division is sometimes called goes-into because it provides how many times a number goes into another.  Integer division has a counterpart modulo operator that provides the remainder, which is Java is the ```%``` operator.  Consider two ```int```s and two ```double```s as follows.

```java
int i = 5;
int j = 2;
int k = i / j;  // k is 2 (num of times 2 goes-into 5)
int l = i % j;  // l is 1 (remainder of 5/2)
double d = 5;
double e = 2;
double f = d/e; // f is 2.5
double g = d%e; // g is 1.0
```

## Integer Division and Modulo Can be Surprisingly Useful

At first glance, integer division and modulo appear to be useless operators; however, they are surprisely useful.  

* Suppose you have a number that you want to count from 0 to 7.  You place the following assignment statement in a loop, and the variable ```number``` repeatedly counts from 0 to 7.

```java
number = (number + 1) % 8;
```

## Converting An Int to a Base

During week one we discussed converting numbers to particular bases.  The following code uses integer division and remainder to perform the conversion.  We will study the while loop next week.

```java
import java.lang.StringBuilder
public static string convert(int Number, int Base) {
    String answer = “”;
    while (Number != 0) {
        digit = Number % Base      // modulo
        Number = Number / Base // integer division
        answer = answer + digit
    }
    return new StringBuilder(answer).reverse().toString();
```

## Integers and Overflow
 
The following is an interesting Java expression that provides a surprising result due to integer overflow.  Java’s largest positive int is 2<sup>31-1</sup>, which is 2147483647, which you can remember is close to 2 billion.  You can see this using ```Integer.MAX_VALUE``` field.

```java
int oneMillion = 1_000_000;
int oneMillionSquared = oneMillion * oneMillion; // -727379968
long oneMillionSquaredL = oneMillion * oneMillion; // -727379968
oneMillionSquaredL = (long)oneMillion * (long)oneMillion;
int maxInt = Integer.MAX_VALUE; // 2147483647
```

There are a couple of ways of fixing this.  One is to use ```long``` instead of ```int```.  The ```Long.MAX_VALUE``` is 2<sup>63-1</sup>, which is 9223372036854775807 – a rather large number.  You could also use ```double``` instead of ```int```.  The ```Double.MAX_VALUE``` is
1.7976931348623157E308.  For floating point numbers, you have to realize there is limited precision.

This example demonstrates that you should be careful in selecting the types of your variables.

Consider that the world has an estimated 3 trillion trees.  If you wrote a program that counted trees, you could not use an int – you would have to use a long.

## Floating points are Approximations

We demonstrated that floating-point numbers are approximations in [Numbers as Information](/gustycooper.github.io/mydoc_1_numbers#computer-floating-point-numbers-are-approximations).  This is another example, where I have recently opened Gusty Coffee Shop, and as my opening week promotional I am selling all sizes of coffee for $4.89.  At lunch time on my opening day I have sold 100 cups of coffee.  The following code has computed my gross sales on coffee.


```java
double cupPrice = 4.89;
int cupsSold = 100
double totalPrice = cupsSold * unitPrice // 488.99999999999994
// binary to decimal: no exact representation for 4.89
// similar to 10/3 is 3.3333333...
// floating point numbers are fuzzy
```

You should be careful writing programs that manipulate costs.  Maybe even using ```int``` to represent pennies.  Accountants may get angry when they audit your company and your program has computed the wrong balance.

## Java Math Class – Including Math.random() for a Random Integer

The Java Math Class (library) has many useful math functions (or methods).  The Java Math library is automatically available so it does not require an import.  The following are several examples of methods from the Java Math Class.  See [Methods](/gustycooper.github.io/mydoc_1a_methods) for method details.

```java
double x = Math.pow(2, 10); // 2**10 or 1024.0
x = Math.sqrt(100);         // sqrt(100) or 10.0
x = Math.abs(-1);           // absolute value or 1
Math.max(0,-1);             // maximum or 0
Math.min(300, 250);         // minimum or 250
int diceNumber = (int)(6*Math.random()) + 1; // between 1 and 6
```

You should pay attention to the last example that generates a random ```int``` between 0 and 6.  ```Math.random()``` returns a ```double``` that satisfies the following equation.

```java
0 <= Math.random() < 1
```

If you multiply the value ```Math.random()``` by 6 you will have a ```double``` that satisfies the following equation.  

```java
0 <= Math.random() < 6
```

If you cast the ```double``` returned by ```(5 * Math.random())``` to an ```int``` you will have an ```int``` that is either 0, 1, 2, 3, 4, 5.  The following is the code that accomplishes this.

```java
int i  = (int)(6 * Math.random());
```
If you add one to the result, you get a random number that represent the roll of a die.  This is a nice technique for generating a random integer using ```Math.random()```.

## Random Generator

We can also use a ```Random``` class to generate a random number.    The ```Random``` class is in the ```java.util``` package so you have to ```import java.util.Random```.  The following code snippet demonstrates how to create a variable of type ```Random```, allocate a ```Random``` object, and call the methods.  We study the details of objects and classes in [Simple Objects](/gustycooper.github.io/mydoc_2_simple_objects). 

```java
import java.util.Random;  // must be at the top of your .java file

Random generator = new Random(42); // seed get same stream for testing
int i = generator.nextInt(n); // 0 <= i < n
double x = generator.nextDouble(); // 0 <= x < 1
```

You should notice that ```Math.random()``` is a ```static``` method in the ```Math``` class and the ```nextInt(int n)``` and ```nextDouble()``` are methods in a ```Random``` object.  You have to construct a ```Random``` object before you can call those methods.

You can create a ```Random``` object with an initial seed value, which allows you to always get the same sequence of random numbers.  This can be useful when testing your program.
