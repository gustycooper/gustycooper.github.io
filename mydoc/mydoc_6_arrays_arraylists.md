---
title: Arrays and ArrayLists
tags: [collection]
keywords: arrays, arraylists
last_updated: May 1, 2016
summary: "Arrays and ArrayLists"
sidebar: mydoc_sidebar
permalink: /mydoc_6_arrays_arraylists/
---

## Arrays, ArrayLists, and the Wirth Pattern

We are solving problems with programs.  The Wirth pattern from [Primitive Types](/gustycooper.github.io/mydoc_1_primitive_types) defines a prgram to be algorithms and data structures.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern
0. Wirth Pattern
</b>
<br>
<pre>
Algorithms + Data Structures = Programs
</pre>
</div>

Arrays and ArrayLists are part of the Data Structures component.

## Arrays (Eck 7.1) and ArrayLists (Eck 7.3)

Arrays and ```ArrayList```s are ordered, sequential collections of information, where each element must be the same type.  Ordered and sequential in that each element has a position – zero-ith element, 1st element, 2nd element, and so on.  For example, an array or ```ArrayList``` must contain all ```int```, ```double```, ```String```, ```Person```, etc. 

The following figure demonstrates the sequentialness of arrays and ```ArrayList```s.  Each element has an index with the first index 0 and the last index to N-1, where the total number of elements in the collection is N.

![Array/ArrayList](../images/array-picture.png "Array/ArrayList") 


Arrays and ```ArrayList```s are reference types that reference objects.  ```ArrayList```s are more flexible than arrays because the total number of elements can grow and shrink.  

