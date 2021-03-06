---
title: Java Strings
tags: [object, class]
keywords: objects, simple objects
last_updated: May 21, 2016
summary: "<li>Understand Java Strings</li> <li>Understand Java Strings are a reference type - not a primitive type.</li> <li>Understand the details of declaring variables, allocating objects, and using objects of type String.</li> <Understand Java Strings have a set of values and a set of operations.</li> <li>Understand instance methods.</li> <li>Understand how to call String instance methods</li>"
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

In computer programming a string is a collection of readable characters.  For example, “This document is our handout” is a ```String``` literal.  ```String``` variables are variables that hold strings.  Strings and variables of type ```String``` are (probably) the most used literals and data types in programming.  I suppose that if you are creating a mathematical model, numbers may outnumber strings.  

## Java ```String```s - Reference Type and Objects

```String``` variables and literals refer to objects.  An object has state and behavior information.  

* **state** - the value of the ```String```.  A ```String``` has one instance variable that contains the value.
* **behavior** - operations/methods that produce a new ```String```.  These methods are called instance methods.  For examples,
  * ```+``` - concatenation operation
  * ```toLowerCase``` - method that produces a new ```String``` that is the lowercase of the current string.
  * ```equals``` - method that compares one ```String``` to another.
  * In general, ```String``` methods will do such things as extract substrings, capitalize, and compare equality.

Recall the meta language for declaring variables is the following.

The meta language for declaring variables of primitvie types is the following.

<div class="alert alert-info" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Java's Declarartion Statement
</b>
<br>
<pre>
&lt;type-name&gt; &lt;variable-name&gt; [= &lt;exp&gt;];
</pre>
</div>

We have declared primitive type variables and variables of type ```String``` and ```Scanner```.  Consider the following two variable declarations that we will use to discuss differences.

```java
int number = 12;
String day = "Monday";
```

The variable ```number``` is a primitive type that occupies four bytes of memory, which contains ```0b00000000_00000000_00000000_00001100```.  The variable ```number``` does not contain state and behavior.  The variable ```number``` simply contains an ```int```.  

The variable ```day``` is a reference type that occupies four bytes of memory, which references a ```String``` object.  The ```String``` object is located in *heap* memory.  The ```String``` object that contains *state*, which is the string ```"Monday"``` along with *behavior* in the form of various ```String``` methods such as ```toLowerCase```, ```toUpperCase```, and ```equals```.

The following figure provides a visual for ```number```, ```day```, and memory.

![Primitive and Reference Memory](../images/numberDayMemory.png "Primitive and Reference Memory")

## Accessing ```String``` Methods

The behavior of objects is provided as methods that you call.  The following code demonstrates calling of two ```String``` methods, ```toLowerCase``` and ```toUpperCase```, along with the ```String``` concatenation operation..

```java
String gustysFriends = "";  // Gusty does not have friends.
String friend1 = "Zac";
String friend2 = "Coletta";
gustysFriends = friend1.toLowerCase() + " " + friend2.toUpperCase();
```
Notice this is like a normal method call with the variable name prepended.  The following meta language shows a calling a method of an object, where the variable name is preprended.

<div class="alert alert-info" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Object Method Call
</b>
<br>
<pre>
&lt;object-variable-name&gt;.&lt;object-method-name&gt; ( &lt;actual-parameter-list&gt; )
&lt;method-name&gt;
   any Java identifier that matches the name of a defined method
&lt;actual-parameter-list&gt; 
   &lt;actual-parameter-exp&gt;, ..., &lt;actual-parameter-exp&gt; 
&lt;actual-parameter-exp&gt;
   any Java expression that evaluates to the type of the corresponding actual parameter
</pre>
</div>

## Java Strings and the new operator

As we have learned, Java ```String```s are defined in a class, which is used to declare variables of type ```String```.  The ```String``` class is defined in the ```java.lang``` package, which does not require an ```import``` statement.  Variables of type ```String``` refer to objects that are allocated on *heap* memory.  All objects, except ```String``` objects, are allocated using the ```new``` operator.  Since ```String```s are used so much, Java provides allows you to allocate a ```String``` object without the ```new``` operator, which is what we have been doing.    Consider the following two ```String``` declaration statements.  They both declare a variable of type ```String```, create a ```String``` object that has ```“Gusty”``` as it *state* information.  The first declaration statement uses the ```new``` operator.  The second declaration statement is much simpler and is what you typically use/encounter.  The third statement is a assignment statement that demonstrates concatenating a ```String``` variable, ```String``` literal, and a ```String``` object created with ```new```.

```java
String name1 = new String("Gusty");
String name2 = "Gusty";
name2 = name2 + " " + new String("teaches");
```

