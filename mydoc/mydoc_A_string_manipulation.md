---
title: Java String Manipulation
tags: [string manipulation]
keywords: string methods
last_updated: May 1, 2016
summary: "Java String Manipulation"
sidebar: mydoc_sidebar
permalink: /mydoc_A_string_manipulation/
---

## Appendix B: Java String Manipulation

The following subsections describe various tips when using Java Strings.

## B.1 Java Strings are Objects
Remember the Java Strings are objects.  Java provides simplified notations for working with strings.  For example, you can declare and assign as follows:

{% raw %}
```java
String a = “Gusty”;              // Nice notation
String b = new String(“Cooper”); // using a String constructor
```
{% endraw %}


## B.2 String Equality

Since Strings are objects, a variable of type String is a reference to the object.  This means you must test for equality of strings using the equals method and not the equality operator (==).   Java will allow you to use the == operator, but you are comparing memory addresses and not the contents of the string.

{% raw %}
```java
String a = “Gusty”;
String b = “Cooper”;
String c = “Gusty”;
boolean bCorrect = a.equals(b);
boolean bIncorrect = a == b;
```
{% endraw %}

## B.3 Converting Strings to Numbers

Integer x = Integer.valueOf(str);
// or
int y = Integer.parseInt(str);

There is a slight difference between these methods:
* valueOf returns new instance of java.lang.Integer
* parseInt returns primitive int.

The same is for all cases: Short.valueOf, Short. parseShort, Long.valueOf, Long.parseLong, etc.
## B.4 Converting Numbers to Strings
{% raw %}
```java
int i =  42;
double d = 5.4;
String s = “” + i; // concatenate i to an empty String
String s1 = Integer.toString(i);
String s2 = Double.toString();
```
{% endraw %}

## B.5 Splitting a String

The following code snippet demonstrates how to split a string of comma separated numbers into a String array, and then how to convert the numbers into an int array.  The String split() method returns a String[].

{% raw %}
```java
String sampleString = "101,203,405";
String[] stringArray = sampleString.split(",");
int[] intArray = new int[stringArray.length];
for (int i = 0; i < stringArray.length; i++) {
   String numberAsString = stringArray[i];
   intArray[i] = Integer.parseInt(numberAsString);
}
System.out.println("Number of integers: " + intArray.length);
System.out.println("The integers are:");
for (int number : intArray) {
   System.out.println(number);
}

String commaSeparated = "item1 , item2 , item3";
ArrayList<String> items = 
new  ArrayList<String>(Arrays.asList(commaSeparated.split(",")));
```
{% endraw %}

## B.6 Some String Methods

The link to all String methods is the following.
https://docs.oracle.com/javase/8/docs/api/java/lang/String.html   

In the following examples, s1 is a variable of type String
* s1.equals(s2) returns boolean– true if s1 and s2 contain the same sequence of characters, and returns false otherwise.
* s1.equalsIgnoreCase(s2) returns boolean  like equals but ignores case.   “cat”.equals("Cat") is false, while “cat”.equalsIgnoreCase("Cat") is true.
* s1.length(), returns the number of characters in s1.
* s1.charAt(N), returns char – the Nth character in the string where s1.charAt(0) is 1st, s1.charAt(1) is 2nd, and so on. The las position is s1.length() - 1.  "cat".charAt(1) is ’a’.  An error occurs if the value of the parameter is less than zero or is greater than or equal to s1.length().
* s1.substring(N,M), returns String, which is the characters of s1 in positions N through M-1, and the character in position M is not included. The subroutine s1.substring(N) returns the substring of s1 consisting of characters starting at position N up until the end of the string.
* s1.indexOf(s2) returns integer. If String s2 occurs is substring of s1, then the returned value is the starting position of that substring. Otherwise, the returned value is -1. You can also use s1.indexOf(ch) to search for a char, ch, in s1. To find the first occurrence of x at or after position N, you can use s1.indexOf(x,N). To find the last occurrence of x in s1, use s1.lastIndexOf(x).
* s1.compareTo(s2) is an integer-valued function that compares the two strings. If the strings are equal, the value returned is zero. If s1 is less than s2, the value returned is a number less than zero, and if s1 is greater than s2, the value returned is some number greater than zero. (If both of the strings consist entirely of lower case letters, or if they consist entirely of upper case letters, then “less than” and “greater than” refer to alphabetical order. Otherwise, the ordering is more complicated.)
* s1.toUpperCase() returns String – returns a new string that is the uppercase of to s1,.  "Cat".toUpperCase() is the string "CAT".  s1.toLowerCase() is the lowercase equivalent.
* s1.trim() returns String – returns a new string that is s1 with non-printing characters such as spaces and tabs trimmed from the beginning and from the end of the string.   "  fred ".trim() is the string "fred" 


