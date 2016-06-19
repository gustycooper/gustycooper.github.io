---
title: Algorithms
tags: [algorithm, loop, conditional, sequential]
keywords: java, algorithms, design
last_updated: May 1, 2016
summary: "<li>Understand the definition of an algorithm.</li> <li>Understand the building blocks of algorithms.</li> <li>Undestand we create algorithms with pseudo code.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_1_algorithms/
---

## Algorithm Introduction ([Eck 3.2](http://math.hws.edu/javanotes/c3/s2.html))


An **algorithm** is a sequence of steps that solves a problem.  For the purposes of our definition, an **algorithm** has to *terminate*.  Adding the termination clause makes perfect sences because if an algorithm does not terminate, it cannot solve a problem.  The following are a sequence of steps that solves a problem.  We typically create the problem specification first, and then create the algorithm; however, for this example, we create the algorithm first.  See if you can determine the problem.

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

## Algorithm Building Blocks

As everyone knows, the algorithm provided in steps 1 through 13 solves the problem: Make yourself a cup of tea.  This simple algorithm demonstrates all of the fundamental building blocks of algorithms.

* **Sequential** – perform the operation of a step and move to the next step.  Steps 1, 2, and 3 are performed sequentially. As we will soon discover, the most used sequential operation in programming is the assignment statement that assigns the value of some expression to a variable.
* **Conditional** – perform a test on some condition which determines which sequence of steps to execute.  Steps 4, 7 10, and 12 are conditional steps.  In programming a conditional statement is typically associated with an if-then-else statement.  Java has ```if-then-else``` and ```switch``` statements.
* **Loop** – peform a step or sequence of steps in a repetitive iteration.  The above algorithm has three loops.
  * Steps 3 and 4
  * Steps 9 and 10
  * Step 12

  Java has ```for```, ```while``` and ```do-while``` loops.

* **Method** - collect steps into a reusable container that your can reference.  Step 1 is an example of a method.  Pouring water into a cup could be a severals steps collected into a reusable container.  I use the Java term method, which is equivalent to function or subroutine.

## Problems Have Many Solutions

There are often many algorithms that solve a problem.  I am sure you can think of many ways to get yourself a cup of tea, including going to the nearest coffee shop and ordering a cup.

## Problems Without Soultions

Sometimes a problem cannot be solved.  There are two ways that a problem cannot be solved.

1. The problem is unsolvable. This is actually an important field in computer science.  An example unsolvable computer science problem is "What is the fastest algorithm for multiplication of two n-digit numbers?".  You will have to go further in your computer science study to understand these problems. 
2. The problem is solvable, but the problem specification does not provide enough information.  The rest of this section provides an example of this.

I like to to ride bicycles.  This is one of my most enjoyable hobbies.  Suppose that you are about to purchase a new bicycle, and I tell you the following.

* Bicycle One costs $100.00 and is blue.
* Bicycle Two costs $500.00 and is red.

If I ask you are to construct an algorithm in your brain that determines which of the bicycles you want to purchase, you do not have enough information to construct an algorithm in your brain.  You need additional parameters that can help answer questions such as am I riding on trails (a mountain bike), am I racing against others on road courses (a road bike), am I riding with my friend who is blind (a tandem)

I could update the specification to be the following.

> You have a good friend who is blind, but wants to experience the joys of bicycling.  Your friend has $1000.00 that can be used to purchase a bike.  Your friend's favorite color is orange.  Your friend wants to ride on crushed gravel trails and roads.  You are provided with the following bicycles to choose. 

> * A red mountain bike for $100.00
* A green road-style tandem for $2,000.00
* A blue Gold Rush Replica for $4,000.00
* A child's tricylce for $30.00
* An orange cross-tandem for $949.00
* A titanium road bike for $2,700.00


Examining this list, you would choose the orange cross-tandem because you can use it satisfies all of the criteria.  We can create a pseudo code algorithm to make this selection.  This algorithm is called pseudo code because it resembles code of some programming language, but it is not precise enough for a compiler to translate into machine code.  We can execute the algorithm in our brain.

```
for each bicycle store in the area 
  for each bicycle in the store
   if the bicycle is a tandem and 
     the tandem costs less than $1000 and
     the tandem can ride on roads and trails and
     the tandem is orange then
       purchase that tandem
```

