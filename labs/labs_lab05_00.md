---
title: Second Classes and Objects Lab
keywords: class, object
last_updated: July 18, 2016
summary: "The learning objectives for the entire Second Classes and Objects Labs. <li>Practice writing classes that define types.</li> <li>Practice creating instance variables, constructors, and instance methods within your class.</li> <li>Practice creating test cases for your types.</li> <li>Practice placing your test cases in tester classes that have a main method.</li> <li>Practice using your types to declare variables.</li> <li>Practice constructing objects of your types.</li> <li>Practice calling instance methods in the objects you construct.</li> "
sidebar: labs_sidebar
permalink: /labs_lab05_00/
toc: false
---

## Second Classes and Objects Lab

In Second Classes and Object Lab, we return to creating types.  We update some of the types we created in [First Classes and Objects Lab](/gustycooper.github.io/labs_lab3_00).  We begin use the Netbean IDE in Lab 5.  Section 5.0 installs Netbeans.  Sections 5.1 and 5.2 uses Netbeans to re-implement the Student class and Car class from Lab 2.  Section 5.3 adds a couple of methods to the Twitter class we implemented in Lab 4.  This means the sections 5.1, 5.2, and 5.3 copy information from previous .java files. Section 5.4 uses some new material (subclass and interfaces).

##  Submission Requirements

Follow guidance in [Sample Lab Submission](/gustycooper.github.io/labs_lab00_00) for submitting your lab points.

## Sample Lab

See previous labs for a sample lab specification and solution.

## Questions

**Points**: To earn these 10 points, you have to write or type answers to 16 questions; otherwise you receive 0 points.

1. Object-oriented programming uses classes and objects. What are classes and what are objects? What is the relationship between classes and objects?
 
2. What are instance variables and instance methods?

3. Explain carefully what ```null``` means in Java, and why this special value is necessary.

4. What is a constructor? What is the purpose of a constructor in a class?

5. Suppose that ```Kumquat``` is the name of a class and that ```fruit``` is a variable of type ```Kumquat```. What is the meaning of the statement ```fruit = new Kumquat();```? That is, what does the computer do when it executes this statement? (Try to give a complete answer. The computer does several things.)

6. What is meant by the terms instance variable and instance method?

7. Explain what is meant by the terms subclass and superclass.

8. Modify the following class so that the two instance variables are private and there is a getter method and a setter method for each instance variable:

   ```java
   public class Player {
      String name;
      int score;
   }
   ```

9. WRONG: Explain why the class ```Player``` that is defined in the previous question has an instance method named ```toString()```, even though no definition of this method appears in the definition of the class.

10. True/False: Two different methods can each have a variable named ```x``` If one of the methods changes its value of ```x``` this has no effect on the value of the other method's ```x``` variable.

11. True/False: The variables used by Java methods are stored in something called the “stack.”

12. True/False: Making an instance variable ```static``` basically means that there is only one value for the variable shared by all objects of that type.

13. True/False: In Java, a two-dimensional array must be perfectly rectangular: all rows must be the same size.

14. The methods of a class can be called.  Methods have parameters.  Discuss the concept of parameters.  What is the difference between formal parameters and actual parameters?

15. Explain the term polymorphism.

16. Java uses “garbage collection” for memory management. Explain what is meant here by garbage collection. What is the alternative to garbage collection?

17. What is an abstract class, and how can you recognize an abstract class in Java.

18. What is this?

19. For this problem, you should write a very simple but complete class. The class represents a counter that counts 0, 1, 2, 3, 4, . . . . The name of the class should be Counter. It has one private instance variable representing the value of the counter. It has two instance methods: increment() adds one to the counter value, and getValue() returns the current counter value. Write a complete definition for the class, Counter.

20. This problem uses the Counter class from the previous question. The following program segment is meant to simulate tossing a coin 100 times. It should use two ```Counter``` objects, ```headCount``` and ```tailCount```, to count the number of heads and the number of tails. Fill in the blanks so that it will do so:

    ```java
    Counter headCount, tailCount;
    tailCount = new Counter();
    headCount = new Counter(); 
    for(intflip=0; flip<100; flip++){
       if (Math.random() < 0.5)  // There’s a 50/50 chance this is true.
            ____________;   // Count a "head".
        else
            ____________;   // Count a "tail".
    ;
    System.out.println("There were " + ___________ + " heads."); System.out.println("There were " + ___________ + " tails.");
    ```


