---
title: Project 4
keywords: project
summary: "Project 4"
sidebar: projects_sidebar
permalink: /projects_project04_01/
toc: false
---

## 3.1 Endor Smĭnts – Description and Requirements

The Star Wars gang is flying in the Millennium Falcon toward the Hapsacean Galaxy, many light years away.  The hyperdrive engine, required for such a long journey, is malfunctioning.   Chewbacca is working on the hyperdrive engine when he accidently crosses some wires that eject you from the Millennium Falcon while at the same time engaging the hyperdrive engine.  Fortunately, you have a parachute inside of your clothing so you safely float onto the remote Calduum Island of Endor.  Unfortunately, the Millennium Falcon is in hyperspace on the way to Hapsacean, and will return to Endor in 10 years.  You have to survive on Calduum Island for 10 years.  Calduum Island has industrious Ewoks and fertile farmland.  If you are a wise leader of the Ewoks on Calduum Island, you can survive and joyously reunite with your good friends.

Calduum Island has exactly 100 Ewoks.  The Ewoks are industrious, but they lack leadership. They immediately look to you as their leader.   Calduum has fertile farmland and is the only climate on Endor that grows luscious gold smĭnts.  Smĭnts is a grain similar to quinoa, which the Ewoks love to eat.  The Ewoks are good farmers who own 1000 acres of fertile farmland and have 3000 bushels of luscious gold smĭnts in storage.  You will lead Calduum Island, the Ewoks, farmland, and smĭnts to hopefully survive 10 years.  If your leadership on Calduum Island is unwise, Ewoks will starve.   If Calduum Island population decrease to 52 Ewoks, they will all swim away leaving your alone on Calduum, where you will be eaten by a womp rat never to see your friends again.  If you make wise decisions when leading Calduum Island, Ewoks will survive for 10 years, at which time the Millennium Falcon will return from the Hapsacean Galaxy.  

The luscious gold smĭnts can either be eaten or planted to grow more.  The Calduum Island society requires smĭnts to plant, Ewok labor to sew and harvest smĭnts, farmland on which to plant smĭnts, and smĭnts for the Ewoks to eat.  Smĭnts is planted and harvested on an annual basis.  The following describe attributes of farming smĭnts and living on Calduum.

1. To plant 1 acre of land requires 2 bushels of smĭnts.
2. One Ewok can farm 10 acres of land.
3. Each Ewok requires 20 bushels of smĭnts per year to survive

The economy of Calduum uses a bushel of smĭnts as it currency.  Calduum farmland is bought and sold by the acre.  The price of farmland fluctuates annually.   The value of farmland for the initial year is 20 bushels of smĭnts per acre.

You begin with 100 Ewoks, 1000 acres of fertile farmland, and 3000 bushels of smĭnts.  You need to manage the amount of land you own, plant/harvest smĭnts on your land, and keep the Ewoks fed and alive.  Each year you will have to make the following decisions as you lead Calduum Island.

1. Do you want to buy or sell land, and if so how many acres?  Each year you can only do one operation – buy or sell – you cannot do both.  Buying land consumes your smĭnts.  Selling land adds to your smĭnts.  You do not have to buy or sell land.
2. How many acres of land do you want to plant?  Planting land consumes smĭnts and generates smĭnts, hopefully more than you planted.  
3. How many bushels of smĭnts do you want to feed the Ewoks?  The bushels of smĭnts for feeding will be a combination of smĭnts in storage, smĭnts used for planting, smĭnts gained from harvesting, smĭnts used for buying land, and smĭnts gained from selling land.

You must have enough smĭnts to conduct the operations resulting from your choices.  The algorithm shall detect operations that cannot be supported.  The sample console run in section 3.2 demonstrates an error message.

There are several acts of nature and economics that affect the outcomes.

