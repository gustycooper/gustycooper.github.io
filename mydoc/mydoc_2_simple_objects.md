---
title: Simple Objects
tags: [objects]
keywords: objects, simple objects
last_updated: May 1, 2016
summary: "First Introduction to Classes and Objects"
sidebar: mydoc_sidebar
permalink: /mydoc_2_simple_objects/
---

## Simple Objects – An Introduction

Since everything in Java is contained in classes, which are used to create objects, we will study objects right from the start of our class.  Our approach is to understand how we can create our own data types using a Java class, and then use the class to construct objects.  These data types are in addition to the Java primitive Java data types.  Just as an primitive data type has a set of values and set of operations, our data types will have a set of values and a set of operations.  The values will be stored in instance variable and the operations will be performed by instance methods.  We will also learn that Java Strings are a class.  In order to study Java classes and objects first, we will study variable declarations, simple assignment statements, method definitions, method returns, and calling methods.

Objects and object-oriented programming are somewhat of a natural way of thinking about and dissecting a problem.  The world is full of objects, objects align with our way of thinking, objects have attributes (or properties), and we often use objects to do work for us.  We can think of people as an object.  Everyone has shared set of properties – name, age, height, weight, etc.  Each person will have his or her own values for these properties.  We also have ways of getting those properties from others.  For example, when we first meet we may ask someone to provide us with his or her name.  Let’s consider the weather app on our phone as an object.  We use the weather app to get work done for us – namely to see what today’s weather will be.  We do not care how the weather app knows what today’s weather will be (maybe it is just random), but we use the information.    To summarize, objects have properties, objects do work for us, and objects have methods that allow us to interact with their properties and examine their work.

We will create objects in our programs, and these program objects will have properties and methods.  Before we can create objects, we will have to create classes, which are objects with common behavior.  You can think of a generic person as a class and the person Gusty as an object of type person.  We will define Java classes, which will be like a data type, and we will use the Java classes to declare variables, which will be objects of the particular type.

## SO.1 Types (Eck 2.2.2)

We have already studied the Java primitive types.  The main objective of this week is to learn how we can create our own types.

## SO.2 Literals (Eck 2.2.3, 2.2.4)

A literal is something that you know its value upon examination.  For example, the numbers 1, 3.14159, 10000, and 512.12 are literals.  

We will study strings, which also have literals – examples are “Gusty” and “This is a String Literal.”

## SO.3 Identifiers and Keywords

We are going to manipulate data, and we have to give our data names, which will be the name of the variable.  Likewise we have to give our classes and our methods names.  An identifier is the Java term for names.  An identifier is a sequence of one or more characters.  The first character of an identifier must be a letter, a dollar sign ($), or and underscore (_).  The first character cannot be a number.  Subsequence characters can be letter, $, _, or numbers.  Uppercase and lowercase characters are different so the identifiers X and x are two different identifiers.  For the most part, you can select identifiers as needed, but Java has reserved identifiers, which are key words.  For example, class, if, and while are keywords.  
SO.4 Declaring Variables (Eck 2.2.5)
In Java all variables must be declared to be a specific type.  The meta-language for declaring variables is the following.

{% raw %}
```
<type-name> <variable-name-or-names>;
```
{% endraw %}

where '''<type-name>''' is byte, short, char, int, long, float, or double.  We will learn to define our own types, which can be a '''<type-name>'''.  A variable name must begin with a letter and followed by letters, numbers, and underscore.  The following are some example declarations.
 
{% raw %}
```java
int numberOfStudents;
double x, y;
char firstInitial, middleInitial, lastInitial;
byte b;
double principal;    // Amount of money invested.
double interestRate; // Rate as a decimal, not percentage.
```
{% endraw %}

You can also assign a value with the declaration.

{% raw %}
```java
int number = 4;
byte bb = 120;
double myPi = Math.PI;
```
{% endraw %}

## SO.5 Assignment Statement, Statements, and Blocks

The most used statement in programming is an assignment statement.  We have already used it in several of the preceding sections.  The following are some example Java assignment statements.

{% raw %}
```java
x = 3.0;        
i = 32000;      
long l = 32000;  // declares l and assigns it a value
```
{% endraw %}

