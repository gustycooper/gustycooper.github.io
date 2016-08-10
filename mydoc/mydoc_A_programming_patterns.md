---
title: Programming Patterns
tags: []
keywords: programming patterns
last_updated: August 10, 2016
summary: "<li>Understand the CPSC 220 Programming Patterns.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_A_programming_patterns/
---

## Programming Patterns

## Wirth Pattern

The Wirth Pattern was developed in the Intro & 1st Programs module and shown in [Primitive Types](/gustycooper.github.io/mydoc_1_primitive_types).  We reference the Wirth Pattern in other modules.  For example, when studying [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects) focus on the Data Structures component and studying [Control Flow](/gustycooper.github.io/mydoc_4_control_flow) focuses on the Algorithms component.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Wirth Pattern
</b>
<br>
<img title="computer" src="{{ "/images/wirthFigure.png" | prepend: site.baseurl }}" />
</div>


## Main Program Pattern

The Main Program Pattern was developed in the Intro & 1st Programs module and shown in [Problem Solving](/gustycooper.github.io/mydoc_1_problem_solving).  We use the Main Program Pattern in every Java program we create.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Main Program Pattern
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

## Output Program Pattern

We know that all programs accept input and produce output.  The Output Program Pattern shows how to produce output in the terminal.  We developed output in the Intro & 1st Program module and showed the Output Program Pattern in [Our First Java Programs](/gustycooper.github.io/mydoc_1_first_programs).

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Output Pattern
</b>
<br>
<pre>
public class OutputPattern {
   public static void main(String[] args) {
      System.out.print(data);   // prints to current line, leaving terminal on that line
      System.out.println(data); // prints to current line, advancing terminal to the next line
      System.out.println("Hello World");
   }
}
</pre>
</div>

* The parameter ```data``` is a ```String```.  The attributes of ```String```s as defined above apply when passing a string to ```print``` and ```println```.
* The rationale for prefixing ```print``` and ```println``` with ```System.out``` will be explained in [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects).
* If you have several values to ```print``` you simply concatenate them.  The following is an example.

```java
int num1 = 4;
double num2 = 3.14;
System.out.println("Num 1 is " + num1 + " and num 2 is " + num2 + ".");
```

## Input Program Pattern

We know that all programs accept input and produce output.  The Input Program Pattern shows how to accept input from the terminal.  We developed output in the Intro & 1st Program module and showed the Input Program Pattern in [Our First Java Programs](/gustycooper.github.io/mydoc_1_first_programs).  The Input Program Pattern uses a ```Scanner``` object.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Input Pattern
</b>
<br>
<pre>
import java.util.Scanner;

public class InputPattern {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      System.out.print("Enter Your Name: ");
      String name = in.nextLine();
      System.out.println("Hello " + name);
      System.out.print("Enter a number: ");
      double d1 = in.nextDouble();
      System.out.print("Enter a number: ");
      double d2 = in.nextDouble();
      System.out.println(d1 + " + " + d2 + " is " + (d1 + d2));
   }
}
</pre>
</div>

## JVM, JDK, and JRE Pattern

We developed JVM, JDK, and JRE in the Intro & 1st Program module and showed the pattern in [IDEs, Compiling, Interpreting](/gustycooper.github.io/mydoc_1_ides_compiling_interpreting).  The JVM, JDK, and JRE pattern figure allows you to easily visualize compiling and execution of Java programs.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: JVM, JDK, and JRE Pattern 
</b>
<br>
<img title="JVMJDKJRE" src="{{ "/images/jvmJdkJreFigure.png" | prepend: site.baseurl }}" />
</div>

## Software Development Process Pattern

We developed JVM, JDK, and JRE in the Intro & 1st Program module and showed the pattern in [Software Development Process](/gustycooper.github.io/mydoc_1_software_development_process).  The software development process pattern figure allows you to easily visualize the software development process.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Software Development Process Pattern
</b>
<br>
<img title="SW Dev Process" src="{{ "/images/processFigure.png" | prepend: site.baseurl }}" />
</div>

## Swapping Variables Pattern

We developed Swapping Variables Pattern in the Expressions module and showed the pattern in [Assignment Expressions](/gustycooper.github.io/mydoc_2_assignment_expressions).  

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Swap Variables Pattern
</b>
<br>
<pre>
public class SwappingVariablesPattern {
   public static void main(String[] args) {
      int x = 1;
      int y = 2;
      int t = x; // t is 1
      x = y;     // x is 2
      y = t;     // y is 1
   }
}
</pre>
</div>