1. Teeny-weeny-meteor shower – Teeny-weeny meteors occasionally crash on Calduum.  Each year there is an 11% chance of a teeny-weeny-meteor shower. When this happens teeny-weeny meteors kill 28% of the Ewoks and 9% of the Ewoks swim away to another island.
2. Weather and harvest – For the most part Calduum has good weather, but it varies enough each year to affect the bushels per acre harvested.  Weather is determined by generating random number between 1 and 9, inclusive. Each acre that was planted will yield this many bushels of smĭnts. For example, if you planted 50 acres and the weather random number is 3, you harvest 150 bushels of smĭnts.
3. Womp rat – Occasionally a womp rat will swim to Calduum.  Womp rats love luscious gold smĭnts just like Ewoks.  The Ewoks slay the womp rat with their spears, slings, and knives, but not before the womp rat has eaten smĭnts.   There is a 46% chance that a womp rat will swim to Calduum.  When a womp rat swims to Calduum, it will eat between 1/25 and 4/10 of your smĭnts.
4. Land valuation – The price of land for the first year is 20 bushels per acre, and it changes each year.  The price of land will be a random number between 17 and 26 bushels per acre (inclusive).
5. Immigrant Ewoks – Ewoks have a natural sense as to when Calduum smĭnts harvest is thriving, which causes Ewoks to swim to Calduum.  If during a year, all of the Ewoks on Calduum are fed such that none of them die, new Ewoks will swim to Calduum according to the following formula.
((20 * number of acres + amount of smĭnts in storage) / (100 * population) + 1) * (random number between 0 and 1)

NOTE: all computations should result in integers, not floats.

## 3.2 Endor Smĭnts – Sample Console Run

The following is a sample run of the Endor Smĭnts program.   I have inserted explanatory comments in red.  The explanatory comments are not part of the output of the program.  Your output must be in the same order and format as this in order to make my testing easier.

The following prompts the user to be Princess Leia, Han Solo, or Luke Skywalker.
Select your Star Wars Character.
Princess Leia, Han Solo, Luke Skywalker: Princess Leia

The following is the introductory message explaining the game.

```
=======================================================================
You are Princess Leia, and you recently parachuted onto Calduum Island of the forest moon Endor. The Ewoks of Calduum Island elected you to be their leader.  You have to keep Calduum Island alive for 10 years, at which time the Millennium Falcon will return and you will be reunited with your Star Wars friend.  You have to buy/sell land, direct smĭnts farming, and dispense smĭnts to the Ewoks. Teeny-weeny-meteor showers and womp rats affect your life on Calduum. The following will help you make decisions.
  * Each Ewok needs at least 20 bushels of smĭnts per year to survive.
  * Each Ewok can farm at most 10 acres of land.
  * It takes 2 bushels of smĭnts to farm an acre of land.
  * The market price for land fluctuates yearly.
Initial values are the following.
  * Population: 100
  * Acres owned: 1000
  * Land Value: 20
  * Smints in Storage: 3000
Rule wisely for 10 years and you will be reunited with your friends. Rule poorly, the Ewoks will die, you will perish, and you will never see your friend again.
```

The following message provides the status of Calduum Island for a particular year, and prompts the user for decisions.  

```
=======================================================================
Princess Leia, you are leading Calduum Island in the year 1000.  
The following events happened during the year 1000.
* Starved to death: 0 Ewoks
* Swam to Calduum: 0 Ewoks
* Swam away from Calduum: 0 Ewoks
* Teeny-weeny-meteors killed: 0 Ewoks.
* Womp rats destroyed: 0 bushels.
* Smĭnts harvested: 3000 bushels at 3 bushels per acre
At the end of the year 1000, Calduum is characterized by
* Population: 100 Ewoks
* Land Owned: 1000 acres
* Land value:  20 bushels per acre
* Smĭnts in storage: 3000 bushels
----------------------------------------------------------------------
How many acres do you wish to buy? 10
How many bushels of smĭnts do you wish to feed your Ewoks? 2000
How many acres do you wish to plant with smĭnts? 400
```

