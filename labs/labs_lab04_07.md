---
title: Gerbil Game
keywords: gerbil
last_updated: June 5, 2016
summary: "Lab 4, Gerbil Game"
sidebar: labs_sidebar
permalink: /labs_lab04_07/
toc: false
---

## Create a Java Gerbil Game

**Points**: Complete this entire section for 10 points.

NOTE: The Gerbil Game lab is a rendition of a project created by Ron Zacharski.

This section defines a game with a pet gerbil that descends into crevices to acquire precious metal nuggets. The gerbil can only carry 10 ounces. The precious metals and their values (Rhodeium is the highest and Ruthenium is the lowest) are as follows.

1. Rhodium 
2. Platinum 
3. Gold 
4. Ruthenium 

You want to train your gerbil such that when sent into a crevice, the gerbil returns with the most valuable haul.  For example, if the crevice contains 5 ounces of Rhodium, 6 of Platinum, 4 of Gold, and 7 of Ruthenium, I want her to return with 5 ounces of Rhodium and 5 of Platinum. 

Create a Java ```Gerbil class``` that has one ```public static void found``` method with the following signature.

```java
public static void found(int rhodium, int platinum, int gold, int ruthenium) 
```

The formal parameters are the amounts of Rhodium, Platinum, Gold, and Ruthenium.  The method found prints to the console the best retrieval of metal for that trip into the crevice.  The following are example calls to the function found. 

```java
> found(5, 6, 4, 7);     // prints the following
5 Rhodium
5 Platinum 
0 Gold 
0 Ruthenium 
> found(10, 10, 10, 10); //  prints the following
10 Rhodium 
0 Platinum 
0 Gold 
0 Ruthenium 
> found(3, 0, 0, 1);     // prints the following
3 Rhodium 
0 Platinum 
0 Gold 
1 Ruthenium 
```

Work through several specific, concrete examples to discover the algorithm.  The algorithm I created is several nested ifs.

