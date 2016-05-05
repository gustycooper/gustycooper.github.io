---
title: Primitive Types
tags: [getting_started]
keywords: java, primitive types
last_updated: May 1, 2016
summary: "This describes primitive data types and their relationship to memory"
sidebar: mydoc_sidebar
permalink: /mydoc_1_primitive_types/
---

## Numbers – Decimal and Binary

Today’s number systems have a place value and a base.  The base is the number of symbols.  Beginning from the right and moving left, each place in a number has a value that corresponds to baseposition.  Decimal or base-10 has ten digits.  We use base-10 most likely because we have 10 fingers.  Everyone should realize the Romans did not use a place value system (e.g. M is 1000).  The Hindus started using place value numbers around 500.  The Hindus discovered ZERO around 650.  The Hindu numbering system was discovered right around the time of the expansion of Islam.  Arabic mathematicians adopted the system – hence Hindu-Arabic numbers.  Leonardo Fibonacci wrote a book Liber Abaci in 1202 where he extolled the virtues of place-value numbers; however, the western world did not adopt place value until around 1500.

 
Figure BBDT-7 - Decimal Number System

Binary is base-2.  There are two digits: 0 and 1.  It is just like decimal.  The following figure shows binary 0b101101, which is equivalent decimal 45

Figure BBDT-8 - Binary Number System

One think we have to consider with numbers is how many numbers can be encoded in a specific number of digits.  In decimal, we intuitively know the answer.  Three decimal digits can encode 1000 numbers, which are 0, 1, …, 999.  The formula for computing the total numbers for N digits is 10N.  The generic version of this formula is basenumOfDigits.   This means that a binary number in three digits can encode 8 numbers (23), which are shown below as binary and decimal.

Binary	       Decimal
000		0
001		1
010		2
011		3
100		4
101		5
110		6
111		7

An 8-bit quantity can represent 256 numbers (28).  A 16-bit quantity can represent 65536 numbers (216).  A 32-bit quantity can represent 4294967296 numbers (232).

## Converting Between Bases
Input: Number, Base (both integers)
Output: Number converted to Base

Example: Convert(20,16); // convert 20 to base 16 (hex) 
// the answer is 0x14

// We will build answer from right to left
Convert(Number, Base)
    while (Number != 0) {
        digit = Number % Base      // modulo
        Number = Number / Base // integer division
        Add digit to answer
    }

## Integers in a Computer
Let’s examine a 3-bit quantity, which can hold 8 (or 23) numbers.  If we want to represent only positive numbers, we can represent them as follows.
bin     dec
000      0
001      1
010      2
011      3
100      4
101      5
110      6
111      7

If we want to represent both positive and negative numbers, we can consider the first bit to be a sign bit to create signed magnitude numbers.  This means that each number has the same magnitude and a sign indicates whether the number is positive or negative   This is how we manipulate numbers in our brains.  For example, 512 is a magnitude with +512 being positive and -512 being negative.  The same 512 is on both the positive and negative numbers.  This results in the following for binary, which has two representations of zero.
bin     dec
011      3
010      2
001      1
000      0
100     -0
101     -1
110     -2
111     -3

Our brains process signed magnitude rather well, but computers do not.  Computers represent signed integers in twos-complement.  The following shows twos-complement for 3 bits.
bin     dec
011      3
010      2
001      1
000      0
111     -1
110     -2
101     -3
100     -4
 
Notice how twos-complement has only one representation of zero.  You will also notice how we get 3 positive numbers (22-1), one zero, and 4 negative numbers (22).  If we have an 8-bit twos-complement integer, we would have 127 positive numbers (27-1), one zero, and 128 negative numbers (27).  The general formula for a twos-complement number of N bits is the following.
* 2N-1-1 positive numbers
* one zero
* 2N-1 negative numbers

There is a simple algorithm to convert between a positive and negative number in twos-complement, which is change all the bits and add one.  Let’s continue with our 3-bit example and convert a positive 2 to a negative 2.
* Positive 2: 010
* Change all the bits: 101
* Add one: 101+1 is 110, which is negative 2

Twos complement also allows us to simply add numbers and subtraction takes care of itself.  Consider adding 1 and -1.
{% raw %}
```
    001	 (1)
   +111    +(-1) 
--------------------
    000	 (0)
Let’s add 24 and 37
  00011000   24      
+ 00100101   37
----------------
  00111101   61

Let’s convert 37 to a negative 37
  11011010   Change bits
+        1   Add 1
-----------
  11011011   2’s Comp (-37)  

Let’s add 24 and -37.
  00011000    24
+ 11011011   -37
-----------------
  11110011   -13
```
{% endraw %}
 