In Java the meta-language for an assignment is the following.

```
<variable> = <expression>;
```

We will learn the details of Java <expression> w, but at this point you should realize that the <expression> must evaluate to the same type as the <variable> because Java is a strongly typed language.

As we will learn when studying expressions, the assignment operator (=) is just like other operators, but it is always best to use it as an simple assignment statement.

We will soon study all of the Java statements such as the if-statement, the while-statement, the do-while statement, and the switch-statement.  All of these statements will be terminated by a semicolon (;). In Java we can create a block of statements by enclosing a sequence of statements them between { and }.  The following is a block of the preceding statements.  You should notice that there are no semicolons after { or }.

{% raw %}
```java
{
   x = 3.0;        
   i = 32000;      
   long l = 32000;  // declares l and assigns it a value
}
```
{% endraw %}

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

## SO.7 Subroutines, Methods, and Functions

Before we can fill in the details of our definition of class Person, we have to understand the mechanisms of subroutines, methods, and functions.  The words subroutine, method, and function are (almost) three ways of saying the same thing; however, David Eck makes a difference between them.  David Eck uses subroutine as the generic term for callable sequence of instructions.  Some computation that is useful is packaged such that you can call it whenever you want to perform that computation.  David uses the term function to mean a subroutine that returns a value.  For example, the following sequence of statements declares the variable x and y, assigns the square root of 9.0 to the variable x, and then assigned x times 3.0 to the variable y.

{% raw %}
```java
double x, y;
x = sqrt(9.0);
y = x * 3;
```
{% endraw %}

In this example sqrt() is a function because it returns the square root of 9.0.  The term method is popular in object-oriented programming languages, where method is another word for subroutine, function, procedure, etc.  Java uses the term method so all subroutines, functions, procedures, etc. are methods.  I will mostly use the terms method and function, and I will use them interchangeably.

You should envision your code executing as sequentially stepping through each statement in your method.  Methods / functions are called.  The second statement in the above example calls the sqrt() method (or function), and assigns its return value to the variable x.  When you encounter a method call, your code temporarily leaves the current sequence of code and jumps to the code contained in the method. The code in the method is executed and then flow of control returns to the statement following the method call.  The following is a diagram of this flow of control.

 

Figure SO-11 Calling a Method

## SO.8 Methods, Parameters , and Returning Values (Eck 4.3, 4.4)

The idea with a method is that you bottle up useful functionality so that you can call it whenever needed.  As you can see from the sqrt() example, methods have two attributes.

1. Methods have parameters, which are also called arguments. 
2. Methods return.  Methods may return a value or they may simply return.

The following code snippet shows two example methods.  The multiply() method that accepts two arguments argument and returns a value.  The printGusty() method does not have arguments and does not return a value; however, it does call the multiply() method.  You should notice that an argument declaration is similar to a variable declaration where you provide a type and an argument name.

{% raw %}
```java
double multiply(double x, double y) {
  return x * y;
}

void printGusty() {
   System.out.println(“Gusty” + multiply(4,5));
}
```
{% endraw %}

The meta-language for method definitions is given by the following.  We will discuss modifiers momentarily.

```
<modifiers> <return-type> <method-name> ( <parameter-list> ) {    
    <statements>
}
<modifiers> 
   public – method may be called from objects or outside of the class
   static – method exists independent of an object
<return-type>
   any Java type
<parameter-list> 
   <type-name> <parameter-name>, …, <type-name> <parameter-name>
```

We will learn more <statements> in the near future.  For now we know assignment statements and method call statements. 

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

## SO.11 Java Strings (Eck 2.3.3)

In computer programming a string is a collection of readable characters.  For example, “This document is our handout” is a string literal.  String variables are variables that hold strings.  Strings and variables of type String are (probably) the most used literals and data types in programming.  I suppose that if you are creating a mathematical model, numbers may outnumber strings.  

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

## SO.12 Java Scanner for Interactive Input

