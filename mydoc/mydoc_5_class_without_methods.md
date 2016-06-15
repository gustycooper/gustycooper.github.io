---
title: Class without Methods
tags: [class, object]
keywords: class, method
last_updated: June 12, 2016
summary: "<li>Understand classes can be defined without methods.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_5_class_without_methods/
---

## Class without Methods

In [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects) all of our classes contained instance variables, constructors, and instance methods.  We can define a class that only contains instance variables.  In doing this, the instance variables must be ```public``` in order for those using the type to access the instance variables.  Suppose I want to manipulate the name and age of people, but I do not want methods.  I can do this with a class defining a ```Person``` type that has two ```public``` instance variables, ```name``` and ```age```.  I do not need to include a constructor.  Java provides a default constructor allocates a ```Person``` and assigns 0 and ```null`` to the instance variables.  The following demonstrates this technique. 

```java
public class Person {
   public String name;
   public int age;
}

public static void main(String[] args) {
   Person p = new Person();
   p.name = "Gusty"
   p.age = 22;
   Person q = new Person();
   q.name = "Coletta";
   q.age = 2;
   if (p.age > 21)
      System.out.println(p.name + " can drink wine.");
   Person r = q;
   System.out.println(r.name + " is " + r.age + " years old.");
}
```


