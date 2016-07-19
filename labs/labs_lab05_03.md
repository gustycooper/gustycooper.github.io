---
title: Twitter Type Revisited Lab
keywords: class, twitter
last_updated: July 18, 2016
summary: "<li>Practice maintenance programming on our Twitter class to add some exciting new features.</li> <li>Practice writing classes that define types.</li> <li>Practice creating instance variables, constructors, and instance methods within your class.</li> <li>Practice creating test cases for your types.</li> <li>Practice placing your test cases in tester classes that have a main method.</li> <li>Practice using your types to declare variables.</li> <li>Practice constructing objects of your types.</li> <li>Practice calling instance methods in the objects you construct.</li>"
sidebar: labs_sidebar
permalink: /labs_lab05_03/
toc: false
---

## Java Twitter Type – Revisited

**Points**: Complete this entire section for 30 points.

NOTE: The Twitter Type is a rendition of a project from a Udacity class.

In [Twitter Type](/gustycooper.github.io/labs_lab04_06) we created a ```Twitter class```.  That lab has been created by mashing together a similar lab in the [Udacity Java Course](https://www.udacity.com/course/intro-to-java-programming--cs046) and some methods from a lab created by Ron Zacharski.  This lab will use Netbeans to copy our existing ```Twitter class```, add some exciting new methods to our ```Twitter class```, and create a ```TwitterTester class```.


Using Netbeans, perform the following sequence of steps that solves a problem.

1. Select File New Project.  This places you in the Netbeans New Project Wizard

2. Panel 1 – Choose Project: 

   * a. Select Java
   * b. Select Java Application
   * c. Next

3. Panel 2 – Name and Location: 

   * a. Enter Project Name: ```TwitterProject``` (or some other name if you like).
   * b. Enter Project Folder: <you choose>
   * c. You will see a check in Create Main Class.  We want to create a main class ```PersonTester``` that is in the **default package**.  In [Packages, ADTs](/gustycooper.github.io/mydoc_8_packages] we study packages.  For now and for most of our Netbeans projects we want to place our code in the default package.  At this point in Netbeans you will see something like ```lab5.pkg2project.TwitterProject```.  Change this to ```PersonTester```.
   * d. Finish

4. At this point you will be editing the ```PersonTester class```, which has a ```main()``` method.  You should copy and paste the code from BlueJ ```PersonTester.java main()``` method into the ```main()``` of this file.  Use whatever editor you like.  Click on the Save All icon.  You will have icons indicating there are errors in ```PersonTester.java```.  This is ok because you have not created the ```Person.java``` file.


5. Now right-click on the <default package> icon and select New Java Class.  This creates the New Java Class panel.

   * a. Change the Class Name to be ```Twitter```

   * b. Finish.

6. At this point you will be editing the ```Twitter.java class```.  You should copy and paste the code from BlueJ [Twitter Type](/gustycooper.github.io/labs_lab04_06) ```Twitter.java``` into this file.  Use whatever editor your like.  Click on the Save All icon. 

7. Now edit ```TwitterTester.java``` to construct a ```Twitter``` and use all of the methods.  This will make sure you ```Twitter.java``` works before adding two new methods.  Here is the output from running my ```TwitterTester```.  You will notice that my tweet is actually the sentence, ```“This is my Tweet”```.

   ```java
   run:
   My tweet is This is my Tweet
   My tweet reversed is teewT ym si sihT
   Number of vowels in my tweet are 4
   My tweet without vowels is Ths s my Twt
   BUILD SUCCESSFUL (total time: 0 seconds)
   ```

8. Add two new methods to ```Twitter.java```.

   * a. ```simplePalindrome()``` – returns true if word is a palindrome.  This method will consider palindromes without spaces.  A palindrome is a string that reads the same backwards as forwards. For example ```"madamImadam"``` and ```"risetovotesir"``` are simple palindromes.

   * b. ```palindrome()``` – returns true if word is a palindrome.  Typically spaces, capitalization and punctuation are ignored in palindromes, meaning ```"Madam I'm Adam"``` and ```"Rise to vote sir"``` are considered palindromes.  ```simplePalindrome()``` did not have to consider these; however, ```palindrome()``` will recognize these are palindromes.  For example, the following is a good palindrome: ```“Madam   !  I’m    ? Adam”```.  You should realize that for the ```palindrome()``` method, you have to remove characters from the string, and the call ```simplePalindrome()```.  You can remove characters from a string by the following algorithm.   You should make sure you understand this algorithm before incorporating it into your code.  The best way to understand the algorithm is to exercise the algorithm in your mind using small tweets.  This algorithm would be in your ```Twitter.java``` and the variable tweet is the private variable representing the tweet.

      ```java
      String removeChars = " .!?,()'";
      String tweetToChange = this.tweet;
      for (int i = 0; i < removeChars.length(); i++) {
         String s = removeChars.substring(i,i+1);
         tweetToChange = tweetToChange.replace(s, "");
      }
      Tweet w = new Tweet(wordToChange);
      return w.simplePalindrome();
      ```

9. Update your ```TwitterTester.java``` class to adequately test ```simplePalindrome()``` and ```palindrome()```.  One option would be to update ```TwitterTester.java``` such that it has does the following.

   * Read in a ```String``` variable from the user using a ```Scanner``` object.
   * Construct several ```Twitter```(s) using the user’s input, and use ```simplePalindrome()```, ```palindrome()``` methods, and other ```Twitter``` methods on the user’s input.  

10. The following are example runs of your program.

    ```java
    run:
    My tweet is This is my Tweet
    My tweet reversed is teewT ym si sihT
    Number of vowels in my tweet are 4
    My tweet without vowels is Ths s my Twt
    Is madam I madam a palindrome true it is.
    Is madam    I'm ..! adam a palindrome? true it is
    Enter a potential palindrom: Gusty     !!!! ytsuG
    Gusty     !!!! ytsuG palindrome status is true
    BUILD SUCCESSFUL (total time: 16 seconds): 
    ```
