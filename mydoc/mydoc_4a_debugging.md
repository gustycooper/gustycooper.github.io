---
title: Debugging
tags: [loop]
keywords: debug
last_updated: June 7, 2016
summary: "Debugging"
sidebar: mydoc_sidebar
permalink: /mydoc_4a_debugging/
---

## Debugging

When your program does not work like it is supposed to, your program contains bugs.  Bugs are not syntax errors. Bugs are when you program runs, but does not do what you thought you told it to do.  Debugging is trying to figure out what you did wrong when trying to write your code in the first place.  There are two primary ways of debugging.  One is to place print statements in your code to print values of variables at various points in the algorithm.  These values serve as clues, which you can examine to determine what has gone wrong.  The second way to debug is to use a debugger.  Most IDEs provide you with a debug.  BlueJ has a nice introductory debugger, which means it is not overly complex.  Debugging consists of three concepts.

1. **Breakpoint** – You set breakpoints on statements in your code.  When you program runs and hits a breakpoint, your program stops

2. **Single step** – Once you have stopped at a breakpoint, you can step one statement at a time.  There are two ways of stepping.
   * a. **Step over** – This means to execute the entire statement.  For simple statements – like assignment statements – this is intuitive.  For a method call, a step over executes the entire method.
   * b. **Step into** – This steps into a method so that you now must single step through the method.  NOTE: You do not want to step into a method like System.out.println().

3. **Inspect variables**  - Once your program is stopped, you can examine the content of your variables.  You can hit a breakpoint, examine variables, step, examine, step, and so forth.


## Debugging Software Development Process Pattern

Debugging is a primary step in the software development process.  You often loop between implementation and test/debug.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern
0. Software Development Process Pattern
</b>
<br>
<img title="SW Dev Process" src="{{ "/images/processFigure.png" | prepend: site.baseurl }}" />
</div>