The following message provides the status of Calduum Island for a particular year, and prompts the user for decisions.  In this iteration, the user tries to perform operations that are not supported with the smĭnts in storage.

```
=======================================================================
Princess Leia, you are leading Calduum Island in the year 1001.  
The following events happened during the year 1001.
* Starved to death: 0 Ewoks
* Swam to Calduum: 5 Ewoks
* Swam away from Calduum: 0 Ewoks
* Teeny-weeny-meteors killed: 0 Ewoks.
* Womp rats destroyed: 700 bushels.
* Smĭnts harvested: 1600 bushels at 4 bushels per acre
At the end of the year 1000, Calduum is characterized by
* Population: 105 Ewoks
* Land Owned: 1010 acres
* Land value:  21 bushels per acre
* Smĭnts in storage: 1500 bushels
----------------------------------------------------------------------
How many acres do you wish to buy? 0
How many acres do you wish to sell? 0
How many bushels of smĭnts do you wish to feed your Ewoks? 1200
How many acres do you wish to plant with smĭnts? 1000
=======================================================================
The following is an error message resulting from answers that require more smĭnts than are in storage.  All error messages will begin with ERROR: .

ERROR: Princess Leia, Think again, you do not have enough smĭnts in storage.  
```

The following message provides the status of Calduum Island for a particular year, and prompts the user for decisions.  These prompts continue until 10 years have passed or the Ewok population dips below 53.

```
=======================================================================
Princess Leia, you are leading Calduum Island in the year 1001.  
The following events happened during the year 1001.
* Starved to death: 0 Ewoks
* Swam to Calduum: 5 Ewoks
* Swam away from Calduum: 0 Ewoks
* Teeny-weeny-meteors killed: 0 Ewoks.
* Womp rats destroyed: 700 bushels.
* Smĭnts harvested: 1600 bushels at 4 bushels per acre
At the end of the year 1000, Calduum is characterized by
* Population: 105 Ewoks
* Land Owned: 1010 acres
* Land value:  21 bushels per acre
* Smĭnts in storage: 1500 bushels
----------------------------------------------------------------------
How many acres do you wish to buy? 0
How many acres do you wish to sell? 0
How many bushels of smĭnts do you wish to feed your Ewoks? 1200
How many acres do you wish to plant with smĭnts? 150
=======================================================================
Princess Leia, you are leading Calduum Island in the year 1002.  
The following events happened during the year 1002.
* Starved to death: 40 Ewoks
* Swam to Calduum: 0 Ewoks
* Swam away from Calduum: 0 Ewoks
* Teeny-weeny-meteors killed: 0 Ewoks.
* Womp rats destroyed: 0 bushels.
* Smĭnts harvested: 750 bushels at 5 bushels per acre
At the end of the year 1000, Calduum is characterized by
* Population: 65 Ewoks
* Land Owned: 1010 acres
* Land value:  22 bushels per acre
* Smĭnts in storage: 900 bushels
...
```

## 3.3 Endor Smĭnts – Individual, Team, and Due Dates

For the Endor Smĭnts Project, you will complete the following.

1. Read the Endor Smĭnts Project description to make sure you understand the requirements.  This is a team component.
2. Create collection of test cases that you will use to test your Endor Smĭnts Project.  This is a team component.  Further guidance on developing the test cases in provided in section 3.4.
3. Create a design of your Endor Smĭnts Projects.  This is a team component and an individual component.  As a team you can discuss a general design, but each student has to create their own detailed design.  Further guidance on developing the design is provided in section 3.5.
4. Write a program that allows a user to interact via the console to play the game as describe in sections 3.1 and 3.2.  This is an individual component.  Further guidance on developing the program is given in section 3.5.  Your program must be properly documented.  If your program includes Java classes, you must include JavaDoc explaining your classes.  Your program must present information to the user as described in Section 3.2.  You must adhere to the wording and order.  Section 3.5 provides design guidance.  Section 3.6 provides programming guidance.  The programming guidance leads you through one way of developing the code.  If you follow this style, you can use my EndorGui.java to run your program in a GUI.  You do not have to adhere to this design or implementation.  You must adhere to the user interaction described in Section 3.2.

