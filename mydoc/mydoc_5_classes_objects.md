---
title: Classes and Objects
tags: [class, object]
keywords: classes, objects
last_updated: May 1, 2016
summary: "Classes and Objects"
sidebar: mydoc_sidebar
permalink: /mydoc_5_classes_objects/
---

Objects – A Second Look
Description

## OBJ.1 Object-oriented Programming (Eck 5.3.4)

XXX
Class Hiearchy Diagram

## OBJ.1.2 How to Create Classes and Objects

Our early assignments provided you with specific classes and objects to create.  They were educational examples of classes like a Person, Car, Book.  Now that we are on our second iteration of Classes and Objects, we will discuss how to think new classes again.  For now, I will state the following.

1. Think about objects that you will need, and abstract the basic properties needed for a class.
2. Define the public interface.  This is the set of methods that you want a user to use when they create and manipulate objects of your class.
3. Create the class.  Implement the public interface and any needed instance variables.
4. Create a tester for you class.  This will construct objects and use the methods to make sure they work how you think they should.
5. Use your class in the solution of a problem.
6. If you have a nice class that others can use, provide your class to others so they can solve problems with it.

## OBJ.2 Heap and Stack

We began our class describing the relationship between Java’s primitive types and memory.  This section describes two memory spaces – heap and stack – that are fundamental to computer programming.

## OBJ.2.1 Heap, Memory Allocation, and Garbage Collection

