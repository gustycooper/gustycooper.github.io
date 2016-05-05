---
title: Graphics
tags: [graphics]
keywords: graphics
last_updated: May 1, 2016
summary: "Graphics"
sidebar: mydoc_sidebar
permalink: /mydoc_7_graphics/
---

## Graphics (Eck 6)

## G.1 Introduction

Computer graphics is accomplished by coloring pixels within windows.  A pixel is a small square dot in a window. Pixels are identified using a coordinate system that begins in the upper left hand corner.  The x coordinates count toward the right, and the y coordinates count downward.  The color of a pixel is specified by its Red, Green, Blue (or RGB) value (see section Java Standard Colors).  The more pixels per inch the better looking the graphics.  Figure G-9 shows pixels within a window along with a red square drawn by coloring pixels.  You will notice how ragged this square looks.  Modern displays have pixels densely packed so one does not notice the raggedness.   The newer 4K and 5K displays are gorgeous.

 
Figure G-21 Compuer Graphics, Pixels, and Coordinates
Of course, we do not want to write our graphics programs using only pixels.  We want to manipulate high-level objects such a buttons, text fields, labels, and check boxes.

## G.2 Java JFrame Class

User’s operate today’s programs with a graphical user’s Interface (GUI).  Java has many classes that support GUI development.  The starting point of a GUI application is a window.  The Java class that corresponds to a window is a JFrame.   A JFrame by itself is not very useful.  You can place a JFrame window on your display.  It will have a title-bar, open, close, and maximize icons, but that is about it.  A JFrame has several attributes that you will set.  The following code demonstrates a Java program that creates a JFrame only.

{% raw %}
```java
import java.awt.*;
import javax.swing.*;
public class JFrameOnly {
    public static void main(String[] args) {
        JFrame window = new JFrame("JFrame Only");
        window.setSize(250,100);  // 250 pixels wide, 100 length
        window.setLocation(100,100); // 100, 100 from upper rhc
        // The following statement will terminate your program 
        // the window is closed
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setVisible(true);
    }
}
```
{% endraw %}

A JFrame has a ContentPane into which you can place content.  You can add content to the JFrame’s ContentPane or you can replace the JFrame’s ContentPane with your own. 
## G.3 Content – GUI Components
The content that you want to place in your window consists of the typical things you encounter with programs.  We will call these things components.
•	Labels – Jlabel
•	Regular Buttons – JButton 
•	Check Buttons – JcheckBox
•	Text Entry Boxes – JtextField 
•	Pull-down menus - JComboBox
•	Scrollable Text Boxes – JtextArea in a JScrollPane

## G.4 Basic JFrame

Section G.2 shows a program with a JFrame and no content.  This section shows code a JFrame where we have added some rudimentary content.  In this example, we add directly to the JFrame by extending the JFrame class and overriding the JFrame paint(Graphics g) method.  The paint() method is automatically called whenever a window needs to be redrawn.  The argument of type Graphics has many low-level graphical drawing routines.  The following are a few examples.

{% raw %}
```java
drawString(String str, int xBaselineLeft, int yBaselineLeft);
drawLine(int x1, int y1, int x2, int y2);
drawRect(int xTopLeft, int yTopLeft, int width, int height);
drawOval(int xTopLeft, int yTopLeft, int width, int height);
drawPolygon(int[] xPoints, int[] yPoints, int numPoint);
fillRect(int xTopLeft, int yTopLeft, int width, int height);
fillOval(int xTopLeft, int yTopLeft, int width, int height);
fillPolygon(int[] xPoints, int[] yPoints, int numPoint);
```
{% endraw %}


When you call one of the basic drawing methods, the object is drawn in the drawing color, which is default to Color.BLACK; however, you can change the drawing color with the following method.

{% raw %}
```java
setColor(Color c);  // See section Java Colors
```
{% endraw %}

The following code demonstrates a Java program that adds a String and a line directly to a JFrame using drawString() and drawLine().

{% raw %}
```java
import java.awt.*;
import javax.swing.*;

public class BasicJFrame extends JFrame {
    public BasicJFrame(String title) {
        super(title); // call JFrame's constructor
    }
    public void paint(Graphics g){
        g.drawLine(10,10,150,150);
        g.drawString("Hello Class",10,40);
    }
    public static void main(String arg[]) {
        BasicJFrame window = new BasicJFrame("Basic JFrame");
        window.setSize(200,200);
        window.setLocation(100,100);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setVisible(true);
    }
}
```
{% endraw %}

## G.5 Panels

As we write Java graphics, we will not add content directly to a JFrame.  Our graphics programs will not be too complicated – just a single window with a few options such a buttons and displays.   Thus we will have a JFrame, which will be our primary window, but we will add JPanel(s) to our JFrame.  You should think of your window as consisting of a collections of panels, where each panel contains content.  At this level of thinking a panel is simply a rectangular area on the window.  Figure G-10 shows a window with three panels.

 

