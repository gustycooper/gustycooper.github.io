---
title: Loops
tags: [loop]
keywords: control flow, loop, for loop, while loop, do-while loop
last_updated: August 10, 2016
summary: <li>Understand Java loops.</li> <li>Understand loops iterate.</li> <li>Understand the body of loops can be a single statement or a block</li> <li>Understand while loops</li> <li>Understand that all problems can be solved with the while loop - the for and do-while can be done with while</li> <li>Understand while loops may iterate zero times.</li> <li>Understand while loops may interate infinitely.</li> <li>Understand for loops</li> <li>Understand a for loop can be accomplished with a while.</li> <li>Understand a counting for loop.</li> <li>Understand a for loop iteration variable</li> <li>Understand how to use a counting for loop to iterate through Strings.</li> <li>Understand for loop expressions do not have to be counting expressions.</li> <li>Understande do-while loops.</li> <li>Understand a do-while loop iterates at least one time.</li>
sidebar: mydoc_sidebar
permalink: /mydoc_4_loops/
---

## Loop Statements

Java provides three loop statements - ```while```, ```for```, and ```do-while```.  Loop statements have the following characteristics.

* Loop statements provide the capability to execute a block of code repeatedly.  
* Loop statements go round-and-round, like the Beatles *Fool on a Hill*.  
* Loop statements iterate.  

## While Loop (Eck 3.3)

The ```while``` loop is the only loop structure you need to solve all problems; however, the for loop and ```do-while``` loop provide nice alternatives to simplify various situations.  A ```while``` loop has a controlling ```boolean``` expression.  As long as the ```boolean``` expression of a ```while``` loop is ```true```, the loop body continues executing.  A ```while``` loop is also called an indefinite loop because you do not know how many times the loop iterates – the loop iterates until the controlling ```boolean``` expression becomes ```false```.  A ```while``` loop may iterate 0 times if the controlling ```boolean``` expression is ```false``` upon initial evaluation.  A ```while``` loop may iterate an infinite number of times if the controlling ```boolean``` expression never becomes ```false```.  Infinite is a bit misleading, because we cannot compute infinitiy.  

## While Statement Meta-language

Just like the if-statement, a ```while``` loop has meta-language that shows a single statement and a block of statements.  The meta-language for each is given by the following.

<div class="alert alert-info" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - While Statement
</b>
<br>
<pre>
while ( &lt;boolean-expression&gt; )  // one statement
   &lt;statement1&gt;;

while ( &lt;boolean-expression&gt; ) { // block
   &lt;statement-list&gt;
}

</pre>
</div>

## ```while``` Loop Flow Chart

The flowchart for a ```while``` loop is given by the following figure.  The ```<body>``` is either a single statement or a block of statements.

![while Loop](../images/whileLoop.png "while Loop") 

## ```while``` Statement Examples

The following example ```while``` loop iterates 5 times.  The body contains a single statement.

