---
title: Arrays and ArrayLists
tags: [arrays, arraylists]
keywords: arrays, arraylists
last_updated: May 1, 2016
summary: "Arrays and ArrayLists"
sidebar: mydoc_sidebar
permalink: /mydoc_6_arrays_arraylists/
---

## Arrays (Eck 7.1) and ArrayLists (Eck 7.3)

An array and an ArrayList are ordered, sequential collections of information.  They are ordered in that each element has a position – 1st element, 2nd element, and so on.  Each element of an array or ArrayList must be that same type.  Arrays and ArrayLists are both objects, with ArrayLists being more flexible in that you can always add more elements to it.  We will discuss arrays first.

## A.1 Arrays Introduction

The meta-language for declaring an array is given by the following.

<type-name>[] <variable-name-or-names>;

The following are example declarations.

{% raw %}
```java
int[] intArray;
double[] doubleArray;
String[] stringArray;
```
{% endraw %}

## A.2 Allocating Memory for Array Elements

You should notice an array declaration is like a regular variable declaration, with the two square brackets added.  For those familiar with C/C++, Java retained their syntax so the following are equivalent declarations.

{% raw %}
```java
int intArray[];
double doubleArray[];
String stringArray[];
```
{% endraw %}

The most important thing to realize is that an array is a reference to an array object.  Just like in declaring objects, declaring an array does not allocate memory for the array contents – it only allocates memory to hold the reference.  To actually get memory for the array contents, you have to use the new operator.  The follow are examples.

{% raw %}
```java
intArray = new int[10]; // intArray can hold 10 integers
```
{% endraw %}

Once you have an array, you access its elements by placing the desired index between square brackets.  The first element is at index 0.  The following is an example notation.

{% raw %}
```java
intArray[0] = 1;
intArray[1] = 10;
intArray[2] = intArray[0] + intArray[1];
```
{% endraw %}

You can combine the definition of an array with the allocation of memory to contain its elements.  The meta-language followed by examples for this are given by the following.
 
{% raw %}
```java
<type-name>[] <variable-name-or-names> = new <type-name>[<array-len>];
int[] intArr = new int[3];
String[] strArr = new String[10];
```
{% endraw %}

When Java allocates memory for arrays, it initializes the memory like when declaring a regular variable.  For numbers, this means the values are initialized to 0 for numbers and null pointers for objects.  For example, the above declaration of intArr results in 3 elements of 0.

## A.3 Arrays in Memory

The following diagram shows the relationship between declaring an int array and allocating memory for its elements.

 
Figure A-20 Arrays and Memory

## A.4 Array length Attribute

Arrays have the length attribute, which returns the number of elements the array can hold.  The attribute length does not return the number of elements that you have explicitly assigned values.  Consider the following for example.

{% raw %}
```java
int[] intArr = new int[3];
intArr[0] = 1;
intArr[1] = 2;
int l = intArr.length; // l is 3
int x = intArr[2]; // x is 0
```
{% endraw %}

## A.5 Assigning Initial Values to an Array

There are a couple of ways to place initial values into an array.  The first notation does not require a new operator.

{% raw %}
```java
int[] intArr = { 1,2,3,4,5}; // five element int array with 1,2,3,4,5

The second method involves providing initial values when you use new.

{% raw %}
```java
int[] intArr = new int[] {1,2,3,4,5};
```
{% endraw %}

## A.5 Arrays and Loops

You will often use a loop to process the elements of an array.  You will also sometimes combine the Common Loop Patterns from Section CF.8.  Let’s find the average of numbers in an array of doubles to examine an example.

{% raw %}
```java
// this loop processes a double[] numbers
double sum = 0;
for (int i = 0; i < numbers.length; i++) {
    sum += numbers[i];
}
double ave = sum / numbers.length;
```
{% endraw %}

Pay attention to for loop controlling expressions.
•	The initial value of the loop index is 0, the same as the index of the first element of the array.
•	The terminating condition is i < numbers.length, which means the loop index will count 0, 1, … lengthOfArray-1.

## A.6 Arrays and the For-each Loop

Looping through all elements of an array (described in the previous section) is so common in programming, that we have a special for loop for it.  The for-each for loop that corresponds to the on in the previous section is the following.  You read the loop as “For each d in the array numbers”.  On each loop iteration, the variable d takes on the next element of the array numbers.

{% raw %}
```java
double sum = 0;
for (double d: numbers) {
    sum += d;
}
double ave = sum / numbers.length;
```
{% endraw %}

The meta-language for a for-each loop is given by the following.  

{% raw %}
```java
for ( <BaseType> <item> : <itemArray>  )
 	<statement>

