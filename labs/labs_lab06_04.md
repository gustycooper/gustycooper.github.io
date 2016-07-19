---
title: My Trip
keywords: looping pattern, array, arraylist
last_updated: June 6, 2016
summary: "<li>Practice using a class that has instance variables, but does not have methods.  For some problems, classes without methods are the appropriate data structure.</li> <li>Practice using the printf method.</li>"
sidebar: labs_sidebar
permalink: /labs_lab06_04/
toc: false
---

## Create a Java Program to Plot My Trip

**Points**: Complete this entire section for 10 points.

This lab has been created from a lab created by Ron Zacharski.  Ron rides a motor bike.  I ride bicycles without motors.

This summer I took a motorcycle trip through various cities.  Each city has a gas station.  I want to complete my trip with the fewest stops at the gas stations.  The route is described as follows.

```java
My house to Mesilla		 5 miles
Mesilla to Leasburg		25 miles
Leasburg to Hatch		37 miles
Hatch to Truth   		33 miles
Truth to Winston		40 miles 
Winston to Datil		120 miles
Datil to Grants			70 miles
Grants to Nageezi		30 miles
Nageezi to Blanco		40 miles
Blanco to Dzilth		8 miles
Dzilth to Bloomfield		40 miles 
Bloomfield to Farmington	20 miles
Farmington to Shiprock		40 miles
Shiprock to Red Valley		70 miles
Red Valley to Chinle		50 miles
Chinle to Window Rock		82 miles
Window Rock to Gallup		30 miles 
Gallup to Black Rock		45 miles
Black Rock to El Morro		60 miles
```

To interpret the above, it means it is 5 miles from my house to Mesilla, 25 miles from Mesilla to Leasburg, etc. 

Sadly, my motorcycle only holds 2 gallons and I get 75 miles to the gallon. I would like you to write a program that processes this route and prints the cities where I should stop and get gas and the distance between those stops. The answer for the above route is the following.  
 
```java
Winston     140 
Datil       120 
Dzilth      148 
Shiprock    100 
Chinle      120 
Gallup      112 
```

In writing this program, you should design it such that the information is stored in an array such that you can loop through the array to compute the answer.  For example, one design consists of an array of objects where each object consists of two items.

* ```String cityName;```
* ```int distanceToNextCity;```
 
This can be a class with two public instance variables as follows.

```java
public class City {
   public String cityName;
   public int distanceToNextCity;
}
```

Using the class City you can declare an array as follows.

```java
City[] trip = new City[19];
trip[0] = new City(“my house”, 5);
trip[1] = new City(“Mesilla”, 25);
... complete filling in the trip[] array
```

Once you have your trip array, you can process it with a for-each loop.

```java
for (City c : trip) { ... }
```

You should first construct a loop that displays your information to make sure you typed everything in correctly.  You should use a System.out.printf() in this loop to get some nicely formatted output.  The following is what I generated in my first loop.  My printf() statements are as follows.

```java
System.out.printf("%-12s %7s %7s", "City", "ToNext", "Total");
System.out.printf("%-12s %7d %7d", c.cityName, c.distanceToNextCity, 
                  distance);
```

Intial table of information.

```java
City          ToNext   Total
my house           5       0
Mesilla           25       5
Leasburg          37      30
Hatch             33      67
Truth             40     100
Winston          120     140
Datil             70     260
Grants            30     330
Nageezi           40     360
Blanco             8     400
Dzilth            40     408
Bloomfield        20     448
Farmington        40     468
Shiprock          70     508
Red Valley        50     578
Chinle            82     628
Window Rock       30     710
Gallup            45     740
Black Rock        60     785
El Morro           0     845
```

I also used a printf() in my second loop to get the following.

Where to get gas.

```java
Winston          140
Datil            120
Dzilth           148
Shiprock         100
Chinle           120
Gallup           112
```