In the next three sections of this module, we will use the ```new``` operator to allocate ```Scanner``` objects, for ```Random``` objects, and objects of ```class```es we define.  All Java classes except ```String``` have to use the ```new``` operator to allocate their objects.  The ```new``` operator is applied to a ```class``` **constructor**, which we learn how to create in [Our First Classes](/gustycooper.github.io/mydoc_3_our_first_classes).  

## Java String Equality

In the Expression module, we studied the equality operators (```==``` and ```!=```).  The equality operators compare values in memory, and they works as you would expect for primitive types.  For reference types, equality operators do not work in most cases.  Consider the following figure that shows two ```int```s and two ```String```s.  
![String Equality](../images/day1day2Memory.png "String Equality")

The memory allocated to ```number1``` and ```number2``` both contain ```12```, which means that ```number1 == number2``` is ```true```.  The memory allocated to ```day1``` and ```day2``` reference two different ```String``` objects.  ```day1``` contains 131076 (0x20004) and ```day2``` contains 196612 (0x30004), which means ```day1 == day2``` is false.  ```String```s provide the ```equals``` method that should be used when comparing ```Strings```.  The following are examples of using ```equals```.

```java
day1.equals(day2)     // evaluates to true
day2.equals(day1)     // evaluates to true
!day1.equals(day2)    // evaluates to false
day2.equals("Monday") // evaluates to true
```

Java will reuse ```String``` literals.  If you declare several ```String``` variables and assign them the same ```String``` literal, Java does not create a new ```String``` object for each literal.  In this case each ```String``` variable contains the same reference (or address).  This Java optimization results in ```==``` returning ```true``` for these variables.  Do not fall into this trap because you will create some code that works and some that does not.  Always use ```equals``` with ```String```.  The following code shows a couple of examples.

```java
String one = "one";
String oneA = "one";
one == oneA  // evaluates to true

Scanner in = new Scanner(System.in);
String oneB = in.nextLine();  // assume the user types one
one == oneB  // evaluates to false 
```

## Java String Methods

The following are some of Java String methods.  In the following examples, s1 and s2 are variables of type String

* ```char charAt(int index)``` - returns ```char``` at index 
  * ```s1.charAt(N)```, returns ```char``` – the Nth character in the string where ```s1.charAt(0)``` is 1st, ```s1.charAt(1)``` is 2nd, and so on. The las position is ```s1.length() - 1```.  ```"cat".charAt(1)``` is ```’a’```.  An error occurs if the value of the parameter is less than zero or is greater than or equal to ```s1.length()```.
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
* ```boolean contains(String s)``` - returns ```true``` if string contains s 
  * ```"Gusty".contains("us") returns ```true```
* ```boolean equals(String s)``` - returns ```true``` if string equals s 
  * ```s1.equals(s2)``` returns boolean – ```true``` if ```s1``` and ```s2``` contain the same sequence of characters, and returns false otherwise.
  * ```"Gusty".equals("Gusty")``` returns ```true```
  * ```"Gasty".equals("Gusty")``` returns ```false```
* ```int indexOf(String s [,fromIndex])``` - returns index of ```s``` 
  * ```s1.indexOf(s2)``` returns integer. If ```String s2``` occurs is substring of ```s1```, then the returned value is the starting position of that substring. Otherwise, the returned value is -1. You can also use ```s1.indexOf(ch)``` to search for a ```char, ch```, in ```s1```. To find the first occurrence of x at or after position N, you can use ```s1.indexOf(x,N)```. To find the last occurrence of ```x``` in ```s1```, use ```s1.lastIndexOf(x)```.
* ```boolean isEmpty()``` - returns ```true``` if string is ```""```
  * ```""```.isEmpty() returns ```true``` 
  * ```"Hello"```.isEmpty() returns ```false``` 
* ```int length()``` - returns number of characters in string 
  * ```s1.length()```, returns the number of characters in ```s1```.
  * ```"1234567".length()``` returns 7.
* ```String replace(String s, String t)``` - returns string where ```t``` replaces ```s``` 
  * Replace does not change a ```String```.  Replace creates a new ```String``` object.
  * ```String newString = "Gusty".replace("us", "1234");``` - ```newString``` is ```"G1234ty"```.
* ```String substring(int begin)``` - returns substring from begin to length 
* ```String substring(int begin,int end)``` - returns substring from begin to end 
  * s1.substring(N,M)```, returns ```String```, which is the characters of ```s1``` in positions N through M-1, and the character in position M is not included. The method ```s1.substring(N)``` returns the substring of ```s1``` consisting of characters starting at position N up until the end of the string.
  * ```"Gusty".substring(0,5)``` returns ```"Gusty"```.  You should notice ```'y'``` is in postion 4 - ```"Gusty"```.charAt(4) returns ```'y'```.  Calling ```substring``` with parameters 0 and 5 indicates to get characters from postion 0 through 4.
