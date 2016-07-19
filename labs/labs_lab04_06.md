---
title: Twitter Type Lab
keywords: twitter
last_updated: July 17, 2016
summary: "<li>Practice creating a Twitter Type.</li> <li>Practice using String methods.</li> <li>Practice using loops and conditionals to solve problems.</li>"
sidebar: labs_sidebar
permalink: /labs_lab04_06/
toc: false
---

## Create a Java Twitter Type

**Points**: Complete this entire section for 10 points.

This lab has been created by mashing together a similar lab in the [Udacity Java Course](https://www.udacity.com/course/intro-to-java-programming--cs046) and some methods from a lab created by Ron Zacharski.

Write a Java ```Twitter class``` that has the following public interface.

* ```Twitter(String tweet)        // Constructs a Twitter```
* ```void setTweet(String tweet)  // Changes value of tweet```
* ```String getTweet()		  // returns tweet```
* ```int numVowels()              // returns number of vowels in tweet```
* ```String noVowels()            // returns tweet without vowels```
* ```String reverse()             // reverses tweet```
* ```String pigify()              // pigify word – see below```


The following demonstrates using your ```Twitter class```.

```java
Twitter t = new Twitter(“This is a post with vowels);
String shortString = t.noVowels();
// shortString contains Ths s  pst wth vwls
t.setTweet(“12345”);
String back = t.reverse();  // back contains 54321
```

For the method ```int numVowels(String word)```, you will have to loop through all of the characters in the variable word counting the vowels.  How do you do this?  You will have to use one of the loop statements.  There are Java ```String``` methods that are quite helpful.

* You can use the ```String``` method ```word.substring(i, i+1)``` to examine one character of word.  
* You can use the ```String``` method ```“aeiouAEIOU”.contains(letter)``` to see if a letter is a vowel.  

The following demonstrates this technique.  You should notice this algorithm is an instance of the accumulator pattern that accumulates a sum in an ```int```.  Please do not type this algorithm into your code without understanding how the algorithm works.  If you do not understand the algorithm, you are not learning to be a computer programmer.  If you understand this algorithm, you will easily be able to create the algorithms for noVowels and reverse.

```java
int numVowels = 0;
for (int i = 0; i < word.length(); i++) {
     if ("aeiouAEIOU".contains(word.substring(i, i+1))) {
          numVowels++;
     }
}
```

The above algorithm is a clever way of determining is a letter in a ```String``` is a vowel.  A more pedestrian way uses the ```String equals``` method in a disjunctive ```boolean``` expression.  The following demonstrates this approach. 

```java
int numVowels = 0;
for (int i = 0; i < word.length(); i++) {
     if (word.substring(i,i+1).equals(“a”) ||
         word.substring(i,i+1).equals(“e”) ||
          … fill in the rest of the vowels ||
         word.substring(i,i+1).equals(“U”))
        numVowels++;
}
```

You will add methods to Twitter in [Classes, Objects,... - Twitter Revisited Lab](/gustycooper.github.io/labs_lab04_05).


The method ```noVowels(String word)``` will be similar to ```numVowels(String word)``` in that you have to loop through the parameter word; however, ```noVowels()``` uses the accumulator pattern to constructs a new ```String``` from word without the vowels.

The method ```reverse(String word)``` will also use the accumulator pattern to construct a new ```String```.  The reverse method can use the ```word.substring(i, i+1)``` method beginning at the end of word.  The following demonstrates the beginning of the for loop.

```java
for (int i = word.length() - 1; i >= 0; i--)
```

The ```pigify()``` method returns a ```String``` that is the Pig Latin version of the tweet. 

The rules for Pig Latin when applied to words are as follows. 

1. For words that start with a vowel, just add way to the end: 
   * a. egg → eggway 
   * b. and → andway  

2. For words that start with a consonant or consonant cluster move the consonant cluster to the end of the word and add ay 
   * a. dog → ogday 
   * b. kids → idskay 
   * c. frog → ogfray 

3. Numbers and punctuation are not changed by Pig Latin.

We could pick words out of our tweet, but the algorithm is a bit too complex for this lab.  When we study Java arrays, we can combine arrays with the String method split to more easily construct this algorithm.  For now we will create a ```pigify()``` method that uses the rules to construct a suffix to our entire tweet based upon the first characters of our tweet.  The rules are rewritten as follows.  

1. For tweets that start with a vowel, just add way to the end of our tweet: 
   * a. Eggs are good → Eggs are goodway 
   * b. and that is a wrap → and that is a wrapway  

2. For tweets that start with a consonant or consonant cluster move the consonant or consonant cluster to the end of our tweet and add ay 
   * a. Dogs are good → ogs are goodDay 
   * b. Kids play outside → ids play outsidekay 
   * c. frog level VA → og level VAfray 

3. Numbers and punctuation are not changed by Pig Latin.


Use BlueJ to construct and manipulate some ```Twitter``` objects.  The following are example commands in the BlueJ Codepad after you have constructed ```twitter1```.

```java
> twitter1 = new Twitter(“Potato”);
> twitter1.numVowels()
3   (int)
> twitter1.noVowels()
"Ptt"   (String)
> twitter1.reverse()
"otatoP"   (String)
> Twitter w1 = new Twitter(“egg”);
> String s1 = w1.pigify();
> s1
“eggway”  (String)  
> Twitter w2 = new Twitter(“and”);
> String s2 = w2.pigify();
> s2
“andway”  (String)
> Twitter w3 = new Twitter(“frog”); 
> String s3 = w3.pigify();   // s3 is ogfray 
> s2
“ogfray”  (String)
> Twitter w4 = new Twitter(“dog”) 
> String s4 = w4.pigify();   // s4 is ogday
> s4
“ogday”  (String) 
```

You will add methods to Twitter in [Classes, Objects, ... -  Twitter Revisited Lab](/gustycooper.github.io/labs_lab05_03).

