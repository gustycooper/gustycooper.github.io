---
title: Assignment Expressions
tags: [expression]
keywords: assignment, expression, expressions, numeric expressions, relation expressions, boolean expressions
last_updated: May 1, 2016
summary: "<li>Understand assignment expressions.</li> <li>Understand side effects in expressions</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_2_assignment_expressions/
---

## Assignment Expressions ([Eck 2.5](http://math.hws.edu/javanotes/c2/s5.html))

**Expressions** – syntactically correct combination of variables, literals, operators, and method calls that evaluate to a value with a specific type.  The following meta language shows where expressions are found within Java statements

**Assignment expressions** update the value of a variable or array element.


## Assignment Operator Precedence

The bolded descriptions in the following table are the operators discussed in this section, listed in order from highest precedence (evaluated first) to lowest precedence (evaluated last):

Description | Operators
--------------------------- | --------------------------------------
**Unary**                       | ```++``` ```--``` ```!``` ```unary -``` ```unary +``` ```type-cast```
Multiply Divide             | ```*```  ```/```  ```%```
Add Subtract                | ```+```  ```-```
Relational                  | ```<```  ```>```  ```<=```  ```>=```
Equality                    | ```==```  ```!=```
Boolean and                 | ```&&```
Boolean or                  | ```||```
Conditional                 | ```?:```
**Assignment**                  | ```=```  ```+=```  ```-=```  ```*=```  ```/=```  ```%=```


Operators on the same line have the same precedence. When operators of the same precedence are strung together in the absence of parentheses, unary operators and assignment operators are evaluated right-to-left, while the remaining operators are evaluated left-to-right. For example, ```A*B/C``` means ```(A*B)/C```, while ```A=B=C``` means ```A=(B=C)```. 

{% raw %}
```java
double unitPrice = 4.35;
double totalPrice = 100 * unitPrice // 434.999999999999994
// binary to decimal: no exact representation for 4.35
// similar to 10/3 is 3.3333333...
// floating point numbers are fuzzy
```
{% endraw %}

## Assignment Operators

One thing to remember is that assignment is an operator, not a statement.  This means that Java allows you to include assignments in expressions as follows.  The precedence of the assignment operator is low and it groups from right to left.  I suggest you use the assignment operator as an assignment statement.

```java
int i1,i2,i3;
i1 = 1;
i2 = i3 = i1; // after this i1, i2, i3 contain 1
i3 = (i1 = i3) + i2;  // after this i3 contains 2, i1,i2 contain 1
```

Adding some value to a variable is a common action in programming.  Java has a special assignment statement that provides a short cut for this technique.  David Eck’s book describes this shortcut as follows.

Getting back to assignment statements, Java has several variations on the assignment operator, which exist to save typing. For example, "A += B" is defined to be the same as "A = A + B". Every operator in Java that applies to two operands, except for the relational operators, gives rise to a similar assignment operator. For example:

```java
x -= y;     // same as:   x = x - y;
x *= y;     // same as:   x = x * y;
x /= y;     // same as:   x = x / y;
x %= y;     // same as:   x = x % y;
q &&= p;    // same as:   q = q && p;  (for booleans q and p)
```

## Increment and Decrement Operators

Adding 1 or subtracting 1 to a variable is a common action in programming.  Java has a shortcut for doing this.  You will use this shortcut quite often in for loops.

```java
x++; // same as x = x + 1
x--; // same as x = x -1
```

## Expressions with Side Effects

Most of the time expressions simply evaluate to a value; however, sometimes expressions have side effects.  The term side effect means the expression changes the value of some variable.  A simple assignment statement (which is really an assignment expression) such as the following has side effects.

```java
i1 = 1;
```

In this case the side effect is obvious.  Likewise the following expressions have clearly defined side effects.

```java
x++
y--
x -= y;     // same as:   x = x - y;
x *= y;     // same as:   x = x * y;
x /= y;     // same as:   x = x / y;
x %= y;     // same as:   x = x % y;
q &&= p;    // same as:   q = q && p;  (for booleans q and p)
```

However, you can create expressions with side effects that are not as obvious.  The following is an example copied from the Oracle website.

```java
int a = 9;
a += (a = 3);  // a is 12 after evaluating this expression
int b = 9;
 b = b + (b = 3);  // b is 12 after evaluating this expression
```

## Java Expression Statements

Recall that a Java block is a sequence of statements enclosed within curly braces {}.  Java has declaration statements, which we began studying in [Primitive Types](/gustycooper.github.io/mydoc_1_primitive_types), expression statements, two of which are discussed in this section, method calls, which we begin studying in [Methods](/gustycooper.github.io/mydoc_1a_methods), and object creation expression statement, which we begin studying in [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects).  Java expression statements consist of the following.

* Assignment expression
  * ```x = 4.4;```
* Increment/decrement expression
  * ```i++;```
* Method Calls
  * System.out.println("Gusty");
* Object Creation Expression
  * Person p - new Person("Gusty",22);

