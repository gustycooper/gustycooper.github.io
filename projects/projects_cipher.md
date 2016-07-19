---
title: Cipher
keywords: project
summary: "<li>Understand elementary encryption algorithms</li> <li>Think about encryption as it relates to events in life such as the Internet.</li> <li>Understand ASCII and UTF encodings of char.</li> <li>Understand the char type can be used in arithmetic expressions.</li>"
sidebar: projects_sidebar
permalink: /projects_cipher/
toc: false
---

## Cipher Project 

The Cipher Project continues your journey on learning to write Java programs.  For this project you will use control flow in implementing your classes.  You will continue exploring Java Strings.  You will use Java ```char``` types and learn that you can apply arithmetic operations on chars.  For the Cipher project you will complete the following.

1. Develop a Cipher class that satisfies the following.

   * a. The Cipher class shall be in a Cipher.java file that is submitted on Canvas.
   * b. The Cipher class shall contain code for a Caesar cipher and an Augustus cipher.
   * c. The Caesar cipher requirements, design, discussion, and code are provided in this paper.  You have to copy the Caesar cipher code into your Cipher.java file.
   * d. The Augustus cipher requirements and discussion are provided in this paper.  You shall design the Augustus cipher algorithm and implement the code.  The Augustus cipher code shall be placed in your Cipher.java file. 
   * e. You shall create JavaDoc that properly documents your Cipher class. The JavaDoc shall be placed in your Cipher.java file. 
   * f. Creating the Cipher.java file is an individual assignment.  You shall not use your team members.

2. Develop a Cipher Tester class that tests both the Caesar and Augustus ciphers that are in your Cipher.java file.  

   * a. The Cipher Tester class shall be in a CipherTester.java file that submitted on Canvas.  
   * b. This is a team component.  Team members shall work together to create the same CipherTester.java file.
3. Decode messages that I email to you.

   * a. I will email to you several encrypted messages and their corresponding keys.  You will reply to the email with the decrypted versions of these messages.
   * b. This is an individual component.  You shall use your Cipher class created in number 1 to perform the decrypt.

4. Exchange messages and keys.  

   * a. Team members shall create several messages, encrypt them, and provide the encrypted messages and corresponding keys to other team members.  The recipients of the encrypted messages shall decrypt them and inform the sender(s) what the decrypted message(s) is.  
   * b. Teams shall decide how to satisfy this requirement.  For examples,
     * i. One member could email the other members encrypted messages and keys.
     * ii. Pairs of members could exchange encrypted messages and keys.
   * c. This is a team component.  Your UMW Honor Code pledge on your Canvas submission indicates that your team has completed this component of the project.

5. Provide a list of ideas for your choice project in a file ProjectChoice.docx.  The .docx extension is an example.  You can submit a PDF or text file or MacOS Pages file.  

   * a. The goal of this is for you to begin thinking about your choice project.  You can change your mind as the class continues.
   * b. This is an individual component; however, you can discuss ideas with anyone.

6. Extra Credit: Select from the following – one or more.
   * a. How do you know that your credit card information is not compromised when purchasing on the Internet?
   * b. New encryption apps allow people to exchange encrypted messages.  The US Government wants a backdoor to view encrypted messages of suspected criminals.  Discuss whether or not you think the US Government should have this backdoor to bypass the encryption. 
   * c. Select a modern encryption technique and describe how it works.
   * d. How does the encryption algorithm of WWII German messages compare to modern encryption algorithms?  The movie, Immitation Game shows Alan Turing leading a team that broke the German encryption by creating the Enigma “Computer”.

## Cipher Class Interface Requirements

The high-level requirements for the Cipher class are specified by describing the public interface, which are the public methods of the class.  You must conform to this interface because I will test your program using my tester.  If you misspell your caesarEncrypt method as ceasarEncrypt, your Cipher class will not work with my tester because my tester will get an undefined method compile error.

* ```public Cipher(int secretKey)``` – constructor for your Cipher class.  The secretKey is used by encrypt and decrypt methods of the Cipher class.

* ```public String caesarEncrypt(String s)``` – returns a ```String``` that is the Caesar encrypted version of the ```String s```.  This method shall use the Caesar code that is provided in this specification.  The Caesar algorithm requirements are discussed and implemented in this specification.

