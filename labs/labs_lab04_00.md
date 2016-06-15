---
title: Control Flow (Labs - Lab 4)
keywords: loop, conditional, for, while, do-while, if, switch
last_updated: June 13, 2016
summary: "Lab 4, Overview"
sidebar: labs_sidebar
permalink: /labs_lab04_00/
toc: false
---

## Lab 4 Overview

Lab 4 is lengthy; however, it is worth a total of 140 points.  You have to complete Sections 4.1 through 4.8 by the due date.  Sections 4.1 through 4.8 are worth 100 points.  You may work on Sections 4.9 through 4.12 until spring break.  You must finish Sections 4.1 through 4.8 first.  You cannot substitute points from Sections 4.9 through 4.12 for points in Sections 4.1 through 4.8 as part of your submission.

##  Submission Requirements

In addition to submitting your grade as normal, for Lab 4 

##  Submission Requirements

On Canvas submit 

* Your lab score
* The name of your teammate who verified your work.
* The UMW Honor Pledge with your name serving as an electronic signature.
* You must also submit the .java files the comprise your solutions to the problems.  
* You do not have to submit your answers to the questions.

## Sample Lab

### Sample Lab Specification: XXX

### Sample Lab Solution: XXX

## Questions

**Points**: To earn these 10 points, you have to write or type answers to 16 questions; otherwise you receive 0 points.

1. What is the last value printed by the following loop?

   ```java
   int n = 2;
   while (n < 1000) {
     n = 10 * n;
     System.out.println(n);
   }
   ```

2. How many numbers are printed by the following loop?

   ```java
   for (int i = 10; i <= 20; i++) {
     System.out.println(i);
   }
   ```

3. How many numbers are printed by the following loop?

   ```java
   for (int n = 10; n >= 0; n--) {
     System.out.println(n);
   } 
   ```
  
4. How many numbers are printed by the following loop?

   ```java
   for (int n = a; n <= b; n++) {
     System.out.println(n);
   } 
   ```

5. How many numbers are printed by the following loop?

   ```java
   for (int n = a; n < b; n++) {
     System.out.println(n);
   } 
   ```

6. How many times is the condition of the following loop evaluated?  How many times does the loop body execute?

   ```java
   for (int n = 1; n <= 6; n = n + 2) {
     System.out.println(n);
   } 
   ```

7. Can a for loop’s body execute 0 times?

8. True/False: When the computer encounters an “if/else” construct, it is sometimes the case that both the “if” body's code and also the “else” body's code will get executed.


Which of the following bits of code have problems?  ?  If there is a problem, state what it is and a way to remove the problem.

9. Does the following code have a problem? Y/N ___, if so, explain how to remove.

    ```java
    if (salary > 40000  &&  < 60000) {
        taxRate = .4;
    }
    ```

10. Does the following code have a problem? Y/N ___, if so, explain how to remove.

    ```java
    if (weapon == “halberd”) {
        hitPoints = hitPoints – 8;
    }
    else {
        hitPoints = hitPoints – 5;
    ```

11. Does the following code have a problem? Y/N ___, if so, explain how to remove.

    ```java
    if (yearGraduated = currentYear) {
        System.out.println(“We'd like to welcome you to the alumni
    association!”);
    }
    ```

12. True/False: Java's “do” loop (a.k.a. “do/while” loop) is a very useful programming construct that is used quite often by Java programmers.

13. True/False: When the condition of a while loop becomes false, the program will immediately exit the loop, even if this occurs somewhere in the middle of the loop body.

14. True/False: Every “for” loop can be converted into an equivalent “while” loop – the “for” loop is just a convenient way of bundling together the operations involving a loop counter.

15. True/False: It's best programmatic style to use a “for” for fixed-iteration loops (a.k.a. definite loops, a.k.a. counter-based loops) and a “while” for variable-iteration loops (a.k.a. indefinite loops, a.k.a. condition-based loops.)

16. What is a block statement?  Why is a block statement useful?

17. What is the difference between a while loop and a do-while loop?

18. Write a for loop that will print out all the multiples of 3 from 3 to 36, that is: 3 6 9 12 15 18 21 24 27 30 33 36.

19. The following do-while loop forces the user to enter a number that is less than 100.  Update the loop so that the user has to enter a number between 0 and 100 inclusive.

    ```java
    do {
      System.out.print("Enter a value < 100: ");
      value = in.nextInt();
    } while (value >= 100);
    ```

