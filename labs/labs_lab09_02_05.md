---
title: Updating Hash.java
keywords: searching
last_updated: June 22, 2016
summary: "Updating Hash.java"
sidebar: labs_sidebar
permalink: /labs_lab09_02_05/
toc: false
---

## Updating Hash.java

**Points**: Complete this entire section for 10 points.

Canvas Files->Labs->Searching->Hash.java uses a recursive data structure to implement a key-value hash table.  The key is a ```String```, which is hashed into the table.  When collisions occur, the recursive data structure is used to build a list of Strings that collide.  The method hashValue computes a hash value by summing the values of each char in the String.  This means that strings such as ```"Hello"``` and ```"Heoll"``` collide.  Update the code so that the ```hashValue``` method uses the Java String method ```hashCode``` when computing the hash value. Realize the method still has to modulo the value so that it returns a value between 0 and 12.