```java
int number = 1;
while (number <= 5)
   number = number + 1

The following example ```while``` loop iterates 5 times.  The the body contains a block containing two statements.

```java
int number = 1;                // The number to be printed.
while(number<6){               //Keep going as long as number is <6.
   System.out.println(number);
   number++;                   // Go on to the next number.
}
```

The following example shows a ```while``` statement in solving the 3N+1 problem.  The number of iterations depends upon the value of ```N```.  This example is from David Eck’s book.

```java
N = 401; // N is the input number
counter = 0;
while (N != 1) {
   if (N % 2 == 0)
      N = N / 2;
   else
      N = 3 * N + 1;
   System.out.println(N);
   counter = counter + 1;
}
```

## ```for``` Loop (Eck 3.4)

The ```for``` loop is a convenience loop.  You can accomplish a ```for``` loop with a ```while``` loop, but the ```for``` loop provides clear, concise notation that is used in creating many programming problems.  A ```for``` loop is the loop of choice for counting.  When we study arrays and ```ArrayList```s, we learn another version of the ```for``` loop, which is the  ```for-each``` loop.  Consider the following ```while``` and ```for``` loops that print 1 to 5 to the terminal.  Pay attention to the color-coded statements.  Notice how the ```for``` loop concisely captures those counting attributes.  The counting attributes which are spread throughout the ```while``` loop have been tightly rearranged into the syntax of a ```for``` loop.  This style of ```for``` loop is a counting loop.

<pre>
<font color="blue">int counter = 1;</font>
while (<font color="red">counter <= 5</font>) {
  System.out.println(counter + ".");
  <font color="green">counter++</font>;
}

for (<font color="blue">int counter = 1</font>; <font color="red">counter<=5</font>; <font color="green">counter++</font>) {
  System.out.println(counter + ".");
</pre>

## Counting ```for``` Loop 

The counting ```for``` loop is one of our most popular loops.  We use counting ```for``` loops counting through ```String```s, arrays, ```ArrayList```s - any sequentional collection of information.  A counting ```for``` loop has three components.

* **iteration variable** - a variable that counts on each iteration of the loop.
* **termination expression** - an expression that compares the iteration variable to its terminating value, thereby terminating the loop
* **iteration increment** - an assignment statement that increments/decrement/adds to/subtracts from the iteration variable.

Consider the following two counting ```for``` loops.  The first prints the numbers 1 to 10 to the terminal.  The loop iteration variable counts from 1 to 10.  The  second iterates through the characters of a ```String``` and builds a new ```String``` that omits the spaces from the input ```String```.  The loop iteration variable counts from 0 to ```String``` length minus 1.  The ```String``` counting loop is oftern used.  When counting loops begin counting at 0, the continuation condition is usually the less-than operator.  This is because the first element is 0 and the last element is at position length minus one.

```java
for(int i=1; i<=10; i++) 
   System.out.println( i );


String inString = "Hello to all students.";
String outString = "";
for (int i = 0; i < s.length(); i++;)
   if (s.charAt(i) != ' ')
      outString += s.charAt(i);
```

The for loop pattern for counting is given by the following.

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

The Counting Loop Pattern is misleading because the iteration variable can be incremented, decremented, increased by more than 1, and decreased by more than 1.  The following example code shows two counting loops.  The first increments the iteration variable by 2.  The second decrements the iteration variable. 

```java
for (int i = 1; i < 21; i+= 2)
   System.out.println(i);


String inString = "Hello";
String outString = "";
for (int i = s.length()-1; i > 0; --i)
   outString = outString + inString.substring(i,i+1);
```

We can also count with an operation other than addition or subtraction.  The following prints the powers of 2 between 1 and 100.

```java
for (int i = 1; i < 100; i = i * 2)
   System.out.println(i);
```

## ```for``` Loop Meta Language

We have discussed ```for``` loops in terms of counting; however, the three expressions within the parentheses of a ```for``` loop do not have to conform to counting expressions.  They can be most anything.  the following shows the ```for``` loop meta language.

<div class="alert alert-info" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - For Loop Statement
</b>
<br>
<pre>
for ( &lt;initialization&gt;; &lt;continuation-condition&gt;; &lt;update&gt; ) 	
   &lt;statement&gt;

for ( &lt;initialization&gt;; &lt;continuation-condition&gt;; &lt;update&gt; ) { 	
   &lt;statement-list&gt;
}
</pre>
</div>

The following code demonstrates a ```for``` loop that creatively uses the three expressions.

```java
String friends = "";
System.out.print("Enter a friend of Gusty: ");
for (String name = in.nextLine(); !name.toLowerCase().equals("stop"); name = in.nextLine())
   if (!name.toLowerCase().equals("stop")) {
      friends += " " + name;
      System.out.print("Enter a friend of Gusty: ");
   }

System.out.println("Gusty's Friends: " + friends);
```

## ```for``` Loop Flow Chart

The flowchart for a ```for``` loop is given by the following figure.  The ```<body>``` is either a single statement or a block of statements.

![for Loop](../images/forLoop.png "for Loop") 


## ```for``` Loop with Multiple Expressions

The examples show ```for``` loops with one expression, but you can use multiple expressions that are separated by commas.  The following code demonstrates this technique.

```java
for (int i = 0, j = 9; i < 10; i++, j--)
   System.out.println("i: " + i + " j: " + j);
