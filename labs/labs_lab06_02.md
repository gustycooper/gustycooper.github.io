---
title: MyIntegers Type
keywords: looping pattern, array, arraylist
last_updated: June 6, 2016
summary: "Lab 5, MyIntegers Type"
sidebar: labs_sidebar
permalink: /labs_lab06_02/
toc: false
---

## Create a Java MyIntegers Class

**Points**: Complete this entire section for 20 points.

By completing this section, you will have a better appreciation of Java’s ArrayLists, which as we know can grow and shrink.  We can create Java’s ArrayLists to hold any object.  We will create a simplified a simplified version of a ArrayLists<Integer> that only contains Java ints.  

Create a Java MyIntegers class that will contain a private int[] array along with various methods for manipulating the MyIntegers.  The MyIntegers class will allow you to become proficient in basic array algorithms such as the following.

* Inserting / deleting elements in an array
* Extending an array when it becomes full
* Finding matches (first and all) in an array
* Finding the min / max elements in an array
* Computing the sum / product of the elements of an array

The MyIntegers class has the following instance variables, constructor, and methods.  There is a brief description for each.  In many cases you can choose either a counting for loop or a for each loop; however, the MyIntegers class requires a counting for loop in all looping methods.  This is because we have to stop looping at count and a for each loop iterates over the entire array.  The following is an example of a counting for loop that computes the sum of the integers in the int[] myIntegers.

```java
int sum = 0;
for (int i = 0; i < count; i++) {
   sum += myIntegers[i];
}
```
### Instance Variables

```java
public int count;
```

Normally, you make instance variables as private, but in this case, we want to examine count as part of the learning experience.  We can declare a MyIntegers m and examine the count as m.count and m.size().

```java
public int[] myIntegers;
```

Normally, you make instance variables as private, but in this case, we want to examine myIntegers as part of the learning experience.  We can declare a MyIntegers m and examine values as m.myIntegers[1] and m.get(1).

### Constructor

```java
MyIntegers() { // constructor which will have this code
   count = 0;
   myIntegers = new int[5]; // a small array so we can extend it
}
```

You will have to decide the initial value of count based upon your design.

### Methods

```void add(int ele)``` -  Adds ele to the end of our array myIntegers. You have to make sure that myIntegers has space to hold ele.  You can use the Java Arrays.copyOf() method to allocate additional space in myIntegers.  The following algorithm demonstrates this.

```java
count++;
if (count > myIntegers.length) {
   myIntegers = Arrays.copyOf(myIntegers, 2 * myIntegers.length);
}
```

```void add(int index, int ele)``` – adds ele in position index of myIntegers. 

```int get(int index)``` -  Returns the element in index.  If you do not have an element in that index, your get() method will throw IndexOutOfBoundsException.  The following code demonstrates this throw.

```java
throw new IndexOutOfBoundsException("MyIntegers exception"); 
```

```boolean contains(int ele)``` – returns true if ele is in myIntegers.

```boolean isEmpty()``` -  Returns true if myIntegers does not contain elements; otherwise returns false.

```int size()``` - Returns size (count) of myIntegers.

```int findFirstMatch(int ele)``` - Returns the index of the first element of myIntegers that matches ele.  Suppose I have a variable m of type MyIntegers and m.myIntegers contains ```{2,4,10,4}```.  m.findFirstMatch(4) returns 1.  Returns -1 if there are no matches.

```void printAllMatches(int ele)``` - Prints to the console the indices of all matches of ele.  Suppose I have a variable m of type MyIntegers and m.myIntegers contains ```{2,4,10,4}```.  m.printAllMatches(4) prints 1, 3.

```int deleteFirstMatch(int ele)``` - Deletes the first element of myIntegers that matches ele. And returns the index of the element deleted.  If a match was not found, returns -1.   Suppose I have a variable m of type MyIntegers and m.myIntegers contains ```{2, 4, 10, 4}```.  The following statements demonstrate deleteFirstmatch.

```java
int val = m.deleteFirstMatch(4); // val is 1
for (int i = 0; i < m.size(); i++
    System.out.print(m.get(i) + “ “);  // prints 2 10 4
```

```boolean deleteAllMatches(int ele)``` - Deletes all elements of myIntegers that matches ele.  Returns true if any elements are deleted; otherwise returns false.  Suppose I have a variable m of type MyIntegers and m.myIntegers contains ```{2,4,10,4}```.  The following statements demonstrate deleteAllMatches.  

```java
boolean b = m.deleteAllMatches(4);  // b is true 
for (int i = 0; i < m.size(); i++
    System.out.print(m.get(i) + “ “);  // prints 2 10
```

```int max()``` - Returns the largest element of myIntegers.  Suppose I have a variable m of type MyIntegers and m.myIntegers contains ```{2,4,10,4}```.  m.max() returns 10.  Throws IndexOutOfBoundsException if myIntegers is empty.

```int min()``` - Returns the smallest element of myIntegers.  Suppose I have a variable m of type MyIntegers and m.myIntegers contains ```{2,4,10,4}```.  m.min() returns 2.  Throws IndexOutOfBoundsException if myIntegers is empty.

```int sum()``` - Returns the sum of the elements of myIntegers.  Suppose I have a variable m of type MyIntegers and m.myIntegers contains ```{2,4,10,4}```.  m.sum() returns 20.  Throws IndexOutOfBoundsException if myIntegers is empty.

### MyIntegersTester Class

Create a MyIntegersTester class to demonstrate that your MyIntegers class is correct.  Your  MyIntegersTester class has to catch IndexOutOfBoundsException.  The following is a simple MyIntegersTester class.

```java
public class MyIntegersTester {
    public static void main(String[] args) {
        // TODO code application logic here
        MyIntegers m = new MyIntegers();
        System.out.println(m.isEmpty());
        m.add(2);
        System.out.println(m.isEmpty());
        m.add(4);
        m.add(6);
        m.add(8);
        m.add(2);
        m.printAllMatches(2);
        System.out.println(m.get(3));
        try {
            System.out.println(m.get(20));    
        } catch (IndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
        }
    } 
}
```

