---
title: Expressions
tags: [expression]
keywords: expression, expressions, numeric expressions, relation expressions, boolean expressions
last_updated: August 10, 2016
summary: "<li>Understand all of the topics we will study in the Expression Module.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_2_expressions/
---

## Expressions and the Wirth Pattern

We are solving problems in the form of programs.  The Wirth pattern from [Primitive Types](/gustycooper.github.io/mydoc_1_primitive_types) defines a prgram to be algorithms and data structures.  Expressions are the fundamental building blocks of the control flow component.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Wirth Pattern
</b>
<br>
<img title="computer" src="{{ "/images/wirthFigure.png" | prepend: site.baseurl }}" />
</div>

## Expressions ([Eck 2.5](http://math.hws.edu/javanotes/c2/s5.html))

Expressions are fairly straightforward.  Everyone should already be fairly proficient with creating expressions.  Section 2.5 in David Eck’s book provides a nice overview of Java expressions.  This module reviews expressions.

**Expressions** – syntactically correct combination of variables, literals, operators, and method calls that evaluate to a value with a specific type.  The following meta language shows where expressions are found within Java statements.

<div class="alert alert-info" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Expressions within Statements
</b>
<br>
<pre>
&lt;variable&gt; = &lt;<font color="red">exp</font>&gt;;  // The assignment operator is part of expressions
 
&lt;<font color="red">exp</font>&gt;;

&lt;methodCall&gt;( &lt;<font color="red">exp</font>&gt;, … , &lt;<font color="red">exp</font>&gt;); // A method call is part of expressions
x = y + Math.sin(Math.random()); 

if (&lt;<font color="red">boolean-exp</font>&gt;) { &lt;statements&gt; }

switch (&lt;<font color="red">exp</font>&gt;) { &lt;switch-cases&gt; }

while (&lt;<font color="red">boolean-exp</font>&gt;) { &lt;statements&gt; }

do { &lt;statements&gt; } while (&lt;<font color="red">boolean-exp</font>&gt;);

for ( &lt;<font color="red">init-exp</font>&gt;; &lt;<font color="red">cont-exp</font>&gt;; &lt;<font color="red">update-exp</font>&gt; )
    { &lt;statements&gt; }
</pre>
</div>

## Expression Introduction

Expression attributes.

* The basic building blocks of expressions are literals (such as 674, 3.14, true, and 'X'), variables, and calls to methods that return a value. Math.cos(0) is a function call that returns 1.0.  
* An expression is a piece of program code that computes a value. 
* An expression can be a literal, a variable, a function call, or several of these things combined with operators such as + and >. 
* The value of an expression can be assigned to a variable, used as a parameter in a method call, or combined with other values into a more complicated expression.
* Expressions are also used in if statements, loops, and switch statements.
* Expressions are evaluated.  Expressions evaluate to a specific type.  The resulting type of an expression is usually obvious.  For example, if you add two integers, the result will be an integer.  When used with the assignment operator, the right-hand expression must evaluate to the type of the variable on the left-hand side.
* Java evaluates the expression in accordance with operator precedence to compute the value.  The Java operator precedence is shown in the next section.

## Operator Precedence

Simple expressions are easy to determine the order of operator evaluation.  Complex expressions should contain parentheses to help the reader understand the order of operator evaluation.

Description | Operators
--------------------------- | --------------------------------------
Unary                       | ```++``` ```--``` ```!``` ```unary -``` ```unary +``` ```type-cast```
Multiply Divide             | ```*```  ```/```  ```%```
Add Subtract                | ```+```  ```-```
Relational                  | ```<```  ```>```  ```<=```  ```>=```
Equality                    | ```==```  ```!=```
Boolean and                 | ```&&```
Boolean or                  | ```||```
Conditional                 | ```?:```
Assignment                  | ```=```  ```+=```  ```-=```  ```*=```  ```/=```  ```%=```

Operators on the same line have the same precedence. When operators of the same precedence are used in an expression without parentheses, unary operators and assignment operators are evaluated right-to-left, while the remaining operators are evaluated left-to-right. You are most likely familiar with left-to-right evaluation.  For example, ```x * y / z``` is evaluated as ```(x * y) / z```.  For right-to-left evaluation consider multiple assignments.  ```i = j = k``` is evaluated as ```i = (j = k)```. 

## Expressions and Methods Lab

The overview lab for expressions and methods is [Exp, Methods](/gustycooper.github.io/labs_lab02_00).

