---
title: Person Type
keywords: class, person
last_updated: June 5, 2016
summary: "Lab 2, Person Type"
sidebar: labs_sidebar
permalink: /labs_lab03_01/
toc: false
---

## Create a Java Person Type

**Points**: Complete this entire section for 40 points.  The two subsections 2.3.1 and 2.3.2 are each worth 20 points.  You must include JavaDoc in your code to receive the 20 points for each section.  If you choose to omit JavaDoc, you can only receive 10 points for each section.

As we have learned, Java classes contain instance variables, constructors, and methods.  We use the class to define variables and we use the constructors to create objects that we assign to our variables. A ```Person class``` is a great introduction to defining classes and constructing objects.  For example, I can create a ```Person``` variable gusty and assign it to a person object by the following.

```java
Person gusty = new Person(“Gusty”, “Cooper);
```

The class definition of Person will look like the following.

```java
public class Person {
// instance variables

// constructors

// methods

}
```

We will create various implementations of a Person class throughout the semester.    In this section, we will develop our first Java public class Person in two steps.  

### Step 1 – Fields ```firstName``` and ```lastName```

1. Create a ```public class Person``` that has two ```public``` instance variables.  By making these instance variables ```public```, we can directly access them in a ```Person``` object.

   * a. ```public String firstName;```
   * b. ```public String lastName;```

2. Your ```Person class``` shall have one constructor that assigns the two ```public``` instance variables to their corresponding constructor parameters.  The constructor is shown as follows.

   * a. ```Person(String fn, String ln)```

3. After implementing your ```class Person```, use BlueJ to construct a ```Person``` object.

   * a. Manipulate your ```Person``` object from the BlueJ GUI and the BlueJ code pad.
   * b. You can right-click on your ```Person class``` to create a ```Person``` object, which will appear in the BlueJ object window.
   * c. You can manipulate the object by right-clicking on it.
   * d. You can also manipulate the object in the BlueJ code pad.  You may have to select Show Code Pad in the BlueJ View pull-down menu to view the code pad.  The BlueJ code pad allows you to interactively enter Java commands.  For example, if you have constructed a Person object with a name of person1, you can enter the following in the BlueJ code pad to directly access the instance variables.

     ```java
     > person1.firstName
     “Gusty” (String)
     > String s = person1.lastName;
     > s
     “Cooper” (String)
     > person1.firstName = “Coletta”;
     ```

4. Edit your ```Person class``` to change the two instance variables to be ```private```.  ```Private``` instance variables cannot be directly accessed in a ```Person``` object.  This is the typical technique for developing classes.  We will add ```public``` getter and setter methods that users of the class must use to access the instance variables.

   * a. ```private String firstName;
   * b. ```private String lastName;

5. Add getter and setter public methods for the ```firstName``` and ```lastName``` instance variables.  The following define the getters and setters.  

   * a. ```public String getFirstName() { return firstName; }```
   * b. ```public void setFirstName(String fn) { firstName = fn; }```
   * c. ```public String getLastName() { return lastName; }```
   * d. ```public void setLastName(String ln) { lastName = ln; }```

6. After implementing your modified class ```Person```, use BlueJ to construct a ```Person``` object.
   * a. Manipulate your ```Person``` object from the BlueJ GUI and the BlueJ code pad.  You have to use the getters and setters.  For example, you will have to do the following.

     ```java
     > person1.getFirstName
     “Gusty” (String)
     > String s = person1.getLastName;
     > s
     “Cooper” (String)
     > person1.setFirstName(“Coletta”);
     ```

### Step 2 – Field ```friends```

7. Add the following instance variable to your ```Person``` class.

   * a. ```private String friends;```  – this variable will contain the friends of your ```Person``` 

8. Add the following methods to your ```Person``` class.

   * a. ```addFriend(String friend)``` – this method will add the ```String``` friend to your ```Person``` by concatenating it onto the private ```String friends``` instance variable.  String concatenation is performed using the + operator.

   ```java
   friends = friends + “ “ + friend;
   ```

   * b. String getFriends() { return friends; } – this method will return the friends of your Person that are stored in the private String friends.

9. Use BlueJ to create a Person, use the Person methods to get the first / last names, add some friends, and get the friends.  The following shows a BlueJ Code Pad sequence of statements manipulating a Person p that has been created using the BlueJ object creation.

   ```java
   > person1.getFirstName()
   "Gusty"   (String)
   > person1.addFriend("Grandma");
   > person1.addFriend("Tweetie");
   > String f = person1.getFriends();
   > f
   " Grandma Tweetie"   (String)
   ```

10. Create a Java ```public class personTester``` that has a ```static public void main()``` method that performs the following operations.

    * a. Declares and constructs a ```Person p``` that you provide a first and last name.

      ```java
      Person p = new Person(“JerriAnne”, “Cooper”);
      ```

    * b. Uses the ```addFriend()``` method to add ```“Gusty”```, ```“Coletta”```, and ```“Emily”``` as friends.

      ```java
      p.addFriend(“Gusty”);
      p.addFriend(“Coletta”);
      p.addFriend(“Emily);
       ```

    * c. Uses the following Java statements to print information to the console.

      ```java
      System.out.println(“Friends of “ + p.getFirstName() + 
                          “ “ + p.getLastName();
      System.out.println(“Expected Friends: Gusty Coletta Emily”);
      System.out.println(“Actual Friends: “ + p.getFriends());
      ```

