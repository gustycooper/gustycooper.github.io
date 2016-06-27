---
title: Packages
tags: [package]
keywords: packages
last_updated: June 23, 2016
summary: "<li>Understand Java packages.</li> <li>Understand how to create Java packages.</li> <li>Understand how to import Java packages.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_8_packages/
---

## Packages and the Wirth Pattern

Java packages deal with grouping information together so they do not apply to the Wirth pattern.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern
0. Wirth Pattern
</b>
<br>
<img title="computer" src="{{ "/images/wirthFigure.png" | prepend: site.baseurl }}" />
</div>

## Course Goal for Packages

For this course we want to understand Java packages and how we can use them.  We will not become experts with Java packages.  The [MyMath Package Lab](/gustycooper.github.io/labs_lab08_04) contains prescriptive steps for creating and using our own package.  We also use the package concept in the [Battleship project](/gustycooper.github.io/projects_battleship) and a detailed quiz.  

## Packages

A Java package groups together related information that can be accessed with an ```import``` statement.  

* The [```java.lang``` package](https://docs.oracle.com/javase/8/docs/api/java/lang/package-tree.html) groups together useful programming attributes that is used by most programs.  
  * We have used the the ```print``` method of the field ```out``` in the ```System``` class of the ```java.lang``` package.  
  * We have used various methods of the ```Math``` class.
  * We have used various methods in the Java box types such as ```Integer``` and ```Double```.
  * We know that information in the ```java.lang``` package can be accessed without an ```import``` statement.   

* The [```java.util``` package](https://docs.oracle.com/javase/8/docs/api/java/util/package-summary.html) groups together various utility infromation that we can use.  
  * We have used the ```Scanner``` type from ```java.util```. 
  * We have used the ```Random``` type from ```java.util```. 
  * We know that we have to ```import java.util.Scanner;``` in order to use it.

* The [```javax.swing``` package](https://docs.oracle.com/javase/8/docs/api/javax/swing/package-summary.html) groups together all of the Swing graphics types, which we have used.  
  * We know that we have to ```import javax.swing.*;```, which allows us to access all types in the package.

The [Java Package Tutorial](https://docs.oracle.com/javase/tutorial/java/package/packages.html) defines a **package** to be a grouping of related types providing access protection and name space management. 

* The word *types* in the definition can be classes, interfaces, and enumerations; all of which we have created.  You create a class, interface, and enumeration in its own file, which can be placed in a package.

* The phrase *access protection* in the definition refes to ```public```, ```private```, and package access.  We have used the ```public``` and ```private``` modifiers to define the access characteristics.  Java has the concept of package access that we do not study.
 
* The phrase *name space management* in the definition allows different packages to use the same names for variables and methods.  ```java.util```, ```gusty.util```, and ```coletta.util``` can each have a ```Scanner``` method.  We will not use this technique in our study.

## Packages and Folders

There is a relationship between packages and folders (directories).  Folders are used to group information just like packages.  The [Battleship project](/gustycooper.github.io/projects_battleship) has the following packages and folders.
 
* ```package battleship``` is in folder ```battleship```
  * In Netbeans where my project is named Battleship, the folder is ```.../Battleship/src/battleship```
* ```package battelship.players``` is in folder ```battleship/players```
  * In Netbeans where my project is named Battleship, the folder is ```.../Battleship/src/battleship/players```

## Cipher Package Example

Packages are created by including a ```package``` statement in the ```.java``` files that comprise the package.  The ```package``` statement must be first in the ```.java``` file - before the class definition.  For example, consider creating Cipher types such as Caesar, Vigenere, RSA, AES, SSL, where they are in a package ```cipher```.  The class definition of ```Caesar``` begins as follows.

```java
package cipher;
public class Caesar {
   // code for Caesar
}
```

The collection of ```.java``` files for ```package cipher``` are as follows.

* ```CipherInterface.java``` contains

  ```java
  package cipher; 
  public interface CipherInterface { 
     public String encode(String s, int key);
     public String decode(String s, int key);
  }
  ```

* ```Caesar.java``` contains

  ```java
  package cipher;
  public class Caesar implements CipherInterface { ... }
  ```

* ```Vignere.java``` contains

  ```java
  package cipher;
  public class Vigenere implements CipherInterface { ... }
  ```

* ```RSA.java``` contains

  ```java
  package cipher;
  public class RSA implements CipherInterface { ... }
  ```


The various types in the ```cipher package``` are access as follows.

```java
import mymath.MyMath;       // imports class MyMath from package mymath
import cipher.Caesar;       // imports class Caesar from package cipher
import cipher.Vigenere;     // imports class Vigenere from package cipher
import java.util.Random;    // imports class Random from package java.util
import java.io.File;        // imports class file from package java.io
import java.util.Scanner;   // imports class Scanner from package java.util
public class UseCipher {
   public static void main(String[] args) {
      String s = Caesar.encode("Hello", 5);
      String t = Vignere.encode("Hello", 5);
   }  
}     
```

## Packages and the Internet

Software engineering is programming in the large where there are teams developing requirements, tests, design, and code.  The team members have to coordinate their development activities.  Sometimes this coordination is across companites.  Java packages support software engineering.  Companies are to use their reversed Internet domain names to begin their packages.  Suppose my company’s domain is gusty.com.  My package prefix will be com.gusty and my packages will be like the following

* ```com.gusty.cipher```
* ```com.gusty.goodstuff```

Since company domain names are unique, this technique creates a clever way to guarantee uniqueness among commercial Java packages.

## Packages and JAR files

We have discussed packages in terms of the ```.java``` files that comprise them.  If I have created my ```com.gusty.cipher``` package, I do not want to distribute my ```.java``` files.  Instead, I can *package* my ```cipher``` package into a Java Archive or JAR file.  A JAR file is like a ```.zip``` file.  The ```.class``` files are compressed and collected into one file that can be provided to those who want to use my package.  We will create a JAR file in [MyMath Package Lab](/gustycooper.github.io/labs_lab08_04).  Recall from the JVM, JDK, and JRE Pattern, the Java compiler generates ```.class``` files from ```.java``` files.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern
0. JVM, JDK, and JRE Pattern </b>
<br>
<img title="JVMJDKJRE" src="{{ "/images/jvmJdkJreFigure.png" | prepend: site.baseurl }}" />
</div>

