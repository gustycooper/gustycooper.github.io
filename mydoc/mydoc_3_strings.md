---
title: Java Strings
tags: [object, class]
keywords: objects, simple objects
last_updated: May 21, 2016
summary: "<li>Understand Java Strings</li> <li>Understand Java Strings are a reference type - not a primitive type.</li> <Understand Java Strings have a set of values and a set of operations.</li> <li>Understand instance methods.</li> <li>Understand how to call String instance methods</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_3_strings/
---

## Java ```String```s Review (Eck 2.3.3)

We have used ```String```s in early programs.  The following highlights our knowledge from [Our First Java Programs](/gustycooper.github.io/mydoc_1_first_programs).

* A ```String``` is probably the most used data type in programming.  If you are creating a mathematical model, numeric types may outnumber ```String```s.
* A ```String``` is not a Java primitive type.
* A ```String``` is a sequence of characters.  A ```String``` is not a ```char```.  A ```char``` is a single character.  You should realize that ```'a'``` is a ```char``` literal and ```"a"``` is a ```String``` literal.  ```'a'``` and ```"a"``` are two different literals.  
* A ```String``` literal is a sequence of characters enclosed in the double tic-mark quotation, e.g., ```"Gusty"```.
* ```String``` variables are declared just like variables of primitive types.

```java
String s; // declare a String variable
int i;    // declare a primitive type variable
String gusty = "Gusty"; 
int j = 21;
```

* ```String```s are concatenated with the ```+``` operator, and primitive types are converted to ```String```s when used in concatenation.  A concatenation expression must include at least one operand that is type ```String```.

```java
String cpsc = "CPSC";
int twentyTwo = 22;
String cpsc220 = cpsc + " " + twentyTwo + 0;
```

In computer programming a string is a collection of readable characters.  For example, “This document is our handout” is a string literal.  String variables are variables that hold strings.  Strings and variables of type String are (probably) the most used literals and data types in programming.  I suppose that if you are creating a mathematical model, numbers may outnumber strings.  

## Java ```String```s - Reference Type and Objects

```String``` variables and literals refer to objects.  The object has state and behavior information.  

* **state** - the value of the ```String```
* **behavior** - operations/methods that produce a new ```String```.  For examples,
  * ```+``` - concatenation operation
  * ```toLowerCase``` - method that produces a new ```String``` that is the lowercase of the current string.
  * ```equals``` - method that compares one ```String``` to another.

## Accessing ```String``` Methods

The following code demonstrates use of ```String``` methods.

```java
String gustysFriends = "";  // Gusty does not have friends.
String friend1 = "Zac";
String friend2 = "Coletta";
gustysFriends = friend1.toLowerCase() + friend2.toUpperCase();
```

contains the current value of the ```String```.
A Java ```String``` is a reference type, which means that ```String``` variables and literals reference an object in memory.

## SO.11.1 Java Strings are Objects (Eck 2.3.3)

In Java the type String is a Java class, which means that variables of type String are objects.  This means that (1) Strings are references and (2) Strings have instance variables and methods.  A string instance variable is simply the literal string that is stored in it.  When you use a String variable name, you access the instance string.  String methods will do such things as extract substrings, capitalize, and compare equality.  Java has included some nice syntactical short cuts for assigning strings.  Consider the following two String variable declarations and initial assignments.  The both declare a variable of type String assign the string literal “Gusty” to the variable.  The second one is much simpler and what you will always encounter/use.

{% raw %}
```java
String name1 = new String("Gusty");
String name2 = "Gusty";
```
{% endraw %}

## SO.11.2 Java String Equality

The fact that Strings are objects means that they follow the same pattern as shown in Figure SO-11.  Declaring a String variable allocates memory that contains a reference to the String object.  The first impact of this is how you compare two strings for equality.  The Java equality operator is ==, and if I have two variables i and j of type int, their memory locations contain their actual values so I can compare them as follows.

{% raw %}
```java
i == j
```
{% endraw %}

For the two above Strings name1 and name2, their memory locations contain a reference to their values.  In other words, their memory locations contain an address of their values.  The means that the following comparison

{% raw %}
```java
name1 == name2
```
{% endraw %}

is comparing two addresses.  Sometimes this works and provides the result you are expecting – for example true for name1 == name2 because they both reference “Gusty”; however, Java does not guarantee it will work.  When it does work you are simply lucky.  The correct way to compare two Strings for equality is to use the equalTo() method, which is shown as follows.

