---
title: Stack ADT
keywords: data type, stack
last_updated: June 22, 2016
summary: "Stack ADT"
sidebar: labs_sidebar
permalink: /labs_lab08_01/
toc: false
---

## Create a Stack ADT

**Points**: Complete this entire section for 30 points.

In this lab you will implement a Stack ADT.  You will create an interface, implement the class, and implement a tester of your ADT.  You will create the StackInterface.java, Stack.java, and StackTester.java.  These are described below.   There are two versions of the Stack ADT.  One version allows pushes and pops of char.  This is the simpler of the two versions.  The other version is a Java generic type, which is a class that has been parameterized over types.  You can choose which version you want to implement.  Perhaps you want to implement the simpler char stack first to get a better understanding of a stack, and then implement the generic stack.  Either implementation can be used to solve the problems in [Palindrome Checker Lab](/gustycooper.github.io/labs_lab08_02) and [Parentheses Balance Checker Lab](/gustycooper.github.io/labs_lab08_03).

I will lead you through this lab.  In doing so, we will define our own excpetions, ```EmptyStackException``` and ```FullStackException```.

See code in ```Google Drive > 00UMW > 1Java > 0Class > Netbeans > Stack > src```.

## StackInterface.java

The interface for a stack of ```char``` is given by the following.

```java
public interface StackInterface {
    /**
     * pushes an char onto the stack
     * @param ele the char to be pushed
     */
    public void push(char ele);
   /**
     * pops a char from the stack
     * @return returns the top char on the stack
     */
    public char pop();
   /**
     * peeks at the top of the stack
     * @return returns the top char on the stack but it stays on top
     */
    public char pop();

   /**
     * 
     * @return true if the stack is empty
     */
    public boolean isEmpty();   
}
```


The generic stack interface is given by the following.

```java
public interface StackInterface<E> {
    /**
     * pushes an element onto the stack
     * @param E the element to be pushed
     */
    public void push(E ele);
   /**
     * pops an element from the stack
     * @return returns the top E ele on the stack
     */
    public E pop();
    public E pop();
   /**
     * peeks at the top of the stack
     * @return returns the top E ele on the stack but it stays on top
     */
    public char pop();
   /**
     * 
     * @return true if the stack is empty
     */
    public boolean isEmpty();   
}
```

## Stack.java 

Your ```Stack``` class will implement the ```StackInterface``` described in the previous section.  

If you are implementing a char stack, your ```Stack``` class will be the following.

```java
public class Stack implements StackInterface { /* your code */ }
```

Declaring variables of type ```Stack``` and constructing objects is just like what we have been doing.  Given you have the constructor described below you would declare and construct a Stack as follows.

```java
Stack s = new Stack(10);  // Stack holds 10 chars
s.push(‘G’);
s.push(‘u’);
s.push(‘s’);
while (!s.isEmpty())  // prints suG
    System.out.print(s.pop());
```

If you are implementing the generic stack, your Stack class will be the following.

```java
public class Stack<E> implements StackInterface<E> { /* your code */ }
```

To reference the generic Stack class in your code, you must perform a generic type invocation, which replaces E with some concrete value, such as Integer.  Note the type must not be a primitive type.

```java
Stack<Integer> integerStack = new Stack<Integer>();
```

You can think of a generic type invocation as being similar to an ordinary method invocation, but instead of passing an argument to a method, you are passing a type argument — ```Integer``` in this case — to the ```Stack``` class itself.

You can use whatever means you desire for you implementation.  The only rules are (1) you have to implement the interface and (2) you have to implement the semantics of a stack.  You can even assume that the users of your Stack will be nice – for example, if your implementation uses an array, you can assume that user will not push more elements than the array will hold.  Consider the following example implementations.

### Example Implementation 1 – char Stack

The stack is implemented in a ```private char[]``` elements.  For this implementation you could provide a constructor ```Stack(int size)``` where ```size``` is the number of elements you stack can hold.  If you pursue this path, your class constructor and ```push``` method could look like the following.  Realize this simple example does not perform error checking – for example, the user could ```push``` more elements than the stack can hold.  Perhaps you want to include some error checking in your implementation.

```java
public class Stack implments StackInterface {
private char[] elements;
private final int size;
private int top;
public Stack(int size) {
    size = s > 0 ? s : 10;
    top = -1;
    elements = new char[size];
}
public void push(char ele) {
    // use size to throw FullStackException exception
    elements(++top) = ele;
}
public char pop() {
  if (!isEmpty())
     return elements(--top);
  else
      return '\0';  // or throw EmptyStackException exception

...
}
```

### Example Implementation 2 – generic Stack

The stack is implemented as a ```private``` array of objects.  For this implementation, you could provide a constructor ```Stack(int size)``` where ```size``` is the number of elements you stack can hold.  If you pursue this path, your class constructor and push method could look like the following.  Realize this simple example does not perform error checking – for example, the user could push more elements than the stack can hold.  Perhaps you want to include some error checking in your implementation.

```java
public class Stack<E> implements StackInterface<E> {
    private final int size;
    private int top;
    private E[] elements;

    public Stack() {
        this(10);
    }

    public Stack(int s) {
        size = s > 0 ? s : 10;
        top = -1;

        elements = (E[]) new Object[size]; // create array
    }

    public void push(E pushValue) {
        if (top == size - 1) // if stack is full
          throw new FullStackException(String.format("Stack is full, cannot push %s", pushValue));

        elements[++top] = pushValue; // place pushValue on Stack
    }

// more code
}
```

### Example Implementation 3 – Using a linked list like we did for ```Queue``` in class

The stack is implemented as a linked list similar to the way we implemented a Queue in class.  This results in a private inner class something like the following.

```java
   private class Node {
      private E item;
      private Node next;
   }
```

## StackTester.java 

You are to implement a tester of your ```Stack.java``` in a file ```StackTester.java```.  You should think of various test cases to demonstrate that you have successfully implemented a ```Stack``` ADT.  You should create stacks with various types to demonstrate you have successfully implemented

If you are test a generic Stack, you should realize that you cannot create a ```Stack<int> si = new Stack<int>(10)``` because the elements must be an Object.  Recall that Java will box primitive data types into an out of Objects for you so it often appears as if you can put primitive data types into classes such as our ```Stack``` class.  The following is an example of boxing into and out of ```ArrayList<Double>```.

```java
ArrayList<Double> ald = new ArrayList<Double>();
ald.add(2.0);
ald.add(4.0);
double d = ald.get(0);
```

