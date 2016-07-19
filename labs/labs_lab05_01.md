---
title: Person Type Revisited Lab
keywords: class, person
last_updated: July 18, 2016
summary: "<li>Practice using Netbeans to redo the Person type we created earlier.</li>"
sidebar: labs_sidebar
permalink: /labs_lab05_01/
toc: false
---

## Java Person Type – Revisited

**Points**: Complete this entire section for 10 points.

We are going to create a new Netbeans project that uses code we created in [Person Type](/gustycooper.github.io/labs_lab03_01).  We will copy the source code we already created into ```Person.java``` and ```PersonTester.java``` files we create for the new Netbeans project.  Recall [Person Type](/gustycooper.github.io/labs_lab03_01) had two steps – Step 1 and Step 2 - where Step 2 added code to Step 1.  You should copy the code from Step 2.

1. Select File New Project.  This places you in the Netbeans New Project Wizard
2. Panel 1 – Choose Project: 

   * a. Select Java
   * b. Select Java Application
   * c. Next

3. Panel 2 – Name and Location: 

   * a. Enter Project Name: ```Lab5-1Project``` (or some other name if you like).
   * b. Enter Project Folder: <you choose>
   * c. You will see a check in Create Main Class.  We want to create a main class ```PersonTester``` that is in the **default package**.  In [Packages, ADTs](/gustycooper.github.io/mydoc_8_packages] we study packages.  For now and for most of our Netbeans projects we want to place our code in the default package.  At this point in Netbeans you will see something like ```lab5.pkg2project.Lab51Project```.  Change this to ```PersonTester```.
   * d. Finish

4. At this point you will be editing the ```PersonTester class```, which has a ```main()``` method.  You should copy and paste the code from BlueJ ```PersonTester.java main()``` method into the ```main()``` of this file.  Use whatever editor you like.  Click on the Save All icon.  You will have icons indicating there are errors in ```PersonTester.java```.  This is ok because you have not created the ```Person.java``` file.

5. Now right-click on the <default package> icon and select New Java Class.  This creates the New Java Class panel.

   * a. Change the Class Name: to be ```Person```
   * b. Finish

6. At this point you will be editing the ```Person.java``` class.  You should copy and paste the code from BlueJ ```Person.java``` into this file.  Use whatever editor you like.  Click the Save All icon.

7. Use the green triangle icon at the top of Netbeans to run your project.

8. At this point, you should see something like the following displayed in the Output panel.  NOTE: In the example below I have entered Gusty and Cooper at the two prompts.
run:

   ```java
   Enter first name: Gusty
   Enter last name: Cooper
   Friends of Gusty Cooper
   Expected: Gusty Coletta Emily
   Actual:  Gusty Coletta Emily
   BUILD SUCCESSFUL (total time: 10 seconds)
   ```

9. Now we will edit our ```.java``` files using Netbeans.  You will use the Projects panel to locate your ```Person.java``` and ```PersonTester.java``` files.  They are in <default package> which is in Source Packages.  Double click on each of them.  This will open tabs in the edit panel for both files.  It will also the Navigator window, which shows the methods and instance variables of each class.

10. Select the ```Person.java``` tab in the Edit window.  You can edit your ```Person``` class using this tab.  The Navigator window shows the constructor, methods, and instance variables of the Person class.

    * a. The Edit window has lots of nice features.  You will see various hints and tips provided by the editor like providing you with a selection of all String methods. You can use the Expand/Collapse icons in the editor to expand and collapse code segments.  I think you will like the editor.
    * b. Hover over each of the methods/instance variables in the Navigator window.  Netbeans will display the JavaDoc.  Pretty cool, huh?  That is provided you created JavaDoc when you implemented Person for Lab 3.

11. Use the Netbeans editor to update the ```Person``` class.  There are several updates that you will make, which are described in the following steps.

12. You should update the constructors so that the formal parameters are spelled the same as the instance variables.  The following is an example of this for the constructor.

    ```java
    public Person(String firstName, String lastName) {
        this.firstName = firstName;
        ...
    }
    ```
 
13. You should add a new instance variable ```int age``` and a new constructor with the following signature to construct a ```Person``` of a specific ```age```.  NOTE: Your original constructor should assign 25 to age.

    ```java
    public Person(String firstName, String lastName, int age)
    ```

14. You should add a new method ```hasFriend```.  The following code snippet demonstrates the signature and use.

    ```java
    public boolean hasFriend(String friend)

    Person p = new Person(“Coletta”, “Cooper”, 1);
    p.addFriend(“Gusty”);
    p.addFriend(“Emily”);
    boolean b = p.hasFriend(“Gusty”); // b is true
    boolean c = p.hasFriend(“Mary”);  // b is false
    ```

15. You should add a new method that has a the following signature and returns true if the person can vote, which means the person is at least 18 years old.

    ```java
    public boolean canVote()
    ```

16. You should add a new instance variable ```private static int count``` along with a corresponding getter method ```public static int getCount()``` that returns the number of ```Person``` objects constructed.  Your ```Person``` constructors should increment ```count```.  The variable ```count``` is ```static``` so it is not an instance variable.  Each ```Person``` object created has its own copy of instance variables, but there is only one copy of the variable ```count```.  The following code demonstrates this discussion.  The variables ```p1```, ```p2```, and ```p3``` reference ```Person``` objects that have instance variables ```firstName```, ```lastName```, ```friends```, and ```age```.  If these instance variables were ```public```, we could access (for example) ```p1.firstName```.  Instead we have made them ```private``` with getter functions so we do ```p1.getFirstName()```.  The ```Person``` objects share the ```static int count``` and the ```static int getCount```, which is accessed using the class name ```Person``` as ```Person.getCount()```.  

    ```java
    Person p1 = new Person(“Coletta”, “Cooper”, 1);
    Person p2 = new Person(“Gusty”, “Cooper”, 22);
    Person p3 = new Person(“Emily”, “Cooper”, 25);
    int numOfPersonObjects = Person.getCount(); // 3
    ```


17. You should update your ```PersonTester class``` to use these new constructors and methods.  The following is an example output of my updated ```PersonTester```.

    ```java
    Enter first name: Gusty
    Enter last name: Cooper
    Friends of Gusty Cooper
    Expected: Gusty Coletta Emily
    Actual: Gusty Coletta Emily
    Coletta is a friend true
    Emily is a friend true
    Gusty is a friend true
    CAT is a friend false
    Gusty can vote true
    Number of Person objects: 3
    ```

18. Congratulations, you have successfully used Netbeans to create your first project.

