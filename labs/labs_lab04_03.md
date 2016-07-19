---
title: Loops, Ifs, Switches Lab
keywords: loop, if, switch
last_updated: July 17, 2016
summary: "<li>Practice writing for, while, and do-while loops.</li> <li>Practice using conditional statements in loops.</li>"
sidebar: labs_sidebar
permalink: /labs_lab04_03/
toc: false
---

## Create a Java Program with Various Loops, Ifs, and Switches

**Points**: Complete this entire section for 10 points.

Create a Java ```VariousControlStructs class``` that has a ```public static void main(String[] args)``` method that does the following.

1. Use a ```Scanner``` object for input and System.out for output.  The following shows a prompt and a read.

   ```java
   import java.util.Scanner;
   Scanner in = new Scanner(System.in);
   System.out.print(“Enter num of times to loop: “);
   int usersNumber = in.nextInt();
   ```

2. Prompt the user for an integer number, which you will use as the number of times to loop.  You will use a for-loop, a while-loop, or a do-while loop to accomplish the following.  Make sure you understand the differences between a for-loop, a while-loop, and a do-while loop.  For this problem, you should select the loop that you need the most practice.  This means your main() method will contain this loop, plus other loops described in this section.  If you select a for loop, your loop will look like the following.

   ```java
   for (int i = 1; i <= usersNumber; i++) {
   // place your code here
   }
   ```

   * a. User you loop to compute the sum of the numbers from 1 to the user’s input number.  This is the accumulator pattern.  You will have to initialize a variable to 0 and add the current loop count to the variable on each iteration.  The following demonstrates the accumulator pattern for accumulating a sum.

     ```java
     int sum = 0;
     for (int i = 1; i <= usersNumber; i++) {
        sum += i;
        // you will have more code in your loop
     }
     ```

   * b. On each iteration of the loop, you will have four prompts to the user asking them to input a number.

     * i. The first prompt will ask the user to input any integer.  You will use the user’s entered number as the control variable of a three-way if-statement that prints “Negative”, “Zero”, or “Positive” to the console based upon the value of the user’s number.  One way to implement the three-way if-statement is the following.  You should notice that the if-statement did not use curly braces because there was only a single-statement after the test conditions.

       ```java
       if (usersNumber < 0)
          System.out.println(“Negative”);
       else if (usersNumber == 0)
          System.out.println(“Zero);
       else
          System.out.println(“Positive);
       ```


     * ii. The second prompt will ask the user for an integer number between 1 and 4, which you will use as the control variable for a switch statement that prints ```“One”```, ```“Two”```, ```“Three”```, ```“Four”```, or ```“Invalid Choice”``` based upon the value of the user’s number.  One way to implement the ```switch``` statement is the following.  Be sure to include the ```break``` statement after each case.

       ```java
       switch (usersInput) {
          case 1: System.out.println(“One”); break;
          //... more code ...
          default: System.out.println(“Invalid Choice”); break;
       }
       ```

     * iii. The third prompt will ask the user for an integer number between 1 and 10.  You will print two lines (first line is ```“Happy”``` and second line is ```“Birthday”```) if the user enters 1, 2, 3, 4, or 5.  You will print one line that is ```"Birthday"``` if the user enters 5, 6, 7, 8, 9, or 10.  You will print ```“Invalid Choice”``` if the user does not enter 1, 2, …, 10.  One way to implement this is to use a switch statement that does not contain a break.  The following is sample code.

       ```java
       switch (switchValue) {
       case 1: case 2: case 3: case 4: case 5:
          System.out.println("Happy");
       case 6: case 7: case 8: case 9: case 10:
          System.out.println("Birthday");
          break;
       default:
          System.out.println("Invalid Choice");
          break;
       }
       ```
 
     * iv. The fourth prompt will ask the user for a countdown number. You will print a launch countdown beginning with the user’s number and counting down to 0.  For example, if the user entered a 10, your program will print the following.  ```10 9 8 7 6 5 4 3 2 1 0 Blastoff!```   One way to implement this is to use a ```for``` loop with its variable decrementing.  The following is a sample.

       ```java
       for (int j = countdown; j >= 0; j--) {
           System.out.print(j + " ");
       }
       ```

3. In addition to the loop described in step 2, you are to create a sentinel loop that prompts the user to enter a ```double```.   This sentinel loop will not be nested in the loop described in 3.  This sentinel loop continues reading a ```double``` until the user enters ```Q```.  You should use a ```Scanner hasNextDouble()``` method to control your while loop.  When ```hasNextDouble()``` is ```false```, you can assume the user has entered a ```Q```.  The following demonstrates this technique using the Scanner in object.  When the user enters a Q, your program should print the following information.  You should realize that a, b, c, and d are various implementations of the accumulator pattern.  

   * a. The sum of the numbers entered by the user.
   * b. The product of the numbers entered by the user.
   * c. The average of the numbers entered by the user.
   * d. The largest of the numbers entered by the user. 
   * e. The following is the start of the code.
                                                        
     ```java                                              
     while (in.hasNextDouble()) {                         
        userNum = in.nextDouble();                        
        // use userNum to compute sum, product, and avera ge
     }                                                    
     ```                                                  
                                                        
4. The following is an example output of VariousControl Structs.
                                                        
   ```                                                  
   Enter number of times to loop: 3                     
   The sum from 1 to 3 is 6                             
   ---------------------------------------              
   Iteration 1 of 3                                     
   Enter an integer: 0                                  
   Zero                                                 
   Enter 1, 2, 3, or 4: 2                               
   Two                                                  
   Enter 1, 2, ... or 10: 5                             
   Happy                                                
   Birthday                                             
   Enter a launch countdown number: 10                  
   10 9 8 7 6 5 4 3 2 1 0 Blastoff!                     
   ---------------------------------------              
   Iteration 2 of 3                                     
   Enter an integer: -1                                 
   Negative                                             
   Enter 1, 2, 3, or 4: 5                               
   Invalid Choice                                       
   Enter 1, 2, ... or 10: 10                            
   Birthday                                             
   Enter a launch countdown number: 20                  
   20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0  Blastoff!
   ---------------------------------------              
   Iteration 3 of 3                                     
   Enter an integer: 100                                
   Positive                                             
   Enter 1, 2, 3, or 4: 1                               
   One                                                  
   Enter 1, 2, ... or 10: 100                           
   Invalid Choice                                       
   Enter a launch countdown number: 3                   
   3 2 1 0 Blastoff!                                    
   
   Enter a sequence of numbers one at a time. Q to quit
   Enter a number: 5
   Enter a number: 4
   Enter a number: 6
   Enter a number: Q
   Sum of your numbers is 15.0
   Average of your numbers is 5.0
   Product of your numbers is 120.0
   Largest of your numbers is 6
   ```

