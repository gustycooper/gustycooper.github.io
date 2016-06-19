---
title: Data Types, Packages, Interfaces
keywords: data type, package, interface
last_updated: June 15, 2016
summary: "Data Types, Packages, Interfaces"
sidebar: labs_sidebar
permalink: /labs_lab08_00/
toc: false
---

## Abstract Data Types, Packages, Interfaces Overview

Use Netbeans to complete this lab.

In Abstract Data Types, Packages, and Iterfaces, we ...

## Submission Requirements

On Canvas submit 

* Your lab score
* The name of your teammate who verified your work.
* The UMW Honor Pledge with your name serving as an electronic signature.
* You must also submit the .java files the comprise your solutions to the problems.  
* You do not have to submit your answers to the questions.

## Sample Lab

### Sample Lab Specification: XXX

### Sample Lab Solution: XXX

## Questions

Points: To earn these 10 points, you have to write or type answers to 4 questions; otherwise you receive 0 points.

1. What is an abstract data type?

2. Compare ADT’s to Java Elementary Data Types.

3. Explain a Java Interface.

4. Discuss Java packages and how they are used in software development.


## 10.1 Create a Stack of Integers ADT – 30 Points

Points: Complete this entire section for 30 points.

In this lab you will implement a Stack ADT.  You will create an interface, implement the class, and implement a tester of your ADT.  You will create the StackInterface.java, Stack.java, and StackTester.java.  These are described below.   There are two versions of the Stack ADT.  One version allows pushes and pops of char.  This is the simpler of the two versions.  The other version is a Java generic type, which is a class that has been parameterized over types.  You can choose which version you want to implement.  Perhaps you want to implement the simpler char stack first to get a better understanding of a stack, and then implement the generic stack.  Either implementation can be used to solve the problems in Sections 10.2 and 10.3.

## 10.1.1 StackInterface.java
The char stack interface is given by the following.

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

## 10.1.2 Stack.java 

Your Stack class will implement the StackInterface described in the previous section.  

If you are implementing a char stack, your Stack class will be the following.

public class Stack implements StackInterface { /* your code */ }

Declaring variables of type Stack and constructing objects is just like what we have been doing.  Given you have the constructor described below you would declare and construct a Stack as follows.

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

You can think of a generic type invocation as being similar to an ordinary method invocation, but instead of passing an argument to a method, you are passing a type argument — Integer in this case — to the Stack class itself.

You can use whatever means you desire for you implementation.  The only rules are (1) you have to implement the interface and (2) you have to implement the semantics of a stack.  You can even assume that the users of your Stack will be nice – for example, if your implementation uses an array, you can assume that user will not push more elements than the array will hold.  Consider the following example implementations.
Example Implementation 1 – char Stack
The stack is implemented in a private char[] elements.  For this implementation you could provide a constructor Stack(int size) where size is the number of elements you stack can hold.  If you pursue this path, your class constructor and push method could look like the following.  Realize this simple example does not perform error checking – for example, the user could push more elements than the stack can hold.  Perhaps you want to include some error checking in your implementation.

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

Example Implementation 2 – generic Stack
The stack is implemented as a private array of objects.  For this implementation, you could provide a constructor Stack(int size) where size is the number of elements you stack can hold.  If you pursue this path, your class constructor and push method could look like the following.  Realize this simple example does not perform error checking – for example, the user could push more elements than the stack can hold.  Perhaps you want to include some error checking in your implementation.

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

Example Implementation 3 – Using a linked list like we did for Queue in class
The stack is implemented as a linked list similar to the way we implemented a Queue in class.  This results in a private inner class something like the following.

```java
   private class Node {
      private E item;
      private Node next;
   }
```

## 10.1.3 StackTester.java 

You are to implement a tester of your Stack.java in a file StackTester.java.  You should think of various test cases to demonstrate that you have successfully implemented a Stack ADT.  You should create stacks with various types to demonstrate you have successfully implemented

If you are test a generic Stack, you should realize that you cannot create a Stack<int> si = new Stack<int>(10) because the elements must be an Object.  Recall that Java will box primitive data types into an out of Objects for you so it often appears as if you can put primitive data types into classes such as our Stack class.  The following is an example of boxing into and out of ArrayList<Double>.

```java
ArrayList<Double> ald = new ArrayList<Double>();
ald.add(2.0);
ald.add(4.0);
double d = ald.get(0);
```

## 10.2 Palindrome Checker – 20 Points

Points: Complete this entire section for 20 points.

We added palindrome methods to our Word class in Lab 5.3.  This lab will use our Stack ADT to perform palindrome checking.  You can see how this is done be considering the palindrome hannah.  We know the length to be 6 so we will have to push 3 characters and pop 3 characters.  For strings with an even number of characters, you will push half and pop half.  For strings with an odd number of characters, you will push up to the middle character, skip the middle character, and then pop the rest.  I show a simple algorithm as a sequence of statements.  You have to capture this algorithm in a method that uses a loop so that it works with an arbitrary string.  For example the method signature should be something like the following.

```java
boolen palindromeChecker(String s) // return true if s is palindrome
```

The algorithm as a sequence of statements for checking the String “hannah" is as follows.

```java
Stack<Character> s = new Stack<Character>(10);
s.push(‘h’);
s.push(‘a’);
s.push(‘n’);
‘n’ == s.pop(); // true
‘a’ == s.pop(); // true
‘h’ == s.pop(); // true
```