for ( <BaseType> <item> : <itemArray>  )
	<statements>
}
```
{% endraw %}

## A.7 Passing Arrays as Parameters

Passing arrays is really no different than passing any other parameters.  The formal and actual arguments have to match.  You have to pass an actual integer array to a formal integer array.  Consider the following function that returns the largest number in a double array.

{% raw %}
```java
public double largest(double[] numbers) {
   double retLargest = numbers[0];
   for (i = 1; i < numbers.length(); i++) {
     if (numbers[i] > retLargest) {
       retLargest = numbers[i];
     }
   }
   return retLargest;
}
```
{% endraw %}

We can call the above function as follows.  Notice how one call allocates an array without creating a variable.

{% raw %}
```java
double[] nums = {100.0, 3.4, 5.6, 1000101};
double result = largest(nums);  // result is 1000101
result = largest(new double[] {1,2,3,4,6}); // result is 6
```
{% endraw %}

## A.8 Arrays in Programming

An array is a fixed size – it can only hold the number of elements initially allocated to it.  What if you are processing input from a user and you do not know how many inputs to expect?  You can allocate a large array, and hope they do not go over.  You can allocate a typical array, and if they exceed the limit of the initially allocated array, reallocate.  This is a fairly common technique.  This means you have to keep track of how many elements are in your array to know when it is full.  When it is full, you reallocate a new array that is twice the size of the original and copy the original into the new.  The following is a simple example of this concept.

{% raw %}
```java
double[] numbers = new double[25];
int numElements = 0;
System.out.println("Enter a double or q to quit: ");
while (in.hasNextDouble()) {
  if (numElements > numbers.length()-1) {
    double[] newNumbers = new double[numbers.length*2];
    for (int i = 0; i < numbers.length; i++) {
      newNumbers[i] = numbers[i];
    }
    numbers = newNumbers;
  }
  numbers[numElements] = in.nextDouble();
  numElements++
  System.out.println("Enter a double or q to quit: ")
}
```
{% endraw %}

## A.8.1 Java’s Arrays.copyOf() Method

Java has methods for just about everything in the kitchen sink.  There is an Arrays.copyOf() method that we can use in the previous algorithm.  Instead of creating a newNumbers array and copying the values with a loop, we can do the following.

{% raw %}
```java
if (numElements > numbers.length()-1) {
  numbers = Arrays.copyOf(numbers, 2 * numbers.length);
}
```
{% endraw %}

## A.9 ArrayLists

ArrayLists are similar to arrays, but you can keep adding new elements without having to perform an algorithm as described in the previous section – Java does this algorithm for you.  With ArrayLists you loose the concise [] notation for accessing elements – you have to call methods.  An ArrayList<T> uses Java generic types, which allows you to declare ArrayLists of various types; however, those types have to be objects.  An ArrayList is in the java.util package, so it must be imported.  Some of the more used ArrayList methods are the following.

{% raw %}
```java
add(element) – adds element at the end 
add(index, element) – adds element at index, sliding others to the right
get(index) – returns element at index
remove(index) – removes element at index, sliding others to left
remove(element) – removes first element found, if found
indexOf(element) – returns index of element, or -1 if not found
contains(element) – returns true if element in ArrayList
isEmpty() – returns true of ArrayList is empty
size() – returns the number of elements in ArrayList
```
{% endraw %}

The following subsections provide a simple examples of how to use an array list.  All of the examples require the following import.

{% raw %}
```java
import java.util.ArrayList;
```
{% endraw %}

## A.9.1 ArrayList Example 1

{% raw %}
```java
ArrayList<String> strs = new ArrayList<String>();
strs.add("aaa");
strs.add("bbb");
strs.add("ccc");
String s = strs.toString(); // s has "[aaa, bbb, ccc]"
```
{% endraw %}

## A.9.2 ArrayList Example 2

{% raw %}
```java
ArrayList<Double> al = new ArrayList<String>();
al.add(1.2);  // index 0
al.add(2.3);  // index 1
al.add(4.5);  // index 2
String s = al.toString(); // s has "[1.2, 2.3, 4.5]"
double d = al.get(2); // d has 4.5
int s = al.size() // s has 3
al.add(1,2.0);
s = al.toString(); // s has "[1.2, 2.0, 2.3, 4.5]"
al.remove(0);
s = al.toString(); // s has "[2.0, 2.3, 4.5]"
```
{% endraw %}

Notice the Double vice double.  XXX

## A.10 Arrays and ArrayLists – When to Use Which

Arrays and ArrayLists can both be used for the same type of programming. How do you choose which one to use.  The following are some ideas to ponder.

1.	Array syntax with brackets is more compact and easier to read.
2.	If you know the size and values, array is best because easier syntax.
String[] workdays = { "Mo", "Tu", "We", "Th", "Fr" };
3.	Numbers is ArrayLists are not efficient.  This is because 
4.	ArrayList<Double> values = new ArrayList<Double>();  XXX More explanation… Notice the uppercase Double, which is a wrapper class.  If you need lots of numbers, then use an array.

## A.11 Java Exceptions, Try, and Throw (Eck 3.7)

XXX
