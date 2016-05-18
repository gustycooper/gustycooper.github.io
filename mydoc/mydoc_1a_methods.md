---
title: Methods
tags: [algorithm]
keywords: method, java, algorithms, design
last_updated: May 17, 2016
summary: "<li>Understand how to define Java methods.</li> <li>Understand how to call Java methods.</li>"
sidebar: mydoc_sidebar
toc: false
permalink: /mydoc_1a_methods/
---

## Method Overview

This section discusses the mechanisms of methods.

* How to define methods.
* How to call methods.
* How to pass parameters to methods.
* How to use the return value of a method.

Java uses the term method, but other terms with the same or similar meanings are subroutines and functions.   Eck makes a difference between them.  David Eck uses subroutine as the generic term for callable sequence of instructions.  Some computation that is useful is packaged such that you can call it whenever you want to perform that computation.  David uses the term function to mean a subroutine that returns a value.  For example, the following sequence of statements declares the variable x and y, assigns the square root of 9.0 to the variable x, and then assigned x times 3.0 to the variable y.

```java
double x, y;
x = sqrt(9.0);
y = x * 3;
```

In this example ```sqrt()``` is a function because it returns the square root of 9.0.  The term method is popular in object-oriented programming languages, where method is another word for subroutine, function, procedure, etc.  Java uses the term method so all subroutines, functions, procedures, etc. are methods.  I will mostly use the terms method and function, and I will use them interchangeably.

You should envision your code executing as sequentially stepping through each statement in your method.  Methods / functions are called.  The second statement in the above example calls the ```sqrt()``` method (or function), and assigns its return value to the variable ```x```.  When you encounter a method call, your code temporarily leaves the current sequence of code and jumps to the code contained in the method. The code in the method is executed and then flow of control returns to the statement following the method call.  The following is a diagram of this flow of control.

![Method Call and Return](../images/methodCall.png "Method Call and Return")


 
Words...

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Method Definition
</b>
<br>
<pre>

&lt;modifiers&gt; &lt;return-type&gt; &lt;method-name&gt; ( &lt;parameter-list&gt; ) {    
    &lt;statements&gt;
}
&lt;modifiers&gt; 
   public – method may be called from objects or outside of the class
   static – method exists independent of an object
&lt;return-type&gt;
   any Java type
&lt;parameter-list&gt; 
   &lt;type-name&gt; &lt;parameter-name&gt;, ..., &lt;type-name&gt; &lt;parameter-name&gt; 
</pre>
</div>

We will discuss modifiers momentarily.  We will learn more <statements> in the near future.  For now we know assignment statements and method call statements. 


Figure SO-11 Calling a Method

## Methods, Parameters , and Returning Values (Eck 4.3, 4.4)

The idea with a method is that you bottle up useful functionality so that you can call it whenever needed.  As you can see from the sqrt() example, methods have two attributes.

1. Methods have parameters, which are also called arguments. 
2. Methods return.  Methods may return a value or they may simply return.

The following code snippet shows two example methods.  The multiply() method that accepts two arguments argument and returns a value.  The printGusty() method does not have arguments and does not return a value; however, it does call the multiply() method.  You should notice that an argument declaration is similar to a variable declaration where you provide a type and an argument name.

```java
double multiply(double x, double y) {
  return x * y;
}

void printGusty() {
   System.out.println(“Gusty” + multiply(4,5));
}
```



## Defining Methods



## Scope

words...


