---
title: Primitive Types
tags: [type]
keywords: java, primitive types
last_updated: May 1, 2016
summary: "This describes primitive data types and their relationship to memory"
sidebar: mydoc_sidebar
permalink: /mydoc_1_primitive_types/
---

## Programming

CPSC 220 primary goal is for you to learn Java programming.  Java programming consists of solving problems using algorithms and data structures that adhere to the Java programming syntax and semantics.  You have already studied 

* people and computers process information
* a model of a computer that has input, output, CPU, RAM, and secondary memory
* problem solving
* algorithms

We want to connect these concepts together into Java programming.

Writing a program is primarily creating algorithms and data structures.  In fact you can purchase a book published in 1976 by Niklaus Wirth (the creator of the programming language Pascal) that is titled, Algorithms + Data Structures = Programs.  We have a general feel for algorithms, which we will tighten into Java, but first we have to begin our journey into data structure.  We begin with Java primitive data types.

Recall a computer is a machine that stores and manipulates information under the control of a changeable program.  A data type defines the characteristics of information we want to manipulate.  We will use data types to declare variables, which will contain the information we will manipulate.  

A **variable** has the following

1. a name
2. a data type
3. a value
4. memory locations

A **data type** is a set of values and a set of operations.  We will return to this definition throughout the course.  We will consider the Java primitive data type **byte** as our initial example.  The following example declares a variable named gusty that is type byte, initially has value 55, but is immediately changed to have value -55.

```
byte gusty = 55;
gusty = gusty - 110;
```

In this example, code we see

1. The variable name is gusty
2. The data type is byte, which 

   * Has the set of values {-128, -127, ..., 0, 1, 2, ... 127}
   * Has the set of arithmetic operations {+ - * / %}

3. The value is initially 55, but then changed to -55
4. We will demonstrate the memory locations in a later section, after we have discussed how numbers are represented in computers.


Java provides the following primitive data types.

* byte – an integer in the range -128 to 127.
* short – an integer in the range xx to xx.
* int – an integer in the range xx to xx.
* long – an integer in the range xx to xx.
* float – a floating point in the range xx to xx.
* double – a floating point in the range xx to xx.
* char – a letter that can be found on your keyboard
* boolean - a value that is true or false

## Numbers – Decimal and People

Everyone understands numbers, but most have forgotten the fundamentals of number systems - base and place value.  Roman numerals are difficult to perform computations because they do not have a base and a place value.  Even the NFL has dropped the Roman numeral from its Superbowl.  We are most familiar with base 10, which has ten digits - 0, 1, ..., 9.  When we examine a number we intuitively know the value of each digits place.  Beginning from the right and moving left, each place in a number has a value that corresponds to base raised to the position.  

![Decimal Number](../images/decimal.png "Decimal Number")


The Hindus started using place value numbers around 500.  The Hindus discovered ZERO around 650.  The Hindu numbering system was discovered right around the time of the expansion of Islam.  Arabic mathematicians adopted the system – hence Hindu-Arabic numbers.  Leonardo Fibonacci wrote a book Liber Abaci in 1202 where he extolled the virtues of place-value numbers; however, the western world did not adopt place value until around 1500.  I am certainly glad that we did.


Almost all people use decimal numbers today.

## Numbers – Binary and Computers

Computers use binary numbers, not decimal.  Binary is base-2, which means there are two digits: 0 and 1.  Each digit in a binary number is called a **bit**, which is a contraction of binary-digit.  Binary employs the place-value system  just like decimal.  The following figure shows binary 0b101101, which is equivalent decimal 45

![Binary Number](../images/binary.png "Binary Number")

## Numbers - How Many Numbers in N Digits

When mentally using decimal numbers, we usually do not worry about how many numbers can be represented in N digits.  For example, if we have 3 decimal digits, we can count from 0 to 999, which means 3 decimal digits can represent 1000 numbers.  In this case, we have 10^3 numbers, where 10 is the base and 3 is the number of digits.  

However, within a computer, we often consider how many numbers can be represented in N bits.  Memory is organized into a sequence of bytes where each byte has an address, so we typically consider how many numbers can be represented in 8-bits (1 bytes), 16-bits (2 bytes), 32-bits (4 bytes), and 64-bits (8 bytes).  The same formula for computer total numbers applies, so (for example) a 2 byte quantity can hold 2^16 , where 2 is the base and 16 is the number of bits.  We can consider various numbers in the follownig snippet of memory.  For examples, a 1-byte number is at address 0004040 and a 4-byte numbers is at addresses 004040 through 004043.

