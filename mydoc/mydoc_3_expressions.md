---
title: Expressions
tags: [expression]
keywords: expression, expressions, numeric expressions, relation expressions, boolean expressions
last_updated: May 1, 2016
summary: "This describes Java expressions"
sidebar: mydoc_sidebar
permalink: /mydoc_3_expressions/
---

## Expressions (Eck 2.5)
Expressions are fairly straightforward.  Everyone should already be fairly proficient with creating expressions.  Section 2.5 in David Eck’s book provides a nice overview of Java expressions.  This section repeats some of David’s words and adds a few tips.  David’s words are shown in italics.

## EXP.1 Expression Introduction

A list of expression attributes.
* The basic building blocks of expressions are literals (such as 674, 3.14, true, and 'X'), variables, and function calls.  A function call is a method that returns a value.  For example, Math.cos(0) is a function call that returns 1.0.  
* An expression is a piece of program code that computes a value. 
* An expression can be a literal, a variable, a function call, or several of these things combined with operators such as + and >. 
* The value of an expression can be assigned to a variable, used as a parameter in a method call, or combined with other values into a more complicated expression.
* Expressions are also used in if statements, loops, and switch statements.
* Expressions are evaluated.  Expressions evaluate to a specific type.  The resulting type of an expression is usually obvious.  For example, if you add two integers, the result will be an integer.  When used with the assignment operator, the right-hand expression must evaluate to the type of the variable on the left-hand side.
* Java evaluates the expression in accordance with operator precedence to compute the value.  The Java operator precedence is shown in the next section.

## EXP.2 Operator Precedence

If you use several operators in one expression, and if you don't use parentheses to explicitly indicate the order of evaluation, then you have to worry about the precedence rules that determine the order of evaluation. (Advice: don't confuse yourself or the reader of your program; use parentheses liberally.)

I wholeheartedly agree with David’s advice.

Here is a listing of the operators discussed in this section, listed in order from highest precedence (evaluated first) to lowest precedence (evaluated last):

Description | Operators
----------- | ---------
Unary operators | ++, --, !, unary -, unary +, type-cast
Multiplication and division | *,  /,  %
Addition and subtraction | +,  -
Relational operators | <,  >,  <=,  >=
Equality and inequality | :      ==,  !=
Boolean and | : &&
Boolean or | \|\|
Conditional operator | ?:
Assignment operators | =,  +=,  -=,  *=,  /=,  %=

Operators on the same line have the same precedence. When operators of the same precedence are strung together in the absence of parentheses, unary operators and assignment operators are evaluated right-to-left, while the remaining operators are evaluated left-to-right. For example, A*B/C means (A*B)/C, while A=B=C means A=(B=C). 

## EXP.3 Numbers – Overflow
 
The following is an interesting Java expression that provides a surprising result due to integer overflow.  Java’s largest positive int is 231-1, which is 2147483647.  You can see this using Integer.MAX_VALUE constant.

{% raw %}
```java
int oneMillion = 1000000;
int mystery = oneMillion * oneMillion; // -727379968
int maxInt = Integer.MAX_VALUE; // 2147483647
```
{% endraw %}

There are a couple of ways of fixing this.  One is to use long instead of int.  The Long.MAX_VALUE is 263-1, which is 9223372036854775807 – a rather large number.  You could also use double instead of int.  The Double.MAX_VALUE is
1.7976931348623157E308.  For floating point numbers, you have to realize there is limited precision.

This example demonstrates that you should be careful in selecting the types of your variables.

Consider that the world has an estimated 3 trillion trees.  If you wrote a program that counted trees, you could not use an int – you would have to use a long.

## EXP.4 Floating point has limited precision

We demonstrated that floating-point numbers are not exact in BBDT.12.  The following is another example that demonstrates that floating-point numbers have limited precision.  This example is one computing the cost of items.  After examining this example, you should be careful writing programs that manipulate costs.  Maybe even using int to represent pennies.  Accountants may get angry when they audit your company and your program has computed the wrong balance.