You should ignore punctuation, capitalization, and spaces.  For example, Madam, I'm Adam is a palindrome.  You should be able to process palindromes with an odd number of characters.  For example Ada is a palindrome.

You have choices as to how you want to implement your palindrome checker.  For example you could add the method to your StackTester.java from 10.1 or you could update the palindrome methods in your Word class from Lab 5.3. 

## 10.3 Parentheses Balance Checker – 20 Points

Points: Complete this entire section for 20 points.

For this lab, use your Stack ADT to implement a parentheses balance checker.  In programming, parentheses have to be balanced, meaning every left parenthesis has a matching right parenthesis.  You should be able to mix other characters in with the parentheses.  These characters will be ignored.  You should only be pushing and popping the parentheses.  The following are some example input lines.

```java
((()))       // balanced
(()          // unbalanced
(()(())())   // balanced
(()()        // unbalanced
```

## 10.5 Java MyMath Class – Revisited with Packages – 20 Points

Points: Complete this entire section for 20 points.

In this lab, you will create a package in which will be a MyMath class that is a math library similar to Math.  We are going to create a new Netbeans project that uses code we created in Lab 4.5.  We will create a new project and we will copy and modify the source code we already created into our new MyMath.java file for this new Netbeans project.  Your MyMath should include the following methods.

* public static double average(double[] da) –  returns the average of da.
* public static double largest(double[] da) – returns the largest in da.
* public static int numDigits(int x) – returns the number of digits x.
* public static int coins(int cents) – returns the mimimum coins to make cents



## 10.5.1 Creating our MyMath class in a package mymath

1. Select File New Project.  This places you in the Netbeans New Project Wizzard
2. Panel 1 – Choose Project: 
   * a. Select Java
b. Select Java Application
   * c. Next
3. Panel 2 – Name and Location: 
   * a. Enter Project Name: MyMath.
   * b. Enter Project Folder: <you choose>
   * c. You will see a check in Create Main Class.  The value in this will be something like the following, which you should Change this to be mymath.MyMath.  We want to create a mymath package in which to place our MyMath class.
 
     ```java
     lab10.pkg2project.Lab101Project
     ```

   * d. Finish
4. This will result in an edit tab for MyMath.java, which has a ``` package mymath; ``` statement followed by a main() function.  You do not want a main() in MyMath.java because we are going to create a MyMath class in the package mymath.  Later we will be able to import our MyMath class by using the following statement.

   ```java
   import mymath.MyMath;
    ```

5. Delete the main() code from MyMath.java.

6. Copy the code from Lab 4-5 MyMath.java into the MyMath.java tab.  You will have to update the average and largest methods because I have changed the signature so that the formal parameter is a double[].  Make sure all of the methods are static.  For example the numDigits() method should have the following signature.  We want our functions to be static because they are not dependent upon creating an object of type MyMath.  If you think about the Java Math class, it has methods and constants that you can access without creating objects of type Math.  All you have to do is use the Math.sin() function call.  As you should know by this time, a static method does not require creating an object.  In this way our MyMath class will be mimicking the Java Math class.  We want to be able to accomplish the following.  You should notice how the above import is similar to the imports we have done in order to access various Java classes.  For examples,

   ```java
   public static int numDigits(int x)

   import mymath.MyMath;
   int n = MyMath.numDigits(105);

   import java.io.File;
   import java.util.Scanner;
   import javax.swing.JButton;
   ```

7. Right-click on MyMath project and select Clean and Build.  This will create a JAR file in the distribution (or dist) folder the Netbeans maintains for you.  This JAR file is what we will import in the Part B.
10.5.2 Creating our UseMyMath main() to import mymath.MyMath

8. Select File New Project.  This places you in the Netbeans New Project Wizzard
9. Panel 1 – Choose Project: 
   * a. Select Java
   * b. Select Java Application
   * c. Next
10. Panel 2 – Name and Location: 
   * a. Enter Project Name: UseMyMath (or some other name if you like).
   * b. Enter Project Folder: <you choose>
   * c. You will see a check in Create Main Class.  The value in this will be something like the following.  Change this to be UseMyMath.

      ```java
      usemymath.UseMyMath
      ```


   * d. Finish
11. This will result in an edit tab for MyMath.java, which has a main() method, which we will edit.
12. In this step we will add our mymath package to the Libraries used by our UseMyMath project.  Right-click on the Libraries Icon under our UseMyMath project and select Add Project....  This will provide you a selection box with our projects.  Select MyMath and Add Project Jar Files.
13. Edit the UseMyMath.java tab to add the following import statement.

    ```java
    import mymath.MyMath;
    ```

14. We can now call the methods in our MyMath class.  Since we made these methods static, we do not declare objects.  We simply access them as we do those in Java’s Math library.  The following are a couple of statements you can place in your main().

    ```java
    System.out.println("Largest of 1,2: "+MyMath.largest(1,2));
    System.out.println("Num digits in 10023: "+MyMath.numDigits(10023));
    System.out.println("Average of 1,2,3,4: "+MyMath.average(1,2,3,4));
    System.out.println("Num coins in 99: "+MyMath.coins(99));
    ```

15. Update your main() to use all of your MyMath methods.
16. If you click on the Libraries icon of the UseMyMath project, you will notice MyMath.jar file is one of the Libraries.  MyMath.jar contains the MyMath class you created in Part A.
