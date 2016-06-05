---
title: Passing Parameters
tags: [class, object]
keywords: parameters, value, reference
last_updated: June 1, 2016
summary: "Passing Parameters"
sidebar: mydoc_sidebar
permalink: /mydoc_5_passing_parameters/
---

## Formal and Actual Parameters

I use the terms parameters and arguments interchangeably.  A parameter / argument is a value that is between the parentheses of a method.  The parameters provided in the definition of a method are the formal parameters.  The following is an example method that has 4 formal parameters: a, b, c, and d.  You will notice that formal parameters have a type and are defined like variables.

```java
  public double average(int a, int b, int c, int d) { … }
```

The parameters provided in a method call are actual parameters.  The following gis an example method that has 4 actual parameters: 1, 2, 3, and 4.

```java
 double d = average(1, 2, 3, 4);
```

There are two ways in which parameters are passed, which is explained in the next section and in Appendix D.

NOTE: Some people attempt to differentiate between parameters and arguments.  You rarely hear the phrases formal argument and actual arguments, which leads some people to say that parameter is a term for formal parameters and argument is the term for actual parameters.

## Pass by Value and Pass by Reference

There are two ways to pass parameters to methods.  Pass by value means that value of the actual parameter is copied into the formal parameter.  The method can manipulate the formal parameter (e.g., use the value and actually change the value), but the method cannot change the value of the actual parameter.  Pass by reference means the method can change the value of the actual parameter.  Strictly speaking, Java is always pass by value, but that is somewhat misleading because when you pass an object to a method, you pass the address to the object.   When the method manipulates the object, it changes the actual parameter.  To help shed some light on pass by value and pass by reference as it relates to Java, I repeat some good words from the web-site http://www.cs.toronto.edu/~reid/web/javaparams.html.  I have lightly edited the text to fit the style of this document.

## Java Is Pass by Value

As we have already learned, Java has eight primitive data types: byte, char, short, int, long, float, double, and boolean. When variables of these data types are passed as parameters to a method, their values will not change. Consider the following example:

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

If tryPrimitives is called within the following code what will the final print statement produce?

```java
    int ii = 1;
    double ff = 1.0;
    char cc = 'a';
    boolean bb = false;
    tryPrimitives(ii, ff, cc, bb);
    System.out.println("ii = " + ii + ", ff = " + ff +
                       ", cc = " + cc + ", bb = " + bb);
```

 

It makes total sense that these values will not change because you could pass literals as the actual parameters.  You cannot change the value of literals.  The following shows a call to tryPrimitives() with literals.

```java
    tryPrimitives(1, 1.0, ‘a’, false);
```

## Passing Objects – Still By Value, But You Can Change the Object

When you pass an object to a method, you are technically passing by value.  It just so happens that the value of an object is a reference (or address of the object).  This means that the method can change the contents of the object, but the method cannot change what the object references.  In other words, we can manipulate the object in any way except we cannot make the reference refer to a different object.  This is a subtle point, which will become more understandable by an example.   Suppose we have defined the following class.   Notice how simple this class is.  The class defines two instance variables, but it does not have any methods.

```java
public class Record {
  public int num;
  public String name;
}
```

The following is the definition of a method that accepts a Record as the formal parameter.

```java
  public static void tryObject(Record r) {
    r.num = 100;
    r.name = "Fred";
  }
```

In some other code we can create an object of our new class Record, set its fields, and call the method tryObject(id).  You are technically passing id by value, but the value you are passing is the address of id.  This means that tryObject(id) cannot change the address that is pass, but tryObject(id) can change what id points to.

```java
    Record id = new Record();
    id.num = 2;
    id.name = "Barney";
    tryObject(id);
    System.out.println(id.name + "  " + id.num);
```

The print statement prints out "Fred 100".  This means that tryObject(id) changed the contents of the Record id.  The reference to id is the argument to the method, so the method cannot be used to change that reference; i.e., it cannot make id reference a different Record. But the method can use the reference to perform any allowed operation on the Record that it already references.

To better understand why this is not pass by referent, we cannot make the object parameter refer to a different object by reassigning the reference or calling new on the reference. For example the following method and call to the method does not return a new record in the actual parameter. 

```java
  Record r;
  creaateRecord(r, “Gusty”)’; // does not work

  public void createRecord(Record r, int n, String name) {
    r = new Record();
    r.num = n;
    r.name = name;
  }
```

If you want to create a method that allocates a new Record, you have to return the record, which is demonstrated as follows.

```java
  Record r = createdRecord(2, “Gusty”);
  public Record createRecord(int n, String name) {
    Record r = new Record();
    r.num = n;
    r.name = name;
    return r;
  }
```

## Passing Strings, You Cannot Change Them

We use Strings a lot when programming.  So often that is often appears as if strings are primitive data types.  When we assign a string literal to a variable, it looks no different than, say, assigning a number to an int variable. In particular, we do not have to use new (although we could as demonstrated in SO.6.1). We know however that a string is an object, not an primitive data type.  Creating a String requires a new, but Java does it behind the scenes. Java creates a new object of class String and initializes it to contain the string literal we have given it.

```java
    String str = "This is a string literal.";

Because str is an object we might think that the string it contains might be changed when we pass str as a parameter to a method. Suppose we have the method tryString(String s) as follows.

  public static void tryString(String s) {
    s = "A different string";
  }
```

When the following code is executed, we print “This is a strong literal.”

```java
    tryString(str);
    System.out.println("str = " + str);
```

 

Why did we print “This is a string literal.” instead of “A different string.”   Hopefully the preceding figure will help you understand what goes on behind the scenes. It is important to remember what Java does when it assigns a string literal to an object. A String object is created to represent the literal, and the reference variable is set to point to the newly created object. In other words the value of the formal parameter, s, has changed, but this does not affect the actual parameter str. In this example, s pointed to the string object that contains "This is a string literal" when the method tryString() was entered. After the first statement of the method executes, s points to the new string, but str has not changed.

Like other objects, when we pass a string to a method, we can in principle, change things inside the object (although we cannot change which string is referenced, as we just saw). However, this capability is not useful with string because strings are "immutable". They cannot be changed because the String class does not provide any methods to modify its local variables.

## Return Values

Okay, so how do we change the values of variables inside methods? One way to do it is simply to return the value that we have changed. In the simple example below, we take two integers, a and b, as parameters and return a to the power of b.

```java
  public static int power(int a, int b) {
    int i;
    int total = 1;
    for(i = 0; i < b; i++)
      total = total * a;
    return total;
  }
```

Now when we call the method power, number gets assigned the value that power returns.

    int number = 2;
    int exponent = 4;
    number = power(number, exponent);
    System.out.println("New value of number is " + number);

Since methods should be designed to be simple and to do one thing, you will often find that returning a value is enough, and that you do not need to change the value of any parameters to the method. Note that this does not help us write a swap method because a method can only return one value, and to write swap we need to change the value of two variables.

## Passing Arrays

Arrays are references. This means that when we pass an arrays as a parameter, we are passing its handle or reference. So, we can change the contents of the array inside the method.

```java
  public static void tryArray(char[] b) {
    b[0] = 'x';
    b[1] = 'y';
    b[2] = 'z';
  }
```

When the following code is executed, the array a does indeed have the new values in the array.

```java
    char[] a = {'a', 'b', 'c'};
    tryArray(a);
    System.out.println("a[0] = " + a[0] + ", a[1] = " + a[1] + 
                       ", a[2] =" + a[2]);
```

The print statements produces "a[0] = x, a[1] = y, a[2] = z".

