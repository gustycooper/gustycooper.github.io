---
title: Sorting
tags: [sorting]
keywords: sorting
last_updated: May 1, 2016
summary: "Sorting"
sidebar: mydoc_sidebar
permalink: /mydoc_9_sorting/
---

## Sorting

We will examine three sorting algorithms – bubble, insertion, and selection.

I have more INFO for this Module.

## Bubble Sort Introduction

Bubble sort repetitively compares adjacent pairs and swap if necessary.
* Step through the array, swapping adjacent pairs if they are not in order.  You compare element j and element j+1.  This means that on this iteration, you will step up to the next to last element of the array.  At the end of this step through the array, the largest element will be at the end.
* Step through the array, swapping adjacent pairs if they are not in order.  You compare element j and element j+1.  You know the last element is the largest so you can loop one less time that in the previous step through the array.  At the end of this step through the array, the last two elements of the array will be largest two elements of the array and they will be in correct order.
* Continue stepping through the array until the array elements are in order.

The above algorithm will be two loops, one nested within the other.  If the array size is 10, the outer loop will iterate 9 times, and the upper bound of the inner loop will decrease by one (first loop from 0 to 8, second loop from 0 to 7, etc.).  The following code demonstrates a bubble sort of an integer array.  

{% raw %}
```java
public static void bubbleSortIntArray(int[] a) {
    int N = a.length;
    for (int i = N-1; i >= 0; i--) {
        for (int j = 0; j <= i-1; j++ {
            if (a[j] > a[j+1]) {
                // swap a[j] and a[j+1]
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}
```
{% endraw %}

## Bubble Sort Optimization

What happens when call bubbleSortIntArray() with an array that is already sorted?  The algorithm will iterate through the arrays without ever performing a swap.  If our inner loop does not perform a swap, the array a is in order.  We can add a little optimization to our bubbleSortIntArray() by breaking out of the outer loop if the inner loop does not perform a sway.   The code for this is as follows.

{% raw %}
```java
public static void bubbleSortIntArray(int[] a) {
    int N = a.length;
    for (int i = N-1; i >= 0; i--) {
        boolean swapped = false;
        for (int j = 0; j <= i-1; j++ {
            if (a[j] > a[j+1]) {
                // swap a[j] and a[j+1]
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                swapped = true;
            }
        }
        if (swapped) {
            break;
        }
    }
}
```
{% endraw %}

This optimization is rather clever, but in general did this optimization really help?  Our algorithm will be faster on arrays that are already sorted or partially sorted, but on unsorted arrays our algorithm is still takes just as many steps.  I

## Introduction to Big O

Describe Big O in terms of Bubble Sort 

## Selection Sort

Selection sort finds the smallest element and puts it in the correct position.
* Step through the array, find the smallest element and put it in the first position of the array.  At the end of this iteration, you will have the smallest element in the first position of your array.  Notice you did not swap adjacent elements as you did in the bubble sort.  Of course you will have to perform compares to locate the smallest, but you will remember the position that has the smallest and at the end you will swap the element in that position with the first element. 
* Repeat the previous step until all of the elements are ordered from smallest to largest.

The above algorithm will be two loops, one nested within the other.  If the array size is 10, the outer loop will iterate 9 times.  On the first iteration of the inner loop will, it will begin at the first element because it may be the smallest.  Each subsequent iteration of the inner loop will begin incrementally into the array because the previous iteration placed the smallest in its correct position. To find the smallest means you to have to assume the first element is the smallest.  See our Lab on Arrays where we first studied finding the smallest in an array.  The code is given by the following.

{% raw %}
```java
public static void selectionSort(int[] a) {
    int N = a.length;
    for (int i = 0; i < N-1; i++) {
        int min = i;
        for (int j = i+1; j < N; j++) {
            if (a[j] < a[min]) { // found smaller
                min = j;
            }
        }
        // swap a[i] and a[min]
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
} 
```
{% endraw %}

## Insertion Sort

Insertion sort maintains a sorted sub-array and repetitively inserts new elements into it.
* Take the first element as a sorted sub-array.
* Insert the second element into the sorted sub-array (shift elements if needed).
* Insert the third element into the sorted sub-array.
* Repeat until all elements are inserted.

The code is given by the following.

{% raw %}
```java
public static void insertionSort(int[] a) {
    int N = a.length;
    for (int i = 1; i < N; i++) {
        int tmp = a[i];
        int j;
        for (j = i; j > 0; j--) {
            if (a[j - 1] < tmp) {
                break;
            }
            a[j] = a[j - 1]; // shift sorted to right
        }
        a[j] = tmp; // insert current ele
    }
}
public static void sort(Comparable[] a) {
    int N = a.length;
    for (int i = 1; i < N; i++) {
        for (int j = i; j > 0; j--) {
            if (less(a[j], a[j-1])) {
                // exchange a[j] and a[j-1]
                exch(a, j, j-1);
            } else {
                break;
            }
        }
    }
}
```
{% endraw %}

