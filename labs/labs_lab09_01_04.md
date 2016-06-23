---
title: Recursive Simple Maze
keywords: recursion, recursive
last_updated: June 22, 2016
summary: "Recursive Simple Maze"
sidebar: labs_sidebar
permalink: /labs_lab09_01_04/
toc: false
---

## SimpleMaze

**Points**: Complete this entire section for 20 points.

The ```SimpleMaze.java``` file on Canvas under Files->Labs->Recursion->SimpleMaze demonstrates the power of recursion in solving mazes.  Study the code and update the code to have a different maze.  This will require you to create a new maze in the variable

```java
static int [][] maze;
```

The following are some helpful hints concerning the code.

* The walls of the maze are the number 2 and paths of the maze on the number 1.
* The current code is created with final ints WIDTH and HEIGHT that define the size of the maze.  If you create a larger maze, you will have to change these variables.  
* You will also discover a method int[][] generateMaze() that is not implemented.  You could create this function such that it generates a random maze.  Then you could create loop that generated a maze and then solved it.  This would be a simpler version of the fancy graphical maze contained in the file ```Maze.java``` on Canvas under Files->Labs->Recursion->Maze.  Exploring this step is optional.

