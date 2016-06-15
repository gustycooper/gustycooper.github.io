---
title: Public and Private
tags: [class, object]
keywords: public, private
last_updated: June 10, 2016
summary: "<li>Understand public and private.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_5_public_private/
---

## Public and Private

```public``` and ```private``` are modifiers that are used in declaring variables, methods, and constructors.  We have used ```public``` and ```private``` in our programming, and have a strong intuitive understanding.  We know that all Java code must be contained in a ```class```.  

* When we use the ```public``` modifier on declarations of variables, methods, and constructors, other classes can access them.
* When we use the ```private``` modifier on declarations of variables, methods, and constructurs, only code in the class in which they are declared can access them.

When we created ```Person``` type, we made the instance variables (e.g., ```name```, ```age```, and ```friends```) ```private``` and we made the instance constructors and methods (e.g., ```Person(String name)``` and ```String getFriends()``` ```public```.  By doing this we force users of ```Person``` to call the ```public``` interface.

We can use ```public``` and ```private``` modifiers on declarations of ```static``` variables and methods.  At this point we have used ```public``` on ```static``` methods.  [Instance and Static](/gustycooper.github.io/mydoc_5_instance_static) discusses instance and static in more detail.

Some of you may have declared instance variables without ```public``` or ```private``` modifiers.  For example, you may have done something like the following.

```java
public class Person {

   String name;
   int age;
   String friends;

// ... more code

}
```

Omitting both ```public``` and ```private``` modifiers essentially creates a ```private``` variable for the purposes of this course.  There is a subtle difference between ```private``` and no modifer, but we do not study the difference in this course.  Java also has the ```protected``` modifier that we do not study in this course.  

For this course, you only need to understand ```public``` and ```private```.

For those interested in additional access techniques, you can study [Controlling Access to Members of a Class](https://docs.oracle.com/javase/tutorial/java/javaOO/accesscontrol.html).  You will notice this section discusses ```package```s, which we study in [Packages, Intefaces, ADTs](/gustycooper.github.io/mydoc_8_packages_ADT).

