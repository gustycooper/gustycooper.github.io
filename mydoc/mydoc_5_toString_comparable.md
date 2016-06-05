---
title: toString, comparable
tags: [class, object]
keywords: toString, comparable
last_updated: June 1, 2016
summary: "toString, comparable"
sidebar: mydoc_sidebar
permalink: /mydoc_5_toString_comparable/
---

## toString

## Enumeration Type with toString

As we have learned a data type is a set of values and a set of operations.  An enumeration type is a set of values.  You have to add the operations.  The following example shows a class Dog that defines an enumeration type DogType.  The Dog constructor requires you to provide a name, type, and age.

```java
public class Dog {
    public enum DogType { POODLE, GERMAN_SHEPARD, HOUND };
    private String name;
    private int age;
    private DogType type;
    public Dog(String name, int age, DogType type) {
        this.name = name;
        this.age = age;
        this.type = type;
    } 
    public String getName() { return this.name;}
    public DogType getType() {return this.type;}
    public int getAge() {return this.age;}
}
```

The following code demonstrates how to use the Dog class with its DogType enumeration type.

```java
Dog d = new Dog("Gusty", 5, Dog.DogType.HOUND);
switch (d.getType()) {
    case HOUND:
        System.out.println(d.getName() + " is a " + Dog.DogType.HOUND.toString());
        break;
    default:
        System.out.println(d.getName() + "is a dog of some type");
        break;
}
```

## comparable