You can think of the heap as a large glob of memory from which we can allocate bytes in which to store information.  There are various memory management algorithms in your computer.  They all have similar characteristics.  The memory available to be used is in a large pool and it is marked as free.  When someone (a program) needs memory, they ask for a specific number of bytes.  The memory manager looks through its available free memory for a block of bytes that is as large as the size requested and returns the address of the block to the program.  When the program is finished with the block of memory, it is returned and the memory manager marks that block as free.   This discourse of getting and returning memory results in a fragmented collection of free and allocated blocks.  Sometimes the free blocks can be coalesced into a larger block.  The first level memory manager is the operating system since it controls all of the resources (memory, CPUs, I/O devices, etc.). In some programming languages (such as C, you explicitly allocate memory by calling functions such as malloc() and free(). These functions use operating system services that manage memory.  In Java we allocate memory for objects every time we use the new operator.

{% raw %}
```java
Person p = new Person(“Gusty”, “Cooper”);
```
{% endraw %}
  
You should have noticed that Java does not have a primitive for returning memory.  Programming in languages that malloc() and free() memory is prone to memory leaks, where the programmer does not balance their malloc() and free() calls.  Java’s approach is to allow leaks, where a leak is a block of memory that is no longer referenced by your program.  Consider the following sequence of code that allocates two Persons, and the first person is no longer referenced.

{% raw %}
```java
Person p = new Person(“Gusty”, “Cooper”);
p = new Person(“Coletta”, “Cooper”);
```
{% endraw %}

What happens to the memory allocated for the Gusty Cooper Person object?  Java has a garbage collector that runs in the background of your program.  When the Java garbage collector discovers unused memory on the heap, the garbage collector marks the memory as free so that it can be reused.

## OBJ.2.2 Stack

XXX

## OBJ.4 More about Scope

A Java program has several blocks of code.  A block of code consists of statements placed between { and }.  We put blocks in lots of places –  for examples, class definitions, method definitions, loop bodies, if bodies, else bodies, and switch bodies.
XXX

## OBJ.5 Java Methods and Variables – Instance vs. Static

So far in the classes we have created, we have used instance variables and instance methods.  The word instance means XXX

## OBJ.6 This

XXX

## OBJ.7 Final Values

XXX

## OBJ.8 Formal and Actual Parameters

I use the terms parameters and arguments interchangeably.  A parameter / argument is a value that is between the parentheses of a method.  The parameters provided in the definition of a method are the formal parameters.  The following is an example method that has 4 formal parameters: a, b, c, and d.  You will notice that formal parameters have a type and are defined like variables.

{% raw %}
```java
  public double average(int a, int b, int c, int d) { … }
```
{% endraw %}

The parameters provided in a method call are actual parameters.  The following gis an example method that has 4 actual parameters: 1, 2, 3, and 4.

{% raw %}
```java
 double d = average(1, 2, 3, 4);
```
{% endraw %}

There are two ways in which parameters are passed, which is explained in the next section and in Appendix D.

NOTE: Some people attempt to differentiate between parameters and arguments.  You rarely hear the phrases formal argument and actual arguments, which leads some people to say that parameter is a term for formal parameters and argument is the term for actual parameters.
## OBJ.9 Pass by Value and Pass by Reference
There are two ways to pass parameters to methods.  Pass by value means that value of the actual parameter is copied into the formal parameter.  The method can manipulate the formal parameter (e.g., use the value and actually change the value), but the method cannot change the value of the actual parameter.  Pass by reference means the method can change the value of the actual parameter.  Strictly speaking, Java is always pass by value, but that is somewhat misleading because when you pass an object to a method, you pass the address to the object.   When the method manipulates the object, it changes the actual parameter.  To help shed some light on pass by value and pass by reference as it relates to Java, I repeat some good words from the web-site http://www.cs.toronto.edu/~reid/web/javaparams.html.  I have lightly edited the text to fit the style of this document.
## OBJ.9.1 Java Is Pass by Value
As we have already learned, Java has eight primitive data types: byte, char, short, int, long, float, double, and boolean. When variables of these data types are passed as parameters to a method, their values will not change. Consider the following example:

{% raw %}
```java
public static void tryPrimitives(int i, double f, char c, boolean test)
  {
    i += 10;    //This is legal, but the new values
    c = 'z';    //won't be seen outside tryPrimitives.
    if(test)
      test = false;
    else 
      test = true;
  }
```
{% endraw %}

If tryPrimitives is called within the following code what will the final print statement produce?

{% raw %}
```java
    int ii = 1;
    double ff = 1.0;
    char cc = 'a';
    boolean bb = false;
    tryPrimitives(ii, ff, cc, bb);
    System.out.println("ii = " + ii + ", ff = " + ff +
                       ", cc = " + cc + ", bb = " + bb);
```
{% endraw %}

 

It makes total sense that these values will not change because you could pass literals as the actual parameters.  You cannot change the value of literals.  The following shows a call to tryPrimitives() with literals.

{% raw %}
```java
    tryPrimitives(1, 1.0, ‘a’, false);
```
{% endraw %}

## OBJ.9.2 Passing Objects – Still By Value, But You Can Change the Object

When you pass an object to a method, you are technically passing by value.  It just so happens that the value of an object is a reference (or address of the object).  This means that the method can change the contents of the object, but the method cannot change what the object references.  In other words, we can manipulate the object in any way except we cannot make the reference refer to a different object.  This is a subtle point, which will become more understandable by an example.   Suppose we have defined the following class.   Notice how simple this class is.  The class defines two instance variables, but it does not have any methods.

{% raw %}
```java
public class Record {
  public int num;
  public String name;
}
```
{% endraw %}

The following is the definition of a method that accepts a Record as the formal parameter.

{% raw %}
```java
  public static void tryObject(Record r) {
    r.num = 100;
    r.name = "Fred";
  }
```
{% endraw %}

In some other code we can create an object of our new class Record, set its fields, and call the method tryObject(id).  You are technically passing id by value, but the value you are passing is the address of id.  This means that tryObject(id) cannot change the address that is pass, but tryObject(id) can change what id points to.

{% raw %}
```java
    Record id = new Record();
    id.num = 2;
    id.name = "Barney";
    tryObject(id);
    System.out.println(id.name + "  " + id.num);
```
{% endraw %}

The print statement prints out "Fred 100".  This means that tryObject(id) changed the contents of the Record id.  The reference to id is the argument to the method, so the method cannot be used to change that reference; i.e., it cannot make id reference a different Record. But the method can use the reference to perform any allowed operation on the Record that it already references.

To better understand why this is not pass by referent, we cannot make the object parameter refer to a different object by reassigning the reference or calling new on the reference. For example the following method and call to the method does not return a new record in the actual parameter. 

{% raw %}
```java
  Record r;
  creaateRecord(r, “Gusty”)’; // does not work

  public void createRecord(Record r, int n, String name) {
    r = new Record();
    r.num = n;
    r.name = name;
  }
```
{% endraw %}

If you want to create a method that allocates a new Record, you have to return the record, which is demonstrated as follows.

{% raw %}
```java
  Record r = createdRecord(2, “Gusty”);
  public Record createRecord(int n, String name) {
    Record r = new Record();
    r.num = n;
    r.name = name;
    return r;
  }
```
{% endraw %}

## OBJ.9.3 Passing Strings, You Cannot Change Them

We use Strings a lot when programming.  So often that is often appears as if strings are primitive data types.  When we assign a string literal to a variable, it looks no different than, say, assigning a number to an int variable. In particular, we do not have to use new (although we could as demonstrated in SO.6.1). We know however that a string is an object, not an primitive data type.  Creating a String requires a new, but Java does it behind the scenes. Java creates a new object of class String and initializes it to contain the string literal we have given it.

{% raw %}
```java
    String str = "This is a string literal.";

Because str is an object we might think that the string it contains might be changed when we pass str as a parameter to a method. Suppose we have the method tryString(String s) as follows.

  public static void tryString(String s) {
    s = "A different string";
  }
```
{% endraw %}

When the following code is executed, we print “This is a strong literal.”

{% raw %}
```java
    tryString(str);
    System.out.println("str = " + str);
```
{% endraw %}

 

Why did we print “This is a string literal.” instead of “A different string.”   Hopefully the preceding figure will help you understand what goes on behind the scenes. It is important to remember what Java does when it assigns a string literal to an object. A String object is created to represent the literal, and the reference variable is set to point to the newly created object. In other words the value of the formal parameter, s, has changed, but this does not affect the actual parameter str. In this example, s pointed to the string object that contains "This is a string literal" when the method tryString() was entered. After the first statement of the method executes, s points to the new string, but str has not changed.

Like other objects, when we pass a string to a method, we can in principle, change things inside the object (although we cannot change which string is referenced, as we just saw). However, this capability is not useful with string because strings are "immutable". They cannot be changed because the String class does not provide any methods to modify its local variables.

## OBJ.9.4 Return Values

Okay, so how do we change the values of variables inside methods? One way to do it is simply to return the value that we have changed. In the simple example below, we take two integers, a and b, as parameters and return a to the power of b.

{% raw %}
```java
  public static int power(int a, int b) {
    int i;
    int total = 1;
    for(i = 0; i < b; i++)
      total = total * a;
    return total;
  }
```
{% endraw %}

Now when we call the method power, number gets assigned the value that power returns.

    int number = 2;
    int exponent = 4;
    number = power(number, exponent);
    System.out.println("New value of number is " + number);

Since methods should be designed to be simple and to do one thing, you will often find that returning a value is enough, and that you do not need to change the value of any parameters to the method. Note that this does not help us write a swap method because a method can only return one value, and to write swap we need to change the value of two variables.

## OBJ.9.5 Passing Arrays

Arrays are references. This means that when we pass an arrays as a parameter, we are passing its handle or reference. So, we can change the contents of the array inside the method.

{% raw %}
```java
  public static void tryArray(char[] b) {
    b[0] = 'x';
    b[1] = 'y';
    b[2] = 'z';
  }
```
{% endraw %}

When the following code is executed, the array a does indeed have the new values in the array.

{% raw %}
```java
    char[] a = {'a', 'b', 'c'};
    tryArray(a);
    System.out.println("a[0] = " + a[0] + ", a[1] = " + a[1] + 
                       ", a[2] =" + a[2]);
```
{% endraw %}

The print statements produces "a[0] = x, a[1] = y, a[2] = z".

## OBJ.10 Enumeration Type

An enumeration type allows you to enumerate specific values for a type.  Suppose you wanted a type Coin, whose values are PENNY, NICKLE, DIME, QUARTER.  In Java you declare this enumeration type and a variable of this type as follows.

Public enum Coin {PENNY, NICKLE, DIME, QUARTER};
Coin myCoin  = Coin.PENNY;

Other good examples of enumeration types are days of the week, seasons, and months.

An enumeration type can be used with a switch statement.  The following in an example.

{% raw %}
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
{% endraw %}

## OBJ.10.1 Enumeration Type Meta-language

The meta-language for an enumeration type along with another example is given by the following.

{% raw %}
```java
enum <enum-type-name> { <list-of-enum-values> }
enum Season { SPRING, SUMMER, FALL, WINTER }
Season vacation;
vacation = Season.SUMMER;
## OBJ.10.2 Enumeration Type – Dog and DogType Example
As we have learned a data type is a set of values and a set of operations.  An enumeration type is a set of values.  You have to add the operations.  The following example shows a class Dog that defines an enumeration type DogType.  The Dog constructor requires you to provide a name, type, and age.

{% raw %}
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
```
{% endraw %}
}
The following code demonstrates how to use the Dog class with its DogType enumeration type.

