---
title: Sequential, Blocks, Scope
tags: [sequential, conditional, loop]
keywords: control flow, sequential, blocks, scope
last_updated: May 31, 2016
summary: "Control Flow"
sidebar: mydoc_sidebar
permalink: /mydoc_4_seq_blocks_scope/
---

## Statements and Blocks of Statements
The example in the beginning of this section shows a block that contains just one assignment statement.  The example can be equivalently coded with just single assignment statements as follows.

```java
if (floor > 13)
  actualFloor = floor - 1;  // execute this if floor > 13
else
  actualFloor = floor;      // execute this if floor <= 13

Either way is equivalent in this case.  I tend to always use a block of statements even when there is only one statement.  This allows me to insert additional statements without having to back fit { and } in the code to create a block – you  already have them.  You must always be aware the multiple statements must be in a block.  The following example may look correct, but it is a syntactical programming error.


```java
if (floor > 13)
  actualFloor = floor - 1;  // execute this if floor > 13
  anotherVariable = 5;      // cannot put two statements without { }
else
  actualFloor = floor;      // execute this if floor <= 13
```

## Statements – assignment, if, loops, blocks
The preceding section explains statements and blocks of statements using an assignment statement as the example statement.  The same type of thinking applies to any statement, for examples, if-statements and while-statements.  Where ever Java allows a <statement>  you can place any statement.  The following is an example of a two-way if where the else <statement> is another two-way if.  You should notice that we do not need to place the second two-way if in a block because it is a <statement>.

```java
if (floor > 13)
  actualFloor = floor - 1;    // execute this if floor > 13
else
  if (floor > 7)
    actualFloor = floor – 2;  // execute this if 7 < floor <= 13
  else
    actualFloor = floor;      // execute this if floor <= 7
```

## Blocks and Scope (Eck 3.1)

In Java, you can declare a variable wherever you need one, but you must be aware of the scope of the variable.  The scope of a variable is the block in which it is enclosed.  Consider the following code that swaps the contents of x and y when x is greater than y.  The code introduces a temp variable that is only available within the if statement’s scope.

```java
if ( x > y ) {
	int temp;	// A temporary variable for use in this block.
	temp = x;	// Save a copy of the value of x in temp.
	x = y;	// Copy the value of y into x.
	y = temp;	// Copy the value of temp into y.
}
if (temp > 0) {…} // This is illegal because temp is not defined
```