## Floating Point Numbers in a Computer

The first step in understanding floating-point numbers in a computer is to understand scientific notation.  All floating-point numbers can be represented in scientific notation, which has a fraction part (also called the mantissa) and exponent part.  Here are few numbers that have the same fraction, but different exponents.
 
* 3.14159 is equivalent to .314159 * 101
* 31415.9 is equivalent to .314159 * 105
* 31.4159 is equivalent to .314159 * 102
 
The following puts those numbers into a somewhat computer form, where all we care about is the exponent and fraction.  
exp   fraction
* 1  .  314159
* 5  .  314159
* 2  .  314159

The fraction .314159 is 

3*.1 + 1 *.01 + 4*.001 + 1*.0001 + 5*.00001 + 9*.000001

Another way to write this is

3* 1/10 + 1* 1/100 + 4* 1/1000 + 1* 1/10000 + 5* 1/100000 + 9* 1/1000000

Of course, a computer only has binary so we will represent the fraction as a binary fraction.  For example, suppose we want to represent the fraction .625, which is ½ + ⅛.  We represent this fraction as 1*½ + 0*¼ + 1*⅛.  We can multiply .625 by 22, to get 2.5.  Putting all of this together in an 8-bit fraction that has 4-bits for a positive exponent and 4-bits for mantissa, we get the following

exp    fraction
0010 . 1010

This simple model is just slightly more complicated on real computers.  We can have positive and negative floating-point numbers, and the exponent can be both positive and negative.  Floating point binary numbers have a sign bit to indicate whether it is positive or negative.  The exponent is represented in a bias notation.  Suppose you had a 3-bit exponent.  The following represents a bias notation for the exponent. value.
{% raw %}
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
{% endraw %}

Floating point numbers in computers are stored with normalized mantissas, which means the fractional part has a 1 in the most significant fractional bit.  The decimal floating-point number 1234.567 is normalized as 1.234567 x 103.   Notice that only one digit appears before the decimal.  The exponent expresses the number of positions the decimal point was moved left  (positive exponent) or moved right (negative exponent).  The binary floating-point number 1101.101 is normalized as 1.101101 x 23.  Moving the binary point 3 positions to the left, and multiplying by 23 accomplishes this.  The following shows normalization of binary floating-point numbers.

 Binary Value	Normalized As	Exponent
 1101.101		1.101101		3
 .00101		1.01			-3
 1.0001		1.0001		0
 10000011.0		1.0000011		7
 
The following figure shows IEEE 745 floating-point numbers.

 
Figure BBDT-9 IEEE 754 Floating-point Format

Some examples of floating point numbers in the IEEE format are as follows.

Binary Value	Biased Exponent	Sign, Exponent, Mantissa	
  -1.11		127		1  	01111111  11000000000000000000000	
  +1101.101		130		0  	10000010  10110100000000000000000	
  -.00101		124		1  	01111100  01000000000000000000000	
  +100111.0		132		0  	10000100  00111000000000000000000	
  +.0000001101011	120		0  	01111000  10101100000000000000000

If a decimal fraction can be easily represented as a sum of fractions in the 
 form (1/2 + 1/4 + 1/8 + ... ), it is fairly easy to discover the corresponding binary real.  Here are a few simple examples

 Decimal Fraction	    Factored As...	Binary Real	
 	1/2	    		1/2				.1	
 	1/4	    		1/4				.01	
 	3/4	    		1/2 + 1/4			.11	
 	1/8	    		1/8				.001	
 	7/8	    		1/2 + 1/4 + 1/8		.111	
 	3/8	    		1/4 + 1/8			.011	
 	1/16	    		1/16				.0001	
 	3/16	    		1/8 + 1/16			.0011	
 	5/16	    		1/4 + 1/16			.0101

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

## Java Elementary Data Types

A data type is a set of values and a set of operations.  When considering Java elementary data types such as byte, short, int, etc., the set of operations are the normal arithmetic operations.  The set of values are restricted by the individual type.  For example, the set of values for the type byte are -128 to 127.

We know that memory is a sequence of bytes, where each byte is 8-bits.  A byte can encode 256 (or 28) digits.  We can connect bytes together to make larger quantities.  Java elementary data types map directly to connected bytes of memory.

* byte – one byte
* short – two bytes
* char – two bytes
* int – four bytes
* long – eight bytes
* float – four bytes
* double – eight bytes

The following figure shows memory as bytes and how Java elementary data types align.
 
Figure BBDT-10 Memory and Java Elementary Data Types

