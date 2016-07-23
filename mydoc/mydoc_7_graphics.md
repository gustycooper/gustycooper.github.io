---
title: Computer Graphics
tags: [graphics]
keywords: graphics
last_updated: July 21, 2016
summary: "<li>Understand computer graphics in general.</li> <li>Understand Java's implementation of graphics.</li> <li>Understand how to draw basic shapes and text on a window.</li> <li>Understand the Graphics class</li> <li>Understand how to override paint and paintComponent methods.</li> <li>Understand how to process several graphics events.</li> <li>Understand Swing components such as Jlabel, JButton, JCheckBox, JTextField, etc.</li> "
sidebar: mydoc_sidebar
permalink: /mydoc_7_graphics/
---

## Graphics

Programming graphics can be fun, but it involves a lot of Java concepts, some of which complex.  You have to take your time an think when programming Java graphics.  Our goal for graphics is not to become an expert, but rather to achieve a general understanding, mimick a few programs, and create several simple programs.  There are no test questions on graphics.  I think everyone will enjoy using the Netbeand GUI building.  I hope some interested students pursue graphics in more depth on their own - perhaps on the final project where students choose their own.  Most likely the information in this module will have to be augmented with in class. discussions

The Graphics Code Pattern is as follows.

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern
X. Graphics Program Pattern (pseudo code)
</b>
<br>
<pre>
Create a window
Fill the window with GUI objects
Loop
   Wait for user to select some object
   The user interaction will generate an event
   Process the event
   Update the contents of our window
</pre>
</div>

The Graphics pattern shows conceptually what is happening.  As we study graphics, you will discover that you do not code a loop to process events.  You simply write methods that are called by the underlying Java graphics libraries, which have the loop structure.

The approach for studying graphics is to first study drawing in windows before studying events.

* Part 1 - Output - Drawing shapes and text

  * Create a program that has window without content.
  * Create a program that has a window and draws basic content with low-level ```JFrame``` graphics methods.
  * Create a program that has a window and draws basic content with low-level ```JPanel``` graphics methods.
  * Create a program that has multiple components, such as buttons, labels, and text fields.
  * Examine several sample programs in [Graphics Drawing Code](/gustycooper.github.io/mydoc_7_graphics_drawing_code).

* Part 2 - Events and Input

  * Create a Hello World program that processes one event - mouse click on a button.
  * Examine several sample programs in [Graphics Events Code](/gustycooper.github.io/mydoc_7_graphics_events_code).

## Graphics and the Wirth Pattern

Modern day programs on laptops, phones, desktops, and tablets use a graphical user interface (GUI) to interact with users.  A GUI provides input to programs from components such as text entry fields for typing input, buttons for selecting, and pull down menus for selecting.  A GUI provides output from programs via components such as text fields, pictures, animations, and figures.  A program with a GUI consists of algorithms and data structures that transform input into output.  The difference is that input and output is via the GUI instead of the terminal.  These concepts can be viewed in the Wirth pattern from [Primitive Types](/gustycooper.github.io/mydoc_1_primitive_types).

<div class="alert alert-danger" role="alert"><i class="fa fa-delicious fa-lg"></i>
<b>
Programming Pattern
0. Wirth Pattern
</b>
<br>
<img title="computer" src="{{ "/images/wirthFigure.png" | prepend: site.baseurl }}" />
</div>

## Java Graphics History

* The Abstract Window Toolkit (AWT) was the original Java graphics.  All of the AWT types are in the ```java.awt``` package and can be imported via

  ```java
  import java.awt.*;
  ```

* Swing is the second incarnation of Java graphics.  Swing is built on top of AWT - they are used in conjunction.  All of the Swing types are in the ```javax.swing``` package and can be imported via

  ```java
  import javax.swing.*;
  ```

* Java has recently introduced JavaFX, which is intended to replace Swing.

We will use AWT and Swing.

## PowerBall Code in One File Review

In [Instance and Static](/gustycooper.github.io/mydoc_5_instance_static) we learned how to merge a class definition (with instance variables/methods) and a ```main``` method into one ```.java``` file.  Many of our graphics programs use this technique.  Recall the following figure to help prepare for creating a graphics program.

![Power Ball Merged](../images/powerBallMerged.png "Power Ball Merged")

## Graphics and Objects

Object-oriented programming started with graphics programming.  You will discover many graphics classes in the ```java.awt``` and ```java.swing``` packages.  Some of the many classes are the following.

* ```JFrame``` is a window.
* ```JButton``` is a button that can be selected with a mouse (or trackpad) click.
* ```JTextArea``` is a box into which text may be typed.
* ```JComboBox``` is a popup menu that allows mutual exclusion selection of one from several.
* ```JLabel``` is a text label.
* ```JTextField``` is a small area into which text may be typed.

To demonstrate the subclasses, consider a ```JButton```, which extends an ```AbstractButton```, which extends ```JComponent```, and so on.  The entire class hierarchy is the following.

* ```java.lang.Object```
  * ```java.awt.Component```
    * ```java.awt.Container```
      * ```javax.swing.JComponent```
        * ```javax.swing.AbstractButton```
          * ```javax.swing.JButton```

## Graphics Lab

The graphics overview lab is [Graphics](/gustycooper.github.io/labs_lab07_00).


## Sites with Java Graphics

### David Eck's Book

David Eck's book has graphics code sprinkled throughout as examples.  The following are some sections/chapters dedicated to graphics.

* [Section 3.9 - Introduction to GUI Programming](http://math.hws.edu/javanotes/c3/s9.html)
* [Chapter 6 - Introduction to GUI Programming](http://math.hws.edu/javanotes/c6/index.html)
* [Chapter 13 - Advanced GUI Programming](http://math.hws.edu/javanotes/c13/index.html)

### Java Custom Graphics Tutorial

[Custom Graphics](https://www3.ntu.edu.sg/home/ehchua/programming/java/J4b_CustomGraphics.html) is a nice web-site on manipulating Java graphics on a Graphics context.

### Loyal Marymont

[Basic Java Graphics](http://cs.lmu.edu/~ray/notes/javagraphics/) from [Loyola Marymont University, Los Angeles](http://cs.lmu.edu)
 

