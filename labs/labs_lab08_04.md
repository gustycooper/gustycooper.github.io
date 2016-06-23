---
title: MyMath Package
keywords: data type, stack
last_updated: June 15, 2016
summary: "MyMath Package"
sidebar: labs_sidebar
permalink: /labs_lab08_04/
toc: false
---

## Java MyMath Class – Revisited with Packages

**Points**: Complete this entire section for 20 points.

In this lab, you will create a package in which will be a ```MyMath``` class that is a math library similar to Math.  We are going to create a new Netbeans project that uses code we created in Lab 4.5.  We will create a new project and we will copy and modify the source code we already created into our new MyMath.java file for this new Netbeans project.  Your ```MyMath``` should include the following methods.

* ```public static double average(double[] da)``` –  returns the average of da.
* ```public static double largest(double[] da)``` – returns the largest in da.
* ```public static int numDigits(int x)``` – returns the number of digits x.
* ```public static int coins(int cents)``` – returns the mimimum coins to make cents

### Creating MyMath in a package mymath

1. Select File New Project.  This places you in the Netbeans New Project Wizzard
2. Panel 1 – Choose Project: 
   * a. Select Java
   * b. Select Java Application
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

### Creating UseMyMath to import mymath.MyMath

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

14. We can now call the methods in our ```MyMath``` class.  Since we made these methods ```static```, we do not declare objects.  We simply access them as we do those in Java’s Math library.  The following are a couple of statements you can place in your main().

    ```java
    System.out.println("Largest of 1,2: "+MyMath.largest(1,2));
    System.out.println("Num digits in 10023: "+MyMath.numDigits(10023));
    System.out.println("Average of 1,2,3,4: "+MyMath.average(1,2,3,4));
    System.out.println("Num coins in 99: "+MyMath.coins(99));
    ```

15. Update your ```main()``` to use all of your ```MyMath``` methods.
16. If you click on the Libraries icon of the UseMyMath project, you will notice MyMath.jar file is one of the Libraries.  MyMath.jar contains the MyMath class you created in Part A.
