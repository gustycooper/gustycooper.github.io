---
title: Loop Sample Code
tags: [loop]
keywords: control flow, loop, for, while, do-while
last_updated: June 7, 2016
summary: "<li>Present sample code for you to study.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_4_loop_code/
---

## ```while```, ```do-while```, and ```for``` Loop Sample Code

The loop sample code is summarized by the following.

* ```whileSum(int count)``` while loop that computes the sum from 1 to count
* ```userSum()``` Sentinel while loop the prompts for user numbers until quit is entered 
* ```threeLoops()``` Demonstrates equivalent while, do-while, and for counting loops
* ```forWithContinue()``` for loop with a continue to omit printing 5
* ```labeledLoop()``` labeled outer for loop that is continued
* ```clock(int minutes, int hours)``` clock demonstrates nested loops
* ```userLargest()``` Sentinel while loop that prompts for user numbers until quit is entered 
* ```largestInFile(String fileName)``` Sentinel while loop to find the largest number in a file
* ```average()``` Sentinel while loop to compute the average of numbers entered by the user
* ```countMatchingDigits()``` while loop to count the number of digits in a long.
* ```countNegativeNumbers()``` Sentinel while loop to count the negative numbers entered by user 
* ```fencePost()``` Demonstrate examples of fence post problems
* ```findFirstSpace()``` Demonstrate while and for loops to find the first space in a string.
* ```findFirstWord(String fileName, int wordLength)``` Find first position of a word of a specified length in file
* ```darts()``` simulates throwing darts at a circle in a square.
* ```rockPaperScissors()``` User plays rock, paper, scissors against the computer.
* ```euclid()``` Euclid's greatest common denominator algorith - uses while loop Prompts user for two integers.


File is in Google Drive```/00UMW/1Java/0Class/BlueJ/Week4/LoopExamples.java```

