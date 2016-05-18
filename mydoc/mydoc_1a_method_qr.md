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
    <li class="active"><a class="noCrossRef" href="#profile" data-toggle="tab">String</a></li>
    <li><a class="noCrossRef" href="#about" data-toggle="tab">Math</a></li>
    <li><a class="noCrossRef" href="#match" data-toggle="tab">Scanner</a></li>
    <li><a class="noCrossRef" href="#match" data-toggle="tab">Random</a></li>
</ul>
  <div class="tab-content"> 
<div role="tabpanel" class="tab-pane active" id="profile">
    <h2>String Methods QR</h2> 
<pre>
char	charAt(int index) – returns char at index
int	compareTo(String anotherString)
boolean contains(String s) – returns true of string contains s
boolean equals(String s) – returns true if string equals s
int	indexOf(String s [,fromIndex]) – returns index of s
boolean isEmpty() – returns true if string is “”
int length() – returns number of characters in string
String replace(String s, String t) – returns string where t replaces s
String substring(int begin) – returns substring from begin to length
String substring(int begin,int end)–returns substring from begin 2 end
char[] toCharArray() – returns char[] of string
String toLowerCase() – returns lowercase of string
String toUpperCase() – returns uppercase of string
</pre>
</div>

<div role="tabpanel" class="tab-pane" id="about">
    <h2>Math Methods QR</h2>
<pre>
double Math.random() - returns random double, 0 <= Math.random() < 1
double Math.pow(double a, double b) - returns ab
</pre>
</div>

<div role="tabpanel" class="tab-pane" id="match">
    <h2>Scanner Methods QR</h2>
<pre>
Scanner in = new Scanner(System.in);
int nextInt() – return next integer in input
double nextDouble() – return next double input
String nextLine() – return next line in input
String next() – return next word in input
</pre>
</div>

<div role="tabpanel" class="tab-pane" id="match">
    <h2>Random Methods QR</h2>
<pre>
int nextInt(int range) – returns random int from 0 to range-1
double nextDouble() - returns random double, 0 <= nextDouble() < 1
</pre>
</div>

