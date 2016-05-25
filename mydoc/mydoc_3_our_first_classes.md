---
title: Our First Classes
tags: [object, class]
keywords: objects, simple objects
last_updated: May 21, 2016
summary: "<li>Understand how to define types in a Java class</li> <li> MORE </li>"
sidebar: mydoc_sidebar
permalink: /mydoc_3_our_first_classes/
---

## SO.6 Defining a Class and Declaring an Object of the Type Class (Eck 2.3.2)

The first step is to demonstrate the mechanics of defining a data type in a class and then declaring a variable of that type.  All code in Java must be in a class.  The name of the file and class must match.  Since we are using an IDE for our programming, for the most part the IDE will ensure the file name and class name match.  The following example demonstrates defining a data type Person and then declaring a variable of type Person.   In this introductory example of declaring a variable of type Person, all of the details have been omitted.

```java
public class Person {
…
}

Person p; // declares a variable p of type Person
```

You should notice we have declared a variable of type Person just like we declared variable of type int, float, double, etc.  We are simply following the meta-language of a variable declaration.

```
<type-name> <variable-name-or-names>;
```

Before you can declare a variable of type Person, you have to define the class Person.  The above example omitted the details of the class definition.  The meta-language for defining a Java class is the following.  Note the following meta-language shows a public static void main() method within the class.  You should recall we did this in our first program.  We will have a public static void main() in many of our programs, but we will not always have a main()  The example we are creating for class Person will not have a main().  We will discuss static methods shortly.

{% raw %}
```java
public class <class-name> {
	<optional-variable-declarations-and-methods>
	public static void main(String[] args) {
		<statements> 
	}
	<optional-variable-declarations-and-methods>
}
```
{% endraw %}


## SO.9 Back to Classes: Defining, Declaring Variables and Constructing Objects

We now return to our Person class from Section SO.6.  This time we will introduce two methods to our class.  One is a special method called a constructor and the other is a method called a getter or accessor.  We first show you the code, and then we will show you how to use it.

{% raw %}
```java
public class Person {
   private int age;  // variable to store the age of a person

   Person(int a) {   // constructor
      age = a;
   }

   public int getAge() {  // getter
      return age;
   }
}
```
{% endraw %}

From SO.6, we know we can declare a variable p of type Person as follows.

```
Person p;
```

The above declaration creates a reference to an object of type Person.  A Person is different than an primitive Java type.  We can add, subtract, multiply, etc. variables of the primitive Java types.  We cannot add, subtract, multiply, etc. variables of type Person.  What can we do with variables of type Person?  For this example we can do two things.

1. We can construct a Person, providing the age of the person when we construct it.  This is done with the method ```Person()```.
2. We can get the age of a Person.  This is done with the method getAge().

An important concept to grasp is the declaration Person p creates a reference to what can be an object of type Person.  At this point, we still do not have an object of type Person.  We have allocated memory that can contain a reference to an object of type Person.  In order to allocate an object of type Person, we have to use the new operator and the Person constructor as follows.

{% raw %}
```java
p = new Person(22); // p references a Person object for a 22 year old
```
{% endraw %}

At this point, the variable p (of type Person) references an object of type Person, and we can use the object in p to do work for us in our programs.  We cannot do much work, because our class does not provide much functionality, but we can do the following.

{% raw %}
```java
int pAge = p.getAge();
```
{% endraw %}

There are a lot of things happening in this simple example.  Let’s take some time to understand all that is happening.  

1. We have defined a class Person, which is a new type that we can use to declare variables.  Recall the meta-language for declaring variables is the following.

```
<type-name> <variable-name-or-names>;
```

Back in section BBDT.15.5 '''<type-name>''' had to be byte, short, int, etc.  Now we are showing we can use our class Person as a '''<type-name>''' as follows.

{% raw %}
```java
Person p;
```
{% endraw %}

2. Our class Person declares one instance variable, age.  Our introductory discussion used the term property to describe attributes that all objects of a particular type share, but Java uses the term instance variable.  We can use either.  You should notice that we used the modifier private in the declaration of the variable age.  Private means that when users declare variables of type Person, they cannot access the instance variable age.  You know that variables of type Person have an age, but you have to use the getter, getAge(), to get the value.  You are not allowed to directly access the instance variable age.
3. Our class Person declares one method, getAge().  You should notice that we used the modifier public in the declaration of the method getAge().  Public means that when users declare variables of type Person, they can access the method getAge().
4. Numbers 2 and 3 get at a fundamental aspect of classes.  You design a class with parts other programmers can see in order to use the class in their code and parts they cannot see.  The parts they cannot see is how you internally implement your class’ algorithms.  You want to programmers to use you class as you desire.  In this case, we do not allow programmers to access the instance variable age directly.  We could allow user’s to access age by declaring it as follows.

{% raw %}
```java
public int age;
```
{% endraw %}

This would allow a user to perform the following.

Person p = new Person(22);
p.age = 50; // access p’s instance variable

5. You should realize that instance variables are unique for each object.  This means the following two Person variables each have an age instance variable.

{% raw %}
```java
Person youngPerson = new Person(22);
Person seniorCitizen = new Person(92);

Of course this makes perfect sense because youngPerson and seniorCitizen  have different ages.
6. Let’s return to the act of declaring a variable p of type Person, which follows the same syntax as declaring a variable of type int.  The declaration

{% raw %}
```java
Person p;
```
{% endraw %}

allocates enough memory to hold a reference to a Person object.  A reference is Java’s way of saying a pointer to a Person object.  Both a reference and a pointer mean that the variable p will contain an address and that address will be where the Person object is allocated in memory.  When you first declare a Person p you do not have a Person object.  You simply have memory with a null pointer – it is not pointing to anything.
7. Java’s new operator allocates memory for the Person object and calls the corresponding constructor to fill that memory with the appropriate values.

{% raw %}
```java
p = new Person(22);
```
{% endraw %}

The above allocates memory for a Person and calls the constructor Person(int a) that puts 22 into the age instance variable.  
8. The following figure demonstrates the ideas discussed in numbers 6 and 7.  Realize the memory addresses are illustrative.

 
Figure SO-12 Object Declaration, Construction and Memory
9. From number 5 you learned that every object of type Person has its own instance variable age.  This allows us to create lots of Person objects and assign their unique age to them.  You may think that every object of type Person has unique methods.  They sort of do and sort of don’t.  A method is code that does not have to be duplicated so we can create one instance of the code.  Each Person object has to reference the method so that both p.getAge() and q.getAge() call the same code that is accessed from two objects.
10. As you can see from this simple example, Java allows us to define our own types.  We do this using a Java class, into which we place instance variables, constructors, and methods.  We then use the class declare variables of type class.  We then use the constructor to construct an object.  Of course we can do both in the same statement shown as follows.

{% raw %}
```java
Person p = new Person(22);
```
{% endraw %}

## SO.10 Java Class Naming Conventions

Java’s convention for naming a class is to capitalize the class name, which we did for the Person class.  The file name for the class must match the class name so in the previous example, the file would have been Person.java.  Normally, you will not have to worry with file names because the IDE’s help keep them straight.


Follow the Java class naming conventions on your labs and projects.


