---
title: Control Flow
tags: [sequential, conditional, loop]
keywords: control flow, conditional, if, if-then, loop, for loop, while loop, do-while loop
last_updated: August 10, 2016
summary: "Control Flow"
sidebar: mydoc_sidebar
permalink: /mydoc_4_control_flow/
---

## Control Flow and the Wirth Pattern

We are solving problems in the form of programs.  The Wirth pattern from [Primitive Types](/gustycooper.github.io/mydoc_1_primitive_types) defines a prgram to be algorithms and data structures.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Wirth Pattern
</b>
<br>
<img title="computer" src="{{ "/images/wirthFigure.png" | prepend: site.baseurl }}" />
</div>

Control flow is the essense of algorithms, which means this module concentrates on the Algorithms component.  We first studied control flow in [Algorithms](/gustycooper.github.io/mydoc_1_algorithms).  We know that control flow consists of the following.

* **Sequential** – perform the operation of a step and move to the next step.  Our program executes each statement in order, one right after the other.

* **Conditional** – perform a test on some condition which determines which sequence of steps to execute.  If-then-else statements that evaluate a Boolean expression to determine which of two paths to execute next.  You can connect several if-then-else statements together to get multiple paths.  Java also provides a switch statement, which is somewhat like a specialized if-then-else statement.

* **Loop** – peform a step or sequence of steps in a repetitive iteration.  Statements that execute a block of statements multiple times.  Java provides several varieties of loop statements.

* **Method** - collect steps into a reusable container that your can reference.  

We have studied several modules: [Introduction](/gustycooper.github.io/mydoc_1_overview), [Expressions](/gustycooper.github.io/mydoc_2_expressions), [Methods](/gustycooper.github.io/mydoc_1a_methods) and [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects).

At this point, we understand the following.

* All of the the Java primitive types.
* How to declare variables using primitive types. 
* How to create a Java program.
* How to create a Java block.
* how to create expressions.  
* how to create assignment statements with expressions. 
* How to create methods as part of our programs.
* How to return values from methods and use those values in expressions. 
* How to create our own reference data types in a Java class. 
  * How to define instance variables in a class. 
  * How to define class constructors. 
  * How to define methods in a class. 
* How to declare variables using reference types. 

We have done a lot, but to this point our algorithms have primarily used two flow of control components, sequential statements and method calls.  At this point we are ready to add conditional statements and loop statements to our programming techniques.  Java has two conditionals statements - ```if``` and ```switch````.  Java has three loop statements - ```for```, ```while```, and ```do-while```.  The following shows these statements and how they incorporate expressions.  You should notice the Boolean expression is enclosed in parentheses, which are required.

<div class="alert alert-info" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Expressions within Statements
</b>
<br>
<pre>
if (&lt;<font color="red">boolean-exp</font>&gt;) { &lt;statements&gt; }

switch (&lt;<font color="red">exp</font>&gt;) { &lt;switch-cases&gt; }

while (&lt;<font color="red">boolean-exp</font>&gt;) { &lt;statements&gt; }

do { &lt;statements&gt; } while (&lt;<font color="red">boolean-exp</font>&gt;);

for ( &lt;<font color="red">init-exp</font>&gt;; &lt;<font color="red">cont-exp</font>&gt;; &lt;<font color="red">update-exp</font>&gt; )
    { &lt;statements&gt; }
</pre>
</div>


You should recall that **Blocks** are sequence of statements between balanced braces { } where each statement is terminated by a ; - discussed in [Our First Java Programs](/gustycooper.github.io/mydoc_1_first_programs)

* A block is not terminated by a ;

```java
{ 
   int i = 0;
   double d = 0.0;
}; // This is incorrect
```

## Control Flow Knowledge

Most students in CPSC 220 have used control flow in prior programming classes.  The specifics of creating an ```if``` statement or a ```while``` statement are not hard to master; however, combining control flow constructs into elequent solutions of difficult problems takes practice to master.  There are a few subtleties in the way Java implements its control flow statements.  Everyone will benefit from studying this section.  Everyone will get ample practice in using control flow in Lab 4.

## Control Flow - Syntax and Semantics

When discussing control flow we show meta language to describe its syntax and a flow chart to describe it semantics.  Syntax is the format and punctuation.  Semantics is the meaning.

## Control Flow Lab

The overview lab for control flow is [Control Flow](/gustycooper.github.io/labs_lab04_00).



