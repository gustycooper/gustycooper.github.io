---
title: final
tags: [class, object]
keywords: final
last_updated: June 1, 2016
summary: "<li>Understand final and its use on declaring variables.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_5_final/
---

## Final

```final``` is a keyword that is applied to a variable declaration to indicate the variable cannot be re-assigned once it has been assigned.

```
public final static double PI = 3.1415;

PI = 3.14159;  // illegal assignment
```

You can think of ```final variables as constants that do not change.  You may declare a variable ```final``` without assigning a value as part of the declaration.  In this case you can later perform on assignment statement.

```
public final static String FAVORITE_COLOR;

public Constructor() { FAVORITE_COLOR = "Blue" };
```

We will not study ```final``` as applied to classes and methods.

## Use of ```final```

In addition to nice constants such as ```PI``` and ```FAVORITE_COLOR```, ```final``` can be used to isolate changes of code to one place.  The example uses a two-dimensional array which we study in [Arrays and ArrayLists](/gustycooper.github.io/mydoc_6_arrays_arraylists).  Array have fixed dimensions.  Suppose we write code for a 4 by 4 array, but we want our code to be easy to modify to process a 5 by 5 array.  We do not want our code to reference constants 4 because then we would have to search throughout our code for array references.  Instead we define two ```final``` constants ```ROW``` and ```COL```.  Our first implementation assigns 4.  Then we can update our code simply by assigning 4 to ```ROW``` and ```COL```.  The following code demosntrates this.

```java
public final int ROW = 4;
public final int COL = 4;

for (int row = 0; row < ROW; row++)
   for (int col = 0; col < COL; col++)
```

## ```TeacherDemo```

The grading policy of classes can evolve.  The ranges of averages for A, B, C, D, and F can change.  An A may be 92 to 100 one semester and 90 to 100 the next.  The ```final``` modifier can be used to easily allow a program to accomodate changes to the ranges of average.  The following ```Teacher``` class demonstrates this concept.  Notice the ```final int A, B, C, D```, which can be updated to new values without changing the code.  ```Teacher``` is a subclass of ```Person```.  The details of subclasses are described in [Subclasses](/gustycooper.github.io/mydoc_5_subclasses).

```java
public class Teacher {
    private String name;
    private String courses;
    private String department;
    private final int A = 90;
    private final int B = 80;
    private final int C = 70;
    private final int D = 60;
    
    public Teacher(String name, String department) {
        this.name = name;
        courses = "";
        this.department = department;        
    }
    
    public void addCourse(String course) {
        courses += course + " ";
    }
    
    public String getCourses() { return courses; }
    
    public void setDepartment(String department) {
        this.department = department;
    }
    
    public String getDepartment() { return this.department; }
    
    public String assignGrade(double average) {
        int aveRounded = (int)Math.round(average);
        if (aveRounded > A)
            return "A";
        else if (aveRounded > B)
            return "B";
        else if (aveRounded > C)
            return "C";
        else if (aveRounded > D)
            return "D";
        else
            return "F";
    }
}
```
