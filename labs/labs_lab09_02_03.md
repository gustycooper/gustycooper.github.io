---
title: Recursive Binary Search
keywords: searching
last_updated: June 22, 2016
summary: "Recursive Binary Search"
sidebar: labs_sidebar
permalink: /labs_lab09_02_03/
toc: false
---

## Recursive Binary Search

**Points**: Complete this entire section for 20 points.

This lab is designed so that you re-practice writing static methods.  You place your binary search methods in a ```BinarySearch``` class that are called from a ```BinarySearchTester``` class.  You can implement a binary search method that searches for ```Strings```, ```ints```, or ```doubles```.  This section describes a binary search method that searched ```String```s.

When you create your Netbeans project, you should create your ```main()``` in a class named ```BinarySearchTester```.  If you recall this is the second step in creating a new project.

* 2.	The Netbeans second panel – Name and Location: 
  * a.	Enter Project Name: BinarySearch.
  * b.	Enter Project Folder: <you choose>
  * c.	You see a check in Create Main Class.  Make sure you change this to be.

    ```BinarySearchTester```

  * d.	We continue to use the <default package> for now. 
  * e.	Finish
* 3.	Now right-click on the <default package> icon and select New Java Class…  This creates the New Java Class panel.
  * a.	Change the Class Name: to be ```BinarySearch```
  * b.	Finish.

When editing your ```BinarySearch``` class, you should create two methods as shown during our class lecture.

```java
private static int binarySearchString(String[] sa, String ele, int first, int last) {
  // your code here
}
public static int binarySearchString(String[] sa, String ele) {
  return binarySearchString(sa, ele, 0, sa.length-1);
}
```

You should notice that both methods have the same name.  The ```private``` method is called by your ```public``` method.  This approach allows users to call your ```binarySearchString``` in a more natural way – with an array of ```Strings``` and a ```String``` element.  Remember that the method ```binarySearchString``` only works with an array that is sorted in alphabetic order.

Since you have declared ```binarySearchString``` to be a ```static``` method, you do not need to create a ```BinarySearch``` object in your ```BinarySearchTester``` class.  Instead, you call ```binarySearchString``` as follows.

```java
String[] sa = { "Brandalee", "Cooper", "Dottie", "Ellie", "Emily", 
                "Gusty", "Jeremy", "Jerri Anne", "Zachary" };
System.out.println(BinarySearch.binarySearchString(sa,"Gusty"));
```

Notice how we use the ```BinarySearch``` class name as a prefix when making the call.  This should remind you of calling ```Math.random()```.

You should also call the Arrays.binarySearch method, which looks like the following.

```java
System.out.println(Arrays.binarySearch(sa, "Zachary"));
```

