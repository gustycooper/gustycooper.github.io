---
title: Programming Contest
keywords: contest
last_updated: August 5, 2016
summary: "<li>Understand the problems that comprise the programming contest, which accompanies the labs.</li>"
sidebar: labs_sidebar
permalink: /programmingContest/
toc: false
---

<h1 class="page-header"><font color="blue">Programming Contest</font></h1>

The [CPSC220 Programming Contest](http://ec2-54-86-10-46.compute-1.amazonaws.com/~mooshak/) is a website with Mooshak, which is a programming contest software package. Usually programming contests have a short period of time to complete the problems.  Our programming contest runs the entire semester.  Each team has a login.  The contest has 14 problems.  Problems A through I are associated with specific labs.  A team must submit a solution to these problems to get maximum points on the lab.  Problems J through N are provided for extra credit points - they are more difficult problems.

## Programming Contest Guidance 

For each programming contest problem, you should adhere to the following rules.

* You should use a ```Scanner``` to read the input values.  
* Do not prompt for input.  The input will be there.
* You should use ```System.out``` to generate your output.
* The output has to match exactly.
* The Java Math class has a sqrt method. 


<h1 class="page-header"><font color="blue">Problem A - Adding Doubles</font></h1>

## Problem A - Adding Doubles

Write a program that reads two doubles from the console and prints their sum.

### Input

The input will consist of one line with two doubles separated by a space.

### Output

The output will be one line that is the sum of the two doubles.

### Sample Input

```java
43.5 51.2
```

### Sample Output

```java
94.7
```

<h1 class="page-header"><font color="blue">Problem B - Who is Closer</font></h1>

## Problem B - Who is Closer

Write a program that determines which of two people are closer to you. 

* The people are in a grid that can be viewed as a plane.  

* The x-coordinates have a range of -20 to 20.  

* The y-coordinates have a range of -20 to 20.  

* You are located at position (0,0).  

* The two people are somewhere in the grid.

* If both people are the same distance from you, your answer shall be Person 2 is closer

### Input

The input is defined as follows.

* One line with four doubles with a space between each value. 
* The first pair of numbers are the x and y coordinates of person number 1.  
* The second pair of numbers are the x and y coordinates of person number 2. 

### Output

The output will be one line that is the person that is closest to you

### Sample Input - Example 1

```java
3 -2 -5 -3
```

### Sample Output - Example 1

```java
Person 1 is closer
```

### Sample Input - Example 2

```java
3 3 -2 2
```

### Sample Output - Example 2

```java
Person 2 is closer
```

<h1 class="page-header"><font color="blue">Problem C - Counting Letters</font></h1>

## Problem C - Counting Letters

Write a program that counts the number of times a specific letter occurs on a line. 

### Input

The input is defined as follows.

* The first line is the letter that is to be counted. 
* The second line is the number of subsequent lines of inputs.  
* There will be an additional X lines of input where X is the number on line 2. 

The number of subsequent lines of input defined by input line 2 will be greater than or equal to 1.  You shall ignore case when counting.

### Output

The output will be one line for each of the X input lines where each output line contains the count of characters of the corresponding input line.

### Sample Input - Example 1

```java
a
3
hat
this
available
```

### Sample Output - Example 1

```java
1
0
3
```

### Sample Input - Example 2

```java
s
2
MissiSSippi Rivers
This is my time to Shine.
```

### Sample Output - Example 2

```java
5
3
```

<h1 class="page-header"><font color="blue">Problem D - Palindromes</font></h1>

## Problem D - Palindromes

Write a program that checks for palindromes and reverses strings. 

### Input

The input is defined as follows.

* The first line is the number of subsequent lines of input.  This number will be greater than or equal to 1. 
* The subsequent lines contain text - up to 50 characters.   

### Output

The output will be one line for each of the input lines with text.  The output line will be Palindrome if the input line is a palindrome; otherwise, the output line will be a reverse of the input line.  When checking for palindrome, you will ignore case and you will skip punctuation and spaces.

### Sample Input - Example 1

```java
3
Hello there!
Madam I'm Adam
Rise to vote sir.
```

### Sample Output - Example 1

```java
!ereht olleH
Palindrome
Palindrome
```

### Sample Input - Example 2

```java
s
2
A nut for a jar of tuna.
This is my time to Shine.
```

### Sample Output - Example 2

```java
Palindrome
.enihS ot emit ym si sihT
```

<h1 class="page-header"><font color="blue">Problem E - Shopping Spree</font></h1>

## Problem E - Shopping Spree

Write a program that goes shopping.  You receive a credit C at a local store and would like to buy two items. You first walk through the store and create a list L of all available items. From this list you would like to buy two items that add up to the entire value of the credit. The solution you provide will consist of the two integers indicating the positions of the items in your list (smaller number first).

### Input

The first line of input gives the number of cases, N. N test cases follow. For each test case there will be:

* One line containing the value C, the amount of credit you have at the store. 
* One line containing the value I, the number of items in the store. 
* One line containing a space separated list of I integers. Each integer P indicates the price of an item in the store. 
* Each test case will have exactly one solution. 

### Output

For each test case, output one line containing "Case #x: " followed by the indices of the two items whose price adds up to the store credit. For this problem, the index number is the position of the item - e.g., the second item is index 2.  The lower index should be output first.

### Limits

```java
N <= 10, 5 <= C <= 1000, 1 <= P <= 1000, 3 <= I <= 100
```

### Sample Input

```java
3
100
3
5 75 25
200
7
150 24 79 50 88 345 3
8
8
2 1 9 4 4 56 90 3
```

### Sample Output

```java
Case #1 2 3
Case #2 1 4
Case #3 4 5
```

<h1 class="page-header"><font color="blue">Problem F - Three N Plus One</font></h1>

## Problem F - Three N Plus One

### Background

Problems in Computer Science are often classified as belonging to a certain class of problems (e.g., NP, Unsolvable, Recursive).  In this problem you will be analyzing a property of an algorithm whose classification is not known for all possible inputs.

Consider the following algorithm.

1. Input n
2. Print n
3. If n == 1 then STOP
4. If n is odd then n = 3*n + 1
5. Else n = n/2
6. GOTO 2

Given the input 22, the following sequence of numbers will be printed

```java
22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
```

It is conjectured that the algorithm above will terminate (stops after printing 1) for any integer value.  Despite the simplicity of the algorithm, it is unknown whether this conjecture is true.  It has been verified, however, for very large integers.

Given an input n, the number of numbers printed (including 1) is called the cycle-length of n.  In the example above where n is 22, the cycle length is 16.

For any two integers I and J, you shall determine the maximum cycle length and the minimum cycle length over all numbers between (and including) I and J.

### Input

The first line of the input gives the number of cases, N.  N test cases follow.  For each test case there will be one line that contains a pair of integers I and J.  All integers will be less that 10,000 and greater than 0.

### Output

For each pair of input integers I and J you shall output one line that contains I, J, the minimum cycle length, and the maximum cycle length.  The cycle lengths shall be computed for integers between and including I and J. The I and J output must be in the same order in which they appeared in the input.  The exact format for each output line is shown in the sample output.

### Sample Input

```java
4
1 10
100 200
201 210
900 1000
```

### Sample Output

```java
Range: 1...10 Min: Num: 1, Cycle: 1 Max: Num: 9, Cycle: 20
Range: 100...200 Min: Num: 128, Cycle: 8 Max: Num: 171, Cycle: 125
Range: 201...210 Min: Num: 208, Cycle: 14 Max: Num: 206, Cycle: 89
Range: 900...1000 Min: Num: 904, Cycle: 16 Max: Num: 937, Cycle: 174
```

The following explains the first output line above.

* The range of numbers is 1 to 10 – Range: 1...10
* The number 1 generates the minimum cycle for the range 1 to 10 and its cycle is 1 – Min: Num: 1, Cycle: 1
* The number 9 generates the maximum cycle for the range 1 to 10 and its cycle is 20 – Max: Num: 9, Cycle: 20

<h1 class="page-header"><font color="blue">Problem G - Paired Isograms</font></h1>

## Problem G - Paired Isograms

Write a program that identifies pair isograms.  An isogram is a word without a repeating letter.  Example isograms are palindromes, incomputable, and computerizably.  A pair isogram is a word where each letter appears exactly twice.  Example pair isograms are teammate, intestines, and noon.  

### Input

The first input line will be a positive integer n, indicating the number of words to be processed. Each of the following n input lines contains a word.  
## Output
Print each input word along with a message indicating whether or not it is pair isograms. Follow the format illustrated in Sample Output.  The input word may contain uppercase, lowercase, and punctuation, which you shall ignore in determining whether the word is a pair isogram.  For examples,  Shannah's and Hello.O'he are a pair isograms.

### Sample Input

```java
3
teammate 
ali
dood
```

### Sample Output

```java
teammate --- pair isogram
ali --- not pair isogram 
dood --- pair isogram
```

<h1 class="page-header"><font color="blue">Problem H - Permutation Array</font></h1>

## Problem H - Permutation Array

Write a program that uses the contents of one array as indices into another array.  In many computer problems, the data in an array must be re-arranged in some specified order. One way to rearrange data in an array is to create an index array to point out the position of the elements in the new array.  The index array (or permutation array) specifies a permutation of the second array (or data array).

### Input

The first line of input gives the number of cases, N.  N test cases follow. For each test case there will be three lines of input specified as follows.

* One line containing the value I, the number of items in the arrays on the next two lines.
* One line containing the permutation array.  This line is a space separated list of I integers. Each integer will be an index into the array on the next line.
* One line containing the data array.  This line is a space separated list of I integers.

### Output

For each test case, output one line that contains I+2 integers, which are the following.

* The largest value in the data array.
* The smallest value in the data array.
* A space separated list of I integers that is a reordered list of the data array.  The data array is reordered as defined by the permutation array.

### Sample Input

```java
3
3
3 1 2
32 54 -2
5
1 4 5 2 3
150 24 79 50 88
2
2 1
200 101
```

### Sample Output

```java
54 -2 -2 32 54
150 24 150 50 88 24 79
200 101 101 200
```

<h1 class="page-header"><font color="blue">Problem I - Stack Machine</font></h1>

## Problem I - Stack Machine

Write a program that uses a stack to add, subtract multiply, and divide. Many virtual machines, like the JVM, are based on the notion of a run-time stack to hold operands and operators. This is like a stack of plates where operands/operators may only be added to or removed from the top.  A program in this stack-language looks like the following.

```java
PUSH 1
PUSH 2
ADD
RESULT
=> 3 (output from stack)
```

To interpret this code, consider the following.

* PUSH 1 pushes a 1 onto the stack and PUSH 2 pushes a 2 onto the stack, which means the stack has two elements and looks like the following.

  ```java
  2  (top of stack)
  1
  ```

* ADD removes the top 2 values on the stack, adds them and pushes the result (so the 2 and 1 would be replaced by 3). 

* RESULT is a special operation that will display the current value at the top of the stack.

### Input

The input will be N lines of stack code where the Nth line contains the letter R.

### Output

There will be one line of output, which is the value computed by the stack machine program.

### Sample Input - Example 1

```java
P 1
P 2
A
P 3
M
P 1
S
P 2
D
R
```

### Sample Output - Example 1

```java
=> 4
```

### Sample Input - Example 2

```java
P 1
P 2
P 3
P 4
P 5
M
A
P 6
S
A
A
P 10
D
R
```

### Sample Output - Example 2

```java
=> 2
```

<h1 class="page-header"><font color="blue">Problem J - Sum Sequence</font></h1>

## Problem J - Sum Sequence

Write a program that computes the nth value in the following sequence.

```java
Position in sequence: 0 1 2 3 4  5  6  7  8  9 10 11 12
Value to be computed: 1 1 2 4 8 16 23 28 38 49 62 70 77
```

### Input

The first line of input gives the number of cases, N.  N test cases follow. For each test case there will be one line of input where each line contains a position in the sequence.

### Output

The output will be N lines of output where each line is the sequence value.

### Sample Input

```java
3
10
6
3
```

### Sample Output

```java
62
23
4
```

<h1 class="page-header"><font color="blue">Problem K - Base 6</font></h1>

## Problem K - Base 6

The Island of Calduum has a tribe of unusual creatures - Gabrexheons. The Gabrexheons have 2 fingers and an opposable thumb on each hand.  The Gabrexheon numbering system is base 6, and they use a unique set of symbols for digits, but anthropologists have been able to represent them as follows.

* % represents 0

* ) represents 1

