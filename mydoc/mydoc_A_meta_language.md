---
title: Java Meta Language
tags: []
keywords: meta language
last_updated: June 3, 2016
summary: "Meta Language"
sidebar: mydoc_sidebar
permalink: /mydoc_A_meta_language/
---

## Java Meta Language and Examples

The meta-language in this section is an augmented version of that in David Eck’s online textbook.  I have collected the meta language throughout David's book, augmented, and reformatted it into this section.

## Identifiers

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Identifier
</b>
<br>
<pre>
&lt;identifier&gt; is a sequence of one or more characters
</pre>
</div>

* ```<identifier>```s first character must be letter, $, _
* ```<identifier>```s subsequent characters must be letter, digit, $, _
* ```<identifier>```s are names for variables, methods, classes, enum
* Lowecase and uppercase letters are different, which means ```Gusty``` and ```gusty``` are two different identifiers.
* Any meta language with **name** is an ```<identifier>```.  For example, ```<class-name>``` and ```<type-name>``` are ```<identifier>```s.

## Expressions 

**Expressions** – syntactically correct combination of variables, literals, operators, and method calls that evaluate to a value with a specific type.  The following meta language shows where expressions are found within Java statements

### Expressions within Statements

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Expressions within Statements
</b>
<br>
<pre>
&lt;variable&gt; = &lt;<font color="red">exp</font>&gt;;  // The assignment operator is part of expressions
 
&lt;<font color="red">exp</font>&gt;;

&lt;methodCall&gt;( &lt;<font color="red">exp</font>&gt;, … , &lt;<font color="red">exp</font>&gt;); // A method call is part of expressions
x = y + Math.sin(Math.random()); 

if (&lt;<font color="red">boolean-exp</font>&gt;) { &lt;statement-list&gt; }

switch (&lt;<font color="red">exp</font>&gt;) { &lt;switch-cases&gt; }

while (&lt;<font color="red">boolean-exp</font>&gt;) { &lt;statement-list&gt; }

do { &lt;statement-list&gt; } while (&lt;<font color="red">boolean-exp</font>&gt;);

for ( &lt;<font color="red">init-exp</font>&gt;; &lt;<font color="red">cont-exp</font>&gt;; &lt;<font color="red">update-exp</font>&gt; )
    { &lt;statement-list&gt; }
</pre>
</div>

### Operator Precedence

Simple expressions are easy to determine the order of operator evaluation.  Complex expressions should contain parentheses to help the reader understand the order of operator evaluation.

Description | Operators
--------------------------- | --------------------------------------
Unary                       | ```++``` ```--``` ```!``` ```unary -``` ```unary +``` ```type-cast```
Multiply Divide             | ```*```  ```/```  ```%```
Add Subtract                | ```+```  ```-```
Relational                  | ```<```  ```>```  ```<=```  ```>=```
Equality                    | ```==```  ```!=```
Boolean and                 | ```&&```
Boolean or                  | ```||```
Conditional                 | ```?:```
Assignment                  | ```=```  ```+=```  ```-=```  ```*=```  ```/=```  ```%=```

Operators on the same line have the same precedence. When operators of the same precedence are used in an expression without parentheses, unary operators and assignment operators are evaluated right-to-left, while the remaining operators are evaluated left-to-right. You are most likely familiar with left-to-right evaluation.  For example, ```x * y / z``` is evaluated as ```(x * y) / z```.  For right-to-left evaluation consider multiple assignments.  ```i = j = k``` is evaluated as ```i = (j = k)```.


Examples:

```java
x = x + 1; x++; x += 1; // equivalent
x = x++ // does not change x
```

### Conditional Expression

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Conditional Expression
</b>
<br>
<pre>
&lt;boolean-expression&gt; ? &lt;exp1&gt; : &lt;exp2&gt;
</pre>
</div>

* The expression evaluates to <exp1> if <boolean-expression> is ```true```.
* The expression evaluates to <exp2> if <boolean-expression> is ```false```.


Examples:

```java
next = (N % 2 == 0) ? (N/2) : (3*N+1);
```

## Block

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Block
</b>
<br>
<pre>
{
&lt;statement-list&gt;;
}
</pre>
</div>

* ```<statement-list>``` is zero or more <statement>;
* Also ```<statement-list>``` is <statement>; ... <statement>;
* A ; terminates a statement.
* ```<statement>``` is one defined in [Statements](/gustycooper.github.io/mydoc_A_exp_statement)
```java

The following are some example Java blocks.

```java
{
	System.out.print("The answer is ");
	System.out.println(ans);
}

