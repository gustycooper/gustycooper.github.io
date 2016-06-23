---
title: Growing Circle Animation
keywords: graphics
last_updated: June 22, 2016
summary: "Growing Circle Animation"
sidebar: labs_sidebar
permalink: /labs_lab07_01_03/
toc: false
---

## Growing Circle Animation

**Points**: Complete this entire section for 5 points.

Implement the ```GrowingCircleAnimation``` as defined in our textbook Section 5.3.3.  Realize that this program consists of two classes, ```GrowingCircleAnimation.java``` and ```CircleInfo.java```.  Both files are on Canvas.  You will need to put both of these into Netbeans.   Some notes for understanding this code are provided as follows.

1. ```GrowingCircleAnimation extends JPanel``` and ```implements ActionListener```.  Extending ```JPanel``` allows ```GrowingCircleAnimation``` overrides the ```PaintComponent(Graphics g)``` method, which gets called every time our window requires painting.
2. The ```main()``` method in ```GrowingCircleAnimation``` establishes a ```Swing Timer```, which is named ```frameTimer```.  This ```frameTimer``` calls the ```actionPerformed()```  method of our ```GrowingCircleAnimation``` object ```drawingArea``` every 20 milliseconds.  
3. The ```actionPerformed()``` method in ```GrowingCircleAnimation``` calls the AWT ```repaint()``` method.
4. The AWT ```repaint()``` method registers an asynchronous request to AWT that our component (which is ```drawingArea```) needs to be repainted.
5. AWT will then call the ```paintComponent()``` method of ```drawingArea```.
6. The ```paintComponent()``` method calls the ```drawFrame()``` method which calls the 100 ```circleData[i].draw(g)``` methods causing all of the circles to be redrawn.

