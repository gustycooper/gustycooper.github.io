---
title: Pig - Two Person Lab
keywords: pig, loop, conditional
last_updated: July 17, 2016
summary: "<li>Practice using loops and conditionals to create a Pig game.</li>"
sidebar: labs_sidebar
permalink: /labs_lab04_10/
toc: false
---

## Create a Java Pig Game (Two-person)

**Points**: Complete this entire section for 10 points.

NOTE: The Pig Game lab is a rendition of a project created by Ian Finlayson.

Pig is a two-player game in which each player tries to get 100 points before the other.  In Pig, players take turns rolling a die. For each turn, the player may roll the die as many times as they like until they get a 1. If a player rolls a 1, then they receive zero points for that turn. If a player elects to stop rolling (or "hold") before they get a 1, then they get the sum of all die rolls that turn. The score for that turn is then added into their final score.  The strategy in Pig is to try to get as many points as you can, then hold before you lose them all, which happens when you roll a 1. The following is an example roll sequence, where I earn 13 points.

* I roll a 5. 
* I can accept those 5 points, or I can choose to roll again.  In this example, I choose to roll again, and I and roll a 2. Then 
* I now have a total of 7 points, which I can accept or I can choose to roll again in hopes of getting more points.  Since I am feeling lucky, I choose to roll again and roll a 6. 
* I now have 13 points.  Since I think my luck has run out, I choose to hold and receive 13 points for that roll sequence.

On the other hand, if I roll a 6, then a 3, then a 1, I receive 0 points for that turn.

The Two-person version of this program allows two people to compete against each other.  Your program will roll the die and keep score.  Each person playing the game is responsible for his or her own strategy.  You should use your ```Dice``` type created in [Dice](/gustycooper.github.io/labs_lab03_05).  You can simply copy the ```Dice.java``` file into your BlueJ project folder for this project. You can also ask the user for a winning score so that you do not have to play to 21.  A smaller winning score can be easier to test.  The following is an example sequence of your program.

```java
Let's play some pig.
What is the winning score? 
11

Player 1 Your Turn!
Your turn score is 0
Player 1 Total Score: 0;  Player 2 Total Score: 0
Would you like to (R)oll or (H)old? r
You rolled a 1
You scored a 0 on this turn!

Player 2 Your Turn!
Your turn score is 0
Player 2 Total Score: 0;  Player 1 Total Score: 0
Would you like to (R)oll or (H)old? r
You rolled a 5

Player 2 Your Turn!
Your turn score is 5
Player 2 Total Score: 5;  Player 1 Total Score: 0
Would you like to (R)oll or (H)old? r
You rolled a 1
You scored a 0 on this turn!

Player 1 Your Turn!
Your turn score is 0
Player 1 Total Score: 0;  Player 2 Total Score: 0
Would you like to (R)oll or (H)old? r
You rolled a 3

Player 1 Your Turn!
Your turn score is 3
Player 1 Total Score: 3;  Player 2 Total Score: 0
Would you like to (R)oll or (H)old? r
You rolled a 5

Player 1 Your Turn!
Your turn score is 8
Player 1 Total Score: 8;  Player 2 Total Score: 0
Would you like to (R)oll or (H)old? r
You rolled a 2

Player 1 Your Turn!
Your turn score is 10
Player 1 Total Score: 10;  Player 2 Total Score: 0
Would you like to (R)oll or (H)old? r
You rolled a 2
Your total score is 12

Congratulations Player 1! You won.
```

