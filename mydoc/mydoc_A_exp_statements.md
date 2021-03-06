---
title: Expressions and Statements Reference
tags: [expressson, sequential, conditional, loop]
keywords: expresssons, statements
last_updated: May 17, 2016
summary: "<li>Understand top-level view of expressions and statements.</li>"
sidebar: mydoc_sidebar
toc: false
permalink: /mydoc_A_exp_statements/
---

## Expressions

**Expressions** – syntactically correct combination of variables, literals, operators, and method calls that evaluate to a value with a specific type.  The following meta language shows where expressions are found within Java statements

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
