---
title: Temperature Type Lab
keywords: temperature
last_updated: July 16, 2016
summary: "<li>Practice writing a Temperature type.</li>  <li>Practice creating instance variables, constructors, and instance methods within your Temperature type.</li> <li>Practice creating test cases for your Temperature type.</li> <li>Practice placing your test cases in TemperatureTester class that has a main method.</li> <li>Practice using your Temperature type to declare variables.</li> <li>Practice constructing objects of your Perons type.</li> <li>Practice calling instance methods in the Temperature objects you construct.</li> "
sidebar: labs_sidebar
permalink: /labs_lab03_07/
toc: false
---

## Create a Temperature Type

**Points**: Complete this entire section for 10 points.

The work for this section implements the same methods from [Temperature](/gustycooper.github.io/labs_lab02_06).  In this section you write a Java ```Temperature class```, which will use expressions to convert from Fahrenheit to Celsius and Kelvin.   You will also write a ```TemperatureTester class``` that uses your ```Temperature class``` to construct objects to test your expressions.  The Java ```Temperature class``` and ```TemperatureTester class``` that have the following attributes.

1. The ```Temperature class``` has the following constructor and methods.  You will have to create the appropriate instance variable.

   ```java
   Temperature(double temperature) // constructor
   double getTemperature() // getter for temperature
   void setTemperature(double temperature) // setter for temperature
   double celsius() // returns the Celsius equivalent of the temp
   double kelvin()  // returns the Kelvin  equivalent of the temp
   ```

2. The conversion algorithms shall be as follows.
   * a. To convert from Fahrenheit to Celsius, subtract 32, and then multiply by 5/9. 
   * b. To convert from Celsius to Kelvin, add 273.15.  You shall call the ```celsius()``` method of ```Temperature``` when implementing the ```kelvin()``` method.

3. Write a ```TemperatureTester class``` that has a ```main()``` program that uses your ```Temperature class``` to test that it is correct.  Your ```TemperatureTester class``` should be something like the following.  You can augment this code with your own expected values.

   ```java
   public class TemperatureTester {
       /**
        * main() for class SplitTheBill
        */
       public static void main(String[] args) {
           Temperature t1 = new Temperature(32);  // freezing
           Temperature t2 = new Temperature(212); // boiling
           System.out.println("Conversions of freezing: " + 
                               t1.getTemperature());
           System.out.println("Celsius Expected: 0");
           System.out.println("Celsius Actual: " + t1.celsius());
           System.out.println("Kelvin Expected: 273.15");
           System.out.println("Kelvin Actual: " + t1.kelvin());
           System.out.println("\nConversions of boiling: " + 
                               t2.getTemperature());
           System.out.println("Celsius Expected: 100");
           System.out.println("Celsius Actual: " + t2.celsius());
           System.out.println("Kelvin Expected: 373.15");
           System.out.println("Kelvin Actual: " + t2.kelvin());
           t2.setTemperature(89.6); // hot July day
           System.out.println("\nConversions of a hot July day: " + 
                              t2.getTemperature());
           System.out.println("Celsius Expected: 32");
           System.out.println("Celsius Actual: " + t2.celsius());
           System.out.println("Kelvin Expected: 305.15");
           System.out.println("Kelvin Actual: " + t2.kelvin());
       }
   }
   ```

4. The output of the ```TemperatureTester``` that corresponds to the above example is the following.

   ```java
   Conversions of freezing: 32.0
   Celsius Expected: 0
   Celsius Actual: 0.0
   Kelvin Expected: 273.15
   Kelvin Actual: 273.15

   Conversions of boiling: 212.0
   Celsius Expected: 100
   Celsius Actual: 100.0
   Kelvin Expected: 373.15
   Kelvin Actual: 373.15

   Conversions of a hot July day: 89.6
   Celsius Expected: 32
   Celsius Actual: 32.0
   Kelvin Expected: 305.15
   ```

