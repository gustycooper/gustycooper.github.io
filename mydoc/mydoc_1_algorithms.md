---
title: Algorithms
tags: [getting_started]
keywords: java, algorithms, design
last_updated: May 1, 2016
summary: "This describes algorithms"
sidebar: mydoc_sidebar
permalink: /mydoc_1_algorithms/
---

## Algorithm Introduction (Eck 3.2)

An **algorithm** is a sequence of steps that solves a problem.  For the purposes of our definition, an **algorithm** has to terminate.  Adding the termination clause makes perfect sences because if an algorithm does not terminate, it cannot solve a problem.  The following are a sequence of steps that solves a problem.  We typically create the problem specification first, and then create the algorithm; however, for this example, we create the algorithm first.  See if you can determine the problem.

1. Pour water into a cup that is safe for microwave use.
2. Place the cup of water in a microwave.
3. Microwave the water on high for 53 seconds.
4. If the water is not boiling repeat step 3.
5. Remove the cup of water from the microwave.
6. Get a tea bag from the cupboard.
7. If the teabag is in an external wrapper, remove the teabag from the wrapper.
8. Place the teabag in the cup of water.
9. Wait 31 seconds.
10. If the cup of tea is not as strong as you like, repeat step 9.
11. Remove the teabag from the cup of tea.
12. If the cup of tea is too hot repeat step 12.
13. Sit back, relax, and enjoy your cup of tea.

As everyone knows, the algorithm provided in steps 1 through 13 solves the problem: Make yourself a cup of tea.  This simple algorithm demonstrates all of the fundamental building blocks of algorithms.

* **Sequential** – perform the operation of a step and move to the next step.  Steps 1, 2, and 3 are performed sequentially. As we will soon discover, the most used sequential operation in programming is the assignment statement that assigns the value of some expression to a variable.
* **Conditional** – perform a test on some condition which determines which sequence of steps to execute.  Steps 4, 7 10, and 12 are conditional steps.  In programming a conditional statement is typically associated with an if-then-else statement.  Java has ```if-then-else``` and ```switch``` statements.
* **Loop** – peform a step or sequence of steps in a repetitive iteration.  The above algorithm has three loops.
  * Steps 3 and 4
  * Steps 9 and 10
  * Step 12

  Java has ```for```, ```while``` and ```do-while``` loops.

There are several attributes of problems and their solution algorithms.  There are usually many algorithms that solve a problem.  I am sure you can think of many ways to get yourself a cup of tea, including going to the nearest coffee shop and ordering a cup.

Sometimes the problem specification does not have enough information to solve the problem.

Suppose that you are about to purchase a car, and I tell you the following.
* One car costs $20,000.00 and gets 20mpg.
* Another car costs $30,000.00 and gets 30mpg.

If I ask you are to construct an algorithm in your brain that determines which of the cars you want to purchase, do you have enough information to construct an algorithm in your brain?  In this case you are trying to make a decision and your probably need some other parameters such as how much money you make each year, how far you plan to drive the car, and what percentage of you income you can afford to spend on operating your car.  For example, if you plan to drive your car 25,000 miles per year, gas will cost $3.50 per gallon, and you want to spend less that $3000 per year in gas; you could create some algorithm to help you decide which car to purchase.  You could compute the cost per year of each car and make a decision based on the lesser cost.  The algorithm may look like the following.

{% raw %}
```
For each car compute
   gas cost = miles driven / mpg * price per gal
total cost = purchase price + gas cost
if total cost car 1 < total cost car 2
   buy car 1
else
   buy car 2
```
{% endraw %}

The message from this discussion is that you need to specify enough information to create an algorithm.

The preceding algorithm is called pseudo code because it resembles code of some programming language, but it is not precise enough for a compiler to translate into machine code.  We can execute the algorithm in our brain.

The following subsections describe various algorithms.  The lego-based algorithms are renditions of those from a Udacity course.

### Algorithm (Pseudo-code: ordering legos)

For this algorithm, I give you a sequence of legos that are as follows.  

    b y b y b y

The challenge is to create an algorithm that results in the legos ordered such that the blue legos first followed by the yellow legos.  The following is the solution.

    b b b y y y

One algorithm that works for this particular case is the following.

       Move to first y b and swap them

The resulting steps of applying this algorithm are the following.

1.  b y b y b y
2.  b b y y b y
3.  b b y b y y
4.  b b b y y y

### Algorithm (Pseudo-code: cost of shopping)

For this exercise, you are purchasing two items in a coffee shop.  You will keep a running total of the cost of your items.  The pseudo-code to compute this total is as follows.

{% raw %}
```
item prices are Coffee 4.85 and Scone 3.25
cost = 0
for each item
   tax = item price * 0.08
   tip = item price * 0.10
   cost = cost + item price + tax + tip
print cost in your brain
```
{% endraw %}

### Algorithm (Pseudo-code: 3N+1) (Eck 3.2.2)

David Eck describes the 3N+1 algorithm in our textbook.  He develops the algorithm, including the code.  We will simply examine the pseudo code as follows.

{% raw %}
```
n = 10
while n > 1
  print n
  if n is even
    n = n / 2
  else
    n = 3 * n + 1
```
{% endraw %}

### Algorithm (Pseudo-code: Legos with Rules)

This example forces you to construct an algorithm with a specific set of rules, which are sort of like what computers do when you have to use assemble language.  The rules that you have to use in your algorithm are the following.  As you continue in your study of computer science, you will encounter Turing machines, which have simplified rules like these that process a tape of information.  In our case the tape of information is a sequence of yellow and blue legos.

* Move your eyesight one space to the right
* Move your eyesight one space to the left
* Move your eyesight all the way to the right
* Move your eyesight all the way to the left

You can still use ifs and loops in your solution, but the sequential steps have to be one of the rules.  You are to use the rules to construct an algorithm that will find the first pair of legos that are ordered y b.  The initial input of legos is the follows.

b b b y y b b

The algorithm for finding the first pair ordered y b is given by the following.

{% raw %}
```
move your eyes all the way to the left
while the pair y b is not found do the following
  if the piece you are looking at is blue
    move your eyesight one space right
  else if the piece to the right is blue
    stop you found it
  else if the piece to the right is yellow
    move your eyesight one space right
```
{% endraw %}

### Not An Algorithm (Pseudo-code: Lego swapping)

This example is one that is not an algorithm because it does not terminate.  Termination is also a criteria of Turing machines, which define a concept of computable.  This algorithm attempts to order a sequence of yellow and blue legos such that such that they are ordered with one color first followed by the other color

{% raw %}
```
while the legos are not in order
   locate first pair of nonmatching legos
   swap them
```
{% endraw %}

This algorithm will work on some input.  For example, it will work on the following.

y y b y b b

However, if you attempt the algorithm on the sequence y b y b, it never terminates.  The first two steps (which are repeated forever) are given as follows.

1.  b y y b
2.  y b y b

### Algorithm (Pseudo-code: Lego Doorway)

If you own a house construction company, you probably have an algorithm for building a house.  You know how to study the plans, order the materials, and assemble them in a specific order.  This is particularly true when you have built the same house several times.  This example builds a doorframe with legos.  In this example, there are two kinds of legos: 1 is 8x2, the other is 2x2

{% raw %}
```
place an 8x2 lego horizontally
stick a 2x2 lego on top of the left end of the 8x2 lego
repeat 3 times
  stick a 2x2 lego on top of the previous lego
stick a 2x2 lego on top of the right end of the 8x2 lego
repeat 3 times
  stick a 2x2 lego on top of the previous lego
place on 8x2 lego on top
```
{% endraw %}