## Random Number Pattern

We developed Random Number Pattern in the Simple Objects module and showed the pattern in [Java Random](/gustycooper.github.io/mydoc_3_random).  The Random Number Pattern uses a ```Random``` object and ```Math.random``` to generate a random ```int``` and ```double```.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Random Number Pattern
</b>
<br>
<pre>
import java.util.Random;

public class RandomNumberPattern {
   public static void main(String[] args) {
      Random generator = new Random(42); // seed get same stream for testing
      int i = generator.nextInt(6); // 0 <= i < 6
      i = generator.nextInt(6) + 1; // 1 <= i <= 6
      double x = generator.nextDouble(); // 0 <= x < 1
      x = Math.random(); // 0 <= x < 1
      i = (int)(6*Math.random())+1; // 1 <= i <= 6
   }
}
</pre>
</div>

## Defining Type Pattern 

We developed Defining Type Pattern in the Simple Objects module and showed the pattern in [Our First Classes](/gustycooper.github.io/mydoc_3_our_first_classes).  

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Defining Type Pattern
</b>
<br>
<pre>
public class OurType {

   // Define instance variables

   // Declare constructors

   // Declare instance methods
}
</pre>
</div>

## Defining Tester Pattern

We developed Defining Tester Pattern in the Simple Objects module and showed the pattern in [Our First Classes](/gustycooper.github.io/mydoc_3_our_first_classes).  

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Defining Tester Pattern
</b>
<br>
<pre>
public class OurTypeTester {

   public static void main(String[] args) {
      OurType x = new OurType();
      x.method();
   }
}
</pre>
</div>

## Counting Loop Pattern

We developed Counting Loop Pattern in the Control Flow module and showed the pattern in [Loops, while, for, do-while](/gustycooper.github.io/mydoc_4_loops).  

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Counting Loop Pattern
</b>
<br>
<pre>
for(&lt;iteration-var&gt; = &lt;min&gt;; &lt;iteration-var&gt; <= &lt;max&gt;; &lt;iteration-var&gt;++) { 
	&lt;statements&gt;
}

for(&lt;iteration-var&gt; = 0; &lt;iteration-var&gt; < &lt;lenMinusOne&gt;; &lt;iteration-var&gt;++) { 
	&lt;statements&gt;
}
</pre>
</div>

## Fence Post Pattern

We developed Fence Post Pattern in the Control Flow module and showed the pattern in [Loop Patterns](/gustycooper.github.io/mydoc_4_loop_patterns).  

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Fence Post Pattern
</b>
<br>
<img title="Fence Post Pattern" src="{{ "/images/fencePost.png" | prepend: site.baseurl }}" />
<pre>
public class FencePostPattern {
   public static int fencePostProblem(String word) {
      int totCons = 0;
      // loops one beyond lenght of word
      for (int i = 0; i <= word.length(); i++) {
         String letter = word.substring(i, i+1);
         if (!”aeiou”.contains(letter.toLowerCase())) {
             totCons++;
         }
      }
      return totCons;
   }
}
</pre>
</div>


## Sentinel Loop Pattern

We developed Sentinel Loop Pattern in the Control Flow module and showed the pattern in [Loop Patterns](/gustycooper.github.io/mydoc_4_loop_patterns).  

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Sentinel Loop Pattern
</b>
<br>
<pre>
import java.util.Scanner;
public class SentinelLoopPattern {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      System.out.println("\nEnter sequence of nums, quit to see sum.");
      double sum = 0.0;
      /*
       * Sentinel is quit
       * Sum is 0.0 if user does not enter numbers
       */
      System.out.print("Enter value, q to quit: ");
      while (in.hasNextDouble()) {  // enter quit to terminate
         sum += in.nextDouble();
         System.out.print("Enter value, q to quit: ");
      }
      System.out.println("Sum is " + sum);
   }
}
</pre>
</div>

## Accumulator Pattern

We developed Accumulator Pattern in the Control Flow module and showed the pattern in [Loop Patterns](/gustycooper.github.io/mydoc_4_loop_patterns).  

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Accumulator Loop Pattern
</b>
<br>
<pre>
initialize variable(s)
loop begin
   update variable(s)
loop end
variable(s) has accumulated a value
</pre>
</div>

## Compute Sum/Average Pattern

