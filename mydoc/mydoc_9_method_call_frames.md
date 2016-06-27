---
title: Method Call Frames
tags: [recursion]
keywords: method, call frames
last_updated: June 13, 2016
summary: "Method Call Frames"
sidebar: mydoc_sidebar
permalink: /mydoc_9_method_call_frames/
---

## Method Call Frames

In [Stack and Heap](/gustycooper.github.io/mydoc_5_stack_heap) we studied the stack growing as methods called methods.  Each method call created space on the stack to hold the parameters and local variables of the method.  When a method returns, the stack space with parameters and local variables are discarded because they are no longer needed.  This section discusses the concept of methods and stacks again.  This time we introduce the return address on the stack so we can see that a method knows where to return.  You must understand this in order to fully appreciate recursion.

The space on the stack that contains a method's parameters and variables is the **method call frame**.  A method call frame is also called an **activation record**.

This section presents a sequence of method call frame figures.  The figures correspond to the following code.

```java
public class EndorSmintsSimulation {
   private int Year;
   private int Population;
   private int acresOfLand;
   private int landValue;
   private int smintsInStorage;

   public EndorSmintsSimulation(... { ... }
   public String introMessage() { ... }
   public String simulateYear(... { ... }

   private int harvest(int acresPlanted) { ... }

   private static void littleEs( EndorSmintsSimulation e)
      { e.setYear(2015) }

   public static void main(String[] args) {
      EndorSmintsSimulation e = new EndorSmintsSimulation( ... );
      String es = e.introMessage();
      es = e.simulateYear(…);
      littleEs(e);
   }
} // end class
``` 

Add figures from Week12.pptx here.
