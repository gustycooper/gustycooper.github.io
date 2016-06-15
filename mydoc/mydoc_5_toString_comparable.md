---
title: toString, comparable
tags: [class, object]
keywords: toString, comparable
last_updated: June 14, 2016
summary: "toString, comparable"
sidebar: mydoc_sidebar
permalink: /mydoc_5_toString_comparable/
---

## ```toString``` Method

The ability to concatenate a ```String``` and some other type is a handy operation.  Likewise the ability to print a type is handy.  Java converts primitive types to a ```String``` when they are concatenated to a ```String```.  Primitive types are converted to a ```String``` when they are printed.

```java
int age = 22;
String name = "Gusty";
String s = "Person: " + name + " is " + age;
System.out.println(101); //  101 converted to string
```

Java provides the ```toString``` method for classes, which is called whenever an object needs to be converted to a ```String```.  The default ```toString``` for an object returns a ```String``` that is ```"ClassName@721fab79"``` where ```ClassName``` is  class name of the object and ```721fab79``` is the address in memory of object.  In the following code snipped, ```toString``` is called on lines 2 and 3.  Both ```println``` statements print the same information, which is something similar to ```Person@721fab79```.

```java
 1 Person p = new Person("Gusty", "Cooper", 22);
 2 System.out.println(p);
 3 String s = "" + p;  // toString is called
 4 System.out.println(s);
```

You can change the default behavior of ```toString``` by adding a ```toString``` method defintion to a class.  The following code demonstrates overriding the default behavior of ```toString```.  In [Subclasses](/gustycooper.github.io/mydoc_5_subclasses) we learn that Java defines the ```toString``` method in the ```Object``` class, which makes it available in user defined classes.  Using the following ```Person``` class in the previous code snippet, both ```println``` statements print ```Gusty Cooper```.

```java
public class Person {
    private String firstName;
    private String lastName; 
    private int age;
    
    public Person(String firstName, String lastName, int age) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }
    
    public String getName() {
        return firstName + " " + lastName;
    }
    
    public void setName(String firstName, String lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }
    
    @Override
    public String toString() {
        return this.firstName + " " + this.lastName;
    }
}
```

## Enumeration Type with ```toString```

You can use ```toString``` on values of enumeration types.  The following example shows a class ```Dog``` that defines an enumeration type ```DogType```. ```main``` uses the enumeration ```toString``` as ```Dog.DogType.HOUND.toString()```.

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

public static void main(String[] args) {

   Dog d = new Dog("Gusty", 5, Dog.DogType.HOUND);
   switch (d.getType()) {
      case Dog.DogType.HOUND:
         System.out.println(d.getName() + " is a " + Dog.DogType.HOUND.toString());
         break;
      default:
         System.out.println(d.getName() + "is a dog of some type");
         break;
   }
}
```

## ```comparable``` Interface

Java defines the ```comparable``` Interface, which consists of one method ```compareTo```.  Many classes implement the ```comparable``` interface.  In [Java Strings](/gustycooper.github.io/mydoc_3_strings), we compared ```String``` literals as variables.

* ```int compareTo(String anotherString)``` - returns ```int``` indicating equal, less than, or greater than.
  * ```s1.compareTo(s2)``` If ```s1``` and ```s2``` are the same string, the value returned is zero. If ```s1``` is less than ```s2```, the value returned is negative. If ```s1``` is greater than ```s2```, the value returned is positive.  If both of the strings consist entirely of lower case letters, or if they consist entirely of upper case letters, then “less than” and “greater than” refer to alphabetical ordering. Otherwise, the ordering requires understanding Unicode encoding of characters.
  * The ordering of ```String```s is somewhat intuitive.  You compare character by character of two ```String```s until you reach two characters that are different.
    * A < B
    * AA < AB
    * GUSTY < GUTTY
  * Comparing ```String```s with mixed case, numbers, spaces relies upon the Unicode encoding we studied in [Characters as Information](/gustycooper.github.io/mydoc_1_characters).  You should recall that ```'Z'``` is encoded as 90 and ```'a'``` is incoded as 97.
    * Z < a
    * Gusty < gusty
  * ```"Gusty".compareTo("Gusty")``` returns 0
  * ```"Gasty".compareTo("Gusty")``` returns negative
  * ```"Gusty".compareTo("Gasty")``` returns positive
  * ```"Gusty".compareTo("1")``` returns positive

To implement the ```comparable``` interface, you have to add a ```compareTo``` method to your class that returns 0 for equal, negative for less than, and positive for greater than.  The ```compareTo``` method has a formal parameter of type ```Object```, which causes the code to have a somewhat tricky cast operation that casts the ```Object``` to the type of your class.  The following demonstrates a ```Person``` class implementing the ```comparable``` interface.  


```java
public class Person implements Comparable {
    private String firstName;
    private String lastName; 
    private int age;
    
    public Person(String firstName, String lastName, int age) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }
    
    public String getName() {
        return firstName + " " + lastName;
    }
    
    public void setName(String firstName, String lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }
    
    @Override
    public int compareTo(Object o) {
        String compare1 = this.lastName + this.firstName;
        String compare2 = ((Person)o).lastName + ((Person)o).firstName;
        return compare1.compareTo(compare2);
    }
}
```
