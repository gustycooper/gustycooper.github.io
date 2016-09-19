---
title: Shared Secret
keywords: project
summary: "<li>Understand modulo arithmetic.</li> <li>Understand the basics of public-private keys.</li>"
sidebar: projects_sidebar
permalink: /projects_shared_secret/
toc: false
---

## Shared Secret Project

Note: This project was created based upon Public Key Cryptography chapter of *9 Algorithms that Changed the Future* by John MacCormick.  John introduces the public-private technique with paint mixing.  You can see a similar treatment of paint mixing at [Diffie-Hellman Key Exchange](https://en.wikipedia.org/wiki/Diffie–Hellman_key_exchange).

The Shared Secret is your first project.  We know how to develop a basic Java program using ```main```, ```System.out``` for output, a ```Scanner``` for input, methods, and expressions.  Those are the only programming features required for this project.

1. Develop a SharedSecret class that satisfies the following.

   * a. The SharedSecret class shall be in a SharedSecret.java file that is submitted on Canvas.
   * b. The SharedSecret class shall contain code that satisfies the requirements as specified in this project.
   * c. The SharedSecret class shall adhere to the basic design as provided in this project.
   * d. Creating the SharedSecret.java file is an individual assignment.  You shall not use your team members.

2. Create a ```main``` method in SharedSecret that tests your implementation.  This specification provides a sample run of ```main```.

   * a. This is a team component. Team members shall work together to create the same main method.

3. Establish a SharedSecret with a team member.

   * a. Team members shall create public, public-private, and private numbers.  Team members shall use these numbers as described in this project to create a shared secret number.
   * b. Teams shall decide how to satisfy this requirement.  For examples,
     * i. Team members could email each other their public-private numbers and then email their resulting shared secret numbers.
     * ii. Teams can meet and exchange their public-private numbers and discuss their shared secret numbers.
   * c. This is a team component.  Your UMW Honor Code pledge on your Canvas submission indicates that your team has completed this component of the project.


## Modulo and Clock Arithmetic

Clock arithmetic uses arithmetic operators such that the resulting answer remains in a range.  Our 12-hour clock provides a simple example of clock arithmetic.  Our 12-hour clock has the numbers 1, 2, 3, ... 12.  If it is 9:00 AM, and your friend says meet me at the gym in 6 hours, you know to meet at 3:00 PM.  In normal arithmetic 9 + 6 is 15, but in clock arithmetic the answer has to be between 1 and 12.  In this example, you subtract 12 from 15 to get 3.  

The modulo operator creates clock arithmetic answers.  Consider the following example using Modulo 11 in the BlueJ Codepad.  Modulo 11 works with 11 numbers that are 0, 1, 2, ..., 10.  Pay attention to the use of ```Math.pow``` in the following examples because we will use it in Shared Secret.  Since we want the answer to be an ```int``, the examples show two calls to ```Math.pow```.  The first results in a ```double```.  The second casts the ```Math.pow``` return value to an ```int```.

```java
> 5 % 11
5   (int)
> 12 % 11
1   (int)
> (12 + 5) % 11
6   (int)
> (6 * 7) % 11
9   (int)
> Math.pow(2,5) % 11
10.0   (double)
> (int)(Math.pow(2,5)) % 11
10   (int)
> 11 % 11
0   (int)
> (11 * 11) % 11
0   (int)
```

## Numbers - Public, Private, Public-Private, and Shared-Secret

The code for this project is not difficult, but it mimicks public-private keys, which are important on the internet.  The goal is to use public numbers and public-private numbers from two teammates to create a shared secret number that is the same for both teammates, which they can use to encrypt information that is exchanged between them.

### Public Numbers

The public numbers are ```moduloNumber``` and a ```base```.  For this project, we select 11 as our modulo and 2 as our base; however, our algorithms shall be designed such that these public numbers can be changed.  All team members shall know the public numbers.

### Private Numbers

Each team member shall select a ```privateNumber``` that is between 0 and 10 inclusive.  Private numbers shall not be shared with team members.

### Public-private Numbers

Each team member shall compute the public-private number in accordance with the following expression.

(```base```<sup>```privateNumber```</sup>) % ```moduloNumber```

### Shared-secret Numbers

Two team members create a shared-secret number by using their private number and the public-private number of their team mate in accordance with the following expression.

(```teamMatePublicPrivateNumber```<sup>```myPrivateNumber```</sup>) % ```moduloNumber```

Any pair of teammates will share the same secret number, which could be used for encrypting information that is exchanged between them.

### Example

This example uses the following.

* ```moduloNumber``` is 11
* ```base``` is 2
* Gusty selects 5 as his private number.  Gusty's public-private number can be seen by all team members and it is

  ```java
  > (int)(Math.pow(2,5)) % 11
  10   (int)
  ```

* Coletta selects 2 as her private number. Coletta's public-private number can be seen by all team members and it is

  ```java
  > (int)(Math.pow(2,2)) % 11
  4   (int)
  ```

* Emily selects 7 as her private number.  Emily's public-private number can be seen by all team members and it is

  ```java
  > (int)(Math.pow(2,7)) % 11
  7   (int)
  ```

* Gusty and Coletta's shared secret number is 1.

  * Gusty uses his private number (5) and Coletta's public-private number (4) to computes his shared secret number with Coletta as follows.

    ```java
    > (int)(Math.pow(4,5)) % 11
    1   (int)
    ```

  * Coletta uses her private number (2) and Gusty's public-private number (10) to compute her shared secret number with Gusty as follows.

    ```java
    > (int)(Math.pow(10,2)) % 11
    1   (int)
    ```
 
* Gusty and Emily's shared secret number is 10.

  * Gusty uses his private number (5) and Emily's public-private number (7) to computes his shared secret number with Emily as follows.

    ```java
    > (int)(Math.pow(7,5)) % 11
    10   (int)
    ```

  * Emily uses her private number (7) and Gusty's public-private number (10) to compute her shared secret number with Gusty as follows.

    ```java
    > (int)(Math.pow(10,7)) % 11
    10   (int)
    ```
 
* Coletta and Emily's shared secret number is 5.

  * Coletta uses her private number (2) and Emily's public-private number (7) to computes his shared secret number with Emily as follows.

    ```java
    > (int)(Math.pow(7,2)) % 11
    5   (int)
    ```

  * Emily uses her private number (7) and Coletta's public-private number (4) to compute her shared secret number with Gusty as follows.

    ```java
    > (int)(Math.pow(4,7)) % 11
    5   (int)
    ```
 
## SharedSecret Class Organization

Your ```SharedSecret``` class shall consist of the following methods.

* ```public static int publicPrivate(int base, int moduloNumber, int privateNumber)``` - computes a public-private number using the expression described above.
* ```public static int sharedSecret(int teamMatePublicPrivateNumber, int myPrivateNumber, int moduloNumber)``` - computes a shared-screte number using the expression described above.
* ```public static void main(String[] args)``` - uses ```System.out```, a ```Scanner``` object, and calls ```publicPrivate``` and ```sharedSecret``` to accmplish the following, which shows three calling of ```main``` from BlueJ.

  ```java
  Shared Secret Project
  Enter base: 2
  Enter moduloNumber: 11
  Enter Name 1: Gusty
  Enter private number for Gusty: 5
  Enter Name 2: Coletta
  Enter private number for Coletta: 2
  Gusty Private: 5 PublicPrivate: 10 SharedSecret: 1
  Coletta Private: 2 PublicPrivate: 4 SharedSecret: 1

  Shared Secret Project
  Enter base: 2
  Enter moduloNumber: 11
  Enter Name 1: Gusty
  Enter private number for Gusty: 5
  Enter Name 2: Emily
  Enter private number for Emily: 7
  Gusty Private: 5 PublicPrivate: 10 SharedSecret: 10
  Emily Private: 7 PublicPrivate: 7 SharedSecret: 10

  Shared Secret Project
  Enter base: 2
  Enter moduloNumber: 11
  Enter Name 1: Coletta
  Enter private number for Coletta: 2
  Enter Name 2: Emily
  Enter private number for Emily: 7
  Coletta Private: 2 PublicPrivate: 4 SharedSecret: 5
  Emily Private: 7 PublicPrivate: 7 SharedSecret: 5
  ```

## Modulo Number and Key

The modulo number determines number of shared secret numbers, and is referred to as the key.  With a modulo of 11, we have 11 shared secret numbers, which is small.  Even though our algorithm allows two people to create a shared secret number from public and public-private information, it would not take many guesses to determine that shared secret number of any pair of individuals.  What is needed is so many shared secret numbers that it becomes statistically difficult to guess.  We can represent 11 numbers with 4 bits (2<sup>4</sup> is 16) or a 4 bit key.  We can represent 256 numbers with 8 bits, 65536 numbers with 16 bits, and over 4 billion numbers with a 32 bit key.  Real uses of these algorithms use keys that are 128 bits, which produces over a trillion trillion numbers.

## Using Exponentiation

You want to select an arithmetic operation to compute public-private and shared-secret numbers that is hard to reverse.  For example, you should have a difficult time to translate someone's public-private number back to their private number using the public numbers.  Multiplication is easy to reverse.  Exponentiation is hard to reverse.

## Integer Overflow in Our Implementation

We implemented our methods with parameters that allow us to change the base and modulo, but exponentiation can easily overflow an ```int```, especially considering we casted the return value of ```Math.pow``` to an ```int``` prior to performing the modulo.  Suppose I use a base of 2 and a modulo of 17, which allows us to choose private numbers between 0 and 16.  

* Gusty - Private: 5 PublicPrivate 15
* Coletta - Private: 13, PublicPrivate: 15

* Gusty and Coletta's SharedSecret number is 2; however, our implementation overflows an int creating the wrong SharedSecret number for Coletta.
  * Gusty-Coletta SharedSecret: (int)(15<sup>5</sup>) % 17
    * 15<sup>5</sup> is 759375.0, which fits into an ```int```.
  * Coletta-Gusty SharedSecret: (int)(15<sup>13</sup>) % 17
    * 15<sup>13</sup> is 1.946195068359375E15, which does not fit into an ```int```.  The following shows the result of this casting ```Math.pow(15,13)``` to an ```int``` prior to performing ```%17```, and casting ```(Math.pow(15,13)%17)``` to an ```int```.

      ```java
      > Math.pow(15,13)
      1.946195068359375E15   (double)
      > (int)Math.pow(15,13)
      2147483647   (int)
      > Integer.MAX_VALUE
      2147483647   (int)
      > (int)Math.pow(15,13) % 17
      8   (int)
      > (int)(Math.pow(15,13) % 17)
      2   (int)
      ```
