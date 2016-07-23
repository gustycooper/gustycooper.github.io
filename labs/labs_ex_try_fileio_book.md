---
title: Book Lab
keywords: file I/O, strint methods
last_updated: July 22, 2016
summary: "<li>Practice writing a class that performs file I/O.</li> <li>Practice using String methods.</li>"
sidebar: labs_sidebar
permalink: /labs_ex_try_fileio_book/
toc: false
---

## Book Class

**Points**: Complete this entire section (Book and BookTester) for 30 points.  You must include JavaDoc in your code to receive the 30 points. If you choose to omit JavaDoc, you can only receive 20 points.

This lab has been modeled after a similar lab in the [Udacity Java Course](https://www.udacity.com/course/intro-to-java-programming--cs046).

The requirements for the Book class are specified by describing the Book’s public interface.  By conforming to this interface, you allow an independent tester to test your program.  Suppose that your Book class spells the ```randomWord``` method as ```randomword``` (notice the lowercase w).  Your Book class does not work with a tester created by an independent tester who would get an undefined method compile error. 

A public interface for a class defines all of the methods that exist for each object of the class.  The definition provides each method’s signature along with a brief description of the method, where a method signature is the method’s name, its return type, and all of its formal parameters.  

In [Interface](gustycooper.github.io/mydoc_5_interface) we study the Java ```interface``` which allows us to syntactically enforce an interface.  For now, we use the term interface to mean the public methods of a class.

The following code snippet demonstrates constructing a String object, calling the String contains method, constructing a Book object, and calling the Book method randomWord. 

```java
String s1 = “This is a string”;
String s2 = new String(“This is a string”);
Book b = new Book(“aliceInWonderland.txt”,”Alice in Wonderland”,”Lewis Carrol”);
boolean b1 = s1.contains(“This”); // b1 is true
boolean b2 = s2.contains(“Gusty”); // b2 is false
String randomWord = b.randonWord()
```

The ```Book``` class public interface is given by the following.  You have to select the most appropriate String methods to implement the Book’s methods, which can be coded using without conditionals or loops. 

* ```public Book(String filename, String bookTitle, String author)``` - This is a constructor for you Book class.  The code for the constructor opens the file and reads it into a ```private String``` instance variable.  You also have to provide the code that places the title and author of the book into private String instance variables.

* ```public boolean containsTitle()``` - returns true if the book’s title is contained somewhere in the text of the book.

* ```public int getNumOfCharacters()``` - returns the number of characters in the book.  Your constructor code reads the book’s contents into a private String variable. 

* ```public int countWords(String word)``` - returns the number of times word occurs in the book.  This may seem difficult to accomplish without loop and compares, but the following example shows how to count the number of times the word ```"Gusty"``` is in the ```String bookString```.  You should work through several small examples of this algorithm to make sure you understand how the algorithm works.

  ```java
  String bookString = “Gusty is in this string Gusty 2 times”;
  int length = bookString.length();
  int lengthNoGusty = bookString.replace(“Gusty”, “”).length();
  int gustyCount = (length – lengthNoGusty) / 5;
  ```

* ```public int countSentences()``` - returns the number of sentences in the book.  You can use a simple algorithm for counting sentences.  For examples, you could count all of the periods or you could count all of the periods and question mark.  

* ```public String randomWord(int length)``` - returns a random word of length in the book.  You can assume the length will be positive and less than the length of ```bookString```.  Be sure to return one from throughout the entire book.  For the ```randomWord``` method you do not have to find a word that is separated by spaces because we have not studied enough of Java yet.  For example, one implementation for such a nice solution requires using the ```String split()``` method which requires ```String[]``` arrays.  You do not have to do this unless you desire.  Instead you can simply use the String method ```String substring(int beginIndex, int endIndex)``` method, where you use a random number for ```beginIndex``` and the proper sum for ```endIndex```.

* ```public int firstOccurrence(String word)``` - returns the ```word``` position of the first occurrence of the ```word``` in book, with -1 indicating ```word``` is not in book.

* ```public String getSecondSentence()``` - returns the second sentence of the book.  Your implementation of this can assume that a period terminates the first and second sentence.  You will use the ```String indexOf(String s)``` and the ```String substring(int beginIndex, int endIndex)``` methods to compute the ```getSecondSentence()``` method.

### Book Tester

Create a ```BookTester``` class to test your ```Book```.  When you run ```BookTester```, it will construct one or more Book objects, and verify that each Book method correctly implements the specification.  You must perform some analysis on your chosen book to manually compute the correct expected answers for selected input values for each of your methods.  Your BookTester will print the actual and expected values.  The following shows a BookTester class that tests the getNumOfCharacters() method.  You have to test all methods.

```java
public class BookTester {
   public static void main(String[] args) {
      Book alice = new Book("aliceInWonderland.txt",
                            “Alice in Wonderland”,
                            “Lewis Carol”);
      System.out.println(“Testing “ + alice.getTitle());
      System.out.println("Num Chars Actual "+alice.getNumCharacters()); 
      System.out.println("Num Chars Expected 144331");
    }
}
```

## Book Program

**Points**: Complete this entire section for 10 points.

Extend the ```main()``` function in ```BookTester``` so that it prompts the user for input that is used as arguments to your ```Book``` class constructor and methods.  Your program must construct at least one ```Book``` object and call all of the methods.  The following is an example console dialog.

```java
Enter Book Name: aliceInWonderland.txt
The following are allowable commands:
characters, sentences, randomWord, countWord, findWord 
Enter command: characters
144331 characters in aliceInWonderland
Enter command: 
```

