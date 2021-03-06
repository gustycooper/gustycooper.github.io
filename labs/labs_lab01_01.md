---
title: First Program Lab
keywords: course agreement,
summary: "<li>Understand how to use BlueJ to write your first Java program.</li>"
sidebar: labs_sidebar
permalink: /labs_lab01_01/
toc: false
---

## First Program

## Create Your First Java Program – 10 Points

**Points** Complete this entire section for 10 points.

Use BlueJ to write a Java program that does the following.

1. Create a classic Hello World program.  You should create a ```HelloWorld``` class that is in a file named ```HelloWorld.java```.  In Java the filename matches the class name.  BlueJ will create some template code for your ```HelloWorld class``` that has placeholders for instance variables, constructors, and methods.  Your HelloWorld class will not have instance variables and its only method will be a ```public static void main()``` that calls ```System.out.println```.   You can delete unnecessary code.  We will study instance variables, constructors, and methods in [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects).  The following is an example ```HelloWorld class``` that contains a ```main()``` method that prints to the console.

   ```java
   public class HelloWorld {
      public static void main(String[] args) {
         System.out.println(“Hello World, I am a Java programmer.”);
      }
   }
   ```

2. Use BlueJ to run your ```HelloWorld``` program.  You will see output in the terminal window.  Your program uses the System class, which has a ```static``` field ```out```, which has the ```println``` method.  The ```System class``` is available to use without having to ```import``` it.

3. Congratulations on completing your first Java program.
