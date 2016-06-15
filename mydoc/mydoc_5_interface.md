---
title: Interface
tags: [class, object]
keywords: interface
last_updated: June 14, 2016
summary: "<li>Understand a Java interface.</li> <li>Understand a Java interface contains method signatures, but does not contain code.</li> <li>Understand how to write a class that implements a Java interface.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_5_interface/
---

## Interfaces (Eck 5.7)

A Java ```interface``` is like a Java ```class```, but an ```interface``` contains method signatures without their code.  A Java ```interface``` is placed in a ```.java``` file just like a ```class```.  Both BlueJ and Netbeans provide the option to create an ```interface``` type file.  Once ```interface```s are defined, ```class```es ```implement``` an ```interface```s.  The ```interface``` concept forces all implementations to include all methods of the ```interface``` or the ```class``` does not compile.  The Battleship project defines an ```interface```.  All students implementing the Battleship project must conform to this ```interface```.  

The following shows a ```PersonInterface``` and a ```Person``` that implements the ```PersonInterface```.  The ```Person``` class looks exactly like code we have created in the past except the first line begins ```public class Person implements PersonInterface```.  If ```Person``` does not include instance methods ```getName``` and ```setName``` with the same signatures as defined in ```PersonInterface```, ```Person``` does not compile.

```java
public interface PersonInterface {
   public void setName(String firstName, String lastName);
   public String getName();
}

public class Person implements PersonInterface {
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
}
```

