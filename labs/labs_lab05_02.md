---
title: Car Type Revisited
keywords: class, car
last_updated: June 6, 2016
summary: "Lab 5, Car Type Revisited"
sidebar: labs_sidebar
permalink: /labs_lab05_02/
toc: false
---

## Java Car Class – Revisited

**Points**: Complete this entire section for 10 points.

We are going to create a new Netbeans project that uses code we created in [Car Type](/gustycooper.github.io/labs_lab03_02).  We will copy the source code we already created into ```Car.java``` and ```CarTester.java``` files we create for the new Netbeans project.

1. Select File New Project.  This places you in the Netbeans New Project Wizzard

2. Panel 1 – Choose Project: 

   a. Select Java
   b. Select Java Application
   c. Next

3. Panel 2 – Name and Location: 

   a. Enter Project Name: Lab5-2Project (or some other name if you like).
   b. Enter Project Folder: <you choose>
   c. You will see a check in Create Main Class.  We want to create a main class ```CarTester``` that is in the default package.  At this point you will see something like ```lab5.pkg2project.Lab52Project```.  Change this to ```CarTester```.
d. Finish

4. At this point you will be editing the ```CarTester class```, which as a ```main()``` method.  You should copy and paste the code from BlueJ ```CarTester.java main()``` method into the ```main()``` method of this file.  Use whatever editor your like.  Click on the Save All icon.  You will have icons indicating there are errors in ```CarTester.java```.  This is ok because you have not created the ```Car.java``` file.

5. Now right-click on the <default package> icon and select New Java Class.  This creates the New Java Class panel.

   a. Change the Class Name: to be ```Car```
   b. Finish.

6. At this point you will be editing the ```Car.java``` class.  You should copy and paste the code from BlueJ ```Car.java``` into this file.  Use whatever editor your like.  Click on the Save All icon.

7. Use the green triangle icon at the top of Netbeans to run your project.

8. At this point, you should see something like the following displayed in the Output panel.

   ```java
   run:
   Tester Program for Car ClassGas left in two cars: 20mpg and 32mpg
   Each car given 10 gallons of gas
   Each car driven twice: 55 and 62 miles.
   Car 20 mpg Expected: 4.15
   Car 20 mpg Actual: 4.15
   Car 32 mpg Expected: 6.34375
   Car 32 mpg Actual: 6.34375
   BUILD SUCCESSFUL (total time: 0 seconds))
   ```

9. Congratulations, you have successfully used Netbeans to create a new project.

