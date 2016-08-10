---
title: Software Development Process
tags: [algorithm]
keywords: java, software development
last_updated: August 10, 2016
summary: "<li>Understand the steps of the software development process.</li> <li>Understand the steps that our course will focus upon.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_1_software_development_process/
---

## Software Development Process

Programming is typically done within the context of a software development process.  A software develop process can be thought of as an algorithm for creating programs.  I will often refer to this process as ASDIDM, where this is an acronym for the following sequence of steps that solves the problem of creating programs.  Each step is a phase in the software development process.

* **Analyze Phase** – Keyword: *understand*.  During the analyze phase you study the problem to understand it.  Often someone else (your customer) has a problem for you to solve.  You study the problem and ask the customer questions to better understand the problem

* **Specification Phase** – Keyword: *what*.  During the specification phase you state *what* the problem is.  The specification phase captures the requirements of the software.  This is usually accomplished using text that the programmer and the customer can read and agree upon.  An importan point for requirements is they do not attempt to solve the problem.  You want the problem clearly stated so you and the customer can agree on the problem being solved.  Large software development organizations will have specialized requirements management tools.

* **Design Phase** – Keyword: *how*.  During the design phase you capture how the problem is solved.  The design phase uses the requirements in two separate design activities.
  * Design the code.  Designing code creates *how* the problem is solved.  This captures the high-level algorithms and data structures of the software.  We will use pseudo code similar to that used to discuss [Algorithms](/gustycooper.github.io/mydoc_1_algorithms).   [Eck 4.6](http://math.hws.edu/javanotes/c4/s6.html) provides an interesting discussion on design.  You may not be quite ready for this discussion at this point in your study, but you can keep it in the back of your mind for future reference.
  * Design the test cases.  This captures a set of test cases that you can run against your code to determine if the code satisfies the requirements.

* **Implementation Phase** – create the code. This step will be our main focus.  Sometimes the design is detailed enough that the code can (somewhat) easily be created from the design.  At other times, the design captures the overall ideas leaving more effort to create the code.

* **Test and Debug Phase** – During this phase we run the test cases (created in the design phase) against the code created during the implementation phase.  When our test cases do not produce our expected results, we have to debug our code to determine why it is malfunctioning.  The term debug originated when computers were large machines with relays.  A moth got stuck in a relay causing the program to run incorrectly.  The program was debugged.

* **Maintenance Phase** – correct problems and add new capabilities to the code.  The maintain step is usually accomplished by performing a new iteration of ASDIDM, where you fix bugs in your software and/or add new capabilities.
 
This class focuses on programming, which primarily involves design, implement, and debug/test.  I provide problems, which can be considered the specifications.  You design your program, create test cases, implement the code, and test/debug your code to make sure it satisfies the specified requirements.

There are various ways to develop software.  For examples, there is Functional Decomposition Development, Object-oriented Development, and Agile Software Development.  Java is an object-oriented language.  We will learn how to create classes and objects.  Thus we sort of touch on object-oriented development; however, CPSC 240 is our course the teaches object-oriented development.

## Software Development Process Pattern

The software development process pattern figure allows you to easily visualize the software development process.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Software Development Process Pattern
</b>
<br>
<img title="SW Dev Process" src="{{ "/images/processFigure.png" | prepend: site.baseurl }}" />
</div>

