---
title: MyString Type (Labs - Lab 3)
keywords: mystring
last_updated: June 5, 2016
summary: "Lab 3, MyString Type"
sidebar: labs_sidebar
permalink: /labs_lab03_06/
toc: false
---

## Create a MyString Type

**Points**: Complete this entire section for 11 points.

This lab allows you to practice creating a Java class – ```MyString```.  Your ```MyString``` class will be your own simplified version of the Java ```String``` class.  You will use the same ```String``` methods that you used to complete 2.1.  Write a Java public class ```MyString``` that satisfies the requirements listed in this section.  This section also describes steps to test your ```MyString``` class.  You should recall that the general format of a Java class is as follows.

{% raw %}
```java
public class ```MyString``` {
// instance variables

// constructors

// methods

}
```
{% endraw %}

1. Your ```MyString``` class shall have one constructor that saves the parameter in a private instance variable ```myString```.  The constructor signature shall be as follows.

   ```java
   MyString(String s)
   ```

2. Your ```MyString``` class shall have the following public interface.  You will have to implement each of these methods using the Java ```String``` methods that you used in section 2.1.

   * ```public String capitalCase()``` – returns the uppercase of the ```String``` used to construct the object.
   * ```public int count()``` – returns the number of characters in the ```String``` used to construct the object.
   * ```public int firstSpace()``` – returns the index of the first space of the ```String``` used to construct the object.

3. After implementing your class ```MyString```, use the BlueJ GUI to construct ```MyString``` object.    Test your ```MyString``` class using the BlueJ GUI and the BlueJ code pad to manipulate the ```MyString``` methods.

4. Create a Java public class ```MyString```Tester that has a public static void main() method that performs the following operations.

   * A. Prompt the user to enter a string, which you will read into a variable of type ```String```.
   * B. Using the ```String``` variable from step a, construct a ```MyString``` variable ```myString``` that contains the contents.

     ```java
     MyString myString = new MyString(s);  // s is a String
     ```

   * C. Use the ```myString.captialCase()``` method to generate the uppercase of ```myString```.  Print the result.
   * D. Use the ```myString.count()``` method to compute the number of characters in ```myString```.  Print the result.
   * E. Use the ```myString.firstSpace()``` method to compute the index of the first space in ```myString```.  Print the result.
   * F. The following is an example run of your ```myStringTester```.

     ```java
     Enter a String: Gusty is teaching Java.
     GUSTY IS TEACHING JAVA.
     Your input has 23 characters.
     The first space is at index 4.
     ```
