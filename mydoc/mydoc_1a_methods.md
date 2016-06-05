---
title: Methods
tags: [algorithm]
keywords: method, java, algorithms, design
last_updated: May 17, 2016
summary: "<li>Understand how to define Java methods.</li> <li>Understand how to call Java methods.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_1a_methods/
---

## Method Overview

This section discusses the basic mechanisms of Java methods from an introductory perspective.  The goal of this module is to learn how to create simple methods so that we can complete [Lab 2](/gustycooper.github.io/labs_lab02_00), which has several methods that solve problems using expressions.  We revisit Methods in two modules - [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects) where we learn the details of ```instance``` and ```static``` methods and [Classes and Objects](/gustycooper.github.io/mydoc_5_classes_objects) where we learn the details of passing parameters by value and reference.  The four method mechanisms to understand are the following.

* How to define methods.
* How to call methods.
* How to pass parameters to methods.
* How to use the return value of a method.

Java uses the term **method**, but other terms with the same or similar meanings are **functions** and **subroutines**.  Some folks associate the term function with a method that returns a value.  Some folks like to use the general term subroutine.   I will use method (most of the time) and function interchangebly.  I rarely use subroutine (an older Fortran term).   

The following sequence of statements defines a ```sqrt``` method on lines 1 through 4.  ```sqrt``` has one **formal** parameter that is a ```double``` and returns a ```double``` value. Line 6 declares the variables ```x``` and ```y```.  Line 7 assigns the square root of ```9.0``` to the variable ```x```. Line 8 assigns ```x``` times 3.0 to the variable ```y```. The line of code ```x = sqrt(9.0);``` is an example of calling the method ```sqrt``` passing the **actual** parameter 9.0.  The type of the actual parameter must match the formal parameter.  In this case, you can pass a ```9``` as the actual paramter, because Java converts the ```int 9``` to a ```double 9.0```.

```java
line 
 1     double sqrt(double x) {
 2        // algorithm to compute sqrt
 3        return sqrtOfX;
 4     }
 5     
 6     double x, y;
 7     x = sqrt(9.0);
 8     y = x * 3;
```

Recall [Algorithms](/gustycooper.github.io/mydoc_1_algorithms) defined Methods as one of the four basic building block of algorithms - sequential, conditional, loop, and method.  A method collects steps into a reusable container that your can call. The following highlights the events in calling a method.

1. You should envision the above code as sequentially executing lines 6, 7, and 8.   
2. When the code gets to line 7,  the ```sqrt()``` method is called and assigns the return value to the variable ```x```.  
3. When encountering a method call, your code temporarily leaves the current sequence of code and jumps to the code contained in the method. 
4. The actual parameters are copied into the formal paramters prior to executing the code contained in the method.  
5. The code in the method is executed and then flow of control returns to the statement following the method call.  
6. The returned value is used in the expression as applicable.  

The following is a diagram of this flow of control.

![Method Call and Return](../images/methodCall.png "Method Call and Return")

## Methods, Parameters , and Returning Values ([Eck 4.3](http://math.hws.edu/javanotes/c4/s3.html) and [Eck 4.4](http://math.hws.edu/javanotes/c4/s4.html))

The idea with a method is that you bottle up useful functionality so that you can call it whenever needed.  The concept is easier to grasp that finding useful functionality.  As you can see from our ```sqrt()``` example, methods have two attributes.

1. Methods have zero or more parameters, which are also called arguments. Parameters are variables that are declared in the method definition.
2. Methods return.  Methods may return a value or they may simply return. 
   * Methods that return value have a type, e.g., ```int```, ```double```, ```String```.  
   * Methods that simply return have the type ```void```.  We have seen ```public static void main```.

The following code snippet shows two example methods.  The ```multiply()``` method that accepts two arguments argument and returns a value of type ```double```.  The ```printGusty()``` method does not have arguments and does not return a value; however, it does call the ```multiply()``` method.  You should notice that an argument declaration is similar to a variable declaration where you provide a type and an argument name.

```java
double multiply(double x, double y) {
  return x * y;
}

void printGusty() {
   System.out.println(“Gusty” + multiply(4,5));
}
```

## Method Definition 