{  // This block exchanges the values of x and y
   int temp;	// A temporary variable for use in this block.
   temp = x;	// Save a copy of the value of x in temp.
   x = y;		// Copy the value of y into x.
   y = temp;	// Copy the value of temp into y.

}
```

## Class Declarations

All Java code exists with a ```class```.

### Class Declaration

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Basic Class Definition
</b>
<br>
<pre>
public class &lt;class-name&gt; {
   &lt;declaration-list&gt;
}
</pre>
</div>

* ```<declaration-list>``` is zero or more ```<declaration>```
* ```<declaration>``` is ```<declaration-statement>```
* ```<declaration>``` is ```<method-defintion>```
* ```<declaration>``` is ```<constructor-definition>```
* A variable declared at the class level is called **field**.


### Program Declaration

Class Declaration with ```main```.

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Program Declaration
</b>
<br>
<pre>
public class &lt;class-name&gt; {
   &lt;declaration-list&gt;
   public static void main(String[] args) {
      &lt;statement-list&gt;
   }
   &lt;declaration-list&gt;
}
</pre>
</div>

* ```<declaration-list>``` is zero or more ```<declaration>```
* ```<declaration>``` is ```<declaration-statement>```
* ```<declaration>``` is ```<method-defintion>```
* ```<declaration>``` is ```<constructor-definition>```
* ```main``` is the entry point of a program.  
* The “command line” arguments are passed as parameters in the ```args``` parameter. The identifier ```args``` is used by convention.  Any valid Java identifier may be used.  For most of our problems, we do not pass command line arguments.  BlueJ allows you to pass parameters. The following shows a program run from a command line and the values of ```args```.

  ```java
  $ java myProgram one two three

  arg[0] contains “one”
  arg[1] contains “two”
  arg[2] contains “three”
  ```

## Statements

**Statements** – unit of execution terminated by a ;  Java has three categories of statements.

* **Declaration statement** - discussed in [Primitive Types](/gustycooper.github.io/mydoc_1_primitive_types)				
  * double d = 3.4;
* **Expression Statement**
  * **Assignment expression statement** - discussed in [Assignment Expression](/gustycooper.github.io/mydoc_2_assignment_expressions)
    * d = Math.random();
  * **Increment/decrement expression statement** - discussed in [Assignment Expression](/gustycooper.github.io/mydoc_2_assignment_expressions)
    * i++;
  * **Method call statement** - discussed in [Methods](/gustycooper.github.io/mydoc_1a_methods), [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects), and [Classes and Objects](/gustycooper.github.io/mydoc_5_classes_objects)		
    * mini.addGas(10);
  * **Object creation expression statement** - discussed in [Simple Objects](/gustycooper.github.io/mydoc_3_simple_objects) and [Classes and Objects](/gustycooper.github.io/mydoc_5_classes_objects)
    * Car mini = new Car(25);
* **Control flow statements** – if, switch, while, do-while, for - discussed in [Control Flow](/gustycooper.github.io/mydoc_4_control_flow)

## Declaration Statements

There are several ```<declaration-statement>```s.  The meta language for each is provided in its own subsection.

### Variable Declaration without Expression

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Declaration Statement without Expression
</b>
<br>
<pre>
&lt;type-name&gt; &lt;variable-name&gt;
</pre>
</div>

* ```<type-name>``` can be any primitive or reference type.
  * Primitive types are ```byte```, ```short```, ```int```, ```long```, ```float```, ```double```, ```char```, or ```boolean```.  
  * Reference types are ```String```, ```Scanner```, ```Person```, ```Car```, and many more.
* Variables declared without ```<exp>``` as part of your declaration are initialized as follows.
  * numeric variables to 0. 
  * ```char``` variables to the null character, which is ```'\0'``` or 0.
  * ```boolean``` variables to ```false```.
  * Reference variables are initialized to ```null```.
* You may declare mulitple variables by using a comma to separate them.

Examples:

```java
int numberOfPeople;
int i, j, k;
boolean isFinished;
String s;
char firstInitial, middleInitial, lastInitial;
double principal;    // Amount of money invested.
double interestRate; // Rate as a decimal, not percentage.
```

### Variable Declaration with Expression

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Declaration Statement with Expression
</b>
<br>
<pre>
&lt;type-name&gt; &lt;variable-name&gt; = &lt;exp&gt;;
</pre>
</div>

* ```<type-name>``` can be any primitive type.
  * Primitive types are ```byte```, ```short```, ```int```, ```long```, ```float```, ```double```, ```char```, or ```boolean```.  
* The ```<exe>``` must evaluate to ```<type-name>```.
* You may declare and initialize multiple variables by using a comma to separate them.

Examples:

```java
int numberOfStudents = 23;
double x = 1.0, y = 2.0;
int i = 0, j = 1;
boolean isFinished = true;
String s = "Hello";
int number = 4;
byte bb = 120;
double myPi = Math.PI;
```

### Object Creation Expression Statement

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Object Creation Expression Statement
</b>
<br>
<pre>
&lt;type-name&gt; &lt;variable-name&gt; = new &lt;type-constructor&gt;(&lt;parameters&gt;);
</pre>
</div>

* ```<type-name>``` can be any reference type.
  * Reference types are ```String```, ```Scanner```, ```Person```, ```Car```, and many more.

Examples:

```java
String s = new String("Hello");
Person p = new Person("Gusty",22), q = new Person("Emily",25);
Scanner in = new Scanner(System.in);
```

### enum Declaration

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - enum Declaration
</b>
<br>
<pre>
enum &lt;enum-type-name&gt; {&lt;list-of-enum-values&gt;}
</pre>
</div>

Examples.

```java
enum Season { SPRING, SUMMER, FALL, WINTER }
Season vacation;
vacation = Season.SUMMER;
```

### Array Declaration

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Array Declarartion Statement
</b>
<br>
<pre>
&lt;type-name&gt;[] &lt;variable-name&gt;;
&lt;type-name&gt;[] &lt;variable-name&gt; = new &lt;type-name&gt;[&lt;array-len&gt;];
&lt;type-name&gt;[] &lt;variable-name&gt; = {&lt;exp&gt;, ... , &lt;exp&gt;};
</pre>
</div>

Declaring an array creates a reference.  You need to create the actual array.  This can be done at the time of declaration using the {} with a list of expressions that evaluate to the ```<type-name>```.  This can be done at the time or declaration or after the declaration using ```new```.

```java
int[] a = new int[100];
int x = a.length // x is 100
int[][] a = new int[5][7];
int[] b = {1,2,3,4};
b = new int[100];
```

## Methdod Definition and Call

### Method Definition

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Method Definition
</b>
<br>
<pre>
&lt;modifiers&gt; &lt;return-type&gt; &lt;method-name&gt; ( &lt;formal-parameter-list&gt; ) {    
    &lt;statement-list&gt;
}
&lt;modifiers&gt; 
   public – method may be called from objects or outside of the class
   static – method exists independent of an object
&lt;method-name&gt;
   any Java identifier
&lt;return-type&gt;
   any Java type or void
   void is for a method that does not return a value
&lt;formal-parameter-list&gt; 
   &lt;type-name&gt; &lt;formal-parameter-name&gt;, ..., &lt;type-name&gt; &lt;formal-parameter-name&gt; 
&lt;type-name&gt;
   any Java type
&lt;formal-parameter-name&gt;
   any Java identifier
&lt;statement-list&gt;
   &lt;statement&gt;; ... &lt;statement&gt;; 
   each statement is terminated with a ;
</pre>
</div>

The formal-parameter-list is a sequence of variable declarations separated by commas.  A formal parameter is a variable.  The type of the actual parameter must match that of the formal parameter.  The value of the actual parameter is copied into the formal parameter when the method is called.

A method definition has a block with a sequence of statements.  The method block may contain inner blocks.  The top-level meta language for a method defintion could have been written as follows to emphaise a method block.

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Method Definition with Emphasized Block
</b>
<br>
<pre>
&lt;modifiers&gt; &lt;return-type&gt; &lt;method-name&gt; ( &lt;formal-parameter-list&gt; ) &lt;method-block&gt;

&lt;method-block&gt;
   { &lt;statement-list&gt; }
</pre>
</div>

### Constructor Definition

A constructor definition is like a method defintion except

* The ```<return-type>``` is omitted.
* The ```<constructor-name>``` must match the ```<class-name>```.

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Constructor Definition
</b>
<br>
<pre>
&lt;modifiers&gt; &lt;constructor-name&gt; ( &lt;formal-parameter-list&gt; ) {    
    &lt;statement-list&gt;
}
</pre>
</div>

### Method Call Statement

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Method Call Statement
</b>
<br>
<pre>
&lt;method-name&gt; ( &lt;actual-parameter-list&gt; )
&lt;method-name&gt;
   any Java identifier that matches the name of a defined method
&lt;actual-parameter-list&gt; 
   &lt;actual-parameter-exp&gt;, ..., &lt;actual-parameter-exp&gt; 
&lt;actual-parameter-exp&gt;
   any Java expression that evaluates to the type of the corresponding actual parameter
</pre>
</div>

The actual-parameter-list is a list of expressions separated by commas.  Each actual parameter expression must evaluate to the type of its corresponding formal parameter.

## Assignment Statements

The most used statement in programming is an assignment statement.  Everyone is familiar with assignment statements, and we have used several assignment statements in discussions prior to this.  The meta language for assignment statement is as follows.

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Assignment Statements
</b>
<br>
<pre>
&lt;variable-name&gt; = &lt;exp&gt;;
&lt;variable-name&gt; += &lt;exp&gt;;
&lt;variable-name&gt; -= &lt;exp&gt;;
&lt;variable-name&gt; *= &lt;exp&gt;;
&lt;variable-name&gt; /= &lt;exp&gt;;
&lt;variable-name&gt; %= &lt;exp&gt;;
&lt;variable-name&gt;++;
++&lt;variable-name&gt;;
&lt;variable-name&gt;--;
--&lt;variable-name&gt;;
</pre>
</div>

* = is the assignment operator
  * The assignment operator is just like the other operators.
* ```<variable-name>``` is a variable that has previously been declared.
* ```<exp>``` evaluates to the same type as ```<variable-name>```

The following are some example Java assignment statements where in each case the ```<exp>``` is simply a literal.  You understand expressions from your previous study.  We will study the details of expressions in [Expressions](/gustycooper.github.io/mydoc_2_expressions).

```java
x = 3.0; 
x *= 2;
x /= 3.0;       
i = 32000;
i++;
--i;    
long l = 32000;  // declares l and assigns it a value
String s;
s = "Silly";
s += " Gusty";
char c;
c = 'c';
```

## Control Flow Statements

### If Statement

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - If Statement
</b>
<br>
<pre>
if ( &lt;boolean-expression&gt; ) // two-way
   &lt;statement1&gt;;
else
   &lt;statement2&gt;;

if ( &lt;boolean-expression&gt; ) // one-way
   &lt;statement&gt;;

if ( &lt;boolean-expression&gt; ) { // two-way with block
   &lt;statement-list&gt;
}
else {
   &lt;statement-list&gt;
}

if ( &lt;boolean-expression&gt; ) { // one-way with block
   &lt;statement-list&gt;
}
</pre>
</div>


```java
if ( x > y ) {
	int temp;	// A temporary variable for use in this block.
	temp = x;	// Save a copy of the value of x in temp.
	x = y;	// Copy the value of y into x.
	y = temp;	// Copy the value of temp into y.
}