```
Address	  Value
0004040   00000000
0004041   00001000
0004042   00000101
0004043   11111110
0004044   01010100
0004045   01010100
0004046   00000000
0004047   00000000
```


## Numbers - Converting Between Bases

This section presents an pseudo-code algorithm that we will program in Java during a future lab.  Thinking in terms of our computer model, we first define the input and output of our algorithm.

* Input 
  * Number to be converted 
  * Base of the converted number
* Output 
  * Number converted to Base

An example call to this algorithm would be Convert(20,16), which is asking us to convert the number 20 to base 16.  The output for this case is 0x14, which is 1*16^1 + 4*16^0.

```
// We will build answer from right to left
Convert(Number, Base)
    while (Number != 0) {
        digit = Number % Base      // modulo
        Number = Number / Base // integer division
        Add digit to answer
    }
```

## Binary Numbers - Positive and Negative

We need to represent both positive and negative numbers in memory.  In this section we will consider 3-bit numbers, but the same concepts apply to 8-bit, 16-bit, 32-bit, and 64-bit numbers.


The following table shows positive decimal numbers for a 3-bit binary numbers.

Binary | Decimal
------ | -------
000    | 0
001    | 1
010    | 2
011    | 3
100    | 4
101    | 5
110    | 6
111    | 7

If we want to represent both positive and negative numbers, we can consider the first bit to be a sign bit to create signed magnitude numbers.  This means that each number has the same magnitude and a sign indicates whether the number is positive or negative   This is how we manipulate numbers in our brains.  For example, 512 is a magnitude with +512 being positive and -512 being negative.  The same 512 is on both the positive and negative numbers.  This results in the following for binary, which has two representations of zero.

Binary | Decimal
------ | -------
011    | 3
010    | 2
001    | 1
000    | 0
100    | -0
101    | -1
110    | -2
111    | -3

Our brains process signed magnitude rather well, but computers do not.  Computers represent signed integers in twos-complement.  The following shows twos-complement for 3 bits.

Binary | Decimal
------ | -------
011    | 3
010    | 2
001    | 1
000    | 0
111    | -1
110    | -2
101    | -3
100    | -4

Notice how twos-complement has only one representation of zero.  You will also notice how we get 3 positive numbers (2^(2-1)), one zero, and 4 negative numbers (2^2).  If we have an 8-bit twos-complement integer, we would have 127 positive numbers (2^(7-1)), one zero, and 128 negative numbers (2^7).  The general formula for a twos-complement number of N bits is the following.

* 2^(N-1)-1 positive numbers
* one zero
* 2^(N-1) negative numbers

There is a simple algorithm to convert between a positive and negative number in twos-complement, which is change all the bits and add one.  Let’s continue with our 3-bit example and convert a positive 2 to a negative 2.

* Positive 2: 010
* Change all the bits: 101
* Add one: 101+1 is 110, which is negative 2

## Adding Twos Complement Numbers

Twos complement also allows us to simply add numbers and subtraction takes care of itself.  Consider adding 1 and -1 in a 3-bit number.

```
    001	   (1)
   +111  +(-1) 
--------------------
    000	 (0)
```

Let’s add 24 and 37 in 8-bit numbers.

```
  00011000   24      
+ 00100101   37
----------------
  00111101   61
```

Let’s convert 37 to a negative 37 in an 8-bit number.

```
  11011010   Change bits
+        1   Add 1
-----------
  11011011   2’s Comp (-37)  
```

Let’s add 24 and -37.

```
  00011000    24
+ 11011011   -37
-----------------
  11110011   -13
```

Now lets change all of the bits and add 1 to our -13,

```
  11110011   -13
  00001100   Change bits
+        1
-----------------
  00001101    13
```

It is almost like magic.

## Floating Point Numbers in a Computer

The first step in understanding floating-point numbers in a computer is to understand scientific notation.  All floating-point numbers can be represented in scientific notation, which has a fraction part (also called the mantissa) and exponent part.  Here are few numbers that have the same fraction, but different exponents.
 
* 3.14159 is equivalent to .314159 * 10^1
* 31415.9 is equivalent to .314159 * 10^5
* 31.4159 is equivalent to .314159 * 10^2
 
The following tables shows those numbers in a somewhat computer form, where all we care about is the exponent and fraction.  

exp   | fraction
----- | --------
  1   |  314159
  5   |  314159
  2   |  314159

We can consider fractions from a place value perspective.  The fraction .314159 is 

3\*.1 + 1\*.01 + 4\*.001 + 1\*.0001 + 5\*.00001 + 9\*.000001

Another way to write this is