The example code in the preceding sections defined three methods ```sqrt```, ```multiply```, and ```printGusty```.  The meta language for a method definition is given as follows.

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Method Definition
</b>
<br>
<pre>
&lt;modifiers&gt; &lt;return-type&gt; &lt;method-name&gt; ( &lt;formal-parameter-list&gt; ) {    
    &lt;statement-list&gt;
}
&lt;modifiers&gt; 
   public – method may be called from objects or outside of the class
   static – method exists independent of an object
&lt;method-name&gt;
   any Java identifier
&lt;return-type&gt;
   any Java type or void
   void is for a method that does not return a value
&lt;formal-parameter-list&gt; 
   &lt;type-name&gt; &lt;formal-parameter-name&gt;, ..., &lt;type-name&gt; &lt;formal-parameter-name&gt; 
&lt;type-name&gt;
   any Java type
&lt;formal-parameter-name&gt;
   any Java identifier
&lt;statement-list&gt;
   &lt;statement&gt;; ... &lt;statement&gt;; 
   each statement is terminated with a ;
</pre>
</div>

The formal-parameter-list is a sequence of variable declarations separated by commas.  A formal parameter is a variable.  The type of the actual parameter must match that of the formal parameter.  The value of the actual parameter is copied into the formal parameter when the method is called.

A method definition has a block with a sequence of statements.  The method block may contain inner blocks.  The top-level meta language for a method defintion could have been written as follows to emphaise a method block.

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Method Definition with Emphasized Block
</b>
<br>
<pre>
&lt;modifiers&gt; &lt;return-type&gt; &lt;method-name&gt; ( &lt;formal-parameter-list&gt; ) &lt;method-block&gt;

&lt;method-block&gt;
   { &lt;statement-list&gt; }
</pre>
</div>

We will study \<modifiers\> in modules [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects) and [Classes and Objects](/gustycooper.github.io/mydoc_5_classes_objects).  

All of the Java \<statement\>s are described in [Expresssions, Statements, Blocks](/gustycooper.github.io/mydoc_A_exp_statements). We know how to create declaration statements and assignment expression statements.  We will begin to learn method call statements in the next section.  We will learn the remaining Java statements in [Control Flow](/gustycooper.github.io/mydoc_4_control_flow).  

## Method Call

The meta language for a method call is given as follows.

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Method Call
</b>
<br>
<pre>
&lt;method-name&gt; ( &lt;actual-parameter-list&gt; )
&lt;method-name&gt;
   any Java identifier that matches the name of a defined method
&lt;actual-parameter-list&gt; 
   &lt;actual-parameter-exp&gt;, ..., &lt;actual-parameter-exp&gt; 
&lt;actual-parameter-exp&gt;
   any Java expression that evaluates to the type of the corresponding actual parameter
</pre>
</div>

The actual-parameter-list is a list of expressions separated by commas.  Each actual parameter expression must evaluate to the type of its corresponding formal parameter.

## Variable Scope and Lifetime

Variables and **scope** are described by the following attributes.

* The scope of a variable is a static attribute.  You can read code and determine the scope of variables.
* Scope is an area in your program where a variable is accessible.  
* Scope is defined in terms of blocks.  
* A block is a sequence of statements between balanced curly braces {}.  
* Each statement in a block is terminated by a ;.  
* A variable declared within a block is accessible by other statements in that block from the point of its definition moving forward.  You cannot access a variable prior to its declaration.   
* The block in which a variable is declared is the scope of the variable.
* The block of a method is the scope of the formal parameters.

The **lifetime** of a variable is a dynamic attribute.  You have to mentally execute your code in order to determine the lifetime of a variable.  At this point in our study, variables exist within a method.  The lifetime of variables declared in methods is from the point of declaration until the method finishes executing.

## Class with Multiple Methods

We created simple programs that had a ```main``` method in a class.  The following code demonstrates helper methods, scope, and lifetime.  We will study the modifiers ```public``` and ```static``` in [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects).

