---
title: Searching Through Strings
keywords: searching
last_updated: June 22, 2016
summary: "Searching Through Strings"
sidebar: labs_sidebar
permalink: /labs_lab09_02_04/
toc: false
---

## Searching Through Strings

**Points**: Complete this entire section for 10 points.

You are to create search algorithm that returns whether a word is a Scrabble word.  There is a file with Scrabble words that you use to initialize a data structure.  Since the words in the file are alphabetized, you can read the words into an array and perform a binary search on the words.  Alternative, you can just perform a linear search through the array.  You can use the Java ```Arrays.binarySearch()``` method if you like.

You program reads the words in the file ```scrabbleWords.txt``` to establish the data structure to be searched.  Your program iteratively prompts a user for words and inform the user if their entered word is an allowable Scrabble word or not. An example run of your program may look as follows.

```java
Welcome to the Scrabble word checker.
Enter a word or q to quit: aardvark
aardvark is a Scrabble word
Enter a word or q to quit: humongous
humongous is not a Scrabble word
Enter a word or q to quit: zyzzyva
zyzzyva is a Scrabble word
Enter a word or q to quit: q
Done
```

The design and implementation of your program is up to you. 