* ~ represents 2

* @ represents 3

* ? represents 4

* \ represents 5

* $ represents -1

Examples of interpreting Gabrexheon numbers are the following.  Note: six-squared is represented as 6**2.

* )@% 	is           1\*6<sup>2</sup> + 3\*6 +  0 =         36 + 18 + 0 =   54

* ?$~~ 	is 4\*6<sup>3</sup> + (-1)\*6<sup>2</sup> + 2\*6 +  2 =  864   -36 + 12 + 2 =  842

* $~~ 	is        (-1)\*6<sup>2</sup> + 2\*6 +  2 =        -36 + 12 + 2 =  -22

* $))   is        (-1)\*6<sup>2</sup> + 1\*6 +  1 =        -36 +  6 + 1 =  -29

* $%$   is        (-1)\*6<sup>2</sup> + 0\*6 + -1 =        -36 +  0 - 1 =  -37

* \\$@  is 5\*6<sup>3</sup> +    5\*6<sup>2</sup> + 0\*6 +  3 = 1080 + 180 -  6 + 3 = 12570

You have to convert Gabrexheon numbers to base 10 numbers.

### Input

The first line of input gives the number of cases, N.  N test cases follow.  For each test case there will be one line of input that is a Gabrexheon numbers. Each number consists of a sequence of 1 to 10 Gabrexheon digits.