```

## Nested ```for``` Loops

A **nested loop** is a loop within a loop.  The outside loop is called the outer loop.  The inside loop is called the inner loop.  You may have multiple inner loops.  The following code snippet demonstrates a nested loop.  The code prints the sum pairs for the numbers 0 to 9.  For example, it prints ```0 + 0 = 0```, 0 + 1 = 1```, and so on.  In the following example, the outer loop has 10 iterations and the inner loop has 10 iterations.  The ```println``` method in the inner loop is called 100 times, which is the number of outer loop iterations times the number of inner loop iterations.

```java
for (int i = 0; i < 10; i++)
   for (int j = 0; j < 10; j++)
      System.out.println(i + " + " + j + " = " + (i+j));
```

The following code demonstrates several ```for``` loops.

* An iterative solution to computing a Fibonacci number.
* A nested ```for``` loop the prints one character of name, two characters of a name, until the entire name is printed.
* The same incrementally printing of a name with a single loop and ```substring```.
* Printing pairs of letters from a name where the pairs are (first,last), (second,last-1), and so on.
* Collecting friends for a ```for``` loop that is not a counting loop.

```java
public static long fibIterative(int n) {
   int x = 0, y = 1;
   for (int i = 0; i < n; i++) {
      int t = y;
      y = x + y;
      x = t;
   }
   return x;
}

public static void main(String[] args) {
   Scanner in = new Scanner(System.in);
   System.out.print("Enter your name: ");
   String name = in.nextLine();
   for (int i = 0; i < name.length(); i++) {
      for (int j = 0; j <= i; j++)
         System.out.print(name.charAt(j));
      System.out.println();
   }
   
   for (int i = 0; i < name.length(); i++)
      System.out.println(name.substring(0,i+1));

   for (int i = 0, j = name.length()-1; i < name.length(); i++, j--)
      System.out.println("" + name.charAt(i) + name.charAt(j));

   String friends = "";
   System.out.print("Enter a friend of Gusty: ");
   for (name = in.nextLine(); !name.toLowerCase().equals("stop"); name = in.nextLine())
      if (!name.toLowerCase().equals("stop")) {
         friends += " " + name;
         System.out.print("Enter a friend of Gusty: ");
      }

   System.out.println("Gusty's Friends: " + friends);
}
```

## ```break``` Statement (Eck 3.3.3)

You used the ```break``` statement in a ```switch``` statement.  The ```break``` forced control flow to the statement following the ```switch``` statement.  A ```break``` statement in a loop forces control flow out of the loop to the statement following the loop.  The following ```while``` loop searches a string for a space and breaks when the first space is encountered.

```java
String s = “Coffee cup.”;
int i = 0;
while (i < s.length()) {
   if (s.substring(i, i+1).equals(“ “)) {
      break;
   }
   i++;
}
if (i == s.length()) {
   System.out.println(s + “ does not contain a space”);
} else {
   System.out.println(“First space in “ + s + “ is “ + i);
}
```

## ```continue``` Statement (Eck 3.3.3)

The ```continue``` statement forces control flow back to the top of the loop, skipping any code between ```continue``` and the end of the loop.  The following ```for``` loop prints 1 2 3 4 6 7 8 9 10, using a ```continue``` to skip printing 5.

```java
for (int j = 1; j <= 10; j++) {
   if (j == 5) {
      continue;
   }
   System.out.print(" " + j);
}
```

## Labeling Loops for ```break``` and ```continue```

A ```break``` or ```continue``` from within an inner loop causes control flow to skip to the end of the inner loop or skip to the beginnig of the inner loop.  You must label an outer loop in order to ```break``` or ```continue``` it from within an inner loop.  The following code demonstrates a labeled outer loop with ```continue``` from an inner loop.

