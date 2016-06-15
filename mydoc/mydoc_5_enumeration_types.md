---
title: Enumeration Types
tags: [class, object]
keywords: enumeration
last_updated: June 1, 2016
summary: "<li>Undersand how to define an enumeration type.</li> <li>Understand how to use an enumeration type.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_5_enumeration_types/
---

## Enumeration Type – ```Dog``` and ```DogType``` Example

A data type is a set of values and a set of operations.  An enumeration type is a set of values.  You have to add the operations.  An enumeration type allows you to enumerate specific values for a type.  Suppose we need to write a program for veternarian that enumerates the various dogs that visit.  We can choose ```String``` to capture the various dog types.  For example, ```"Poodle"```, ```"German Shepard"```, ```"Hound"```, and so on.  Using this approach, we declare variables of type ```String``` to capture the dog type.

'''java
String dogType = "Poodle";
```

The problem with this design decision is the variable ```dogType``` can be ```"The world is round."```, which is not a dog type.  A Java enumeration type allows you to define a type that has specific enumerated values.  Variables of enumeration types can only be assigned these enumerated values.  We can force a variable to be ```POODLE```, ```HOUND```, etc.  The following example shows a class ```Dog``` that defines an enumeration type ```DogType```.  The ```Dog``` constructor requires you to provide a name, type, and age, where the type is the ```enum DogType```. 

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

The following code demonstrates how to use the ```Dog``` class with its embedded ```DogType``` enumeration type.  Pay attention to the dotted notation in ```Dog.DogType.HOUND```.  The ```Dog.``` selects the ```Dog``` class.  The ```DogType.``` selects the ```enum DogType``` that is in ```Dog```, and the ```HOUND``` selects a specifice enumeration value of ```DogType```.

```java
public class EnumDemo {
   public static void main(String[] args) {
      Dog d = new Dog("Gusty", 5, Dog.DogType.HOUND);
      if (d.getType() == Dog.DogType.HOUND) {
            System.out.println(d.getName() + " is a " + Dog.DogType.HOUND.toString());
      else
            System.out.println(d.getName() + "is a dog of some type");
   }
}
```

## Enumeration Type in its Own ```.java``` File

Enumeration types can be placed in their own ```.java``` file.  For example, place ```DogType``` in the file ```DogType.java```. Both BlueJ and Netbeans provide the option to create an enumeration type file.

## Enumeration Type Meta-language

The meta-language for an enumeration type along with another example is given by the following.

```java
enum <enum-type-name> { <list-of-enum-values> }
enum Season { SPRING, SUMMER, FALL, WINTER }
Season vacation;
vacation = Season.SUMMER;
```

## Enumeration Type and Switch Statements

Suppose you wanted an enumeration type ```Coin```, whose values are ```PENNY```, ```NICKLE```, ```DIME```, ```QUARTER```.  In Java you declare this enumeration type and a variable of this type as follows.

```java
Public enum Coin {PENNY, NICKLE, DIME, QUARTER};
Coin myCoin  = Coin.PENNY;
```

Other good examples of enumeration types are days of the week, seasons, and months.

An enumeration type can be used with a switch statement.  The following in an example.

```java
double pocketChange = 0;
switch (myCoin) {
  case Coin.PENNY:
    pocketChange++;
    break;
  case Coin.NICKLE:
    pocketChange += 5;
    break;
  case Coin.DIME:
    pocketChange += 10;
    break;
  case Coin.QUARTER:
    pocketChange += 25;
    break;
}
```

