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

We will use  ```int``` and ```double``` in most all of our programs.  Occasionally, I have a lab that requires a ```long```. 

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

Arithmetic expressions evaluate to a numeric type - typically ```int``` or ```double```.  This section explains how you can examine an arithmetic expression and determine its resulting type.

An arithmetic expression contains operands and operators. 

* operands
  * variables - x, i, number
  * literals - 5, 62.44, 'a'
  * methods calls - You can understand this section without reading [Methods](/gustycooper.github.io/mydoc_1a_methods), which provides method details.  
* arithmetic operators: ```+ - * / %```

### Arithmetic Expression Evaluates to an ```int```

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

### Arithmetic Expression Evaluates to a ```long```

If all operands in an arithmetic expression are a mixture of  ```int```, ```short```, ```byte```, and ```char``` and at least one operand is a ```long```, the expression evaluates to ```long```.  Add a ```long``` operand to any of the expressions in the previous section, and it will evaluate to a ```long```.

### Arithmetic Expression Evaluates to a ```double```

If at least one operand in an arithmetic expression is a ```double```, the expression evaluates to ```double```.  The following expressions evaluation to a ```double```.

```java
double d = 3.5;
int i = 3;

i * 20.2
d + 5
i + 2 * (d * d)
1 + 2.002 + 3
i / d
```

### Arithmetic Expression Evaluates to a ```float```

If at least one operand in an arithmetic expression is a ```float``` and the expression does not contain any ```double``` operands, the expression evaluates to ```float```.  The following expressions evaluation to a ```float```.  Notice how the floating point literals require the ```f``` (or ```F```) suffix.

```java
float d = 3.5f;
int i = 3;

i * 20.2f
d + 5
i + 2 * (d * d)
1 + 2.002f + 3
i / d
```

## Division (```/```) and Remainder (```%```) Operators

Java does not have a specific operator for integer division because the rules for determining the type of expression evaluation make the normal division ```/``` operator ```int```.  That is, ```int / int``` evaluates to an ```int```, where the fractional part of the result is discarded.  This type of division is sometimes called goes-into because it provides how many times a number goes into another.  Integer division has a counterpart modulo operator that provides the remainder, which in Java is the ```%``` operator.  Consider two ```int```s and two ```double```s as follows.

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

At first glance, integer division and modulo appear to be useless operators; however, they are surprisingly useful.  

* Suppose you have a number that you want to count from 0 to 7.  You place the following assignment statement in a loop, and the variable ```number``` repeatedly counts from 0 to 7.  This does not require any conditional logic.

```java
number = (number + 1) % 8;
```

## Converting An Int to a Base

During week one we discussed converting numbers to particular bases.  The following code uses integer division and remainder to perform the conversion.  We will study the while loop next week.

```java
import java.lang.StringBuilder
public static string convert(int number, int base) {
    String answer = “”;
    while (number != 0) {
        digit = number % base      // modulo
        number = number / base     // integer division
        answer = answer + digit
    }
    return new StringBuilder(answer).reverse().toString();
```

Let convert the decimal number 10 to binary using the above algorithm as a sequence of steps.

```java
int number = 10;
int digit2to0 = number % 2;  // digit2to0 is 0
number = number / 2;         // number is 5
int digit2to1 = number % 2;  // digit2to1 is 1
number = number / 2;         // number is 2
int digit2to2 = number % 2;  // digit2to2 is 0
number = number / 2;         // number is 1
int digit2to3 = number % 2;  // digit2to3 is 1
number = number / 2;         // number is 0 so we are done
String numberInBinary = "" + digit2to3 + digit2to2 + digit2to1 + digit2to0;
````

## Integers and Overflow
 
The following is an interesting Java expression that provides a surprising result due to integer overflow.  Java’s largest positive int is 2<sup>31</sup>-1, which is 2147483647, which you can remember as a number close to 2 billion.  The ```Integer.MAX_VALUE``` field contains 2147483647.  The expression ```(int)(Math.pow(2,31)-1)``` evaluates to 2147483647.

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

