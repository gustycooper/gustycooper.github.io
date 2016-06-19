---
title: Arrays and ArrayLists
tags: [collection]
keywords: arrays, arraylists
last_updated: May 1, 2016
summary: "<li>Understand arrays and ArrayLists are a sequential collections of data.</li> <li>Understand each element of an arrays and ArrayList is the same type.</li> <li>Understand elements of an arrays and ArrayList have indices from 0 to their sizes-1</li> <li>Understand how to declare arrays and ArrayList variables.</li> <li>Understand how to allocate arrays and ArrayList objects.</li> <li>Understand the relationship between arrays and ArrayList variables, objects, and memory.</li> <li>Understand similarities and differences between arrays and ArrayLists.</li>"
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

## Sizes of ```String```, arrays, ```ArrayList```

```String```s, arrays, and ```ArrayList```s are sequential collections of information.  A ```String``` contains a sequence of characters.  An array and an ```ArrayList``` contain a sequence of the same type.  All three have a specific number of elements; however, the mechanism for getting the number of elements is different for each.  You understand ```String```s.  After studying this module, you will understand arrays and ```ArrayList```s.

* ```String``` - number characters retrieved via the instance method ```length```.
  ```java
  String s = "This";
  int l = s.length();  // l is 4
  ```

* Arrays - number of elements retrieved via the field ```length``
  ```java
  int[] ia = {1, 2, 3, 4};
  iny l = ia.length;  // l is 4
  ```

* ```ArrayList``` - number of elements retrieved via the instance method ```size```.
  ```java
   ArrayList<Integer> ints = new ArrayList<Integer>();
   for (int i = 1; i < 5; i++)
      ints.add(i);
   int s = ints.size(); // s is 4
   ```
