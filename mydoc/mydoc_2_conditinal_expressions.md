---
title: Conditional Expressions
tags: [expression]
keywords: assignment, expression, expressions, numeric expressions, relation expressions, boolean expressions
last_updated: May 1, 2016
summary: "<li>Understand conditional expressions.</li> <li>Understand how to use conditional expressions in programs.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_2_conditional_expressions/
---

## Conditional Expressions ([Eck 2.5](http://math.hws.edu/javanotes/c2/s5.html))

**Expressions** – syntactically correct combination of variables, literals, operators, and method calls that evaluate to a value with a specific type.  The following meta language shows where expressions are found within Java statements

**Conditional expressions** evaluate to one of two values depending upon a Boolean expression.


## Conditional Operator Precedence

The bolded descriptions in the following table are the operators discussed in this section, listed in order from highest precedence (evaluated first) to lowest precedence (evaluated last):

Description | Operators
--------------------------- | --------------------------------------
Unary                       | ```++``` ```--``` ```!``` ```unary -``` ```unary +``` ```type-cast```
Multiply Divide             | ```*```  ```/```  ```%```
Add Subtract                | ```+```  ```-```
Relational                  | ```<```  ```>```  ```<=```  ```>=```
Equality                    | ```==```  ```!=```
Boolean and                 | ```&&```
Boolean or                  | ```||```
**Conditional**                 | ```?:```
Assignment                  | ```=```  ```+=```  ```-=```  ```*=```  ```/=```  ```%=```


Operators on the same line have the same precedence. When operators of the same precedence are strung together in the absence of parentheses, unary operators and assignment operators are evaluated right-to-left, while the remaining operators are evaluated left-to-right. For example, ```A*B/C``` means ```(A*B)/C```, while ```A=B=C``` means ```A=(B=C)```. 

## Conditional Operators

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