### Output

Output will be the corresponding decimal numbers, one per line.

### Sample Input

```java
4
)@% 
?$~~ 
$~~ 
%
```

### Sample Output

```java
54 
842 
-22 
0
```

<h1 class="page-header"><font color="blue">Problem L - Can You Dig It</font></h1>

## Problem L - Can you Dig It?

Note: This problem is a duplicate from the UMW CPSC Fall 2013 Programming Contest created by Ian Finlayson.

The Pewter Museum of Science in Kanto is holding a treasure hunt for young Pokemon trainers.  The hunt consists of an 8x8 plot of land.  In one of the sections, is buried a Pokemon fossil, a rare prize.

In each of the other 63 sections, is a piece of paper with a 2-digit number written on it.  This number is a clue directing the trainer to the next section of land to search.  The tens digit indicates the row number, and the ones digit indicates the column number.

Participants in the treasure hunt start in the first section (row 1, column 1) and follow the clues until they either find the fossil, or go back to a section of land they have already searched.  Your goal is to write a program which, given what's buried in each section of land, will determine whether or not the participants will find the fossil.

### Input

Input will consist of 8 lines.  Each line corresponds to a row in the plot of land, and contains 8 entries.  Each entry is either a two-digit number indicating the cell of the next clue, or the value 0 which indicates that the cell contains the fossil.

