---
title: Useful Methods Quick Reference
tags: [getting_started]
keywords: methods
last_updated: May 17 2016
summary: "<li>A quick reference quide to some useful methods.</li>"
sidebar: mydoc_sidebar
toc: false
permalink: /mydoc_1a_method_qr/
---

## Useful Methods Quick Reference

<ul id="profileTabs" class="nav nav-tabs">
    <li class="active"><a class="noCrossRef" href="#string" data-toggle="tab">String</a></li>
    <li><a class="noCrossRef" href="#math" data-toggle="tab">Math</a></li>
    <li><a class="noCrossRef" href="#scanner" data-toggle="tab">Scanner</a></li>
    <li><a class="noCrossRef" href="#random" data-toggle="tab">Random</a></li>
</ul>
  <div class="tab-content"> 
<div role="tabpanel" class="tab-pane active" id="string">
    <h2>String Methods Quick Reference</h2> 
<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html">Java String Page</a>
<br>
<br>
<li> <code>char	charAt(int index)</code> - returns char at index </li>
<li> <code> int	compareTo(String anotherString)</code> </li>
<li> <code> boolean contains(String s)</code> - returns true of string contains s </li>
<li> <code> boolean equals(String s)</code> - returns true if string equals s </li>
<li> <code> int	indexOf(String s [,fromIndex])</code> - returns index of s </li>
<li> <code> boolean isEmpty()</code> - returns true if string is “” </li>
<li> <code> int length()</code> - returns number of characters in string </li>
<li> <code> String replace(String s, String t)</code> - returns string where t replaces s </li>
<li> <code> String substring(int begin)</code> - returns substring from begin to length </li>
<li> <code> String substring(int begin,int end)</code> -returns substring from begin 2 end </li>
<li> <code> char[] toCharArray()</code> - returns char[] of string </li>
<li> <code> String toLowerCase()</code> - returns lowercase of string </li>
<li> <code> String toUpperCase()</code> - returns uppercase of string </li>
</div>

<div role="tabpanel" class="tab-pane" id="math">
    <h2>Math Methods Quick Reference</h2>

<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Math.html">Java Math Page</a>
<br>
<br>
<li> <code> double Math.random()</code> - returns random double, 0 <= Math.random() < 1 </li>
<li> <code> double Math.pow(double a, double b)</code> - returns a<sup>b</sup> </li>
<li> <code> type Math.abs(type a)</code> - returns absolute value, type can be double, int, float, long </li>
<li> <code> long Math.round(double a)</code> - returns rounded a</li>
<li> <code> double Math.cos(double a)</code> - returns cosine a</li>
<li> <code> double Math.sin(double a)</code> - returns sine a</li>
<li> <code> static double Math.PI</code> - pi</li>
</div>

<div role="tabpanel" class="tab-pane" id="scanner">
    <h2>Scanner Methods Quick Reference</h2>

<a href="https://docs.oracle.com/javase/8/docs/api/java/util/Scanner.html">Java Scanner Page</a>
<br>
<br>
<li> <code> Scanner in = new Scanner(System.in); </code> </li>
<li> <code> int nextInt()</code> - return next integer in input </li>
<li> <code> double nextDouble()</code> - return next double input </li>
<li> <code> String nextLine()</code> - return next line in input </li>
<li> <code> String next()</code> - return next word in input </li>
<li> <code> boolean hasNextDouble()</code> - return true if next token in input stream is a double</li>
<li> <code> boolean hasNextInt()</code> - return true if next token in input stream is an int</li>
</div>

<div role="tabpanel" class="tab-pane" id="random">
    <h2>Random Methods Quick Reference</h2>

<a href="https://docs.oracle.com/javase/8/docs/api/java/util/Random.html">Java Random Page</a>
<br>
<br>
<li> <code> Random()</code> - construct a Random object </li>
<li> <code> Random(int seed)</code> - construct a Random object with seed.  Using the same seed will product the same sequence of random numbers.</li>
<li> <code> int nextInt(int range)</code> - returns random int from 0 to range-1 </li>
<li> <code> double nextDouble()</code> - returns random double, 0 <= nextDouble() < 1 </li>
</div>

