---
title: Student Type
keywords: class, person, student subclass, superclass
last_updated: June 6, 2016
summary: "Lab 5, Student Type"
sidebar: labs_sidebar
permalink: /labs_lab05_04/
toc: false
---

## Java Student Type – Subclass of Person

**Points**: Complete this entire section for 30 points.

In [Person Type - Revisited](/gustycooper.github.io/labs_lab05_01) we revisited the ```Person class```.  This lab will use Netbeans to create a project that will copy the code from the ```Person class``` in [Person Type - Revisited](/gustycooper.github.io/labs_lab05_01).  The lab will create a ```Student class``` that ```extends``` the ```Person class```.   Additionally, you will create a ```StudentTester class``` that has a ```main()``` to test you ```Student Class```.

Follow the steps 1 through 4 of 5.2 to create a ```StudentTester class```, which will have a ```main()``` method.  Do not forget 3, d where you will change the name in the Create Main Class entry to be ```StudentTester```.  This will result in an edit tab for ```StudentTester.java```, which has a ```main()``` function.  For now leave the main() method without adding any new code.

1. Now right-click on the <default package> icon and select New Java Class.  This creates the New Java Class panel.

   a. Change the Class Name to be ```Person```
   b. Finish.

2. At this point you will be editing the ```Person.java``` class.  You should copy and paste the code from [Person Type - Revisited](/gustycooper.github.io/labs_lab05_01) Person.java into this file.  After you have pasted the code into the file, click save all.

3. Now right-click on the <default package> icon and select New Java Interface.  This creates the New Java Interface panel.

   a. Change the Class Name: to be ```BannerInterface```
   b. Finish.

4. At this point you will be editing the ```BannerInterface interface```.  One attribute that college students have is a grade point average (GPA).  You will create a simple interface that has two public methods for manipulating a GPA.  The methods are defined as follows.  After you have finished editing your BannerInterface, click save all.

   ```java
   public void setGpa(double gpa);
   public double getGpa();
   ```

5. Now right-click on the <default package> icon and select New Java Class.  This creates the New Java Class panel.

   a. Change the Class Name to be ```Student```
   b. Finish.

6. At this point you will be editing the ```Student.java class```.  You should create your ```Student class``` such that it ```extends Person``` and ```implements BannerInterface```.  Your implementation of ```Student``` will not be many lines of code.  ```Student``` will have the following public constructors and methods.

   ```java
   public Student(String firstName, String lastName)
   public Student(String firstname, String lastName, int age)
   public Student(String firstname, String lastName, int age, 
                  double gpa)
   public void setGpa(double gpa)
   public double getGpa()
   ```

7. Now you should return to editing your ```StudentTester.java class```.  You should construct some objects of type ```Person``` and type ```Student```.  You should give this people some friends.  You should exercise the various methods of your objects.  You should realize that you can assign a ```Student``` to a ```Person```.  The following is examples of constructors and output from my ```StudentTester```. 

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