```java
import java.util.Scanner;
import static java.lang.System.out;
import java.util.Random;
import java.io.FileReader;
import java.io.File;

public class LoopExamples
{
    static Scanner in;
    /**
     * while loop that computes the sum from 1 to count
     * @param count  upper bound of sum sequence
     */
    public static void whileSum(int count) {
        int sum = 0;
        int i = 1;
        while (i <= count) {  // < count is fencepost problem
            sum += i;
            i++;
        }
        System.out.println("Sum from 1 to " + count + " is " + sum);
    }
    
    /**
     * Sentinel while loop the prompts for user numbers until quit is entered
     * The while loop computes the sum of the user's numbers
     */
    public static void userSum() {
        Scanner in = new Scanner(System.in);
        System.out.println("\nEnter sequence of nums, quit to see sum.");
        double sum = 0.0;
        /*
         * Sum is 0.0 if user does not enter numbers
         */
        System.out.print("Enter value, q to quit: ");
        while (in.hasNextDouble()) {  // enter quit to terminate
            sum += in.nextDouble();
            System.out.print("Enter value, q to quit: ");
        }
        System.out.println("Sum is " + sum);
    }
    
    /**
     * DemonstrateeEquivalent while, do-while, and for counting loops
     */
    public static void threeLoops() {
        System.out.println("while, do-while, and for eqivalent loops");

        System.out.println("for loop - 0 1 2 3 4");
        for (int i = 0; i < 5; i++) {
            System.out.print(" " + i);
        }
        System.out.println();
                
        System.out.println("while loop - 0 1 2 3 4"); 
        /*
         * We have to declare variable i, because the first declaration was 
         * local to the for loop.
         */
        int i = 0;
        while (i < 5) {
            System.out.print(" " + i);
            i++; // omit this for an infinite loop
        }
        System.out.println();
        
        System.out.println("do while loop - 0 1 2 3 4");
        /*
         * We do not redeclare i because we have one from the while loop.
         * We do have to reset i to 0 for our loop to work.
         */
        i = 0;
        do {
            System.out.print(" " + i++); // notice my tricky side effect print
        } while (i < 5);
        System.out.println();
    }

   /**
     * for loop with a continue to omit printing 5
     */
    public static void forWithContinue() {
        System.out.println("Print 1 to 10, omitting 5 using a continue.");
        // for loop to print 1 2 3 4 6 7 8 9 10
        for (int j = 1; j <= 10; j++) {
            if (j == 5) {
                continue;
            }
            System.out.print(" " + j);
        }
        System.out.println();
        System.out.println("j is not available here "); // + j);
    }

    /**
     * labeled outer for loop that is continued
     */
    public static void labeledLoop() {
        // print out factors with outer/inner loop
        System.out.println("Print factors with a continue.");
        outer: for (int i=0; i<10; i++) { 
            for(int j=0; j<10; j++) { 
                if(j > i) { 
                    System.out.println(); 
                    continue outer; 
                } 
                System.out.print(" " + (i * j)); 
            } 
        } 
        System.out.println(); 
    }

    /**
     * clock demonstrates nested loops
     */
    public static void clock(int minutes, int hours) {
        int count = 0;
        for (int hour = 1; hour <= hours; hour++)
            for (int minute = 0; minute < minutes; minute++) {
                System.out.printf("%2d:%02d ", hour, minute);
                // count++;
                if (++count == 10) {
                    System.out.println();
                    count =  0;
                }
            }
        System.out.println();
    }    
    
    /**
     * Sentinel while loop  that prompts for user numbers until quit is entered
     * The while loop computes the largest number entered
     * largestVal is first value from user
     * while there are more values
     *   inputVal is next value from user
     *   if inputVal > largestVal
     *     largestVal = inputVal
     */
    public static void userLargest() {
        Scanner in = new Scanner(System.in);
        System.out.println("Loop to find the largest value input.");
        /*
         * Assumes the user enters at least one number before q
         */
        System.out.print("Enter value: ");
        double largest = in.nextDouble(); // largest is the first value
        System.out.print("Enter value, q to quit: ");
        while (in.hasNextDouble())
        {
            double input = in.nextDouble();
            if (input > largest)
            {
                largest = input;
            }
            System.out.print("Enter value, q to quit: ");
        }
        System.out.println("Largest value: " + largest + "\n");
        
        String s = in.nextLine(); // consume the quit
        s = in.nextLine();
        /*
         * The following is an alternative implementation
         * The user can enter q at the first prompt.
         */
        System.out.println("Loop to find the largest value input - alternative version.");
        boolean haveFirst = false;
        double value;
        System.out.print("Enter value, q to quit: ");
        if (in.hasNextDouble()) {
          while (in.hasNextDouble()) {
            value = in.nextDouble();
            if (!haveFirst) {
              largest = value;
              haveFirst = true;
            } else if (value > largest) {
              largest = value;
            }
            System.out.print("Enter value, q to quit: ");
          }
          System.out.println("Largest value: " + largest);
        }
        else {
          System.out.println("No values entered!");
        }
        s = in.nextLine(); // consume the quit
    }

    /**
     * Sentinel while loop to find the largest number in a file
     * @param fileName  name of file with numbers
     */
    public static void largestInFile(String fileName) throws java.io.FileNotFoundException {
        if (fileName == null || fileName == "")
            fileName = "inputNumbers.txt";
        System.out.println("Find largest double in the file " + fileName);
        File inputFile = new File(fileName); 
        Scanner inDouble = new Scanner(inputFile);
        double largest = inDouble.nextDouble();
        while (inDouble.hasNextDouble()) {
            double input = inDouble.nextDouble();
             if (input > largest) {
                largest = input;
             }
        }
        System.out.println("Largest value: " + largest);
    }

    /**
     * Sentinel while loop to compute the average of numbers entered by the user
     */
    public static void average() {
        Scanner in = new Scanner(System.in);
        System.out.println("Loop to compute an average.");
        System.out.println("Select Enter to begin.");
        String s = in.nextLine();
        int count = 0;   // initialize the count of user’s numbers to 0
        double sum = 0;  // initialize the sum of user’s numbers to 0
        System.out.print("Enter a double or q to quit: ");
        //if (in.hasNextDouble()) {
          while (in.hasNextDouble()) {
            double value = in.nextDouble();
            sum = sum + value;  // we could do sum += value;
            count++;
            System.out.print("Enter a double or q to quit: ");
          }
          System.out.println("Average is " + sum  / count);
        //}
        //else {
        //  System.out.println("Error message");
        //}
        s = in.nextLine();
    }
    
    /**
     * while loop to count the number of digits in a long.  A long allows 19 digits
     * Prompts for long, prompts for digit to match, and displays count
     */
    public static void countMatchingDigits() {
        Scanner in = new Scanner(System.in);
        int counter = 0;
        System.out.print("Enter an long: ");
        long number = in.nextLong();
        System.out.print("Enter a digit to match: ");
        int digitToMatch = in.nextInt();
        long temp = number;
        while (temp > 0) {
            int digit = (int)(temp % 10);
            if (digit == digitToMatch) {
                counter++;
            }
            temp = temp / 10;
        }
        System.out.println(number + " has " + counter + " digits of " + digitToMatch);

    }
    
    /**
     * Sentinel while loop to count the negative numbers entered by user
     * Prompts for for user numbers until quit is entered
     */
    public static void countNegativeNumbers() {
        Scanner in = new Scanner(System.in);
        int counter = 0;
        System.out.print("Enter a value, q to quit: " );
        while (in.hasNextDouble()) {
            double value = in.nextDouble();
            if (value < 0) {
                counter++;
            }
            System.out.print("Enter a value, q to quit: ");
        }
        System.out.print("You entered " + counter + " negative numbers.");
    }
    

    /**
     * Demonstrate examples of fence post problems
     */
    public static void fencePost() {
        System.out.println("Fencepost examples.");
        // fence post problem examples
        // Trying to print 5 numbers
        for (int i = 0; i <= 5; i++) {
            System.out.println(i);
        }
        
        // Searching for consonants in a word
        String word = "Mississippi";
        int totCons = 0;
        for (int i = 0; i < word.length(); i++) { // change < to <= to demonstrate fence post error
            String letter = word.substring(i, i+1);
            if (!"aeiou".contains(letter.toLowerCase())) {
                totCons++;
            }
        }
        System.out.println("Mississippi contains " + totCons + " consonants.");

    }

    /** 
     * Demonstrate while and for loops to find the first space in a string. Uses a break.
     */
    public static void findFirstSpace() {
        Scanner in = new Scanner(System.in);
        System.out.println("Search a string for the first space - uses a break.");
        System.out.print("Enter a string: ");
        String s = in.nextLine();
        int i = 0;
        while (i < s.length()) {
           if (s.substring(i, i+1).equals(" ")) {
              break;
           }
           i++;
        }
        if (i == s.length()) {
           System.out.println(s + " does not contain a space");
        } else {
           System.out.println("First space in " + s + " is " + i);
        }

        System.out.println("First space in " + s + " is " + s.indexOf(" "));
        
        int firstSpace = -1;
        for (int j = 0; j < s.length(); j++)
            if (s.charAt(j) == ' ') {
                firstSpace = j;
                break;
            }
        
        System.out.println("First space in " + s + " is " + firstSpace);
    }
    
    /**
     * Find first position of a word of a specified length in file
     * @param fileName   name of file to search
     * @param wordLength length of word to search for
     */
    public static void findFirstWord(String fileName, int wordLength) throws java.io.FileNotFoundException {
        if (fileName == null || fileName == "")
            fileName = "usConstAmend.txt";
        if (wordLength <= 0)
            wordLength = 7;
        
        System.out.println("Find first word on length " + wordLength + " in "+ fileName);
        Scanner fileIn = new Scanner(new FileReader(fileName));
        String longWord = "";
        boolean found = false;
        int position = -1;
        while (fileIn.hasNext() && !found) {
            String inWord = fileIn.next();
            if (inWord.length() > wordLength) {
                longWord = inWord;
                found = true;
            }
            position++;
        }
        if (found) {
            System.out.println("The first " + wordLength + " character word in " + 
                                fileName + " is " + longWord + " at position " + position);
            System.out.println("The position is " + position);
        } else {
            System.out.println("There are no " + wordLength + " character words.");
        }
    }
        
        
  
    /**
     * darts() simulates throwing darts at a circle in a square.  
     * Randomly throw our darts, and assume that all of them hit the square.  
     * Most of the darts will be in the circle, but a few will be in 
     * the corners outside of the circle.  
     * The ratio of number of darts in the circle to the total darts thrown is an 
     * approximation of the (circle’s area / the square’s area), which is pi/4.  
     * Let our circle’s center point be at (0,0), and let the squares coordinates 
     * go from -1 to 1.  
     * The point where our dart lands will be two random numbers x and y, 
     * where both are between -1 and 1.  If the distance between our random point 
     * where the dart lands and the center point (0,0) is less than 1, our dart is 
     * in the circle, otherwise it is in the corners outside of the circle.  
     */
    public static void darts() {
        Random generator = new Random(42);
        Scanner in = new Scanner(System.in);
        System.out.println("Enter number of dart throws: ");
        int dartThrows = in.nextInt();

        int insideCircle = 0;
        for (int i = 1; i <= dartThrows; i++) {
            double x = generator.nextDouble() * 2 - 1;
            double y = generator.nextDouble() * 2 - 1;
            if (x * x + y * y <= 1) { // unit circle: short-cut exp
                insideCircle++;
            }
        }
        double piEstimate = 4.0 * insideCircle / dartThrows;
        System.out.println("PI Estimate: " + piEstimate);
    }

    /**
     * User plays rock, paper, scissors against the computer.
     */
    public static void rockPaperScissors() {
        Scanner in = new Scanner(System.in);
        String usersMove; // Why does usersMove have to be declared here
        int computerWins = 0;
        int userWins = 0;
        int ties = 0;
        do {
            System.out.print("Enter Rock, Paper, Scissors, or Quit: ");
            usersMove = in.nextLine();
            if (usersMove.equalsIgnoreCase("rock") ||
                usersMove.equalsIgnoreCase("paper") ||
                usersMove.equalsIgnoreCase("scissors")) {
                String computerMove;
                switch ( (int)(3*Math.random()) ) {
                   case 0:
                      computerMove = "Rock";
                      break;
                   case 1:
                      computerMove = "Paper";
                      break;
                   default:
                      computerMove = "Scissors"; 
                      break;
                }
                System.out.println("User: " + usersMove + " Computer: " + computerMove);
                // create algorithm to determine who wins - user or computer
                if (computerMove.equalsIgnoreCase(usersMove)) {
                    System.out.println("Tie");
                    ties++;
                } else if (computerMove.equalsIgnoreCase("Rock") && usersMove.equalsIgnoreCase("scissors") ||
                           computerMove.equalsIgnoreCase("scissors") && usersMove.equalsIgnoreCase("paper") ||
                           computerMove.equalsIgnoreCase("paper") && usersMove.equalsIgnoreCase("rock")) {
                    System.out.println("Computer wins");
                    computerWins++;
                } else {
                    System.out.println("You win");
                    userWins++;
                }
            } else if (!usersMove.equalsIgnoreCase("q") &&
                       !usersMove.equalsIgnoreCase("quit"))
                System.out.println("Illegal choice!");
            
        } while (!usersMove.equalsIgnoreCase("q") &&
                 !usersMove.equalsIgnoreCase("quit"));
        System.out.println("Total Games: " + (ties+userWins+computerWins));
        System.out.println("You won: " + userWins);
        System.out.println("Computer won: " + computerWins);
        System.out.println("Ties: " + ties);
        System.out.println("Thanks for playing with me. I hope you had fun.");
    }
    
    /**
     * Euclid's greatest common denominator algorith - uses while loop
     * Prompts user for two integers.
     */
    public static void euclid() {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter integer 1: ");
        int m = in.nextInt();
        System.out.print("Enter integer 2: ");
        int n = in.nextInt();
        int mInput = m;
        int nInput = n;
        while (m != 0) {
            int t = n;
            n = m;
            m = t % m;
        }
        System.out.println("GCD of " + mInput + "," + nInput + " is " + n);       
    }        
}
```