I find Java input/output to be complicated.  This section describes the basics for reading interactive input from the user with a Java Scanner.  David Eck provides a TextIO package, which may have some advantages, but Scanner is part of Java so if you stay with it, you do not need an external package.  Walmart has scanners that read bar codes.  We will read text from users with the Java Scanner.  A Scanner is not automatically available to use (like you can call System.out.println without doing anything).  You have to import a Scanner from the java.util package.  The following example shows a basic use of a Scanner to read the age of a user.   You will notice that a Scanner is a class that is used to create Scanner objects.  In this example, we connect our Scanner object to System.in, which is the terminal.  You should be aware that the code has to be in some method (perhaps main()).  I am simply showing the specific lines of code that you can use to create a Scanner and read from the terminal window.

{% raw %}
```java
import java.util.Scanner;
Scanner in = new Scanner(System.in); // Construct a Scanner
System.out.print("How old are you? "); // prompt with print, not prinln
int age = in.nextInt();
System.out.print(“Ender a double: “);
double d = in.nextDouble();

We will learn more about Scanners, but this is enough for our current projects.

## SO.13 Formatted Output (Eck 2.4.1)

Section 2.4.1 of David Eck’s book does a fine job explaining formatted output.  We will not do much with formatted I/O in our labs, but we will examine it again on our return trip to objects.

## SO.14 Java Comments and JavaDoc (Eck 4.5.4)

Java, like all programming languages, allows you to place comments in your code.  The comments should explain your code.  You should develop a coding style that allows people to understand the vast portion of you code by simply reading the code.  You can do this be selecting meaning variable names and programming in simple, easy-to-understand control structures.  Donald Knuth (a famous computer scientist) coined a phrase – literate programming – to mean programs are intended to be read by other programmers as well as executed by computers.  Literate programs are especially important in the maintenance phase of software development.  When creating good, readable programs, there will be large portions of code that do not need superfluous comments.  Consider the following example of a superfluous comment.

{% raw %}
```java
personsAge = 23; // set the persons age to 23
```
{% endraw %}

However, there are important aspects that should be documented.  Java has added several commenting keywords that that allow a readable document to be generated from these comments.  These readable documents can be read using browsers and IDEs.  Both BlueJ and NetBeans show JavaDoc in nice, readable formats.  NetBeans does a really nice job.  These readable comments are the building blocks of JavaDoc.  Before describing the JavaDoc keywords, let’s first examine the two types of comments in Java.  
* Single line comment – These comments continue to the end of the current line.  The above example, repeated here is a single line comment.
personsAge = 23; // set the persons age to 23
* Multi line comment – These comments begin with /* and continue until a balancing */ is encountered.  There can be as many lines between the /* and */ as desired.  The JavaDoc keywords appear in these multi line comments.

One of the best uses of documentation is to document the user interface of a class.  This will define how to construct an object and how to use the methods of an object. The following shows multiline comments that include JavaDoc keywords for the author of a class, the purpose of a method, the values of the methods formal parameters, and the return values of the method.  I have omitted the code for the methods.

{% raw %}
```java
/**
 * Twitter helps create twitter posts
 * 
 * @author Gusty
 * @version 6/24/15
 */
public class Twitter {
    /**
     * returns the number of vowels.
     * @param word the post whose vowels need to be removed.
     * @return number of vowels in word
     */
    public int numVowels(String word) { … }
    /**
     * Shortens longPost by removing vowels.
     * @param longPost the post whose vowels need to be removed.
     * @return longPost without the vowels
     */
    public String noVowels(String longPost) { … }
    
    /**
     * Returns a post backwards to hide its contents.
     * @param post the post to be reversed.
     * @return the reverse of post
     */
    public String reverse(String post) { … }
}
```
{% endraw %}

In BlueJ, this JavaDoc can be viewed as the following.  Note, I have only captured some of the actual JavaDoc.

 
Figure SO-14 JavaDoc Example

## SO.15 Coding Standards

You should know at this time that the spacing in Java does not matter.  You should establish your coding standards that make your code easier to read.  We will discuss coding standards more when we cover the various Java statements.  For now, I will show you an alternative style for the code in SO.9.  See if you can spot the difference.

{% raw %}
```java
public class Person 
{
   private int age;  // variable to store the age of a person

   Person(int a)     // constructor
   {   
      age = a;
   }

   public int getAge()  // getter
   {
      return age;
   }
}
```
{% endraw %}