3 \* 1/10 + 1 \* 1/100 + 4 \* 1/1000 + 1 \* 1/10000 + 5 \* 1/100000 + 9 \* 1/1000000

Of course, a computer only has binary so we will represent the fraction as a binary fraction.  For example, suppose we want to represent the fraction .625, which is ½ + ⅛.  We represent this fraction as 1 \* ½ + 0 \* ¼ + 1 \* ⅛.  We can multiply .625 by 22, to get 2.5.  Putting all of this together in an 8-bit fraction that has 4-bits for a positive exponent and 4-bits for mantissa, we get the following

exp   | fraction
----- | --------
0010  |  1010

This simple model is just slightly more complicated on real computers.  We can have positive and negative floating-point numbers, and the exponent can be both positive and negative.  Floating point binary numbers have a sign bit to indicate whether it is positive or negative.  The exponent is represented in a bias notation.  Suppose you had a 3-bit exponent.  The following represents a bias notation for the exponent. value.

```
bin     exp
000     -3
001     -2
010     -1
011      0
100      1
101      2
110      3
111      4
```

Floating point numbers in computers are stored with normalized mantissas, which means the fractional part has a 1 in the most significant fractional bit.  The decimal floating-point number 1234.567 is normalized as 1.234567 x 10^3.   Notice that only one digit appears before the decimal.  The exponent expresses the number of positions the decimal point was moved left  (positive exponent) or moved right (negative exponent).  The binary floating-point number 1101.101 is normalized as 1.101101 x 23.  Moving the binary point 3 positions to the left, and multiplying by 23 accomplishes this.  The following shows normalization of binary floating-point numbers.

Binary Value | Normalized As | Exponent
------------ | ------------- | --------
 1101.101    |   1.101101    | 3
 .00101      |   1.01        | -3
 1.0001      |   1.0001      | 0
 10000011.0  |   1.0000011   | 7
 
The following figure shows IEEE 745 floating-point numbers.
 
![IEEE Floating Point](../images/ieeeFloatingPoint.png "IEEE Floating Point")

Some examples of floating point numbers in the IEEE format are as follows.

Binary Value      | Biased Exponent | Sign | Exponent | Mantissa	
----------------- | --------------- | ---- | -------- | --------
  -1.11           | 127             |  1   | 01111111 | 11000000000000000000000	
  +1101.101       | 130             |  0   | 10000010 | 10110100000000000000000	
  -.00101         | 124             |  1   | 01111100 | 01000000000000000000000	
  +100111.0       | 132             |  0   | 10000100 | 00111000000000000000000	
  +.0000001101011 | 120             |  0   | 01111000 | 10101100000000000000000

If a decimal fraction can be easily represented as a sum of fractions in the 
 form (1/2 + 1/4 + 1/8 + ... ), it is fairly easy to discover the corresponding binary real.  Here are a few simple examples

 Decimal Fraction | Factored As... | Binary Real	
----------------- | -------------- | ------------
 	1/2    	  | 1/2            | .1	
 	1/4    	  | 1/4	           | .01	
 	3/4    	  | 1/2 + 1/4      | .11	
 	1/8    	  | 1/8	           | .001	
 	7/8    	  | 1/2 + 1/4 + 1/8| .111	
 	3/8    	  | 1/4 + 1/8      | .011	
 	1/16      | 1/16           | .0001	
 	3/16   	  | 1/8 + 1/16     | .0011	
 	5/16      | 1/4 + 1/16     | .0101

A computer can represent some floating point numbers quite well.  For example, .5 and .125; however some are just approximations.  How well can a computer represent .1?  Not too well.  The following algorithm as typed into the BlueJ Code Pad does not compute 1.0, which is what you think it should.

{% raw %}
```java
double y=.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y=y+.1;
y
0.9999999999999999   (double)
```
{% endraw %}

## Java Primitive Data Types

A data type is a set of values and a set of operations.  When considering Java elementary data types such as byte, short, int, etc., the set of operations are the normal arithmetic operations.  The set of values are restricted by the individual type.  For example, the set of values for the type byte are -128 to 127.

We know that memory is a sequence of bytes, where each byte is 8-bits.  A byte can encode 256 (or 28) digits.  We can connect bytes together to make larger quantities.  Java elementary data types map directly to connected bytes of memory.

* byte – one byte
* short – two bytes
* char – two bytes
* int – four bytes
* long – eight bytes
* float – four bytes
* double – eight bytes

The following figure shows memory as bytes and how Java primitive data types align.
 
![Java Primitive Types and Memory](../images/memJavaPrimitiveTypes.png "Java Primitive Types and Memory")