{% raw %}
```java
double unitPrice = 4.35;
double totalPrice = 100 * unitPrice // 434.999999999999994
// binary to decimal: no exact representation for 4.35
// similar to 10/3 is 3.3333333...
// floating point numbers are fuzzy
```
{% endraw %}

## EXP.5 Integer Division (/) and Remainder (%) Operators

You should note that an int / int results in an int, where the fractional part of the result is discarded.  This type of division is sometimes called goes-into because it provide how many times a number goes into another.  Integer division has an counterpart that provides the remander, which is Java is the % operator.  Consider two ints and two doubles as follows.

{% raw %}
```java
int i = 5;
int j = 2;
int k = i / j;  // k is 2 (num of times 2 goes-into 5)
int l = i % j;  // l is 1 (remainder of 5/2)
double d = 5;
double e = 2;
double f = d/e; // f is 2.5
```
{% endraw %}

## EXP.5.1 Converting An Int to a Base

During week one we discussed converting numbers to particular bases.  The following code uses integer division and remainder to perform the conversion.  We will study the while loop next week.

{% raw %}
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
{% endraw %}

## EXP.5.2 Integer Arithmetic to Manipulate RGB 

The example shows how to use integer division to manipulate Red, Green, and Blue values such that they become more discreet.  For example, we want to reduce the range of a number from 0 to 255 to be from 0 to 5.  For examples 256 becomes 1 and 257 becomes 2.  The algorithm to manipulate a specific value is the following.

{% raw %}
```java
value = (value * 6) / 256;
```
{% endraw %}

The class to manipulate the three colors is the following.

{% raw %}
```java
public class Color {
  private int red;
  private int green;
  private int blue;

  /**
   * Uses only valued 0, 51, 102, 153, 204, 255 for RGB
   */
  public void reduce() {
    red = (red * 6) / 256 * 51; 
    blue = (blue * 6) / 256 * 51;
    green = (green * 6) / 256 * 51;
    
  }
}
```
{% endraw %}

## EXP.6 Assignment Operators

One thing to remember is that assignment is an operator, not a statement.  This means that Java allows you to include assignments in expressions as follows.  The precedence of the assignment operator is low and it groups from right to left.  I suggest you use the assignment operator as an assignment statement.

{% raw %}
```java
int i1,i2,i3;
i1 = 1;
i2 = i3 = i1; // after this i1, i2, i3 contain 1
i3 = (i1 = i3) + i2;  // after this i3 contains 2, i1,i2 contain 1
```
{% endraw %}

Adding some value to a variable is a common action in programming.  Java has a special assignment statement that provides a short cut for this technique.  David Eck’s book describes this shortcut as follows.

Getting back to assignment statements, Java has several variations on the assignment operator, which exist to save typing. For example, "A += B" is defined to be the same as "A = A + B". Every operator in Java that applies to two operands, except for the relational operators, gives rise to a similar assignment operator. For example:

{% raw %}
```java
x -= y;     // same as:   x = x - y;
x *= y;     // same as:   x = x * y;
x /= y;     // same as:   x = x / y;
x %= y;     // same as:   x = x % y;
q &&= p;    // same as:   q = q && p;  (for booleans q and p)

## EXP.7 Increment and Decrement Operators

Adding 1 or subtracting 1 to a variable is a common action in programming.  Java has a shortcut for doing this.  You will use this shortcut quite often in for loops.

{% raw %}
```java
x++; // same as x = x + 1
x--; // same as x = x -1
```
{% endraw %}

## EXP.8 Expressions with Side Effects

Most of the time expressions simply evaluate to a value; however, sometimes expressions have side effects.  The term side effect means the expression changes the value of some variable.  A simple assignment statement (which is really an assignment expression) such as the following has side effects.

{% raw %}
```java
i1 = 1;

In this case the side effect is obvious.  Likewise the following expressions have clearly defined side effects.

