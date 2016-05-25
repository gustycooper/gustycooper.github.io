---
title: Java Scanner
tags: [object, class]
keywords: objects, simple objects
last_updated: May 21, 2016
summary: "<li>Understand Java Scanner</li> <li>Understand the differences between Scanner and String.</li> <Understand Java Scanner has a set of values and a set of operations.</li> <li>Understand how to call Scanner instance methods</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_3_scanner/
---

## Java Scanner

We have already used a Scanner to read input from the terminal window.  In our early programs we mimicked sample code.  At this point we can understand what is happening in terms of defining a reference variable, assigning the variable to an object, and using instance methods of the object.  The Programming Pattern 3 is repeated here with line numbers for discussion.

<div class="alert alert-success" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern
3. Input Pattern (and Output Pattern)
</b>
<br>
<pre>
line
  1  import java.util.Scanner;
  2  
  3  public class Main {
  4     public static void main(String[] args) {
  5        Scanner in = new Scanner(System.in);
  6        System.out.print("Enter Your Name: ");
  7        String name = in.nextLine();
  8        System.out.println("Hello " + name);
  9        System.out.print("Enter a number: ");
 10        double d1 = in.nextDouble();
 11        System.out.print("Enter a number: ");
 12        double d2 = in.nextDouble();
 13        System.out.println(d1 + " + " + d2 + " is " + (d1 + d2));
 14     }
 15  }
</pre>
</div>

Line 1 imports the ```Scanner``` class so that we can use it to declare variables of type ```Scanner```.  The ```Scanner``` class is in the ```java.util``` package.  In Java a package collects classes together for easy access.  We study the details of packages in [Packages, Interfaces, ADTs](/gustycooper.github.io/mydoc_8_packages_ADT).

Line 5 accomplishes the following. 

* declares a variable ```in```, of type ```Scanner```
* creates a ```Scanner``` object using the ```new``` operator
* connects the ```Scanner``` object to ```System.in```, the terminal window.  We will learn to connect a ```Scanner``` to a file.
* assigns the ```Scanner``` object to the variable ```in```
* After line 5, the variable ```in``` references a ```Scanner``` object.

Line 7 calls a the method ```nextLine```, which is an instance method of a ```Scanner``` object.  ```nextLine``` reads the next line from the terminal window as a ```String```, which is assigned to the ```String``` variables ```name```.

Lines 10 and 12 call the method ```nextDouble```, which is an instance method of a ```Scanner``` object.  ```nextDouble``` scans the input stream for a ```double```.  You can type a bunch of white space (spaces, tabs, enter) before you enter a ```double```.  If the next data types in the terminal window is not a ```double```, you will generate a Java ```exception``` (```java.util.InputMismatchException```).  We study Java ```exceptions``` in XXX.

