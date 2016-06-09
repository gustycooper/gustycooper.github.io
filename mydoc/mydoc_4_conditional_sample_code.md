---
title: Conditional Sample Code
tags: [conditional]
keywords: control flow, conditional, if, if-then
last_updated: June 7, 2016
summary: "<li>Present sample code for you to study.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_4_conditional_code/
---

## ```if``` and ```switch``` Example Code

File is in Google Drive```/00UMW/1Java/0Class/BlueJ/Week4/IfExamples.java```

```java
import java.util.Scanner;
import static java.lang.System.out;

public class IfExamples {
    
    static Scanner in;
    /**
     * Demonstrates if to show num entered is negative, zero, or positive
     * Prompts user for a number, which is read as a double
     */
    public static void ifNumEntered() {
        System.out.println("Use if-statement to Determine if user enters -, 0 or + number.");
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a number: ");
        double number = in.nextDouble();
        // I do not use {} for the if blocks
        if (number < 0)
            System.out.println("You entered a negative number.");
        else if (number == 0)
            System.out.println("You entered 0.");
        else
            System.out.println("You entered a positive number.");
        
        System.out.println("\nDo the same thing with a conditional expression.");
        
        String s = (number < 0) ? "Negative" : (number == 0) ? "Zero" : "Positive";
        System.out.println("You entered " + s);
    }
    
    /**
     * Demonstrates switch to show num entered is negative, zero, or positive
     * Prompts user for a number, which is read as a double
     */
    public static void switchNumEntered() {
        System.out.println("\nUse switch-statement to Determine if user enters -, 0 or + number.");
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a number: ");
        double number = in.nextDouble();
        switch (number < 0 ? 1 : 2) {
            case 1:
                System.out.println("You entered a negative number.");
                break;
            case 2:
                switch (number > 0 ? 1 : 2) {
                    case 1:
                        System.out.println("You entered a positive number.");
                        break;
                    default:
                        System.out.println("You entered 0.");
                }
        }
    }
    
    /**
     * Demonstrates if on String to determine occupation
     * @param g  Name of person to determine occupation
     */
    public static void ifOccupation(String g) {
        if (g.equals("Gusty")) {
            out.println("Our CPSC 220 Teacher is " + g + " Cooper");
        }
        if (g.equals("Gusty")) {
            g = "Bicyclist";
        } else if (g.equals("Jerri Anne")) {
            g = "Chef";
        } else if (g.equals("Barrack")) {
            g = "President";
        } else {
            g = "nobody";
        }
        System.out.println("Occupation is " + g);
    }
    
    /**
     * Demonstrates switch on String to determine occupation
     * @param g  Name of person to determine occupation
       */
    public static void switchOccupation(String g) {
        switch (g.toLowerCase()) {
            case "gusty":
                g = "Bicyclist";
                break;
            case "jerri anne":
                g = "Chef";
                break;
            case "barrack":
                g = "President";
                break;
            default:
                g = "nobody";
                break;
        }
        System.out.println("Occupation is " + g);
    }
    

    /**
     * Demonstrates switch with multiple cases per break
     * Prompts user for a number, which is read as a int
     * Displays information about the number
     */
    public static void switchMultipleCasesPerBreak() {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int number = in.nextInt();
        switch (number) {
        case 1:
            System.out.println("Hello - results when you enter 1"); break;
        case 2:
        case 3:
        case 4:
        case 5:
            System.out.println("You entered 1, 2, 3, 4, 5");
            break;
        case 7:
        case 9:
        case 10:
            System.out.println("You entered 7, 9, or 10.");
            break;
        default:
            System.out.println("You entered something else.");
            break;
        }
    }


    /**
     * Demonstrates ugly nested elevator ifs that modify floor number
     * @param floor   floor on which to stop
     */
    public static int elevatorIf1(int floor) {
        int retFloor;
        if (floor > 13)
            retFloor = floor - 2; 
        else
            if (floor > 7)
                retFloor = floor - 1;
            else
                retFloor = floor;
        return retFloor;
    }
    
    /**
     * Demonstrates a better rendition of elevator ifs that modify floor number
     * @param floor   floor on which to stop
     */
    public static int elevatorIf2(int floor) {
        int retFloor;
        if (floor <= 7)
            return(floor); 
        else if (floor > 13)
            return(floor - 2);
        else
            return(floor - 1);
    }
    
    /**
     * Demonstrates elevator switch that modifys floor number
     * @param floor   floor on which to stop
     */
    public static int elevatorSwitch(int floor) {
        switch (floor) {
            case 1: case 2: case 3: case 4: case 5: case 6:
                break;
            case 7: case 8: case 9: case 10: case 11: case 12: case 13:
                floor--;
                break;
            default:
                floor -= 2;
        }
        return floor;
    }
    
    /**
     * Demonstrate switch and if to compute number of days in a month
     * @param month  number of month (1,2,..12)
     * @param year   year (e.g. 2000, 2016)
     */
    public static void switchMonth(int month, int year) {
        int numDays = 0;
    
        switch (month) {
            case 1: case 3: case 5:
            case 7: case 8: case 10:
            case 12:
                numDays = 31;
                break;
            case 4: case 6:
            case 9: case 11:
                numDays = 30;
                break;
            case 2:
                if (((year % 4 == 0) && !(year % 100 == 0)) || 
                     (year % 400 == 0))
                    numDays = 29;
                else
                    numDays = 28;
                break;
            default:
                System.out.println("Invalid month.");
                break;
        }
        System.out.println("Number of Days = " + numDays);
    }
    
    /**
     * Demonstrates a switch to generate a computer's move in rock, paper, scisssors
     * Prompts user to enter rock, paper scissors.
     * Generates and displays a random computer choice of rock, paper, scissors.
     */
    public static void rockPaperScissors() {
        Scanner in = new Scanner(System.in);
        out.print("Enter rock, paper, scissors: ");
        String youchoice = in.nextLine();
        String computerChoice;
        switch ( (int)(3*Math.random()) ) {
           case 0:
              computerChoice = "Rock";
              break;
           case 1:
              computerChoice = "Paper";
              break;
           default:
              computerChoice = "Scissors"; 
              break;
        }
        System.out.println("The computer’s choice is " + computerChoice);
        out.println("Who won?");
    }

    /**
     * Demonstrates a dangling else.  Use the following cases.
     * IfExamples.danglingElse(6); - does not print "floor < 13"
     * IfExamples.danglingElse(14);
     * IfExamples.danglingElse(30);
     * @param floor   floor on which to stop
     */
    public static void danglingElse(int floor) {
        System.out.println("\nDangling else start");
        String ans = "";  // demonstrate string concatenation
        if (floor > 13)
            if (floor < 20)
                ans += "13 < floor < 20";
        else
            ans += "floor < 13";
        System.out.println("    " + ans);
        System.out.println("Dangling else end\n");
    }
    
    /**
     * Demonstrates fix to dangling else.  Use same cases as above.
     * @param floor   floor on which to stop
     */
    public static void danglingElseFixed(int floor) {
        System.out.println("\nDangling else start");
        String ans = "";  // demonstrate string concatenation
        if (floor > 13) {
            if (floor < 20)
                ans += "13 < floor < 20";
        } else
            ans += "floor < 13";
        System.out.println("    " + ans);
        System.out.println("Dangling else end\n");
    }
    
    /**
     * Demonstrates an if to determine discount of a ticket
     * @param ticketCost   cost of a ticket
     */
    public static double ticketDiscount(double ticketCost) {
        double retCost;
        if (ticketCost < 100) {
            retCost = ticketCost - 10;             // $10 discount
        }
        else {
            retCost = ticketCost - ticketCost * .1; // 10% discount
        }
        return retCost;
    }

    /**
     * Demonstrate a static method calling another static member.
     * This demonstration calls tickDicsount
     */
    public static void planeTicket() {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter ticket cost: ");
        double cost = in.nextDouble();
        System.out.print("Discounted cost: " + ticketDiscount(cost));    
    }

    /**
     * Demonstrate swapping variables and scope
     * @param order  "a" for ascending and "d" for descending
     */
    public static void swap(String order) {
        Scanner in = new Scanner(System.in);
        out.print("Enter two numbers: ");
        double num1 = in.nextDouble();
        double num2 = in.nextDouble();
        switch (order) {
            case "d":
                if (num2 > num1) {
                    double temp = num1;
                    num1 = num2;
                    num2 = temp;
                }
                break;
            default:
                if (num1 > num2) {
                    double temp = num1;  // temp's scope is the if statement
                    num1 = num2;
                    num2 = temp;
                }
            }
        out.println((order.equals("d") ? "Descending" : "Ascending") + " numbers: " + num1 + " " + num2);
    } 
}
```

