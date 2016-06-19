---
title: ArrayLists
tags: [collection]
keywords: arraylists
last_updated: June 15, 2016
summary: "<li>Understand ArrayLists are a sequential collection of data.</li> <li>Understand each element of an ArrayList is the same type.</li> <li>Understand elements of an ArrayList have indices from 0 to the ArrayList.size()-1.</li> <li>Understand how to declare ArrayList variables.</li> <li>Understand how to allocate ArrayList objects.</li> <li>Understand the relationship between ArrayList variables, ArrayList objects, and memory.</li> <li>Understand how to use ArrayList methods to access ArrayList elements.</li> <li>Understand that ArrayList elements must be reference types.</li> <li>Understand how primitive types are autoboxed into reference types.</li> <Understand how loop patterns are applied to ArrayList.</li> <li>Understand the for-each loop and how to use it with ArrayList.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_6_arraylists/
---

## ArrayLists Introduction

The following figure provides a visual of an ```ArrayList``` of ```String```s.  The size of the ```ArrayList``` is N.  Each ```String``` is in a slot.  The first slot is at index 0.  The last slot is at index N-1.

![Array/ArrayList](../images/array-picture.png "Array/ArrayList") 

An ```ArrayList``` provides a programming technique to create and manipulate sequential collection of information just like arrays; however arrays have notation such as ```[]``` and ```{}``` built into the Java language.  An ```ArrayList``` is a Java class  just like ```String```, ```Scanner```, ```Random```, ```Person```, ```Car```, etc.  Some ```ArrayList``` attributes are the following.

* An ```ArrayList``` begins with zero elements.  
* Elements can be added to and removed from an ```ArrayList```.
* The size of an ```ArrayList``` changes as elements are added and removed.

## ArrayList in ```java.util``` Package

The ```ArrayList``` type is in the ```java.util``` package.  You must include ```include java.util.ArrayList;``` at the top of your ```.java``` file.

## ArrayList Variables and Objects

The ```ArrayList``` class is a parameterized type, which means we can use ```ArrayList``` to declare ```ArrayList``` variables and allocate ```ArrayList``` objects of different types - for example ```ArrayList``` of ```String```, ```ArrayList``` of ```Person```, ```ArrayList``` of ```Integer```.  This similar to how we declare an array variables and allocate array objects of different types - ```int[]```, ```String[]```, and ```Person[]```.

You declare ```ArrayList``` variables using the parameterized type notation of ```<type>``` as a suffix.  You allocated ```ArrayList``` objects using the ```new``` keyword.  The following sample code declares an ```ArrayList``` of ```String``` and an ```ArrayList``` of ```Person```.

```java
ArrayList<String> strings = new ArrayList<String>();
ArrayList<Person> people = new ArrayList<Person>();
```

## ArrayList Methods

```ArrayList``` objects are manipulated using instance methods of the ```ArrayList``` class.  Some of the more used ```ArrayList``` methods are the following.

* ```add(element)``` - adds element at the end 
* ```add(index, element)``` - adds element at index, sliding others to the right
* ```get(index)``` - returns element at index
* ```remove(index)``` - removes element at index, sliding others to left
* ```remove(element)``` - removes first element found, if found
* ```indexOf(element)``` - returns index of element, or -1 if not found
* ```contains(element)``` - returns true if element in ArrayList
* ```isEmpty()``` - returns true of ArrayList is empty
* ```size()``` - returns the number of elements in ArrayList
* ```toString()``` - returns a string of the ArrayList

The following sample code shows declaring and manipulating an ```ArrayList```.

