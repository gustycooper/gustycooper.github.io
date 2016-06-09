---
title: Simple Objects
tags: [object, class]
keywords: objects, simple objects
last_updated: May 1, 2016
summary: "First Introduction to Classes and Objects"
sidebar: mydoc_sidebar
permalink: /mydoc_3_simple_objects/
---

## Simple Objects – An Introduction

The Java language defines primitive types.  All other types are user defined within a Java ```class```.  At this point, we have used a Java ```class``` to write our programs that have a ```main``` method and other methods.  A Java ```class``` is also used to define types.  The Java language comes prepackaged with many useful types defined in classes.  We have already used ```String``` and ```Scanner``` types.  For the most part, using ```String```, ```Scanner```, and other user defined types is almost exactly like using primitive types.  Primitive types are defined by the Java language.  The prepackaged Java types are not part of the language.  Instead Java programmers write Java classes to implement the types.  These types are placed in packages that are availble to you in the IDE.  When your program executes, the byte code for these packages is part of the JRE.  

The mechanics of creating a Java class that can be used as a type for declaring variables is not hard; however, the concept requires some mental energy on your part.

The terms classes and objects go hand-in-hand.  You define a type in a Java class.  Then you use the type to declare variables and assign objects to those variables.  The following code shows a Java ```String``` variable ```gusty``` that references a ```String``` object that contains ```"Gusty"```.

```java
String gusty = "Gusty";
```  

## Objects and the Wirth Pattern

The Wirth pattern (defined earlier) defines a prgram to be algorithms and data structures.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern
0. Wirth Pattern
</b>
<br>
<pre>
Algorithms + Data Structures = Programs
</pre>
</div>

This module on simple objects concentrates upon the Data Structures component.  We want to learn the basics of defining our own times with minimal Algorithms.  Most of the algorithms will be sequential assignment statements, with an occasional conditional expression.


## Objects in the World

We live in a world full of objects.  We have cars, buses, people, clocks, desks, chairs, books, etc.  Each of these objects share two characteristics

* **state** - captures information about the object.  For example cars have tires, steering wheel, engine, a color, seats X passengers, etc.
* **behavior** - captures the actions that can be performed with the object.  For example, you can drive a car, you can put gas in a car, you can add a passenger to your car, etc.

## Objects and Patterns

You should notice that our discussion on real-world objects focuses on patterns and not a specific instance.  A car is a pattern.  We can have many makes and models of a car.  Jerri Anne and I have a Mini Cooper, a Toyota Tacoma, and a Honda Odyssey, each of which is a specific instance of a car.  This makes car the pattern for stamping out specific instances.


## Software Objects

Software objects are similar to objects in the world.  In fact, sofware objects often model objects in the world.  Software objects have **state** and **behavior**.   The **state** is captured in variables of the software object and the **behavior** is captured in methods of the object.  The methods of a software object manipulate the variables of the software object.  Many of the software object methods change the state of the object.  Consider a car software object.  We may have variables that contain the following.

* Car make
* Car model
* Car year
* Miles per gallon
* Gas in tank
* Max number of passengers
* Odometer
* Current number of passengers
* Passenger in the car

We may have car methods that perform the following.

* Drive the car X miles.
  * This will add miles to the odometer and subtract gas from the tank
* Pickup a passenger named P.
  * This adds the passenger to the car as long as current number of passengers is less than max number of passengers.
* Get the passengers
  * This returns all of the passengers in the car.

The variables and methods of an object are called **instance** variables and methods.  Each object is an instance of a ```class``` (see next section).  Each instance has variables and methods.

## Java Classes

Java ```class```es are the mechanism for defining types, which are used to declare variables.  The ```class``` is a blueprint that can be used to stamp our objects, and variables reference objects.  We already used predefined ```class```es to declare variables that reference objects.  The following are examples of our use.

```java
String gusty = "Gusty";
Scanner in = new Scanner(System.in);
```

At this point, we have mimicked these programming techniques.  In this module, we learn exactly what is happening, including how to define and use our own classes.

## Reference Types

Using a Java ```class``` to define a type creates a **reference type**.  This is because variables of a reference type reference an object.  The concept of a reference type will become clearer as we continue our study.

We now have two categories of Java types.

* **primitive types** - types defined by the Java language, e.g., ```int```, ```double```, ```char```, ```boolean```
* **reference types** - types defined by users within a Java class, e.g., ```String```, ```Scanner```

## Data Type Definition and Java Classes

In [Primitive Types](/gustycooper.github.io/mydoc_1_primitive_types) we studied variables and data types.  Let us review that material in the context of reference types and objects.

A computer is a machine that stores and manipulates information under the control of a changeable program.  A data type defines the characteristics of information we want to manipulate.  We use data types to declare variables, which contain the information we manipulate.  In Java variables must be declared to be a specific type, and the declaration must happen before you can use a variable.   

A **variable** has the following

1. a **name**
2. a **data type**
3. a **value**
4. **memory locations**

A **data type** is a set of values and a set of operations.

* ```byte b;```
  * set of values is ```{-128, -127, ..., 0, 1, ... 127}```
  * set of operations is ```{+, -, *, /, %}``` 

* ```Car c;```
  * set of values is defined by the **state**
  * set of operations is defined by the **behavior**

## Way Forward for This Module

In the next two sections, we return to ```String``` and ```Scanner``` - two Java provided reference types we have already used.  Instead of mimicking techniques to declare variables of types ```String``` and ```Scanner```, we disect what is actually happening.  Then we discuss ```Random```, which is another Java provided reference type that can be used to generate random numbers.  Then we study how to create and use our own reference types.  Finally, we study how to document our reference types with JavaDoc.

## Reference Type Naming Convention

Reference types, by convention, begin with an uppercase letter, e.g., ```String``` and ```Scanner```.