```java
line
  1    import java.util.Scanner;
  2
  3    public class Main {
  4    
  5       public static Scanner in = new Scanner(System.in);
  6    
  7       public static String getName() {
 11           String name = getString("Enter your name: ");
 10           return name;
 11        }
 12     
 13       public static double getDouble(String prompt) {
 14          System.out.print(prompt);
 15          double d = in.nextDouble();
 16          return d;
 17       }
 18     
 19       public static String getString(String prompt) {
 20          System.out.print(prompt);
 21          return in.nextLine();
 22       }
 23     
 24       public static void main(String[] args) {
 25          String name = getName();
 26          int age = (int)getDouble("Enter age");
 27          double d1 = getDouble("Enter number 1: ");
 28          double d2 = getDouble("Enter number 2: ");
 29          System.out.println("Hello " + name);
 30          System.out.println("I see that you are " + age + " years old.");
 31          System.out.println(d1 + " + " + d2 + " is " + (d1 + d2));
 32       }
 33    }
```
      
* ```class Main``` has a block from line 3 to line 33.
* The scope of the variable ```Scanner in``` is from line 5 to line 33.  ```in``` is a class variable.  We study class variables in [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects).
* Method ```getName``` has a block from line 7 to line 11.
* The scope of method ```getName``` is from line 3 to line 33.  This scope allows method ```main``` to call ```getName``` on line 25.
* The scope of local variable ```name``` declared on line 9 is line 9 to line 11.
* Method ```getDouble``` has a block from line 13 to line 17.
* The scope of method ```getDouble``` is from line 3 to line 33.  This scope allows method ```main``` to call ```getDouble``` on lines 22 and 23.
* The scope of formal parameter ```prompt``` declared on line 13 is line 13 to line 17.
* The scope of local variable ```d``` declared on line 15 is line 15 to line 17.
* The scope of method ```getString``` is from line 3 to line 33.  This scope allows method ```getName``` to call ```getString``` on line 9.
* The scope of formal parameter ```prompt``` declared on line 19 is line 19 to line 22.
* Notice how method ```getDouble``` declared a local variable ```d``` to hold ```in.nextDouble``` on line 15 only to return ```d``` on line 16.  This technique can be contrasted with method ```getString``` that did not declare a local variable to hole ```in.nextLine``` that was called on line 21.
* Method ```main``` has a block from line 24 to line 32.
* Method ```main``` has four local variables - ```name```, ```age```, ```d1```, and ```d2``` - declared on lines 25, 26, 27, and 28.  Their scope is from their declaration line to line 32.

## Java Math Class

The Java ```Math``` Class contains a library math functions (or methods) and constants.  The members of the Java Math ```class``` are ```static``.  We have used the ```static``` keyword in our early programs - for example ```public static void main(String[] args)```.  We will study the specifics of ```static``` and ```instance``` in [Simple Objects](/gustycooper.github.io/mydoc_2_simple_objects).  For this discussion, we extend our concept of calling a method by prefixing the method with its class name, ```Math``` in this case.  The Java Math class does not require an ```import```.  The following are several examples of calling methods in the Java ```Math``` Class.

```java
double x = Math.pow(2, 10); // 2**10 or 1024.0
x = Math.sqrt(100);         // sqrt(100) or 10.0
x = Math.abs(-1);           // absolute value or 1
Math.max(0,-1);             // maximum or 0
Math.min(300, 250);         // minimum or 250
int diceNumber = (int)(6*Math.random()) + 1; // between 1 and 6
```

## ```Math.random``` Methdod

Programs often require the ability to generate a random number.  ```Math.random``` is a method that returns a ```double``` that satisfies the following equation.

```java
0.0 <= Math.random() < 1.0
```

Suppose you want to simulate rolling a die, which results in a random number between 1 and 6.   We can create an expresion using ```Math.random()``` that produces a number between 1 and 6.  We construct this expression in a sequence of steps.

**Step 1.** This step is basic arithmetic.  ```6 * Math.random()``` produces a ```double``` that satisfies the following.

```java
0.0 <= Math.random() * 6 < 6.0
```

**Step 2.** This step casts the ```double``` to an ```int``` to produce an ```int``` that satisfies the following.

```java
0 <= (int)(Math.random() * 6) < 5
```

**Step 3.** If you add one to the casted expression, you get a random number that represent the roll of a die. The following shows this as part of an assignment statement.

```java
int dieValue = (int)(Math.random() * 6) + 1;
```

We will study another technique for gerating random numbers in [Java Scanner](/gustycooper.github.io/mydoc_3_random).
