---
title: Number Searching
keywords: searching
last_updated: June 22, 2016
summary: "Number Searching"
sidebar: labs_sidebar
permalink: /labs_lab09_02_01/
toc: false
---

## Searching Through Numbers

**Points**: Complete this entire section for 20 points.

You should create the code for 12.1 if you need practice working with two-dimensional arrays and using file I/O.   Working with two-dimensional arrays is information that you should know for the final.

For this lab, you write the following method.

```public static int[] twodArraySearch(int[][] ia2d, int ele)``` - searches for ```ele``` in the two-dimensional array ```ia2d```, and returns an integer array that (1) is ```null``` if ```ele``` is not in ```ia2d``` (2) contains two elements if ```ele``` is in ```ia2d``` where the first element is the row and the second element is the column .  The following is an example call.

```java
retIa = twodarraySearch(ia2d, 4);
```
 
1. If 4 is in ia2d, then retIa[0] is the row and retIa[1] is the column. 
2. If 4 is not in ia2d, then retIa is null.

You can use whatever means you want to create two-dimensional arrays to pass to your ```twodArraySearch``` method.  The following is one technique that reads information from a file. 

Another way to practice with nested loops to fill an array is to write code that reads in a 2D grid of numbers into a two-dimensional array. The grid contains 5 rows and 10 columns. The grid will be in a file called ```numbers.txt```, which you create.   The following is an example.

```java
18	100	98	57	89	79	55	85	29	24
34	87	82	83	16	33	11	90	58	50
95	4	70	63	30	52	42	40	15	44
8	53	43	97	59	54	56	75	76	81
1	23	86	69	36	66	68	17	14	28
```

You then ask the user which number they want to search for. Your program should search the two-dimensional array and report either the row and column that the number was found in, or that the number was not found, if it isn't in the grid.

* You should declare the array as a two-dimensional array of the needed size.
* Next, open up the ```numbers.txt``` file and read in the numbers into the array. 
* Also, since you created the ```numbers.txt``` file to match your program, you know how many numbers are in the file, so there's no need to use "eof" - you can assume all the numbers can be read in before hitting the end!
* Ask the user to enter a number to search for.
* Write code to search for this number in the array. The algorithm you use should be like the linear search algorithm, with the addition of searching in two dimensions.
* If you find the item, print the row and column you found it on, otherwise a "not found" message.