{% raw %}
```java
x++
y--
x -= y;     // same as:   x = x - y;
x *= y;     // same as:   x = x * y;
x /= y;     // same as:   x = x / y;
x %= y;     // same as:   x = x % y;
q &&= p;    // same as:   q = q && p;  (for booleans q and p)
```
{% endraw %}

However, you can create expressions with side effects that are not as obvious.  The following is an example copied from the Oracle website.

{% raw %}
```java
int a = 9;
a += (a = 3);  // a is 12 after evaluating this expression
int b = 9;
 b = b + (b = 3);  // b is 12 after evaluating this expression
```
{% endraw %}

## EXP.9 Arithmetic Operators: +  -  *  /  %

The arithmetic operators are mostly self explanatory.  The % operator is remander.  You should also remember the int / int evaluates to an int, discarding the fractional part.  You should notice that Java does not have an exponentiation operator.  You have to use the Math.pow() function.  The following are a couple of examples.

{% raw %}
```java
Math.pow(2, 3) // 8.0
Math.pow(3, 2) // 9.0
```
{% endraw %}

## EXP.10 Relational Operators:  >  >=  <  <=  ==  !=

NOTE: = is assignment, == is comparison, assignment is an operator that can be used in expressions, but it is wise to simply use it as part of an assignment statement.

## EXP.11 Truth Tables

The truth tables for Boolean Operators are given as follows.  Note the last column !P applies the not operator to the first column P.

P | Q | && | \|\| | \!P
- | - | - | - | -
F | F | F | F | T
F | T | F | T | T
T | F | F | T | F
T | T | T | T | F

## EXP.12 Boolean Operators – And: &&     Or: ||     Not: !

A Boolean expression is an expression that evaluates to true or false.  To support Boolean expressions, Java has an primitive boolean data type and two key words true and false.   For example, I can create the following variable.

{% raw %}
```java
boolean b = true;
```
{% endraw %}

There are several ways to construct an expression that evaluates to true or false.  
•	I can use the relational operators.  The following are examples.
{% raw %}
```java
x < 10
a != b
```
{% endraw %}

•	I can use the Boolean operators.  The following are exmaples.
{% raw %}
```java
b1 && b2 || b3
bb && !b
```
{% endraw %}
•	I can combine relational operators, Boolean operators, and other operators.
{% raw %}
```java
x < y*z || b1 && b2
```
{% endraw %}

## EXP.12.1 Short Circuited Boolean Operators

Java can short-circuit the Boolean operators of && and \|\|.  Consider the following example of an && Boolean expression.

{% raw %}
```java
int i = 5;
int j = 6;
boolean b = i > j && x > y;
```
{% endraw %}

In this case Java evaluates the expression i > j && x > y from left to right.  We know that i > j is false since i is 5 and j is 6.  We also know that false && anything is false.  Thus we know that b is false without having to evaluate x > y.  Java does this exact short circuit – does not evaluate the x > y.  Likewise Java will perform a similar short circuit for logical \|\| when the leading expression is true.  The following is an example.

{% raw %}
```java
b = j > i  || x > y; // x > y not evaluated
```
{% endraw %}

For the most part, this short-circuiting is rather innocuous; however, if the subsequent expressions have side effects they may not be executed thereby not performing the side effect that you desired.

Provide example here.

## EXP.12.2 The != and ! Operators

Note that the not operator ! is similar to !=

## EXP.12.3 Boolean Algebra

Boolean algebra can be helpful at times to simplify a complicated Boolean expression.  When we study while loops, we will learn that they keep going as long as an expression is true.  Sometimes we know when we want to terminate a while loop, which means we know the NOT of the expression needed to keep the while loop going.  De Morgan’s law can be useful in transforming a termination Boolean expression to a keep going Boolean expression.  

Complete this.

## EXP.13 Conditional Operators

Java has a clever conditional operator, which we will use in our labs before we study the if statement.  I repeat David Eck’s words here.  Notice he uses the term, ternary operator, which means an operator with three operands.  