An important part of programming is to first understand the problem to be solved.  The initial problem had an incomplete specification.  When you analyzed the specification, you could not solve it.  Throughout this course, I will provide you with specifications of problems to be solved.  All of the problems are solvable.  That does not mean my specifications are perfect.  You will probably discover errors in my specifications.  That is why you must thoroughly analyze my specifications before trying to solve the problem.


## Algorithm Example - Cost of My Coffee Shop

For this exercise, I am purchasing items in a coffee shop, and I will keep a running total of my cost.  The example shows two items, but the pseudo code works for any number of items.

```
item prices are Coffee 4.85 and Scone 3.25
cost = 0
for each item
   tax = item price * 0.08
   tip = item price * 0.10
   cost = cost + item price + tax + tip
print cost in my brain
make sure I have enough money in my pocket to pay
```

## Algorithm Example - 3N+1

The 3N+1 problem is a fun little problem that can be found in many places. ([Eck 3.2.2](http://math.hws.edu/javanotes/c3/s2.html), [Wikipedia](https://en.wikipedia.org/wiki/Collatz_conjecture)).  The problem generates a sequence of integers.  Given any positive integer, *N*, create the next integer by if *N* is even then divide *N* by 2 else multiply *N* by 3 and add 1.  Continue this until *N* is 1.  If the initial *N* is 3, the resulting sequence is 3, 10, 5, 16, 8, 4, 2, 1.  The 3N+1 pseudo code is the following.

```
n = 10
while n > 1
  print n
  if n is even
    n = n / 2
  else
    n = 3 * n + 1
```

## Algorithm Examples - Legos

The following lego example algorithms are renditions of those provided in the [Udacity Java course](https://www.udacity.com/course/intro-to-java-programming--cs046).

### Algorithm - Ordering Blue and Yellow Legos

For this algorithm, you begin with a sequence of blue and yellow legos that are as follows.  

![Legos Unordered](../images/legosUnordered.png "Legos Unordered")

The challenge is to create an algorithm that results in the legos ordered such that the blue legos are first followed by the yellow legos.  The following is the solution.

![Legos Ordered](../images/legosOrdered.png "Legos Ordered")

One algorithm that works for this particular case is the following.

       Move to first y b and swap them

The resulting steps of applying this algorithm are the following.

1.  b y b y b y
2.  b b y y b y
3.  b b y b y y
4.  b b b y y y

### Not An Algorithm - Swapping Blue and Yellow Legos

This example is one that is not an algorithm because it does not terminate.  Termination is also a criteria of Turing machines, which define a concept of computable.  This algorithm attempts to order a sequence of yellow and blue legos such that such that they are ordered with one color first followed by the other color.  At first glance, this appears to be an algorithm.

```
while the legos are not in order
   locate first pair of nonmatching legos
   swap them
```

This algorithm will work on some input.  For example, it will work on the following.

![Swapping Works](../images/legosWorks.png "Swapping Works on this input")

However, if you attempt the algorithm on the following sequence, it never terminates because you simply swap the first two bricks over and over.  

![Swapping Does Not Work](../images/legosNotWorks.png "Swapping does not work on this input")

### Algorithm (Pseudo-code: Legos with Rules)

This example forces you to construct an algorithm with a specific set of rules, which are sort of like what computers do when you have to use assemble language.  The rules that you have to use in your algorithm are the following.  As you continue in your study of computer science, you will encounter Turing machines, which have simplified rules like these that process a tape of information.  In our case the tape of information is a sequence of yellow and blue legos.

* Move your eyesight one space to the right
* Move your eyesight one space to the left
* Move your eyesight all the way to the right
* Move your eyesight all the way to the left

You can still use ifs and loops in your solution, but the sequential steps have to be one of the rules.  You are to use the rules to construct an algorithm that will find the first pair of legos that are ordered y b.  The initial input of legos is the follows.

![Legos with rules](../images/legosRules.png "Legos searched with rules")

The algorithm for finding the first pair ordered y b is given by the following.

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

### Algorithm (Pseudo-code: Lego Doorway)

If you own a house construction company, you probably have an algorithm for building a house.  You know how to study the plans, order the materials, and assemble them in a specific order.  This is particularly true when you have built the same house several times.  This example builds a doorframe with legos.  In this example, there are two kinds of legos: 1 is 8x2, the other is 2x2

![Legos Door](../images/legosDoor.png "Legos Door")

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
