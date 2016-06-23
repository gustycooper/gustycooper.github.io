---
title: Palindrome Checker
keywords: data type, stack
last_updated: June 15, 2016
summary: "Palindrome Checker"
sidebar: labs_sidebar
permalink: /labs_lab08_02/
toc: false
---

## Palindrome Checker

**Points**: Complete this entire section for 20 points.

We added ```palindrome``` methods to our Twitter class in [Twitter Revisited](/gustycooper.github.io/labs_lab05_03).  This lab will use our ```Stack``` ADT to perform palindrome checking.  You can see how this is done be considering the palindrome hannah.  We know the length to be 6 so we will have to push 3 characters and pop 3 characters.  For strings with an even number of characters, you will push half and pop half.  For strings with an odd number of characters, you will push up to the middle character, skip the middle character, and then pop the rest.  I show a simple algorithm as a sequence of statements.  You have to capture this algorithm in a method that uses a loop so that it works with an arbitrary string.  For example the method signature should be something like the following.

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

You should ignore punctuation, capitalization, and spaces.  For example, ```"Madam, I'm Adam is a palindrome"``` is a palindrome.  You should be able to process palindromes with an odd number of characters.  For example ```"Ada"``` is a palindrome with 3 characters.

You have choices as to how you want to implement your palindrome checker.  For example you could add the method to your ```StackTester.java``` from [Stack ADT](/gustycooper.github.io/labs_lab08_01) or you could update the ```palindrome``` methods in your ```Twitter``` class from [Twitter Revisited](/gustycooper.github.io/labs_lab05_03) or you can create a new class. 

