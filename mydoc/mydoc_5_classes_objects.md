---
title: Classes, Objects, and More
tags: [class, object]
keywords: classes, objects
last_updated: May 1, 2016
summary: "The learning objectives for this entire module. <li>Understand several details about classes and objects that were omitted in the Simple Objects module.</li> <li>Understand classes can be defined without methods.</li> <li>Understand null references.</li> <li>Understand this and its use in classes.</li> <li>Understand public and private.</li> <li>Understand instance and static.</li>  <li>Understand how to put instance and static in the same class.</li> <li>Understand final and its use on declaring variables.</li> <li>Understand how to define an enumeration type.</li> <li>Understand how to use an enumeration type.</li> <li>Understand subclasses.</li> <li>Understand how to create a Student that is a subclass of a Person.</li> <li>Understand class hierarchy.</li> <li>Understand a Java interface.</li> <li>Understand a Java interface contains method signatures, but does not contain code.</li> <li>Understand how to write a class that implements a Java interface.</li> <li>Understand overriding toString and comparable.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_5_classes_objects/
---

## Classes, Objects, and More

In [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects) we learned how to create our own types in Java classes.  We 
skipped a few details in our introduction to objects and classes.  In this section, we re-visit classes and objects to complete out study.  We learn some of the omitted details, which are summarized as follows.

* ```this```
* ```public``` and ```private```
* Instance and ```static```
* Stack and Heap
* ```final```
* Passing Parameters
* Enumeration Types
* Subclasses
* ```interface```
* ```toString```, ```comparable```

## Classes, Objects, and More and the Wirth Pattern

The Wirth pattern from [Primitive Types](/gustycooper.github.io/mydoc_1_primitive_types) defines a prgram to be algorithms and data structures.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern
0. Wirth Pattern
</b>
<br>
<img title="computer" src="{{ "/images/wirthFigure.png" | prepend: site.baseurl }}" />
</div>

This module on Classes, Objects, and More focuses more on the Data Structures component than the Algorithms component.  [Passing Parameters](/gustycooper.github.io/mydoc_5_passing_parameters) is part of the Algorithms component. 

## Object-oriented Programming (Eck 5.3.4)

CPSC 220 introduces you to creating classes and objects.  Object-oriented programming is more than creating classes and objects.  Object-oriented programming is studying your problem space to discover objects and the relationships between those objects.  CPSC 240 is devoted to teaching these concepts.  The following is a brief synopsis.  We cover some more details for this set of steps, but we do not fully develop them. 

1. Think about objects that you will need, and abstract the basic properties needed for a class.
2. Define the public interface.  This is the set of methods that you want a user to use when they create and manipulate objects of your class.
3. Create the class.  Implement the public interface and any needed instance variables.
4. Create a tester for you class.  This will construct objects and use the methods to make sure they work how you think they should.
5. Use your class in the solution of a problem.
6. If you have a nice class that others can use, provide your class to others so they can solve problems with it.