```java
import java.util.ArrayList;
public class ArrayLists {
   public static void main(String[] args) {
      ArrayList<String> strings = new ArrayList<String>();
      boolean b = strings.isEmpty(); // b is true
      String[] sa = {"Gusty", "Emily", "Coletta", "Zac"};
      for (String s : sa)
         strings.add(s);
      b = strings.isEmpty(); // b is false
      int i = strings.size(); // i is 4
      String s = strings.toString();
      // s is "[Gusty, Emily, Coletta, Zac]"
      s = strings.get(1);  // s is "Emily"
      strings.remove("Emily");
      s = strings.toString();
      // s is "[Gusty, Coletta, Zac]"
      strings.add("Emily");
      strings.add("Jeremy");
      s = strings.toString();
      // s is "[Gusty, Coletta, Zac, Emily, Jeremy]"
      strings.remove(2);
      s = strings.toString();
      // s is "[Gusty, Coletta, Emily, Jeremy]"
      b = strings.contains("Gusty"); // b is true
      b = strings.contains("Zac");   // b is false
      i = strings.size(); // i is 4
      i = stings.indexOf("Jeremy"); // i is 3
      i = strings.indexOf("Zac");   // i is -1
      }
}
```

## ```ArrayList<type>``` - ```type``` is Reference Type

The type of elements in an ```ArrayList``` must be a reference type.  The types of elements in arrays can be primitive or reference types.  You cannot declare an ```ArrayList``` as follows.

```java
ArrayList<double> doubles = new ArrayList<double>();
```

There are several things in Java that allow you to create ```ArrayList```s that appears to contain primitive types.

* Java provides object wrapper types ([Numbers Classes](https://docs.oracle.com/javase/tutorial/java/data/numberclasses.html)) that correspond to primitive types.  
  * Object wrapper types include ```Integer``` for ```int```, ```Double``` for ```double```, ```Character``` for ```char```.
  * Object wrapper types are in ```java.lang``` package so you do not need an ```import``` statement.
* Java automatically converts between primitive types and their corresponding object wrapper types.  
* Java refers to this automatic coversion as [autoboxing](https://docs.oracle.com/javase/tutorial/java/data/autoboxing.html).  

The following code shows an ```ArrayList<Integer>``` and autoboxing.

```java
ArrayList<Integer> ints = new ArrayList<Integer>();
for (int i = 1; i < 20; i+= 2)
   ints.add(i); // int i is autoboxed to Integer

int j = ints.get(0) + ints.get(2); // autoboxing in expression
```

## ArrayLists and Loops

You can use ```while``` loops, ```do-while``` loops, counting for loops, and ```for-each``` loops with ```ArrayList```s.  The fact that ```ArrayList```s do not require an initial size, allows them to be a nice solution when you are reading input without know the total amount.  The following code demonstrates two loops - a ```while``` loop that retrieves integers from a user and a ```for-each``` loop.

```java
import java.util.ArrayList;
import java.util.Scanner;

public class ArrayLists {
   public static void main(String[] args) {
      ArrayList<Integer> ints = new ArrayList<Integer>();
      Scanner in = new Scanner(System.in);
      System.out.print("Enter number (q to quit): ");
      while (in.hasNextInt()) {
         ints.add(in.nextInt());
        System.out.print("Enter number (q to quit): ");
      }
   
      // for-each loop
      int sum = 0;
      for (int i : ints)
         sum += i;
      System.out.println("Sum of input numbers: " + sum);

      // counting for loop
      sum = 0;
      for (int i = 0; i < ints.size(); i++)
         sum += ints.get(i);
      System.out.println("Sum of input numbers: " + sum);
   }
}
```

## Arrays and ArrayLists – When to Use Which

Arrays and ArrayLists can both be used to hold a sequence of information where each element is the same type.  The following are some ideas to ponder when selecting an array versus an ```ArrayList``` in your code.

1. Array syntax with brackets is more compact and easier to read.
2. If you know the size and values, array is best because easier syntax.
3. If you are working with multi-dimensional items like tic-tac-toe boards an array probably better.
3. If you are performing mathematical computations with matrices and vectors, arrays are better. 
5. If you are working with data that grows and shrinks, ```ArrayList```s are better.