You can assume that no clue will refer to a non-existent cell.

### Output

Your program should output output the cell numbers that are searched at each step.  If the participant finds the fossil, you should end by printing "Found the fossil!".  If the participant is sent back to search a section that they have already searched, you should print "Fossil not found!".


### Sample Input

```java
31 21 66 12 52 87 64 44
11 13 78 17 44 51 36 33
76 44 12 54 84 71 12 33
24 53 15 68 58 0 14 88
22 44 61 11 87 0 28 64
88 22 43 43 54 17 42 81
56 23 0 11 17 24 56 71
61 19 21 82 39 0 77 27
```

### Sample Output

```java
11
31
76
24
17
64
43
15
52
44
68
81
61
88
27
36
71
56
Found the fossil!
```

<h1 class="page-header"><font color="blue">Problem M - I Choose Who?</font></h1>

## Problem M - I Choose Who?

Note: This problem is a duplicate from the UMW CPSC Fall 2013 Programming Contest created by Ian Finlayson.

During a Pokemon battle, trainers try to send out Pokemon who will beat their opponent's Pokemon.  Which Pokemon to send against another can be a difficult decision.  Trainers primarily base this on the level and type of the Pokemon involved.

A level is a number in the range of 1 - 100 indicating how strong and experienced the Pokemon is.

There are different types of Pokemon, and some types are have advantages in battle over other types.  The following table lists seven common types of Pokemon along with estimates on how strong they are against other types.