There are two due dates for the Endor Smĭnts project.

1. March 10 – The Endor Smĭnts test cases and design are due.  These will be submitted as printed documents at the start of class.  Each team should submit their test cases.  Each student should submit his or her design.
2. March 22 – The Endor Smĭnts program is due.  Each student will submit the .java files.  You must submit all files necessary to run your Endor Smĭnts program.

## 3.4 Endor Smĭnts – Test Case Guidance

You can use the Endor Smĭnts requirements in section 3.1 and the sample execution in section 3.2 to create test cases before creating code.  Many software organizations have a testing group that is solely responsible for testing.  The programmers and the testers both use the requirements to develop their products.  Your team should create test cases that will sufficiently test your Endor Smĭnts code.  Your thinking should include error cases and good cases.  The following are a few example test cases.

```
Case 1: Feeding Ewoks and buying farmland consumes more smĭnts than available
Buy: 60
Feed: 2000		2000 + 60*20 yields 3200 bushels, error – cannot do
Plant: 0

Case 2: Lose on first turn
Buy: 1
Feed: 1000		1000 will feed 50 Ewoks, so population < 53, game over
Plant: 100

Case 3: Use all smĭnts on turn one, and then sell farmland on turn two to feed Ewoks
Step 1: Buy: 0, Sell: 0
Feed: 3000		Overfeed Ewoks to make smĭnts in storage equal 0
Plant: 0		We may attract some immigrant Ewoks

Step 2: Buy: 0
Sell: 500		Selling 500 will yield at least 500*17 or 8500 bushels to feed
Feed: 2000		Ewoks will not die unless teeny-weeny-meteor shower occurs
Plant: 0
```

## 3.5 Endor Smĭnts  - Design Guidance

The Endor Smĭnts Calduum Island game is a simulation.  Input, the simulation attributes, the simulation algorithm that changes the simulation attributes, and output represent a simulation.  This view of a simulation is captured in the following diagram.

A simulation will execute the preceding diagram in a loop.  On each loop iteration the attributes describe a specific state of the simulation.

For the Endor Smĭnts Calduum Island simulation, the attributes, inputs, and outputs as follows.

### 3.5.1 Attributes

The attributes describe the current state of your simulation.  They are persistent.  The must be stored in a variables that persist across each execution of the algorithm.

* The leader (e.g. Princess Leia)
* The population of Ewoks
* The number of acres of farmland
* The number of bushels of smĭnts in storage.  

## 3.5.2 Inputs

* The number of acres of land to buy or sell
* The number of acres of land to plant
* The number of bushels of Smĭnts to feed to the Ewoks.

### 3.5.3 Outputs

* The number of Ewoks starved to death.
* The number of Ewoks swam to Calduum. 
* The number of Ewoks swam away from Calduum, 
* The number of Ewoks killed by teeny-weeny-meteors, 
* The number of bushels of smĭnts womp rats destroyed
* The number of bushels harvested.  

## 3.6 Endor Smĭnts – Programming Guidance

This section describes one way to write the program.  There are many ways to write this program.  You are free to write the program that adheres to your design.  This program structure consists of two components – (1) a class that can be used to construct a Calduum Island simulation object and (2) a main program class that constructs a Calduum Island simulation object and interacts with the user to display/collect information.  The Calduum Island simulation class has a method that simulates one year on Calduum Island. This section names the Calduum Island simulation class EndorSmints.  An alternative name would be something like CalduumSimulation class. 

### 3.6.1 Instance Variables

All of the attributes described in section 3.5 are instance variables.  

### 3.6.2 Constructors

