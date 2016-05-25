---
title: Programming Style
tags: []
keywords: style
last_updated: May 16, 2016
summary: "<li>Understand the elements of good programming style.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_A_programming_style/
---

## Programming Style

Explain programming style here.

* Select meaningfull names for variables and methods.
* Adhere to camelCase for variable and method names.
* Capitalize the names of your classes.
* Use a consistent indentation and spacing throughout your program.
* For classes such as Person, Car, Bus, always use JavaDoc.

You should know at this time that the spacing in Java does not matter.  You should establish your coding standards that make your code easier to read.  We will discuss coding standards more when we cover the various Java statements.  For now, I will show you an alternative style for the code in SO.9.  See if you can spot the difference.

{% raw %}
```java
public class Person {
   private int age;  // variable to store the age of a person

   Person(int a) {   // constructor
      age = a;
   }

   public int getAge() {  // getter
      return age;
   }
}
```
{% endraw %}


{% raw %}
```java
public class Person 
{
   private int age;  // variable to store the age of a person

   Person(int a)     // constructor
   {   
      age = a;
   }

   public int getAge()  // getter
   {
      return age;
   }
}
```
{% endraw %}

