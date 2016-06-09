---
title: Pig - Computer
keywords: pig
last_updated: June 5, 2016
summary: "Lab 4, Pig - Computer"
sidebar: labs_sidebar
permalink: /labs_lab04_11/
toc: false
---

## Create a Java Pig Game (Computer)

**Points**: Complete this entire section for 10 points.

NOTE: The Pig Game lab is a rendition of a project created by Ian Finlayson.

Now that you have implemented Pig, lets create another version of Pig where the second player is the computer.  This is a relative simple simulation.  Whenever it is the computer’s first time to roll, it will always select yes.  You need some algorithm to choose whether to roll on subsequent rolls.  The following two steps shows a way to play the computers turn, where the computer has its own ```Dice``` object, shown as ```computerDie``` in the following.  This means that your code would have the following declaration: ```Dice computerDie = new Dice(1342);```

* Roll 1: Yes perform the first roll.
* Roll 2, 3, 4, …: Use the following algorithm to determine whether to roll.  You should realize the following is an aggressive algorithm since the computer will choose to roll 2 out of 3 times.

```java
int choice = computerDie.roll2();
boolean computerRoll;
switch (choice) {
case 2: case 4: case 5: case 6:
     computerRoll = true;
     break;
case 1: case 3:
     computerRoll = false;
     break;
```

The following is an example run.

```java
Let's play some pig.
What is the winning score? 
11

Player 1 Your Turn!
Your turn score is 0
Player 1 Total Score: 0; Computer Total Score: 0
Would you like to (R)oll or (H)old? r
You rolled a 6

Player 1 Your Turn!
Your turn score is 6
Player 1 Total Score: 6; Computer Total Score: 0
Would you like to (R)oll or (H)old? r
You rolled a 4

Player 1 Your Turn!
Your turn score is 10
Player 1 Total Score: 10; Computer Total Score: 0
Would you like to (R)oll or (H)old? h

Computer Your Turn!
Your turn score is 0
Computer Total Score: 0; Player 1 Total Score: 10
Computer chose to roll.
You rolled a 2

Computer Your Turn!
Your turn score is 2
Computer Total Score: 2; Player 1 Total Score: 10
Computer chose to roll.
You rolled a 5

Computer Your Turn!
Your turn score is 7
Computer Total Score: 7; Player 1 Total Score: 10
Computer chose to hold.

Player 1 Your Turn!
Your turn score is 0
Player 1 Total Score: 10; Computer Total Score: 7
Would you like to (R)oll or (H)old? r
You rolled a 2
Your total score is 12

Congratulations Player 1! You won.
```