int x = -1;				int x = -1;
if (x < 0)				if (x < 0)
	x = 1; 				x = 1;
else					if (x >= 0)
	x = 2;				x = 2;
```

### Switch Statement

A switch statement is like a multi-way if statement.

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Switch Statement
</b>
<br>
<pre>
switch (&lt;expression&gt;) { 
   case &lt;constant-1&gt;:
      &lt;statement-list1&gt;
      break;		// required or flow goes to next case
   case &lt;constant-2&gt;:
      &lt;statement-list2 &gt; 
      break;
     .
     . // (more cases) 
     .
   case &lt;constant-N&gt;: 
      &lt;statement-listN&gt; 
      break;
   default:  // optional default case
      &lt;statement-listN1&gt;
} // end of switch statement
</pre>
</div>

* ```<expression>``` must evaluate to ```int```, ```short```, ```byte```, ```char```, or ```String```.
* Multiple ```case```s can be used.  The following is an example.
  ```java
  case 1: case 2: case 3:
     i = 10;
     break;
  ```
* The ```break``` is required to cause flow to the end of the ```switch```; otherwise, flow continued with the next ```case```.

```java
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
System.out.println("The computer’s move is " + computerMove);  // OK!
```

### While Loop Statement

A while loop will execute loop body zero times if the ```<boolean-expression>``` is false the first time.

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
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

Most while loops have the block format.

```java
int number = 1;                // The number to be printed.
while(number<6){               //Keep going as long as number is <6.
	System.out.println(number);
	number = number + 1;     // Go on to the next number.
}
```

### Do While Statement

A do while loop will execute the loop body at least one time.

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
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

### For Loop Statement

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
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

```java
// Typical counting loop
for(<variable>=<min>; <variable><=<max>; <variable>++) { 
	<statement-list>
}

for(N=1; N<=10; N++) 
	System.out.println( N );
```

### Break and Continue Statements

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
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

Examples:
```java

while (true) { // looks like it will run forever! 	System.out.print("Enter a positive number: ");
	N = TextIO.getlnInt();
	if(N>0) //the input value is OK, so jump out of loop
		break;
	System.out.println("Your answer must be > 0.");
}
// continue here after break
```

### Try-catch Statement

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Try-catch Statement
</b>
<br>
<pre>
try {
   &lt;statement-list1&gt; 
}
catch ( &lt;exception-class-name&gt; &lt;variable-name &gt; ) {
   &lt;statement-list2&gt;
}
</pre>
</div>

Examples:
```java
double x;
try {
   x = Double.parseDouble(str);
   System.out.println( "The number is " + x );
}
   catch ( NumberFormatException e ) {
   System.out.println( "Not a legal number." );
   x = Double.NaN;
}
```

### Empty Statement

<div class="alert alert-success" role="alert"><i class="fa fa-language fa-lg"></i>
<b>
Meta Language - Empty Statement
</b>
<br>
<pre>
;  // empty statement
</pre>
</div>

```java
if ( done )
   ;
else
   System.out.println(“Not done yet.”)
```