```java
outer: for (int i=0; i<10; i++) { 
          for(int j=0; j<10; j++) { 
             if(j > i) { 
                System.out.println(); 
                continue outer; 
             } 
             System.out.print(" " + (i * j)); 
          } 
       } 
```

The previous loop prints the following.

```java
 0
 0 1
 0 2 4
 0 3 6 9
 0 4 8 12 16
 0 5 10 15 20 25
 0 6 12 18 24 30 36
 0 7 14 21 28 35 42 49
 0 8 16 24 32 40 48 56 64
 0 9 18 27 36 45 54 63 72 81
```

## ```break``` and ```continue``` Meta Language

<div class="alert alert-info" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Break and Continue Statements
</b>
<br>
<pre>
break;
continue;
</pre>
</div>

* ```break``` - breaks out of a loop, continuing flow with the statement following the loop.
* ```break``` - breaks out of a ```switch```, continuing flow with the statement following the ```switch```.
* ```continue``` - goes back to the beginning of a loop, skipping any statements between ```continue``` and the end of the loop.

## ```for``` Loop Iteration Variable Scope

You should have noticed that the ```for``` loop examples shown so far declare the iteration variable as part of the loop.  For example, ```for (int i = 0; ...)``` declares the iteration variable to be ```int```.  When you declare an iteration variable in a ```for``` loop, the scope of the variable is the body of the ```for``` loop.  You do not have to declare the loop iteration variable in the loop.  The iteration variable can be declared prior to the loop so the ```for``` loop begins as ```for (j = 0; ...)```.  The following code shows two ```for``` loops.  The first attempts to access the iteration variable ```i``` outside of its scope, which is lines 2 through 4.  The second demonstrates declaring an iteration variable prior to the ```for``` loop so it can be used after the loop.

```java
 1 String s = "aabbZdeaba";
 2 for (int i = 0; i < s.length(); i++)
 3    if (s.charAt(i) == 'Z')
 4       break;
 5 // Cannot access i - out of scope
 6 System.out.println("Z found at position " + i);
 7
 8 int j;
 9 for (j = 0; j < s.length(); j++)
10    if (s.charAt(j) == 'Z')
11       break;
12 // Can access j - within scope
13 System.out.println("Z found at position " + j);
```

## ```do-while``` Loop (Eck 3.3)

The ```do-while``` is similar to the ```while``` loop except the controlling expression is at the end of the loop.  This guarantees that a ```do-while``` loop iterates at least one time.  The following shows three loops that print 1 through 10 to the terminals - a ```do-while```, ```while```, and ```for```.

```java

int i = 0;
do {
   System.out.println(i);
   i += 1;
} while (i < 10);

i = 0;
while (i < 10) {
   System.out.println(i);
   ++i;
}

for (i = 0; i < 10; i++)
   System.out.println(i);
```

## Nice Use of ```do-while```

The following are two ways of asking a user to enter a number that is less than 100 where we repeatedly ask the user until a correct answer is provided.

```java
int value = 99;
while (value < 100) {
  System.out.print("Enter a value < 100: ");
  value = in.nextInt();
}

System.out.print("Enter a value < 100: ");
int value = in.nextInt();
while (value < 100) {
  System.out.print("Enter a value < 100: ");
  value = in.nextInt();
}
```

Both of the above solutions are rather ugly, the following ```do-while``` is prettier.  The ```do-while``` loop is good for input validation.

```java
do {
  System.out.print("Enter a value < 100: ");
  value = in.nextInt();
} while (value < 100);
```

## ```do-while``` Meta Language

<div class="alert alert-info" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Do-While Statement
</b>
<br>
<pre>
do
   &lt;statement1&gt;;
while ( &lt;boolean-expression&gt; ); // one statement

do {
   &lt;statement-list&gt;  // block
} while ( &lt;boolean-expression&gt; ) 

</pre>
</div>

## ```do-while``` Loop Flow Chart

The flowchart for a ```do-while``` loop is given by the following figure.  The ```<body>``` is either a single statement or a block of statements.

![do-while Loop](../images/doWhileLoop.png "do-while Loop") 

