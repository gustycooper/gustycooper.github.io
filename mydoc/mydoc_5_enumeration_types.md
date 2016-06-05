---
title: Enumeration Types
tags: [class, object]
keywords: enumeration
last_updated: June 1, 2016
summary: "Enumeration Types"
sidebar: mydoc_sidebar
permalink: /mydoc_5_enumeration_types/
---

## Enumeration Type

An enumeration type allows you to enumerate specific values for a type.  Suppose you wanted a type Coin, whose values are PENNY, NICKLE, DIME, QUARTER.  In Java you declare this enumeration type and a variable of this type as follows.

Public enum Coin {PENNY, NICKLE, DIME, QUARTER};
Coin myCoin  = Coin.PENNY;

Other good examples of enumeration types are days of the week, seasons, and months.

An enumeration type can be used with a switch statement.  The following in an example.

```java
switch (myCoin) {
  case PENNY:
     // do something
    break;
  case NICKLE:
    // do something
    break;
  …
  case QUARTER:
    // do something
    break;
  default:
    // do something
    break;
}
```

## Enumeration Type Meta-language

The meta-language for an enumeration type along with another example is given by the following.

```java
enum <enum-type-name> { <list-of-enum-values> }
enum Season { SPRING, SUMMER, FALL, WINTER }
Season vacation;
vacation = Season.SUMMER;

## Enumeration Type – Dog and DogType Example

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

