---
title: Characters and Strings
tags: [algorithm, getting_started]
keywords: java, characters, strings
last_updated: May 11, 2016
summary: "<li>Understand characters as information in computers.</li> <li>Understand ASCII and Unicode</li> <li>Understand a sequence of characters can be a String</li>"
sidebar: mydoc_sidebar
toc: false
permalink: /mydoc_1_characters/
---

## Characters - People

Most languages consist of a character set.  I know English so my character set is aA, bB, cC, ..., zZ.  People memorize the character set and the learn how to

* group characters into words 
* group words into sentences 
* group sentences into paragraphs
* group paragraphs into papers, articles, books, etc.

We have other characters such as comma (,), period (.), exlamation point (!), etc.

We also our single digit numbers, which we can consider characters.

Our keyboards show us our normal character set.

## Characters - Computers

You already know that computers must encode information in bytes.  This means that every character will be a number.  We could select a simple technique for representing characters such as the following table.

Letter | Encoding
------ | -------
 A     |   1
 B     |   2
 ...   |   ...
 Z     |   26

Then we would have to select numbers for the lowercase.  Then we would have to select numbers for our special characters.  Then we would have to select numbers for other languages across the world. Then we would have to make sure that everyone in the entire world knew our encoding so they could read our websites.  Fortunately, the computer industry has already agreed upon this encoding, and it is **Unicode**.  The latest version of Unicode contains more than 120,000 characters covering 129 modern and historic scripts, as well as multiple symbol sets (from Wikipedia).  You can examine the entire Wikipedia article at [Unicode](https://en.wikipedia.org/wiki/Unicode).

Java encodes characters with 16-bit Unicode, which is also called UTF-16.  As Unicode evolved, it accomodated legacy encodings.  The computer industry originated in the United States, and we wrestled with character encodings throughout the early years.  IBM mainframes dominated the early computer market, and they used an character encoding called EBSDIC, however, in the mid-1960s everyone in the computer industry (including IBM) agreed to the ASCII standard, which encoded the entire English character set in a 7-bit quantity, which as we know can hold 2^7 values, which is this case is 128 characters.  If you examine the characters on your keyboard, you will discover that 128 is more than enough.  Today computers are worldwide, which is why we need the 120,000 characters of Unicode.  The entire definition of Unicode is rather complex, but the concept of mapping characters to numbers is easy.  The following table shows the Unicode numbers for English letters and numbers.

Letter | Encoding | Binary
------ | -------- | ----------
 A     |   65     | 0b1000001
 B     |   66     | 0b1000010
 ...   |   ...    | 
 Z     |   90     | 0b1011010
 a     |   97     | 0b1100001
 b     |   98     | 0b1100010
 ...   |   ...    | 
 z     |   122    | 0b1111010
 0     |   48     | 0b0110000
 1     |   49     | 0b0110001
 ...   |   ...    | 
 9     |   57     | 0b0111001

When we study Java's primitive types, we will learn that ```char``` encodes its values using UTF-16.  We will also learn that we can manipulat ```char``` values with arithmetic expressions.
