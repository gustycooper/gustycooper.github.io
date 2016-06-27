---
title: Battleship
keywords: project
summary: "Battleship"
sidebar: projects_sidebar
permalink: /projects_battleship/
toc: false
---

## Battleship 

Stephen Davies created this project.  I edited the description.

For the Battleship Project, you will write a program that plays the game Battleship.  Your program will implement a gaming algorithm that maintains a state, uses 2-dimensional arrays, and double dispatch.  Your program can compete in live game play against your fellow students to see who implements the best Battleship algorithm.

For this project you will not be submitting a main() method.  You will develop three methods that are called by a main() method that plays students Battleship games against each other.

## Battleship – The Game

If you have never played Battleship, you should read the Wikipedia [Battleship article](https://en.wikipedia.org/wiki/Battleship_(game)) to get informed. 

Battleship is a popular game in which two players hide a fleet of ships in a sea and try to sink the others before their own go down. The standard game is played on a 10x10 board.   Each player hides five ships on the squares of this board.  The five ships and their lengths are as follows:

* Aircraft carrier - 5 squares long
* Battleship - 4 squares long
* Submarine - 3 squares long
* Destroyer - 3 squares long
* Patrol boat - 2 squares long

Each ship must be placed vertically or horizontally (not diagonally) on the board. Two ships can occupy adjacent squares, but ships cannot overlay each other.

Players take turns shooting violently at one another. On a player's turn, he or she calls out the row and column of a square on the other person's board that he or she wants to shoot at.  An example shot is “row 4, column 3!”  The opponent replies by telling the shooter which ship, if any, is at that location. An example reply is “you hit my battleship.” The shooter dutifully records this information for future use, and then responds to their opponent when they similarly call a square.

The first player to completely sink all 5 of their opponent's ships wins the game. Note that "sink" doesn't mean "hit just once" but rather "hit every square of the ship." In other words, to sink an aircraft carrier, the player must, on five of their turns, call out each of the 5 squares that the aircraft carrier occupies.

Normally, players play only two or three games before they get bored, but we're going to have a simulator playing thousands of games, with the overall winner claiming the prize.

Note that it is possible to tie in a game of Battleship, if the two players each hit their opponent's last ship square on the same (last) move.

## Battleship – Individual, Team, and Due Dates

For the Battleship Project, you will complete the following.

1. Write a jsmith_BattleshipPlayer class that implements the BattleshipPlayer interface.   This is an individual component.  The details for writing jsmith_BattleshipPlayer are provided in the next section.  The jsmith_BattleshipPlayer implements three methods.  

   * a. A method that hides your fleet of ships on an empty grid
   * b. A method that shoot at the opponent when called to do so. 
   * c. A method that resets your object at the start of a new game.

2. Test your jsmith_BattleshipPlayer against yourself and some of your team members.  Section 4.6 provides guidance on how to create a tester.   This is a team component.

Your Java class for Battleship will be stateful. This means that your Battleship class will declare instance variables that retain the state of your game.  This allows you to have memory between moves.  You must remember what you've shot at, and what was revealed on each square, so that you can intelligently decide where to shoot next.  The details of this are explained in the next section.

The due date for submitting your Battleship Project is April 7.

## Battleship – Implementation Details

In order to create a Battleship program that plays correctly, you have to follow the implementation details described in this section.

Your Java class for Battleship will be stateful. This means that your Battleship class will declare instance variables that retain the state of your game.  This allows you to have memory between moves.  You must remember what you've shot at, and what was revealed on each square, so that you can intelligently decide where to shoot next.

### Files Provided to Create Your Class

The following files are provided to you, which will be used as you edit your project in Netbeans.

* Board.java
* BattleshipPlayer.java 
* jsmith_BattleshipPlayer.java

### Your Battleship Project in Netbeans

To establish your project in Netbeans, do the following:

1. Create a new project. Call it "Battleship." (Please do not call it anything else. Please call it Battleship, capitalized.)
   * a. Ensure the Create Main Class is checked.  
   * b. In the text field next to the Create Main Class, enter
battleship.BattleshipTester
   * c. This creates a package, battleship, in your project, and it adds the BattleshipTester.java file to the package.  For now, you can ignore editing BattleShipTester.
2. This step adds the Board.java file to your battleship package.  There are two ways to do this. 
   * a. Copying the contents from Board.java into a file while using the Netbeans editor.
     * i. Right-click on the battleship (lower-case) package that Netbeans created inside your Battleship (capitalized) project, and choose "New Java Class."
     * ii. Name the new class Board.
     * iii. Open up the Board.java file you just created. Delete its entire contents, and replace it with the contents of the Board.java file provided to you.
   * b. Copying the file Board.java into the folder underlying the Netbeans package.
     * i. Use your Explorer/Finder to copy the Board.java into the Netbeans folder for the battleship package.  On my system, the target folder is 

       ```java
       .../Netbeans/Battleship/src/battleship
       ```

3. This step adds the battleship.players package to your project.
   * a. Right-click on the battleship (lower-case) package that Netbeans created inside your Battleship (capitalized) project, and choose "New Java Package."
   * b. Name the new package battleship.players, all lower-case, with no spaces, and with a dot between the two p's, just as shown.

4. This step adds the BattleshipPlayer.java file to your battleship.players package.  There are two ways to do this.
   * a. Copying the contents from Battelship.java into a file while using the Netbeans editor.
     * i. Right-click on the battleship.players package that you just created, and choose "New Java Interface."
     * ii. Name the new interface "BattleshipPlayer."
     * iii. Open up the BattleshipPlayer.java file you just created. Delete its entire contents, and replace it with the contents of the BattleshipPlayer.java file provided to you.
   * b. Copying the file Board.java into the folder underlying the Netbeans package.
     * i. Use your Explorer/Finder to copy the Board.java into the Netbeans folder for the battleship/players package.  On my system, the target folder is 

       ```java
       .../Netbeans/Battleship/src/battleship/players
       ```

5. This step adds the jsmith_BattleshipPlayer.java file to your battleship.players package, where jsmith is your UMW userid..  There are two ways to do this, but using the Netbeans editor is probably easiest for most.
   * a. Copying the contents from Battelship.java into a file while using the Netbeans editor.
     * i. Right-click on the "battleship.players" package that you created, and choose "New Java Class."
     * ii. Name the new class jsmith_BattleshipPlayer, where jsmith is your UMW userid. Please do not name the class literally jsmith_BattleshipPlayer. Rather, name it (for example) rjones2_BattleshipPlayer, if rjones2 is your userid. Please do not name the class anything else. Please do not get clever, or creative, or capitalize differently, or use a hyphen instead of an underscore, or deviate from this naming convention in any way.
     * iii. Open up the rjones2_BattleshipPlayer.java (or whatever) file you just created. Delete its entire contents, and replace it with the contents of the jsmith_BattleshipPlayer.java file provided to you. 
iv. Note that when you do this, you will immediately have an error because the class name does not match the file name.  You should fix this error by changing jsmith to your userid in the "public class" line.
   * b. This step assumes your UMW userid is rjones2.  Rename the file jsmith_BattleshipPlayer.java to rjones2_BattleshipPlayer.java. Copy the rjones2_BattleshipPlayer.java into the Netbeans folder for the battleship/players package.  On my system, the target folder is 

     ```java
     .../Netbeans/Battleship/src/battleship/players
     ```

6. You are now ready to begin your mission of implementing the hideShips(), go(), and reset() methods.

### Packages

As can be determined from the above instructions, this project consists of two packages: one called battleship, and the other called battleship.players. This is an extremely common practice in object-oriented programming, and is akin to organizing files within folders. The Board class (as well as the simulator class, and your main method) will be in the battleship package. The BattleshipPlayer.java interface, as well as your own (and all your fellow students') implementations of the player, will be in the battleship.players package.

### Your methods

Your rjones2_BattleshipPlayer.java file has detailed comments describing the hideShips(), go(), and reset() methods you are to write code for. Reading these detailed comments is an excellent and praiseworthy idea.

The method hideShips() returns a new Board object that has your ships hidden within it. Read the comments in the Board class for information on how to use its constructor. It takes a 2-dimensional array of characters as an argument, representing your board. Ships are represented in this array with the character of their first letter (capital 'A' for aircraft carrier, capital 'B' for battleship, etc.) and all empty squares are represented with the space character ' '.  Recall that in Java, a character is delimited by single quotation marks, unlike Strings, which use double quotes.

A very important note about the hideShips() method: it must not return the same board twice in a row. This is partially for your own good (if you hide your ships in the same place each time, you're mincemeat for clever programmers who will remember where you put them and literally blow you out of the water in 17 moves the next round) and partially because I want you to think about how to ensure that this happens. Hint: use an instance variable.

The go() method is where you'll spend most of your time. It uses a technique called "double dispatch" in which it is given an argument that it calls method on. The argument is a Board object, and your job in go() is to choose a square to fire at and call the fireAt() method once to fire at that square. It will return the contents of that square, which you'll probably want to remember for future use. Note that calling fireAt() more than once per turn is not only cheating, it's detectable cheating, and my program will catch you and flog you if you try to do it.

The reset() is called when the game is over and a new game is starting.  The control program will play a 10,000 game sequence.  The reset() method gives your object a chance to catch its breath and prepare itself for a new game.

## Battleship Tournament

Your rjones2_BattleshipPlayer.java file is due on April 7.  I will collect all of the .java files from Canvas, and we will have a Battleship Tournament in class on April 12.  We will hold a world cup bracket-style Battleship tournament in which all functioning programs are entered as participants. Drama and excitement will be aplenty as the big screen shows the action. The grand prizewinner will receive a valuable prize.

## Grading

You have two grading options for this assignment. You can go for a B, or you can go for an A.  It is easy to get a B on the Battleship Project; however, it is difficult to get an A.

### For a B...

To receive a B for this assignment, it is only necessary that your methods return a correct answer. In other words, your hideShips() method must always return a valid Board, and never the same one twice in a row. Your go() method must always fire at a valid square. And your reset() method must not barf. Beyond that, it doesn't matter how "dumb" your methods are, or how badly they play: they only must play according to the rules.

Note that in order to confirm that your methods are returning correct answers, you will need to thoroughly test your code by giving it a variety of inputs. This is part of your challenge: what are the different cases? (See notes on "Testing," below.)

### For an A...

To get an A, you must go beyond simply legality and attempt to implement an intelligent strategy for playing the game. You must strive to fire not only at a legal square, but a good square. Think about how you actually play the game of Battleship.  For example questions consider the following.  Where do you hide your ships? How do you choose where to fire next? Try to write code that imitates your thought process.

The criteria for judging whether you attempted to implement an intelligent strategy is given by the following.

1. If you are one of the final two players in the Battleship tournament, your program will automatically and unquestionably judged to be of A quality.
2. If you do not make it to the final two players, I will consider how far you advanced.  I will also examine your compellingly documented code to judge whether you attempted a non-trivial, intelligent approach. Your comments should narrate your algorithm completely and transparently. They should shed light on what your code is doing, and why, and explain the theory behind your approach. I will award "A-range" points solely at my discretion based on how thorough and creative your program looks to me.

### For something worse...

Note that your program cannot be entered into the tournament if it does not meet the "for a B..." criteria above. This is for the simple reason that it will crash my program. Only programs that return correct answers will be eligible for the tournament, which will be tested prior to our tournament.

## Testing

To test your Battleship player, you're going to have to write some code in main method. You initial tester will probably be short.  The strategy for your tester is to create two BattleshipPlayers using your BattleshipPlayer, and then play them against each other.  The following shows how to create two BattleshipPlayers that use my userid.

  ecooper_BattleshipPlayer a = new ecooper_BattleshipPlayer();
  ecooper_BattleshipPlayer b = new ecooper_BattleshipPlayer();

After creating your players, you can create a loop where (on each loop iteration) they fire at each other.  Of course your two Battleship players will have to hide a Board prior to playing, which will be what is fired at – a will fire at b’s Board and b will fire at a’s Board.  

The Board class has a field and a method that are useful in your tester.

* firedAtThisRound – you have to set this field to false on each iteration of the loop
* isComplete – this method returns true when a board is complete, meaning all of the ships are sunk.

The following is an example tester.

```java
package battleship;

import battleship.players.ecooper_BattleshipPlayer;

/**
 * Created by yoda
 */
public class BattleshipTester {
    public static void main(String[] args) {
        ecooper_BattleshipPlayer a = new ecooper_BattleshipPlayer();
        ecooper_BattleshipPlayer b = new ecooper_BattleshipPlayer();

        Board aBoard = a.hideShips();
        System.out.println(aBoard);
        Board bBoard = b.hideShips();
        System.out.println(bBoard);
        a.reset();
        b.reset();

        int step = 1;

        for(int i = 0; i < 9; i++) {
            System.out.println("STEP " + step + " ================");
            bBoard.firedAtThisRound = false;
            a.go(bBoard);
            System.out.println(bBoard);
            aBoard.firedAtThisRound = false;
            b.go(aBoard);
            System.out.println(aBoard);
            if (aBoard.isComplete()) {
                System.out.println("B Wins!");
                break;
            }
            if (bBoard.isComplete()) {
                System.out.println("A Wins!");
                break;
            }
            step++;
        }
    }
}
```

