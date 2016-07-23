---
title: Car Type Lab
keywords: class, car
last_updated: July 16, 2016
summary: "<li>Practice writing a Car type.</li>  <li>Practice creating instance variables, constructors, and instance methods within your Car type.</li> <li>Practice creating test cases for your Car type.</li> <li>Practice placing your test cases in CarTester class that has a main method.</li> <li>Practice using your Car type to declare variables.</li> <li>Practice constructing objects of your Perons type.</li> <li>Practice calling instance methods in the Car objects you construct.</li> "

sidebar: labs_sidebar
permalink: /labs_lab03_02/
toc: false
---

## Create a Java Car Type

**Points**: Complete this entire section for 30 points.  You must include JavaDoc in your code to receive the 30 points for this section.  If you choose to omit JavaDoc, you can only receive 20 points.

This lab has been modeled after a similar lab in the [Udacity Java Course](https://www.udacity.com/course/intro-to-java-programming--cs046).

This section describes how to create a Java ```Car class``` and its corresponding ```CarTester class```.  Since we have been through the details of creating a couple of classes, the specification of the ```Car class``` is sparser than the previous section.

1. Create a ```Car class``` that has the following public interface.

   * a. ```public Car(double mpg) // constructs a Car that has mpg```
   * b. ```public void addGas(double amount)```
   * c. ```public void drive(double distance)```
   * d. ```public double getMilesDriven()```
   * e. ```public double getGasInTank()```

2. Your ```Car class``` shall have the following ```private``` instance variables.

   * a. ```private double milesDriven;```
   * b. ```private double gasInTank;```
   * c. ```private double milesPerGallon;```

3. After implementing your ```class Car```, use BlueJ to construct a ```Car``` object.

   * a. Create a ```Car``` object using the BlueJ GUI.
   * b. Manipulate your ```Car``` object using the BlueJ code pad.  The following shows an example manipulation of a car object created with an mpg of 20.

     ```java
     > car1.addGas(15);
     > car1.drive(10);
     > car1.getGasInTank()
     14.5   (double)
     ```

4. Now add a ```CarTester class``` to your BlueJ project to test your ```Car class```.

   * a. This will require analysis.  Suppose you have a car that gets 20 mpg, you put 10 gallons of gas in the tank, and you drive the car on two trips, where the first trip is 100 miles and the second trip is 25 miles.  Here are some questions to ponder.

     * i. How many gallons of gas do you have in your tank?
     * ii. How many miles have you driven your car?

   * b. Perform the type of analysis described in a for two cars that get different mpg.
   * c. In your ```CarTester class```, create a ```public static void main()``` function that does the following.

     * i. Constructs a ```Car``` object for each car analyzed in b.
     * ii. Puts 10 gallons of gas in each car.
     * iii. Drives each car two times.  The first time, drive 55 miles.  The second time drive 62 miles.
     * iv. Given the above, compute by hand the expected values for the following.  You have to think what the values for C1x, C1y, C2x, and C2y are.

       ```java
       car1: gasInTank ____C1x________     	milesDriven ____C1y_________
       car2: gasInTank ____C2x________  	milesDriven ____C2y_________
       ```

     * v. Now add to your ```CarTester class```, the following statements.  The values from step c(iv) are substituted into C1x, C1y, C2x, and C2y below.

       ```java
       System.out.println(car1.getGasInTank());
       System.out.println("Expected: C1x");
       System.out.println(car1.getMilesDriven());
       System.out.println("Expected: C1y");
       System.out.println(car2.getGasInTank());
       System.out.println("Expected: C2x");
       System.out.println(car1.getMilesDriven());
       System.out.println("Expected: C2y");
       ```

     * vi. Now run your ```CarTester class``` to determine if your ```Car class``` is correctly implemented
     * vii. If you get wrong answers, study your code and analysis to determine why you got the wrong answers.  Correct your ```CarTester``` and ```Car class``` appropriately and retest.

