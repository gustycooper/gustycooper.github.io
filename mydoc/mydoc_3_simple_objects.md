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

Java ```class```es are the mechanism for defining types, which are used to declare variables.  The ```class``` is our pattern and the variable references our object.  We already used predefined ```class```es to declare variables that reference objects.  The following are examples of our use.

```java
String gusty = "Gusty";
Scanner in = new Scanner(System.in);
```

At this poing, we have mimicked these programming techniques.  We will learn exactly what is happening, including how to define and use our own classes.

## Reference Types

Using a Java ```class``` to define a type creates a **reference type**.  This is because variables of a reference type reference an object.  The concept of a reference type will become clearer as we continue our study.

We now have two categories of Java types.

* **primitive types** - types defined by the Java language, e.g., ```int```, ```double```, ```char```, ```boolean```
* **reference types** - types defined by users within a Java class, e.g., ```String```, ```Scanner```
## Way Forward

## Reference Type Naming Convention

Reference types, by convention, begin with an uppercase letter.


## OLD WORDS

Since everything in Java is contained in classes, which are used to create objects, we will study objects right from the start of our class.  Our approach is to understand how we can create our own data types using a Java class, and then use the class to construct objects.  These data types are in addition to the Java primitive Java data types.  Just as an primitive data type has a set of values and set of operations, our data types will have a set of values and a set of operations.  The values will be stored in instance variable and the operations will be performed by instance methods.  We will also learn that Java Strings are a class.  In order to study Java classes and objects first, we will study variable declarations, simple assignment statements, method definitions, method returns, and calling methods.

Objects and object-oriented programming are somewhat of a natural way of thinking about and dissecting a problem.  The world is full of objects, objects align with our way of thinking, objects have attributes (or properties), and we often use objects to do work for us.  We can think of people as an object.  Everyone has shared set of properties – name, age, height, weight, etc.  Each person will have his or her own values for these properties.  We also have ways of getting those properties from others.  For example, when we first meet we may ask someone to provide us with his or her name.  Let’s consider the weather app on our phone as an object.  We use the weather app to get work done for us – namely to see what today’s weather will be.  We do not care how the weather app knows what today’s weather will be (maybe it is just random), but we use the information.    To summarize, objects have properties, objects do work for us, and objects have methods that allow us to interact with their properties and examine their work.

We will create objects in our programs, and these program objects will have properties and methods.  Before we can create objects, we will have to create classes, which are objects with common behavior.  You can think of a generic person as a class and the person Gusty as an object of type person.  We will define Java classes, which will be like a data type, and we will use the Java classes to declare variables, which will be objects of the particular type.

