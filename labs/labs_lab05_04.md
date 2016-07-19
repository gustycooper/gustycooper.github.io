---
title: Student Type Lab
keywords: class, person, student subclass, superclass
last_updated: July 18, 2016
summary: "<li>Practice writing a Student class that extends our favorite Person class.</li>  <li>Practice determining the type of a variable using instanceof.</li> <li>Practice writing classes that define types.</li> <li>Practice creating instance variables, constructors, and instance methods within your class.</li> <li>Practice creating test cases for your types.</li> <li>Practice placing your test cases in tester classes that have a main method.</li> <li>Practice using your types to declare variables.</li> <li>Practice constructing objects of your types.</li> <li>Practice calling instance methods in the objects you construct.</li>"
sidebar: labs_sidebar
permalink: /labs_lab05_04/
toc: false
---

## Java Student Type – Subclass of Person

**Points**: Complete this entire section for 30 points.

We have practiced creating a ```Person``` type in [Person Type Lab](/gustycooper.github.io/labs_lab03_01) and [Person Type - Revisited Lab](/gustycooper.github.io/labs_lab05_01).  This lab uses Netbeans to create a project that will copy the code from the ```Person class``` in [Person Type - Revisited Lsb](/gustycooper.github.io/labs_lab05_01) and add a ```Student class``` that ```extends``` the ```Person class```.   Additionally, you will create a ```StudentTester class``` that has a ```main()``` to test you ```Student Class```.

Follow the steps 1 through 4 of 5.2 to create a ```StudentTester class```, which will have a ```main()``` method.  Do not forget 3, d where you will change the name in the Create Main Class entry to be ```StudentTester```.  This will result in an edit tab for ```StudentTester.java```, which has a ```main()``` function.  For now leave the main() method without adding any new code.

Using Netbeans, perform the following sequence of steps that solves a problem.

1. Select File New Project.  This places you in the Netbeans New Project Wizard

2. Panel 1 – Choose Project: 

   * a. Select Java
   * b. Select Java Application
   * c. Next

3. Panel 2 – Name and Location: 

   * a. Enter Project Name: ```StudentProject``` (or some other name if you like).
   * b. Enter Project Folder: <you choose>
   * c. You will see a check in Create Main Class.  We want to create a main class ```StudentTester``` that is in the **default package**.  In [Packages, ADTs](/gustycooper.github.io/mydoc_8_packages] we study packages.  For now and for most of our Netbeans projects we want to place our code in the default package.  At this point in Netbeans you will see something like ```lab5.pkg2project.TwitterProject```.  Change this to ```PersonTester```.
   * d. Finish

4. At this point you will be editing the ```StudentTester class```, which has a ```main()``` method.  You will have icons indicating there are errors in ```StudentTester.java```.  This is ok because you have not created the ```Student.java``` file.


5. Now right-click on the <default package> icon and select New Java Class.  This creates the New Java Class panel.

   * a. Change the Class Name to be ```Person```
   * b. Finish.

6. At this point you will be editing the ```Person.java``` class.  You should copy and paste the code from [Person Type - Revisited](/gustycooper.github.io/labs_lab05_01) Person.java into this file.  After you have pasted the code into the file, click save all.

7. Now right-click on the <default package> icon and select New Java Interface.  This creates the New Java Interface panel.

   * a. Change the Class Name: to be ```BannerInterface```
   * b. Finish.

8. At this point you will be editing the ```BannerInterface interface```.  One attribute that college students have is a grade point average (GPA).  You will create a simple interface that has two public methods for manipulating a GPA.  The methods are defined as follows.  After you have finished editing your BannerInterface, click save all.

   ```java
   public void setGpa(double gpa);
   public double getGpa();
   ```

9. Now right-click on the <default package> icon and select New Java Class.  This creates the New Java Class panel.

   * a. Change the Class Name to be ```Student```
   * b. Finish.

10. At this point you will be editing the ```Student.java class```.  You should create your ```Student class``` such that it ```extends Person``` and ```implements BannerInterface```.  Your implementation of ```Student``` will not be many lines of code.  ```Student``` will have the following public constructors and methods.

   ```java
   public Student(String firstName, String lastName)
   public Student(String firstname, String lastName, int age)
   public Student(String firstname, String lastName, int age, 
                  double gpa)
   public void setGpa(double gpa)
   public double getGpa()
   ```

11. Now you should return to editing your ```StudentTester.java class```.  You should construct some objects of type ```Person``` and type ```Student```.  You should give this people some friends.  You should exercise the various methods of your objects.  You should realize that you can assign a ```Student``` to a ```Person```.  The following is examples of constructors and output from my ```StudentTester```. 

   ```java
   Student gusty = new Student("Gusty", "Cooper", 39, 3.5);;
   Person coletta = new Person("Coletta", "Cooper", 1);
   Student brandalee = new Student("Brandalee", "Cooper", 28, 3.9);
   Person jerrianne = new Person("JerriAnne", "Cooper", 37);


   Gusty has friends: Coletta Brandalee JerriAnne
   Gusty can vote: true
   Gusty GPA is 3.5
   
   Coletta has friends: Gusty Brandalee JerriAnne
   Coletta can vote: false

   Brandalee has friends: Coletta
   Brandalee can vote: true
   Brandalee GPA is 3.9

   JerriAnne has friends: 
   JerriAnne can vote: true
   coletta = gusty; // You can assign a Student to a Person
   The following shows coletta's first name after the assignment.
   coletta.getFirstName is Gusty
   ```