* ```char[] toCharArray()``` - returns ```char[]``` of string 
* ```String toLowerCase()``` - returns lowercase of string 
* ```String toUpperCase()``` - returns uppercase of string 
  * ```s1.toUpperCase()``` returns ```String``` – returns a new string that is the uppercase of to ```s1```,.  ```"Cat".toUpperCase()``` is the ```string "CAT"```.  ```s1.toLowerCase()``` is the lowercase equivalent.

## New Java Strings Are Created More Than You May Think

Consider the following statements manipulating Strings.

1. ```String s = "A string";```
2. ```s = "B string";```
3. ```String t = s.toUpperCase();```
4. ```s = t.substring(0,1);```

Java will create the following strings: ```"A string"```, ```"B string"```, ```"A STRING"```, and ```"B"```.  Key concepts to remember are the following.

* When the assignment statement in 2 is executed, the string ```"A string"``` is lost in memory.  Eventually, the Java garbage collector will return that memory for reuse.
* The ```s.toUpperCase()``` in statement 3 does not change the value of ```s```.  This computes a new string which is returned and assigned to ```t```.
* The ```t.substring(0,1)``` also computes a new string (```"B"```) that is assigned to ```s```.

## Java Strings are Immutable

Java Strings are **immutable**.  Immutable means cannot be changed.  Sometimes code appears as if it is changing a ```String``` when it is actually allocating a new ```String``` object and assigning a new reference value to the ```String``` variable.

```java
String s = "I am Gusty";
s = "I am also Cooper"; // a new String object assigned to s
```

We have learned the variable ```s``` references a ```String``` object.  We can change the value of ```s``` so it references a new object, but we are not changing the ```String``` ```"I am Gusty"```.  The following figure demonstrates this.  The dashed arrow shows ```s``` referencing ```"I am Gusty"```.  The solid arrow shows ```s``` referencing ```"I am also Cooper"```.

![String Immutable](../images/stringsImmutable.png "String Immutable")

## Instance Variables and Methods

The term **instance** is used to indicate attributes that are availble in each object.  An object is an instance of a particular class.  For example, a ```String``` object is an instance of a ```String``` class.  A class has instance variables and instance methods.  A ```String``` has one instance variable, which contains the value of the ```String```.  A ```String``` has many instance methods.  We have discussed some of the most used in this section.  We will study instance variables and methods in more detail when we create our own class.

## Converting Between Strings and Numbers

Java provides object wrapper classes for the primitive types.   For example, ```Double``` is the object wrapper class for ```double```.  You can use object wrapper classes with primitive literals so they appear to be primitive types.  In [ArrayLists](/gustycooper.github.io/mydoc_6_arraylists) we learn that ```ArrayLists``` cannot be used to store primitive types, and we will use object wrapper classes.  The following code shows several object wrapper classes used.  Line 1 creates a variable of type ```Integer``` and allocates an object that contains ```5```.  The object referenced by ```i``` is used in line 2 as if it is a primitive variable.  Lines 3 and 4 show similar ideas with the ```Double``` wrapper class.  Java performs [Autoboxing](https://docs.oracle.com/javase/tutorial/java/data/autoboxing.html) to easily convert between wrapper classes and primitive types.  Lines 1 and 3 **box** a primitive type into a wrapper class.  Lines 2 and 4 unbox a wrapper class value to a primitive type.

```java
1 Integer i = 5;  // i is an object
2 int j = i + 1;
3 Double d = 3.3;
4 double x = d * 3;
```

The Java object wrapper classes contain methods for [converting between numbers and ```Strings```](https://docs.oracle.com/javase/tutorial/java/data/converting.html).  The following code demonstrates converted a string to an ```int```.

### Converting a String to a Number

```java
Integer x = Integer.valueOf(str);
// or
int y = Integer.parseInt(str);
```

There is a slight difference between these methods.

* ```valueOf``` returns new instance of the object wrapper class ```java.lang.Integer```.
* ```parseInt``` returns primitive ```int```.

The same is for all wrapper classes, such as ```Short.valueOf```, ```Short.parseShort```, ```Long.valueOf```, ```Long.parseLong```, and so on.

### Converting a Number to a String

The simplest way to convert a primitive type number to a ```String``` is use the primitive type as part of ```String``` concatenation.

```java
int i = 30;
String s = "" + i;
```

The Java object wrapper classes has a ```toString``` method which can also be used.

```java
int i =  42;
double d = 5.4;
String s = "" + i; // concatenate i to an empty String
String s1 = Integer.toString(i);
String s2 = Double.toString();
```

## Numbers and Strings

The Java Tutorial [Numbers and Strings](https://docs.oracle.com/javase/tutorial/java/data/index.html) provides a nice overview of numbers and strings.  The tutorial contains a nice section on [printing numbers](https://docs.oracle.com/javase/tutorial/java/data/numberformat.html).

