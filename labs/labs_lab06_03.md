---
title: Person Type - Revisited Again
keywords: looping pattern, array, arraylist
last_updated: June 6, 2016
summary: "Lab 5, Person Type - Revisited Again"
sidebar: labs_sidebar
permalink: /labs_lab06_03/
toc: false
---

## Java Person Class – Revisited

**Points**: Complete this entire section for 20 points.

You created a Java Person class in Lab 2-3 and updated it in Lab 5.1.  This lab will update your Java Person class again.  We will refactor Person, meaning we will reorganize the code where the implementation changes but the observable behavior does not.  The biggest change is that you are going to keep the friends in an ArrayList of Person (i.e., ArrayList<Person>).  Up until now, we have implemented friends as a private String.  When we call the method addFriend(String friend), we concatenated the String friend onto the String friends.  For this implementation we will implement friends as an ArrayList of Person.  We will have the following API on your Person class.  You will notice, I have changed the API some so this is refactoring with a slight change to the API.

**Constructor**

Person(String name) - Constructs a Person.  Notice we have simplified the API to include a single name.

**Methods**

```String getName()``` - Returns the name of the person

```void addFriend(Person friend)``` - Add the Person friend to the ArrayList

```void unFriend(Person friend)``` - Removes the Person friend from the ArrayList.  If the Person friend is not a friend, this method does not do anything.

```String getFriends()``` - Returns a String that is all of the Person’s friends.  The friends should be separated by commas.

```String getFavFriend()``` - Returns a String that is the name of the first friend in ArrayList, which we will consider the favorite.  If the ArrayList is empty, return the String “Name does not have any friends.” where name is the name of the person.

```void myNewFavFriend(Person friend)``` - Makes the Person friend the favorite friend, by moving them to the first element in the ArrayList, bumping other friends down the ArrayList.  What should you do if the argument Person friend is not already a friend?  Let’s add them.  This means is Person friend is already a friend, they get moved to the front.  If the Person is not a friend, they are added to the front.

```boolean hasFriend(Person friend)``` - Returns true if Person friend is in the ArrayList

This is not too complicated of a program, but you have to think about it.  The first step is to visualize what a Person consists of.  Consider a scenario described by the following.

* Gusty has Emily and Zachary as friends.
* Emily has Coletta and Zachary as friends.
* Zachary has Gusty as a friend.
* Coletta does not have any friends.

The following diagram of variables of type Person captures this scenario.

 

The following code creates this scenario and uses some of the methods.

```java
Person gusty = new Person(“Gusty”);
Person emily = new Person(“Emily”);
Person zachary = new Person(“Zachary”);
Person coletta = new Person(“Coletta”);
gusty.addFriend(emily);
gusty.addFriend(zachary);
emily.addFriend(coletta);
emily.addFriend(zachary);
zachary.addFriend(gusty);
String fav = gusty.getFavFriend() // “Emily”
gusty.myNewFavFriend(zachary);
fav = gusty.getFavFriend() // “Zachary”
String gustysFriends = gusty.getFriends(); // “Zachary, Emily”
boolean b = emily.hasFriend(gusty); // false
b = emily.hasFriend(coletta); // true
zachary.unFriend(gusty);
String zacsFriends = zachary.getFriends() // “”
```

Create a MyIntegersTester class to demonstrate that your MyIntegers class is correct.