{% raw %}
```java
name1.equals(name2)
```
{% endraw %}

## SO.11.3 Java Strings and Concatenation

Java uses the + operator to concatenate strings.  Concatenate means to stick two strings together.  The following is a simple example.

{% raw %}
```java
String t = "Gusty" + " " + "Cooper";
```
{% endraw %}

Of course the above example is illustrative, but rather silly because I could have easily done the following

{% raw %}
```java
String t = "Gusty Cooper";
```
{% endraw %}

The better use is when you have a variable or two variables and you concatenate them together.  I will use the String variable t from above along with a couple of other String variables to demonstrate.

{% raw %}
```java
String u = “is teaching CPSC-220.”
String v = t + “ “ u;
```
{% endraw %}

We will also learn that Java provides toString() conversion methods for most of the language types and objects.  This will allow us to use string concatenation as follows.

{% raw %}
```java
int age = 22;
String t = "Gusty is " + age + “ years old”;
```
{% endraw %}

## SO.11.4 Java String Methods

The following are some of the Java String methods.  In the following examples, s1 and s2 are variables of type String

* s1.equals(s2) returns boolean– true if s1 and s2 contain the same sequence of characters, and returns false otherwise.
* s1.equalsIgnoreCase(s2) returns boolean  like equals but ignores case.   “cat”.equals("Cat") is false, while “cat”.equalsIgnoreCase("Cat") is true.
* s1.length(), returns the number of characters in s1.
* s1.charAt(N), returns char – the Nth character in the string where s1.charAt(0) is 1st, s1.charAt(1) is 2nd, and so on. The las position is s1.length() - 1.  "cat".charAt(1) is ’a’.  An error occurs if the value of the parameter is less than zero or is greater than or equal to s1.length().
* s1.substring(N,M), returns String, which is the characters of s1 in positions N through M-1, and the character in position M is not included. The subroutine s1.substring(N) returns the substring of s1 consisting of characters starting at position N up until the end of the string.
* s1.indexOf(s2) returns integer. If String s2 occurs is substring of s1, then the returned value is the starting position of that substring. Otherwise, the returned value is -1. You can also use s1.indexOf(ch) to search for a char, ch, in s1. To find the first occurrence of x at or after position N, you can use s1.indexOf(x,N). To find the last occurrence of x in s1, use s1.lastIndexOf(x).
* s1.compareTo(s2) is an integer-valued function that compares the two strings. If the strings are equal, the value returned is zero. If s1 is less than s2, the value returned is a number less than zero, and if s1 is greater than s2, the value returned is some number greater than zero. (If both of the strings consist entirely of lower case letters, or if they consist entirely of upper case letters, then “less than” and “greater than” refer to alphabetical order. Otherwise, the ordering is more complicated.)
* s1.toUpperCase() returns String – returns a new string that is the uppercase of to s1,.  "Cat".toUpperCase() is the string "CAT".  s1.toLowerCase() is the lowercase equivalent.
* s1.trim() returns String – returns a new string that is s1 with non-printing characters such as spaces and tabs trimmed from the beginning and from the end of the string.   "  fred ".trim() is the string "fred"

## SO.11.5 New Java Strings Are Created More Than You May Think

Consider the following statements manipulating Strings.

1. String s = “A string”;
2. s = “B string”;
3. String t = s.toUpperCase();
4. s = t.substring(0,1);

Java will create the following strings: “A string”, “B string”, “A STRING”, and “B”.  Key concepts to remember are the following.
* When the assignment statement in 2 is executed, the string “A string” is lost in memory.  Eventually, the Java garbage collector will return that memory for reuse.
* The s.toUpperCase() in statement 3 does not change the value of s.  This computes a new string which is returned and assigned to t.
* The t.subString(0,1) also computes a new string (“B”) that is assigned to s.

## SO.11.6 Java Strings are Immutable

Java Strings are immutable.  The term immutable means cannot be changed; however, we can do the following, which looks like we are changing a String.

{% raw %}
```java
String s = “I am Gusty”;
s = “I am also Cooper”;
```
{% endraw %}

Since Strings are objects, the variable s is a reference to the object.  We can change the address the s references, but we have not changed the original String “I am Gusty”.  We have simply changed s so that it references a new string.  This can be seen in the following diagram.
 
Figure SO-13 Strings Are Immutable