Any good programming language has some nifty little features that aren't really necessary but that let you feel cool when you use them. Java has the conditional operator. It's a ternary operator -- that is, it has three operands -- and it comes in two pieces, ? and :, that have to be used together. It takes the form

{% raw %}
```java
boolean-expression ? expression1 : expression2
```
{% endraw %}
The computer tests the value of boolean-expression. If the value is true, it evaluates expression1; otherwise, it evaluates expression2. For example:

{% raw %}
```java
next = (N % 2 == 0) ? (N/2) : (3*N+1);
```
{% endraw %}

will assign the value N/2 to next if N is even (that is, if N % 2 == 0 is true), and it will assign the value (3*N+1) to next if N is odd. (The parentheses in this example are not required, but they do make the expression easier to read.)

## EXP.14 Java Math Library – Including Math.random() for a Random Integer

The Java Math library has many useful math functions.  The Java Math library is automatically available so you do not have to import anything.  The following are several examples of functions (or methods) from the Java Math libary.

{% raw %}
```java
double x = Math.pow(2, 10); // 2**10 or 1024.0
x = Math.sqrt(100);         // sqrt(100) or 10.0
x = Math.abs(-1);           // absolute value or 1
Math.max(0,-1);             // maximum or 0
Math.min(300, 250);         // minimum or 250
int randomInteger = (int)(5*Math.random()); // between 0 and 4
```
{% endraw %}

You should pay attention to the last example that generates a random integer between 0 and 4.  Math.random() returns a double that satisfies the following equation.

{% raw %}
```java
0 <= Math.random() < 1
```
{% endraw %}

If you multiply the value Math.random() by 5 you will have a double that satisfies the following equation.  

{% raw %}
```java
0 <= Math.random() < 5

If you cast the double returned by (5*Math.random()) to an int you will have an int that is either 0, 1, 2, 3, or 4.  The following is the code that accomplishes this.

{% raw %}
```java
int i  = (int)(5 * Math.random());
```
{% endraw %}

This is a nice technique for generating a random integer using Math.random().

## EXP.15 Java Math Methods are not Part of an Object

The Java math methods are defined in the Math class, but we do not have to create Math objects to access them.  Think about our Person class that had methods like getFirstName() and addFriend().  We needed to construct a Person object in order to call these methods.  The following code demonstrates this approach.

{% raw %}
```java
Person p = new Person(“Gusty”, “Cooper”);
String fn = p.getFirstName();
p.addFriend(“Emily”);
```
{% endraw %}

You should compare these Person method calls with the Math method calls provided in the previous section.  They both use a dot notation to access methods.  Accessing Math methods uses the dot notation to dot-into the library.  Access Person methods uses dot notation to dot-into the object.  Intuitively, this should make sense.  We do not want to create a Math object to call those methods.  To accomplish this we use the static modifier when define class methods.

## EXP.16 Random Generator Class and Object

We learned in Section EXP.14 how to generate random numbers with Math.random().  This section describes the class Random, which is another way to generate random numbers.  You can create a Random object with an initial seed value, which allows you to always get the same sequence of random numbers.  This can be useful when testing your program.  The Random class is in the java.util package so you have to import java.util.Random.  The following code snippet demonstrates how to create a variable of type Random, allocate a Random object, and call the methods. 

{% raw %}
```java
import java.util.Random;
Random generator = new Random(42); // seed get same stream for testing
int i = generator.nextInt(n); // 0 <= i < n
double x = generator.nextDouble(); // 0 <= x < 1
```
{% endraw %}

You should notice that Math.random() is a static method in the Math class and the nextInt(int n) and nextDouble() are methods in a Random object.  You have to construct a Random object before you can call those methods.

## EXP.17 Example Problems with Expressions

Whenever you solve a problem, you first want to work through concrete examples by hand.  This will allow you to understand the problem.  After you can solve several concrete examples, you can turn you concrete solutions into a general solution.

## EXP.17.1 Tiles

TBD
 
