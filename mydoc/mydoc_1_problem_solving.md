---
title: Problem Solving
tags: [algorithm, getting_started, board]
keywords: java, algorithms, design, main program
last_updated: May 1, 2016
summary: "<li>Understand problem solving.</li> <li>Understand knowledge that and how.</li> <li>Understand that programming is problem solving.</li> <li>Undestand that becoming a good programmer (problem solver) requires practice.</li> <li>Understand patterns are important in problem solving.</li> <li>Understand that we will learn many programming patterns.</li> <li>Understand that our programming patterns will be marked with programming chessboard.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_1_problem_solving/
---

## Problem Solving

Throughout your life, you will encounter problems, usually several a day.  The ability to solve problems is fundamental to living.  You wake up only to discover that your roomate has used the last dab of toothpaste.  This is a trivial problem, but you have to solve how you will brush your teeth.  Do you drive to the store and purchase a new tube?  Do you visit a neighbor to borrow a dab?  Do you brush your teeth with water, hoping there is enought paste from last night.  Do you pop a mint in your mouth an go forth.  Your solution will be based upon many factors - how many times have you encountered this (or similar) problem, your personality, etc.

## Knowledge - That and How

There are two basic types of knowledge – knowledge *that* and knowledge *how*.  Knowledge *that* are facts that you stick in your memory mansion.  For example, you know *that* the world is round and *that* the U.S. dropped the first atomic bomb on Hiroshima.  Knowledge *how* is knowing how to do things.  For example, you know *how* to ride a bicycle and *how* to cook a hamburger.   Solving problems requires both types of knowledge.  Since programming is primarily solving problems, the most knowledge we want to establish in this class is knowledge *how* – we want to learn *how* to write programs.  We will learn knowledge *that* with respect to Java and its specifics, but the knowledge *how* we learn will be applicable to any programming language.

## Mechanical Problems

Most jobs involve some sort of problem solving.  If I am a mechanic, I have to diagnose a car that is not running correctly, determine what the problem is, and then take the necessary steps to fix it.  The more cars that I have fixed, the better I become on solving automotive problems.  I have a friend who owns an auto repair shop.  My friend has been fixing automobiles as long as I have been programming.  Needless to say my friend is an expert at solving automotive problems.  Problem solving as discussed in this paragraph has several attributes.

* a particular problem domain
  *  automotive, baking, teeth brushing
* a collection of knowledge and skills used in solving problems
* a collection of tools used in solving problems
  * physical tools like sockets, wrenches, screwdrivers, etc
  * digital tools like code readers
* lots of practice in order to become a good problem solver

One important aspect in problem solving is the ability to identify solution patterns that are applicable in solving many problems.  Take for instance the pattern on changing the oil of a car, which can be described as follows.

1. Warm the engine.
2. Remove the drain plug and drain the oil into a container.
3. Remove the oil filter.
4. Replace the drain plug.
5. Replace the oil filter.
6. Fill the engine with the appropriate amount/viscosity motor oil.
7. Wipe any spilled oil.
8. Start engine and let run for a few minutes.
9. Check drain plug and oil filter for leaks.
10. If a leak is spotted, tighten plug/filter and goto step 9.

A good problem solver has many of these patterns stored away in their memory mansions.  When the person encounters a problem, the person mentally arranges the various patterns into a potential solutions.  After some thought, the potential solution may be transcribed onto paper (or some other media).  Then the person follows the steps of their potential solution to solve the problem.  When the solution is not entirely correct, the person attemps other steps.

## Programming Chess Boards

Consider a chess player, who has played chess for many years, achieving a level of grandmaster.  In achieving this level of success, the person played millions of games, many against top players (or computer algorithms).  When watching a chess game, you often think the player is thinking many moves ahdead, but this is not as true as you expect.  The grandmaster has played so many games and seen so many boards, that their memory mansion is full of patterns - weak kingside, weak squares, open lines, bishop pair.  Often the best move is dictated by the pattern of the board.  This is what happens when a grandmaster plays a number of chess games at the same time.  The grandmaster performs the following sequence of steps.

1. Move to the next board.
2. Examine the board.
3. Make a move based on the **pattern** of pieces on the board.
4. Go to step 1.

We want to fill our memory mansions with programming patterns so that when presented a problem, we can select the next move.  During this course, we will clearly mark programming patterns.  The following is our first programming pattern.

<div class="alert alert-success" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern
1. Main Pattern
</b>
<br>
<pre>
public class Main {
   public static void main(String[] args) {
      System.out.println("Hello World");
   }
}
</pre>
</div>

All programs have a main entry point, which by convention is a method named ```main```.  The above is our first Java proram, which is the obligatory Hello World program.  There are many aspects of this program that require additional study, for example, Java ```class```, a method of type ```void```, ```String[]```, ```System.out.println```.  We will study all of these aspects, and you will become an expert in everyone.  We will create and run this program in [Our First Java Programs](/gustycooper.github.io/mydoc_1_first_programs).  At this point, you should simply understand 

* Every program will have a ```main``` entry point, which is where your program begins execution.
* We will discover more programming patterns, which will be marked as shown here.


## Steps to Solving Labs and Projects

These steps are the way everyone should apply our [software development](/gustycooper.github.io/mydoc_1_software_development_process) process to solving labs and projects.  If you spend ample time in steps 1, 2, and 3; steps 4 and 5 become easier.  

1. Understand the Problem
   * Analyze specification - study the specification as soon as the problem is assigned.  This is important for projects, which (a) longer and more difficult than labs and (b) you complete by yourself.  You will often discover solutions to problems as you are wandering about campus, but if you have not studied the specification, you cannot solve the problem.  Also, Gusty tries to make things clear, but often he does not.  Ask questions untuil you understand the specification.
   * Identify inputs and outputs
   * Think about the data
2. Initial Algorithmic Thinking
   * Manually solve small concrete cases - I cannot emphasize this enough.  If you cannot create and solve small concrete cases of the problem, you will never discover the underlying algorithm and data strucutes.  Get out paper and pencil.  Draw out the problem.  Solve small concrete cases.
   * Confirm your inputs, outputs, and data that resulted from Understand the Problem
3. Design – Algorithms, Data Structs, Tests
   * Generalize the small cases into a detailed design with data structures
   * Create test cases
4. Write Java Code
   * Translate you design into Java Code
5. Test and Debug
   * Execute your test cases
   * Debug code when test cases fail



