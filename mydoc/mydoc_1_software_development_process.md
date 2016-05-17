---
title: Software Development Process
tags: [algorithm]
keywords: java, software development
last_updated: May 11, 2016
summary: "<li>Understand the steps of the software development process.</li> <li>Understand the steps that our course will focus upon.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_1_software_development_process/
---

## Software Development Process

Programming is typically done within the context of a software development process.  A software develop process can be thought of as an algorithm for creating programs.  I will often refer to this process as ASDIDM, where this is an acronym for the following sequence of steps that solves the problem of creating programs.

* **Analyze** – *understand* the problem
* **Specify** – state *what* the problem is.  This captures the requirements of the software.  This is usually accomplished using text that the programmer and the end-user can read and agree upon.  Large software development organizations will have specialized requirements management tools.
* Design** – create *how* the problem is solved.  This captures the high-level algorithms and data structures of the software.  We will use pseudo code similar to that used to discuss [Algorithms](/gustycooper.github.io/mydoc_1_algorithms).   [Eck 4.6](http://math.hws.edu/javanotes/c4/s6.html) provides an interesting discussion on design.  You may not be quite ready for this discussion at this point in your study, but you can keep it in the back of your mind for future reference.
* **Implement** – create the code. This step will be our main focus.  Sometimes the design is detailed enough that the code can (somewhat) easily be created from the design.  At other times, the design captures the overall ideas leaving more effort to create the code.
* **Debug** – test the code.  We can divide this step into two activities.  
  * One is creating test cases and running the test cases.  Sometimes the test cases do not work.  
  * When this happens we can perform the second activity, which is debugging the code to see why the test case did not work.  The term debug originated when computers were large machines with relays.  A moth got stuck in a relay causing the program to run incorrectly.  The program was debugged.
* **Maintain** – correct problems and add new capabilities to the code.  The maintain step is usually accomplished by performing a new iteration of ASDIDM, where you fix bugs in your software and/or add new capabilities.
 
This class will focus on programming, which primarily involves design, implement, and debug/test.  I will provide you with problems, which can be considered the specifications.  You will have to design your program, create the code, and test your code to make sure it satisfies the specified requirements.

There are various ways to develop software.  For examples, there is Functional Decomposition Development, Object-oriented Development, and Agile Software Development.  Java is an object-oriented language.  We will learn how to create classes and objects.  Thus we sort of touch on object-oriented development; however, CPSC 240 is our course the teaches object-oriented development.