<table border="1">
<tr>  <td>&nbsp;</td>  <td><b>Normal</b></td>  <td><b>Fire</b></td>  <td><b>Water</b></td>  <td><b>Grass</b></td>  <td><b>Electric</b></td>  <td><b>Fighting</b></td>  <td><b>Psychic</b></td></tr>
<!--                           normal       fire         water          grass         electric        fighting      psychic -->
<tr><td><b>Normal</b></td>    <td>&nbsp;</td>   <td>&nbsp;</td>     <td>&nbsp;</td>    <td>&nbsp;</td>    <td>&nbsp;</td>    <td>- 5</td>  <td>- 5</td></tr>
<tr><td><b>Fire</b></td>      <td>&nbsp;</td>   <td>&nbsp;</td>     <td>/ 2</td>  <td>* 2</td>  <td>+ 10</td> <td>&nbsp;</td>    <td>&nbsp;</td></tr>
<tr><td><b>Water</b></td>     <td>&nbsp;</td>   <td>* 2</td>   <td>&nbsp;</td>    <td>/ 2</td>  <td>/ 2</td>  <td>+ 5</td>  <td>&nbsp;</td></tr>
<tr><td><b>Grass</b></td>     <td>&nbsp;</td>   <td>/ 2</td>   <td>* 2</td>  <td>&nbsp;</td>    <td>&nbsp;</td>    <td>&nbsp;</td>    <td>&nbsp;</td></tr>
<tr><td><b>Electric</b></td>  <td>&nbsp;</td>   <td>- 10</td>  <td>* 2</td>  <td>&nbsp;</td>    <td>&nbsp;</td>    <td>/ 2</td>  <td>&nbsp;</td></tr>
<tr><td><b>Fighting</b></td>  <td>+ 5</td> <td>&nbsp;</td>     <td>- 5</td>  <td>&nbsp;</td>    <td>* 2</td>  <td>&nbsp;</td>    <td>/ 3</td></tr>
<tr><td><b>Psychic</b></td>   <td>+ 5</td>   <td>&nbsp;</td>     <td>&nbsp;</td>     <td>&nbsp;</td>     <td>&nbsp;</td>     <td>* 3</td>  <td>&nbsp;</td></tr>
</table>

The rows indicate the type of your Pokemon, while the columns indicate the type of your opponent's.  The entries in the table indicate a modifier on the levels of the Pokemon involved.

For example, if you have a Fire type Pokemon, while your opponent has a Water type, you will have a "* 2" modifier.  So, for example, a level 10 Fire Pokemon would be equivalent to a level 20 Water Pokemon.  Likewise, a level 35 Psychic Pokemon would be equivalent to a level 40 Normal Pokemon.

If there is no entry in the table, it means the corresponding Pokemon have no advantage or disadvantage against each other.

Your goal is to write a program to help trainers choose which Pokemon to send into battle based on the level and type of the opponent, and the level and type of the Pokemon the trainer has available to them.

The strategy your program should take is to send out a Pokemon with a type-adjusted level that is greater than the opponent.  If there are multiple such Pokemon, you should send the one with the lowest actual level (to keep your strongest Pokemon as long as possible).  If there are no Pokemon with a type-adjusted level higher than the opponent, you should send the Pokemon with the lowest actual level (to keep your strongest Pokemon as long as possible).


### Input

Input will consist of a list of 7 Pokemon.  The first Pokemon given will be the opponent.  The remaining 6 Pokemon will be the ones in the trainer's party that you have to choose from.

Each Pokemon will have a name, level, and type.

### Output

Output will consist of the phrase "&lt;Name&gt;, I choose you!", where &lt;Name&gt; is replaced with the name of the Pokemon being chosen.

### Sample Input

```java
Growlithe Fire 27
Meowth Normal 30
Magikarp Water 3
Pidgey Normal 14
Quilladin Grass 52
Squirtle Water 15
Electrike Electric 24
```

### Sample Output

```java
Squirtle, I choose you!
```

<h1 class="page-header"><font color="blue">Problem N - Lucky Numbers</font></h1>

## Problem N - Lucky Numbers

Note: This problem is a duplicate from the UMW CPSC Fall 2013 Programming Contest created by Ian Finlayson.

The Poke Center engraves serial numbers onto each of their Pokeballs.  Each of these serial numbers has an even number of digits, N.  A Pokeball is considered lucky if the sum of the first N/2 digits is equal to the sum of the last N/2 digits.  For example, A Pokeball with the serial number "068437" would be considered lucky since 0 + 6 + 8 = 4 + 3 + 7.  Some suggest using a lucky Pokeball is the only way to catch a Mewtwo, not that that's relevant to the problem.

Your task is to count the number of lucky Pokeballs in the general case.  As input, you'll get two numbers: the number of digits that make up the Pokeball's serial number (a positive even number) and the base of the ball's serial number (a number between 2 and 10).  As output, you need to print the count of lucky Pokeballs (in decimal) that are possible with the given number of digits in the given base.

### Input

```java
Input consist of two lines.
The first line contains the number of digits used in the serial number.
The second line contains the base of the serial number.
```

### Output

Your output should consist of a single integer: the number of lucky Pokeballs possible given the serial number and base.


### Sample Input

```java
6
2
```


### Sample Output

```java
20
```

