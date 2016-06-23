---
title: wordCount with Map
keywords: searching
last_updated: June 22, 2016
summary: "wordCount with Map"
sidebar: labs_sidebar
permalink: /labs_lab09_02_06/
toc: false
---

## wordCount() with Map

**Points**: Complete this entire section for 20 points.

This lab updates the ```Book``` class from the Book Project to include a second method that counts words.  The method ```int wordCount(String word)``` uses a Java Map.  The updated constructor uses some nice code that removes punctuation from your ```bookString`.   The purpose of this lab is to introduce you to alternative ways of solving the same problem.  You should study the code.  

You update your Book class so that it contains three private instance variables.  Note that bookString already is part of your Book class.

```java
private String bookString;
private String[] words;
private Map<String,Integer> counts;
```

You update your ```Book``` constructor such that it contains the following code.

```java
public Book(String fileName) {
  readBook(fileName);
  words = bookString.replaceAll("\\p{Punct}+", "").toLowerCase().split("\\s");
  counts = new HashMap<String,Integer>();
  for (String w : words)
     counts.put(w, counts.getOrDefault(w,0) + 1);
}
```

You add the following ```wordCount``` method to your class.

```java
public int wordCount(String word) {
     return counts.getOrDefault(word.toLowerCase(),0);
}
```

You should update your tester to call ```wordCount``` and ```countWords```.  You get different results.  For example, wordCount ignores case so The and the are counted as the same word.  Another example is the go-to is converted to the word goto.