* ```public String caesarDecrypt(String s)``` – returns a ```String``` that is the Caesar decrypted version of the ```String s```.  This method shall use the Caesar code this is provided in this specification.  The Caesar algorithm requirements are discussed and implemented in this specification.

* ```public String augustusEncrypt(String s)``` – returns a ```String``` that is the Augustus encrypted version of the ```String s```.  This method shall implement the Augustus algorithm requirements in this specification.

* ```public String augustusDecrypt(String s)``` – returns a ```String``` that is the Augustus decrypted version of the ```String s```.  This method shall implement the Augustus algorithm requirements in this specification.

## Caesar’s Cipher

## Introduction Caesar’s Cipher

Caesar’s cipher encrypts (i.e., scrambles in a reversible way) messages by “rotating” each letter by k positions, wrapping around from 'Z' to 'A' as needed.  The following Wikipedia article may be read:  [Caesar Cipher](http://en.wikipedia.org/wiki/Caesar_cipher)

## Caesar Cipher Algorithm Requirements

Let p be an unencrypted, plaintext message (e.g., Hello Gusty).  If pi is the ith character in p and k is a non-negative integer called the secret key, then each letter, ci, in the cipher text, c, is computed as:

```java
ci = (pi + k) % 26
```

This formula is a precise and concise way to express the Caesar cipher algorithm.  You will discover that Caesar’s cipher is not the most secure cipher, but fun to implement!  A few examples will help to understand the formula.  

### Example 1

Let the secret key be 1, which means the cipher text is shifted 1 character from the plain text.  The following shows upper case letters shifted 1 character. 

```java
Plain  A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
Cipher B C D E F G H I J K L M N O P Q R S T U V W X Y Z A 
```

Using the secret key of 1 to encrypt the plaintext message Dog results in the cipher text message Eph because ‘D’ is encrypted as E, ‘o’ is encrypted as ‘p’ and ‘g’ is encrypted as ‘h’.  Encrypting Zac results in Abd.

### Example 2

Let the secret key be 13.  The letter A shifted 13 results in N.  The following shows upper case letters shifted 13 character.

```java
Plain  A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
Cipher N O P Q R S T U V W X Y Z A B C D E F G H I J K L M 
```

Using the secret key of 13 to encrypt the plaintext message Be sure to drink your Ovaltine! results in the cipher text message Or fher gb qevax lbhe Binygvar! 

```java
Plain  Be sure to drink your Ovaltine!
Cipher Or fher gb qevax lbhe Binygvar!
```

## Caesar Cipher Additional Requirements

The Caesar cipher algorithm shall only rotate upper and lower case characters.  An upper case character shall be rotated to an upper case character and a lower case character shall be rotated to a lower case character.  Spaces and punctuation characters shall be the same in both the plain text message and the cipher message.  For example, the string Zac’s FAV # is 123! encrypted with a key of 1 is Abd’t GBW # jt 123!

Although there exist only 26 letters in the English alphabet, you may not assume key passed to the Cipher constructor will be less than or equal to 26. Your program shall work for all non-negative values of key. If the key is greater than 26 you shall still have alphabetical characters in the output. For example, if the key is 27. ‘A’ shall not become ‘[‘ even though ‘[‘ is 27 positions away from ‘A’. Instead ‘A’ shall become ‘B’ since 27 modulo 26 is 1.

The following shows the Cipher class being used with the Caesar cipher methods.

```java
Cipher cipher = new Cipher(27);
String s = cipher.caesarEncrypt(“Dog”) // s is Eph
String s = cipher.caesarDecrypt(cipher.encrypt(“Dog”)) // s is Dog
Cipher salad = new Cipher(13);
String u = salad.caesarEncrypt(“Ovaltine!”) // u is Binygvar!
```

## Java char Can Be Used in Arithmetic Expressions

Lets talk about manipulating Java ```char```s so they remain uppercase or lowercase.  Lowercase ```char``` letters ‘a’ through ‘z’ are represented as the numbers 97 through 122.  Uppercase ```char``` letters ‘A’ through ‘Z’ are represented as the numbers 65 through 90.  If Z is rotated by 4, it becomes D.  In terms of numbers, 90 becomes 68.  Java allows you to use ```char``` variables and literals with arithmetic operators.  For example,

```java
char c = (char)(’A’ + 4);
```

assigns the ```char ‘E’``` to the variable ```c```.  In rotating characters, you need an algorithm that adds the key to an uppercase letter and keeps the resulting value in the range of uppercase letters.  Suppose the key is a 2, the following is a bad algorithm because it rotates Z outside the letter range.

```java
char c = (char)(‘Z’ + 2); // c will be 92, which is the backslash \
```

Consider the following expression.

* ```90 – 65```, which represents ```’Z’ – ‘A’```.  

This expression computes the offset from A to Z, which is 25.

When we add our key of 2 to 25 to get 27.  If we perform modulo (% operator) 26 on 27, we get 1, which when added to 65 gives us 66, which is B.  The following two expressions capture this discussion.   The first expression uses numbers, and the second expression uses Java ```char```.  The two expressions are equivalent.

* ```65 + ( (90  –  65) % 26)```, which yields 66 or the number for B.
* ```‘A’+ ( (‘Z’ – ‘A’) % 26)```, which yields 66 or the number for B.

You have to cast an integer expression with ```(char)``` when assigning it to a ```char``` variable.  The following expression properly rotates an uppercase ```char``` by key such that it rotates into an uppercase ```char```.

```java
char c = ‘X’;
c = (char)(‘A’ + (c – ‘A’ + key) % 26);
```

You will need a similar expression for rotating lowercase characters.

## Java Strings and chars

The previous section provided techniques for rotating Java ```char```s; however, the Cipher class encrypt and decrypt methods manipulate Java Strings, and ```String``` variables are immutable.  Java has several classes for strings.  A ```StringBuffer``` class is similar to ```String``` - they both have a sequence of characters, but ```StringBuffer``` variables are mutable with methods that allow you to change them.  The following code snippet rotates the first character of Coffee by 4.

```java
class ExampleCode {
    private static String replaceCharAt(String s, int i, char c){
        StringBuffer buf = new StringBuffer(s);
        buf.setCharAt(i, c);
        return buf.toString();
    }
    
    public static void main(String[] args) {
       String word = "Coffee";
       int key = 4; // rotate by 4
       char c = word.charAt(0); // get char from word
       if (Character.isLetter(c)) {
          if (Character.isUpperCase(c)) {
             c = (char)(‘A’ + (c – ‘A’ + key) % 26);
          } else {
             c = …;
          }
       }
       word = replaceCharAt(word, 0, c);
       System.out.println(word);
    }

}
```

The above code uses a [```StringBuffer```](https://docs.oracle.com/javase/8/docs/api/java/lang/StringBuffer.html).  You can also use a [```StringBuilder```](https://docs.oracle.com/javase/tutorial/java/data/buffers.html).  Both ```StringBuffer``` and ```StringBuilder``` classes are sequences of characters and they allow you to modify them.  A ```StringBuffer``` is thread-safe, which is something we do not study in this course.  Threads are multiple processes running concurrently.  Thread-safe means the multiple processes cannot mess-up each other accessing the ```StringBuffer.

## Decrypting

If we rotate Dog by 1 we get Eph.  What do we have to rotate Eph by in order to get Dog?  Can you use caesarEncrypt() with a general form of the initial key to implement caesarDecrypt()?

## Cipher Class with Caesar Code

The following code is the Cipher.java file with Caesar cipher code.  You shall use this as the starting point for you Cipher.java file.  You shall add your implementation of the Augustus cipher.

# Augustus Cipher 

## Introduction to Augustus Cipher

When Caesar realized that his enemies were easily cracking his Caesar Cipher, he consulted with his cabinet to create the Augustus Cipher.  The Augustus Cipher is more secure than the Caesar Cipher, but it is not as secure as today’s modern encryption algorithms.  Nor is it as secure as the Enigma as shown in the Imitation Game.

## Augustus Cipher Algorithm Requirements

The Augustus Cipher key is a number that is applied in two steps.  

1. The first step uses the key in the Caesar Cipher described previously.  For example the first step with a key of 13 encrypts Hello as Uryyb.  
2. The second step uses each individual digit of the key as a Caesar Cipher that is applied to the encrypted text of the first step.  

Let p be the plain text string, let k be the key, and let cc be the Caesar cipher text created from p using k.  Let cci be the ith character in cc and ki be the ith number in the key (i.e., if k is 479, then k2 is 9).  Each letter, ci, in the cipher text, c, is computed as:

```java
ci = (cci + kj) %  26
```

When the length of the key is shorter than the length of the text, you cycle back to the first digit of the key.  The examples will demonstrate this.

### Example 1

This example uses the Augustus Cipher to encrypt Hello! with a key of 13.  The following shows step 1 of the Augustus Cipher.

```java
Plain  A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
Cipher N O P Q R S T U V W X Y Z A B C D E F G H I J K L M 

Plain Text  Hello!
1st Cipher   Uryyb!  
```

The following shows step 2 of the Augustus Cipher where the individual digits of the key are used as Caesar Ciphers on individual letters of cipher text from step 1.
 
* U rotated by 1 to get V
* r rotated by 3 to get u
* y rotated by 1 to get z
* y rotated by 3 to get b
* b rotated by 1 to get c
* ! is not rotated 

The following is a tabular form step 2 of the Augustus Cipher.

```java
  U  r  y  y  b  !
+ 1  3  1  3  1
------------------
  V  u  z  b  c  !
```

### Example 2

This example uses the Augustus Cipher to encrypt Hello! with a key of 72345.  You will notice that 72345 % 26 is 13 so the first step of the Augustus Cipher in this example is the same as the previous example.

```java
Plain Text  Hello!
1st Cipher  Uryyb!  
```

The second step uses 7, 2, 3, 4, 5 as follows.

```java
  U  r  y  y  b  !
+ 7  2  3  4  5
------------------
  B  t  b  c  g  !
```

### Example 3

This example uses the Augustus Cipher to encrypt Hello! with a key of 715.  You will notice that 715 % 26 is 13 so the first step of the Augustus Cipher in this example is the same as Example 1.

```java
Plain Text  Hello!
1st Cipher  Uryyb!  
```

The second step uses 7, 1, 5 as follows.

```java
  U  r  y  y  b  !
+ 7  1  5  7  1
------------------
  B  s  d  f  c  !
```

## Augustus Cipher Additional Requirements

The Augustus cipher has the same additional requirements as the Caesar cipher.  You shall only rotate upper and lower case characters.  An upper case character shall be rotated to an upper case character and a lower case character shall be rotated to a lower case character.  Spaces and punctuation characters shall be the same in both the plain text message and the cipher message.  Your program shall work for all non-negative values of key. If the key is greater than 26 you shall still have alphabetical characters in the output.

The following shows the Cipher class being used with the Augustus cipher methods.

```java
Cipher cipher = new Cipher(13);
String s = cipher.augustusEncrypt(“Hello!”); // s is Vuzbc!  
Cipher salad = new Cipher(72345);
String u = salad.augustusEncrypt(“Hello!”); // u is Btbcg!
```

## Cipher Tester

Each team shall create one CipherTester class that all team members use to test their individual Cipher classes.  A team should think of test cases that fully test the requirements of the Cipher class – both Caesar and Augustus. Everyone should realize that the Cipher class is an individual component.  The team’s CipherTester may contain test cases that fail on an individual’s Cipher class.  The team may NOT help an individual debug the individual’s Cipher class.  Individuals are responsible for debugging their own Cipher class. 


The following suggestions are not a thorough collection of tests, but should serve as a starting point for you to think of your own set of test cases.  

* Strings that contain upper and lower case characters
* Strings that contain spaces and punctuation.
* Simple keys such as 1 and 2.
* Larger keys such as 46 and 1234532.
* Strings and keys that cause letters to rotate from the end of the alphabet to the front of the alphabet.
* Decrypting an encrypted string should produce the original string.
  * ```cipher.augustusDecrypt(cipher.augustusEncrypt(“Gusty”))``` should return “Gusty”

The CipherTester class shall print expected values and actual values.

