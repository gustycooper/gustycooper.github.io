---
title: Control Flow
tags: [sequential, conditional, loop]
keywords: control flow, conditional, if, if-then, loop, for loop, while loop, do-while loop
last_updated: May 1, 2016
summary: "Control Flow"
sidebar: mydoc_sidebar
permalink: /mydoc_4_control_flow/
---

## Control Flow

We are solving problems in the form of programs.  A program is algorithms and data structures.  Control flow is the essense of algorithms.  We first studied control flow in [Algorithms](/gustycooper.github.io/mydoc_1_algorithms).  We know that control flow consists of the following.


* **Sequential** – perform the operation of a step and move to the next step.  Our program executes each statement in order, one right after the other.
* **Conditional** – perform a test on some condition which determines which sequence of steps to execute.  If-then-else statements that evaluate a Boolean expression to determine which of two paths to execute next.  You can connect several if-then-else statements together to get multiple paths.  Java also provides a switch statement, which is somewhat like a specialized if-then-else statement.

* **Loop** – peform a step or sequence of steps in a repetitive iteration.  Statements that execute a block of statements multiple times.  Java provides several varieties of loop statements.
* **Method** - collect steps into a reusable container that your can reference.  

We studied methods in [Methods](/gustycooper.github.io/mydoc_1a_methods) and [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects).


At this point, we understand Java primitive data types, how to create our own data types in a Java class, how to declare variables using primitive data types and classes, how to define instance variables in a class, how to define class constructors, how to define methods in a class, how to return values from methods, how to create a block statement, how to create assignment statements, and how to create expressions.  So far our methods have used mostly a sequential flow of statements, method/function calls, and conditional expressions.  At this point we are ready to add conditional statements and loop statements to our programming techniques.  There are four primary forms of control flow.

CF.1 If-then-else Statement (Eck 3.5)

An if-then-else statement evaluates a Boolean expression.  We discussed Boolean expressions in the Expression chapter.  If the expression is true, the statements in the then portion are executed.  If the expression is false, the statements in the else portion are executed.  Sometimes large buildings omit the 13th floor for superstitious reasons.  The following is an example if-then-else statement that changes a variable based upon a condition.

{% raw %}
```java
if (floor > 13) {
  actualFloor = floor - 1;  // execute this if floor > 13
}
else {
  actualFloor = floor;      // execute this if floor <= 13
}
```
{% endraw %}

You should notice the Boolean expression is enclosed in parentheses, which are required.

## Expressions

**Expressions** – syntactically correct combination of variables, literals, operators, and method calls that evaluate to a value with a specific type.  The following meta language shows where expressions are found within Java statements

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
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


## Statements

**Statements** – unit of execution terminated by a ;  Java has three categories of statements.

* **Declaration statement** - discussed in [Primitive Types](/gustycooper.github.io/mydoc_1_primitive_types)				
  * double d = 3.4;
* **Expression Statement**
  * **Assignment expression statement** - discussed in [Assignment Expression](/gustycooper.github.io/mydoc_2_assignment_expressions)
    * d = Math.random();
  * **Increment/decrement expression statement** - discussed in [Assignment Expression](/gustycooper.github.io/mydoc_2_assignment_expressions)
    * i++;
  * **Method call statement** - discussed in [Methods](/gustycooper.github.io/mydoc_1a_methods), [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects), and [Classes and Objects](/gustycooper.github.io/mydoc_5_classes_objects)		
    * mini.addGas(10);
  * **Object creation expression statement** - discussed in [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects) and [Classes and Objects](/gustycooper.github.io/mydoc_5_classes_objects)
    * Car mini = new Car(25);
* **Control flow statements** – if, switch, while, do-while, for - discussed in [Control Flow](/gustycooper.github.io/mydoc_4_control_flow)

## Blocks

**Blocks** – sequence of statements between balanced braces { } where each statement is terminated by a ; - discussed in [Our First Java Programs](/gustycooper.github.io/first_programs)

* A block is not terminated by a ;

```java
{ 
   int i = 0;
   double d = 0.0;
}; // This is incorrect
```