```java
public EndorSmints(int year, int population, int acresOfLand,   
                   int landValue, int smintsInStorage, String leader) – Allows the user to construct an EndorSmints object with selected values.  Note the leader parameter will be “Princess Leia”, “Han Solo”, or “Luke Skywalker”.

public EndorSmits() – calls the previous constructor with the initial values defined in section 3.1.
```

### 3.6.3 Methods

```java
public String introMessage() – computes the introductory message, which is shown in section 3.2

public String simulateYear(int acresToBuy, int acresToSell, 
                           int acresToPlant, int smintsToFeed) ``` – Simulates one year on Calduum Island using an algorithm that satisfies the requirements specified in section 3.1.  This method returns a String that provides the status of Calduum Island at the end of the simulated year.  An example of this String is shown in section 3.2.

Depending upon the design of your program, you may need to create getter/setter methods such as the following.

```java
public int getPopulation()
public int getAcres()
```

### 3.6.4 Program Benefits

This style of program separates the user interaction and the simulation.  You can use the simulation with console-based I/O (as shown in this specification) or with GUI-based I/O.

### 3.6.4 Stepwise Approach to Creating Code

When creating a complex class such as EndorSmits, it is beneficial to take a stepwise approach.  This means you create a little bit of the code, test it, add some code, test it, and continue until you have completed the entire program.   The following is an example of stepwise development.

* Step 1a: Create the class EndorSmits, the constructors, and a few getter/setter methods.  You will have the following instance variables.

```java
    private int year;
    private int population;
    private int acresOfLand;
    private int landValue;  // in bushels per acre
    private int smitsInStorage;
```

* Step 1b: Write a separate class for your main program that will create an EndorSmits object and interact with the user.  Use this main program test your skeleton EndorSmits class.

* Step 2a: Add the method introMessage() to your EndorSmits class.  The returned String should use your instance variables to create the String.

* Step 2b: Update your main program class to test your introMessage() method. 

* Step 3a: Add a capability described in the section 3.1 to your EndorSmits class.
* Step 3b: Update your main program class to test the capability you just added.  This will involve playing a game to see if what you implemented is correct.  You will have to think hard to determine if you have implemented the capability correctly.  You will have to play a year, examine the results, maybe compute the correct answer by hand, and compare to your program’s results. 

You will iterate on Steps 3a and 3b until you have completed implementing the method simulateYear().  Step 3a adds capabilities to simulateYear() and step 3b tests what you have added.  You should study section 3.1 to determine the order you want to add capabilities.  For example, on your first iteration of step 3, you may implement the teeny-weeny-meteor shower attribute.  After adding the teeny-weeny-meteor shower, you may add the harvest attribute.

* Step 4: After you have implemented console-based I/O program, you may want to implement a GUI-base I/O program.  If you have simulation class that is not dependent upon a particular I/O, replacing the console-base I/O program with a GUI-based I/O program is not too difficult.  

## Endor Smĭnts – Simulation Enhancements

The following are ways that the Smĭnts simulation could be enhanced.  These are not requirements; however, if you implement an enhancement, I will award you extra points.  Do not attempt enhancements until you have completed the basic Endor Smĭnts program.

1. Update the teeny-weeny-meteor shower event such that a random amount between 25-50% of the Ewoks die and a random number between 0-10% leave.
2. Update the amount of land an Ewok can farm.  Currently each Ewok can plant 10 acres each.  If you have a population of 80, you can plant 800 acres of maize. Update the event such that in a year immediately after a teeny-weeny-meteor shower, Ewoks can only plant 7 acres each.
3. Update the termination condition so that if the ratio of Ewoks to acres of farmland drops below 1/20, all of the Ewoks swim away and the game terminates.
4. Before the game commences ask the user if he wants to play at easy, standard, or challenge level. For example, perhaps the easy level has no womp rats, or teeny-weeny-meteor showers, or Ewoks eat less.  The challenging level might mean Ewoks eat more smĭnts and the probability of a teeny-weeny-meteor shower is greater.
5. Add a feature of your own.

