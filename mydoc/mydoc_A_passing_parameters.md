---
title: Passing Parameters
tags: [methods]
keywords: parameters
last_updated: May 1, 2016
summary: "Passing Parameters"
sidebar: mydoc_sidebar
permalink: /mydoc_A_passing_parameters/
---

## Appendix D: Passing Parameters

This information was found at the following link.

http://www.cs.toronto.edu/~reid/web/javaparams.html

## D.1 Java is pass by value

Java has eight primitive data types: six number types, character and boolean. When any variables of these data types are passed as parameters to a method, their values will not change. Consider the following example:

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

 

## D.2 Passing Object References

What if an argument to a method is an object reference? We can manipulate the object in any way except we cannot make the reference refer to a different object.
Suppose we have defined the following class:

{% raw %}
```java
class Record {
  int num;
  String name;
}
```
{% endraw %}

Now we can pass the object as a parameter to a method:
{% raw %}
```java
  public static void tryObject(Record r) {
    r.num = 100;
    r.name = "Fred";
  }
```
{% endraw %}
In some other code we can create an object of our new class Record, set its fields, and call the method tryObject.

{% raw %}
```java
    Record id = new Record();
    id.num = 2;
    id.name = "Barney";
    tryObject(id);
    System.out.println(id.name + "  " + id.num);
```
{% endraw %}

The print statement prints out "Fred 100".
Note that the object's instances variables are changed in this case. Why? The reference to id is the argument to the method, so the method cannot be used to change that reference; i.e., it can't make id reference a different Record. But the method can use the reference to perform any allowed operation on the Record that it already references.

Side Note: It is often not good programming style to change the values of instance variables outside the object. Normally, the object would have a method to set the values of its instance variables.

We cannot however make the object parameter refer to a different object by reassigning the reference or calling new on the reference. For example the following method would not work as expected:

{% raw %}
```java
  public void createRecord(Record r, int n, String name) {
    r = new Record();
    r.num = n;
    r.name = name;
  }
```
{% endraw %}

We can still encapsulate the initialization of the Record in a method, but we need to return the reference.
{% raw %}
```java
  public Record createRecord(int n, String name) {
    Record r = new Record();
    r.num = n;
    r.name = name;
    return r;
  }
```
{% endraw %}

## D.3 Passing Strings

When we write code with objects of class String, it can look as if strings are primitive data types. For example, when we assign a string literal to a variable, it looks no different than, say, assigning an number to an int variable. In particular, we do not have to use new. In fact, a string is an object, not a primitive. A new is required, and Java does it behind the scenes. It creates a new object of class String and initializes it to contain the string literal we have given it.

{% raw %}
```java
    String str = "This is a string literal.";
```
{% endraw %}

Because str is an object we might think that the string it contains might be changed when we pass str as a parameter to a method. Suppose we have the method tryString:

{% raw %}
```java
  public static void tryString(String s) {
    s = "a different string";
  }
```
{% endraw %}

When the following code is executed, what does the print statement produce?

{% raw %}
```java
    tryString(str);
    System.out.println("str = " + str);
```
{% endraw %}

 

Why is this? Maybe preceding figure will help you understand what goes on behind the scenes. It is important to remember what Java does when it assigns a string literal to an object. A different String object is created and the reference variable is set to point to the newly created object. In other words the value of the formal parameter, s, has changed, but this does not affect the actual parameter str. In this example, s pointed to the string object that contains "This is a string literal". After the first statement of the method executes, s points to the new string, but str has not changed.

Like other objects, when we pass a string to a method, we can in principle, change things inside the object (although we cannot change which string is referenced, as we just saw). However, this capability is not useful with string because strings are "immutable". They cannot be changed because the String class does not provide any methods to modify its local variables.

## D.4 Return Values

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

{% raw %}
```java
    int number = 2;
    int exponent = 4;
    number = power(number, exponent);
    System.out.println("New value of number is " + number);
```
{% endraw %}

Since methods should be designed to be simple and to do one thing, you will often find that returning a value is enough, and that you do need to change the value of any parameters to the method. Note that this does not help us write a swap method because a method can only return one value, and to write swap we need to change the value of two variables.

## D.5 Passing Arrays

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
 