Figure G-22 – Window with Three Panels

## G.6 Basic JPanel

Section G.4 shows code for adding content directly to a JFrame.  This section presents our first code that adds content to a JPanel and then adds the JPanel to the content pane (via setContentPane) of the JFrame.  The pattern for this is similar to that in Section G.4.  We will extend the JPanel class and overriding the JPanel paintComponent(Graphics g) method.  The paintComponenet() method (just like the JFrame paint() method) is automatically called whenever a window needs to be redrawn.  The argument of type Graphics has the low-level graphical drawing routines that were described in Section G.4.   The following code demonstrates a Java program that adds a String and a line to a JPanel using drawString() and drawLine().  The JPanel is added to the JFrame using the setContentPane() method.  If you run this Basic JPanel program and the Basic JFrame program (from section G.4) side-by-side, you will notice the coordinate system for the Basic JFrame begins at the upper left-hand corner of the window and the coordinate system for the Basic JPanel begins at the upper left-hand corner of the panel placed within the window.  A JPanel has a background color that you can set by calling 

{% raw %}
```java
setBackground(Color c);  // See Section Java Colors
```
{% endraw %}

The example code changes the background to Color.YELLOW.

{% raw %}
```java
import java.awt.*;
import javax.swing.*;
public class BasicJPanel extends JPanel {
    // The following constructor is not needed.
    // super() is called automatically for you.
    public BasicJPanel() {
        super(); // call JPanel's constructor
    }
    public void paintComponent(Graphics g){
        setBackground(Color.YELLOW);
        g.drawLine(10,10,150,150);
        g.drawString("Hello Class",10,40);
    }
    public static void main(String arg[]) {
        JFrame window = new JFrame("BasicJPanel");
        
        BasicJPanel panel = new BasicJPanel();
        window.setContentPane(panel);
        window.setSize(200,200);
        window.setLocation(100,100);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setVisible(true);
    }
}
```
{% endraw %}

One thing to note is that a JFrame has a content pane to which you can add content.  The above example did not use the JFrame content pane.  The statement

{% raw %}
```java
window.setContentPane(panel);

Replaced the JFrame content pane.  An alternative would have been to get the JFrame content pane and add the panel to it as follows.

{% raw %}
```java
window.getContentPane().add(panel);
```
{% endraw %}

## G.7 Building GUIs

A GUI Builder is a program that allows you to create your user interface by dragging and dropping components onto a display.  The GUI Builder provides you with a palette of components and a design area.  The palette of components contains all of the standard components (e.g., buttons, labels, text boxes).  The design area is a window into which you can drag and drop components.  The design area will eventually look like the window you want for you application.  The GUI builder will then generate the code to that generates your window.  You have to add the meaning to the window by processing button clicks, reading text fields, reading files, and placing the results in text areas, but you have avoided some the tedious programming involved with placing components on a JFrame.   

Netbeans has a GUI builder, but we will not use it.  We will learn the basics of GUI programming and create some simple GUI’s.

## G.8 Arranging Panels in a JFrame

Section G.5 shows a window with three panels in it.  
Java Standard Colors – java.awt.color
The standard colors are accessed as Color.RED, Color.GREEN, etc.  They are defined as follows.

{% raw %}
```java
RED       : java.awt.Color[r=255, g=0,   b=0]
GREEN     : java.awt.Color[r=0,   g=255, b=0]
BLUE      : java.awt.Color[r=0,   g=0,   b=255]
YELLOW    : java.awt.Color[r=255, g=255, b=0]
MAGENTA   : java.awt.Color[r=255, g=0,   b=255]
CYAN      : java.awt.Color[r=0,   g=255, b=255]
WHITE     : java.awt.Color[r=255, g=255, b=255]
BLACK     : java.awt.Color[r=0,   g=0,   b=0]
GRAY      : java.awt.Color[r=128, g=128, b=128]
LIGHT_GRAY: java.awt.Color[r=192, g=192, b=192]
DARK_GRAY : java.awt.Color[r=64,  g=64,  b=64]
PINK      : java.awt.Color[r=255, g=175, b=175]
ORANGE    : java.awt.Color[r=255, g=200, b=0]
```
{% endraw %}

You can create your own colors using several Color constructors.  The one listed here accepts R, G, B values between 0 and 255.

{% raw %}
```java
Color myColor = new Color(123, 101, 45);
```
{% endraw %}

Files in SimpleGraphics folder.

1. JFrameOnly.java
2. BasicJFrame.java
3. BasicJPanel.java
4. Capitalizer.java
5. TrivialSketcher.java

Java Custom Graphics Tutorial
To see a nice web-site on manipulating Java graphics on a Graphics context see the following link.
https://www3.ntu.edu.sg/home/ehchua/programming/java/J4b_CustomGraphics.html
 