{% raw %}
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
{% endraw %}

## OBJ.11 Subclasses (Eck 5.5.1)

One of the powers of object-oriented programming is the ability to extend an existing class.  You get to use the existing code, which you do not have to create, and add new features to it.
XXX

## OBJ.11.1 The Class Object (Eck 5.3.2)

XXX

## OBJ.12 Inheritance and Class Hierarchy (Eck 5.5.2)

XXX

## OBJ.13 Interfaces (Eck 5.7)

XXX

## OBJ.14 Polymorphism (Eck 5.5.4)

XXX
## OBJ.15 Abstract Classes (Eck 5.5.5)

XXX

## OBJ.16 Nested Classes (Eck 5.8)

XXX 

## OBJ.17 Parameterized Classes – Generic Types (Eck 10.1)

A generic type is a generic class or interface that is parameterized over types.  See box example at https://docs.oracle.com/javase/tutorial/java/generics/types.html. 

XXX

## OBJ.18 Formatted Output

Section 2.4.1 of David Eck’s book does a fine job explaining formatted output.  This section presents another example of formatted output that I modeled after one from the Udacity course.

{% raw %}
```java
int mnmsPerDay = 142;
double cerealBoxesPerDay = .1;
System.out.printf("%6d", cookiesPerDay); // 6 chrs wide
System.out.printf("%4.2f", cerealBoxesPerDay); // 2 dec places, 4 wide
System.out.printf("%s", “Gusty”); // string format

public static void main(String[] args) {
    int gustyMnMsPerDay = 100;
    double gustyCerealPerDay = .06;
    int emilyMnMsPerDay = 1;
    double emilyCerealPerDay = 0;
    System.out.println("  M&Ms  | cereal | name");
    System.out.println("------------------------");
    System.out.printf("%8d|%8.2f|%s", gustyMnMsPerDay,   
                       gustyCerealPerDay, “Gusty”);
    System.out.println();
    System.out.printf("%8d|%8.2f|%s", emilyMnMsPerDay, 
                       emilyCerealPerDay, “Emily”);
    System.out.println();
}
```
{% endraw %}

See folder formattedOutput

## OBJ.19 Let’s Create Our Own Class mathInJava with Static Methods

XXX
See section 8.9 to see the mathInJava class methods converted to static, which is a better implementation because the methods are only dependent upon their input parameters.

{% raw %}
```java
public class mathInJava {

/* computes the fraction

          1
  -----------------
          1 - s
   s +  --------
            n
*/
  public double amdahlSpeedup(double s, double n) {
    return 1 / (s + (1 - s) / n);
  }

/* computes the fraction

   (a - c)(b - d)
   --------------
   (b - c)(a - d)
*/
  public double crossRatio(double a, double b, double c, double d) {
  //return (a-c)(b-d) / (b-c)(a-d) first solution
  //return (a-c)*(b-d) / (b-c)*(a-d) second solution
    return ((a-c)*(b-d)) / ((b-c)*(a-d));
  }

/* compute the average of four values */
  public double average(int a, int b, int c, int d) {
  //return (a + b + c + d) / 4; first solution
    return (a + b + c + d) / 4.0;
  }
}
```
{% endraw %}
 