We developed Compute Sum/Average Pattern in the Control Flow module and showed the pattern in [Loop Patterns](/gustycooper.github.io/mydoc_4_loop_patterns).  

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Sum/Average Loop Pattern
</b>
<br>
<pre>
import java.util.Scanner;
public class SumAveragePattern {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      double value;    // will contain each value input by user
      int count = 0;   // initialize the count of user’s numbers to 0
      double sum = 0;  // initialize the sum of user’s numbers to 0
      System.out.println("Enter a double or q to quit: ");
      if (in.hasNextDouble()) {
         while (in.hasNextDouble()) {
            value = in.nextDouble();
            sum = sum + value;  // we could do sum += value;
            count++;
            System.out.println("Enter a double or q to quit: ");
         }
         System.out.println("Sum: " + sum + ", Average: " + (sum / count));
      }
      else {
         System.out.println("No numbers entered");
      }
   }
}
</pre>
</div>

## Find Largest (or Smallest) Pattern

We developed Find Largest (or Smallest) Pattern in the Control Flow module and showed the pattern in [Loop Patterns](/gustycooper.github.io/mydoc_4_loop_patterns).  You can change the comparison from ```>``` to ```<``` to find the smallest.  

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Find Largest Loop Pattern
</b>
<br>
<pre>
Pseudo Code
largestVal is first value from the user
while there are more values
   inputVal is next value from the user
   if inputVal > largestVal
     largestVal = inputVal

Code
import java.util.Scanner;
public class SumAveragePattern {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      double largest;
      boolean haveFirst = false;
      System.out.println("Enter a double or q to quit: ");
      if (in.hasNextDouble()) {
        while (in.hasNextDouble()) {
          value = in.nextDouble();
          if (!haveFirst) {
            largest = value;
            haveFirst = true;
          } else if (value > largest) {
            largest = value;
          }
          System.out.println("Enter a double or q to quit: ");
        }
        return largest;
      }
      else {
        System.out.println("No numbers entered");
      }
   }
}
</pre>
</div>

## Find Largest Pattern for Numbers in a File

We developed Find Largest Pattern in a File in the Control Flow module and showed the pattern in [Loop Patterns](/gustycooper.github.io/mydoc_4_loop_patterns).  
We connect a Java ```Scanner``` to an input file, and read numbers from a file to find the largest number.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Find Largest in File Loop Pattern
</b>
<br>
<pre>
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class LargestNumInFile {
   public static void main(String[] args) throws FileNotFoundException{
        File inputFile = new File("inputFile.txt"); 
        Scanner in = new Scanner(inputFile);
        double largest = in.nextDouble();
        while (in.hasNextDouble()) {
            double input = in.nextDouble();
             if (input > largest) {
                largest = input;
             }
        }
        System.out.println("Largest value: " + largest);
    }
}
</pre>
</div>

## Count Matches Pattern

We developed Count Matches Pattern in the Control Flow module and showed the pattern in [Loop Patterns](/gustycooper.github.io/mydoc_4_loop_patterns).  

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Count Matches Loop Pattern
</b>
<br>
<pre>
import java.util.Scanner;
public class CountMatchingDigits {
   public static void main(String[] args) {
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
</pre>
</div>

## Find Position of First Match Pattern

We developed Find Position of First Match Pattern in the Control Flow module and showed the pattern in [Loop Patterns](/gustycooper.github.io/mydoc_4_loop_patterns).  

A ```String``` is a sequence of characters.  A ```String``` can also be a sentence with words.  The position of a match in a ```String``` is the index where the ```String``` begins.  For examples,

* The first ```'a'``` in ```"I am a teacher."``` is at position 2.
* The first ```"brick"``` in ```"Lego bricks are not masonry bricks"``` is at position 5.

The Find Poistion of First Match Pattern finds the index where the match begins.  The example in ths section uses ```String```, but this pattern works with any sequential collection such as arrays and ```ArrayList```s.

The following example finds the position of a space in a ```String```.  If the ```String``` does not contain a space, the position is determined to be -1.  You should notice this mimicks the semantics of the ```String``` method ```indexOf```.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern: Find Position of First Match Loop Pattern
</b>
<br>
<pre>
public class FindPositionOfFirstMatch {
   public static void main(String[] args) {
      String s = "Thissentence hasaspace";
      int firstSpace = -1;
      for (int j = 0; j < s.length(); j++)
         if (s.charAt(j) == ' ') {
            firstSpace = j;
            break;
         }
        
      System.out.println("First space in " + s + " is " + firstSpace);
   }
}
</pre>
</div>

