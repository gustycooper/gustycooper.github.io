---
title: Random Numbers
tags: [random]
keywords: random, numbers
last_updated: May 1, 2016
summary: "Random Numbers"
sidebar: mydoc_sidebar
permalink: /mydoc_A_random_numbers/
---

## Appendix F: Other Things We Use

## F.1 Generating Random Numbers

## F.1.1 Using Math.random

You can use Math.random to generate a random integer as follows.

{% raw %}
```java
int randomInteger = (int)(5*Math.random()); // between 0 and 4
```
{% endraw %}

## F.1.2 Using a java.util.Random
You can use java.util.Random to generate random integers and doubles as follows.

{% raw %}
```java
import java.util.Random;
Random generator = new Random(42); // seed get same stream for testing
int i = generator.nextInt(n); // 0 <= i < n
double x = generator.nextDouble(); // 0 <= x < 1
```
{% endraw %}

