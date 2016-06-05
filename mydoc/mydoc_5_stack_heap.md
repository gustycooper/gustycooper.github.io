---
title: Stack and Heap
tags: [class, object]
keywords: stack, heap
last_updated: June 1, 2016
summary: "Stack and Heap"
sidebar: mydoc_sidebar
permalink: /mydoc_5_stack_heap/
---

## Stack and Heap

We began our class describing the relationship between Java’s primitive types and memory.  This section describes two memory spaces – heap and stack – that are fundamental to computer programming.

## Heap, Memory Allocation, and Garbage Collection

You can think of the heap as a large glob of memory from which we can allocate bytes in which to store information.  There are various memory management algorithms in your computer.  They all have similar characteristics.  The memory available to be used is in a large pool and it is marked as free.  When someone (a program) needs memory, they ask for a specific number of bytes.  The memory manager looks through its available free memory for a block of bytes that is as large as the size requested and returns the address of the block to the program.  When the program is finished with the block of memory, it is returned and the memory manager marks that block as free.   This discourse of getting and returning memory results in a fragmented collection of free and allocated blocks.  Sometimes the free blocks can be coalesced into a larger block.  The first level memory manager is the operating system since it controls all of the resources (memory, CPUs, I/O devices, etc.). In some programming languages (such as C, you explicitly allocate memory by calling functions such as malloc() and free(). These functions use operating system services that manage memory.  In Java we allocate memory for objects every time we use the new operator.

```java
Person p = new Person(“Gusty”, “Cooper”);
```
  
You should have noticed that Java does not have a primitive for returning memory.  Programming in languages that malloc() and free() memory is prone to memory leaks, where the programmer does not balance their malloc() and free() calls.  Java’s approach is to allow leaks, where a leak is a block of memory that is no longer referenced by your program.  Consider the following sequence of code that allocates two Persons, and the first person is no longer referenced.

```java
Person p = new Person(“Gusty”, “Cooper”);
p = new Person(“Coletta”, “Cooper”);
```

What happens to the memory allocated for the Gusty Cooper Person object?  Java has a garbage collector that runs in the background of your program.  When the Java garbage collector discovers unused memory on the heap, the garbage collector marks the memory as free so that it can be reused.

## Stack

XXX

## Heap

