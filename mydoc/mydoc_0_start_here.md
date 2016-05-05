---
title: Start Here
tags: [getting_started]
keywords: java, algorithms, design, programming
last_updated: May 1, 2016
summary: "Start Here"
sidebar: mydoc_sidebar
permalink: /mydoc_0_start_here/
---

## Overview 

This brief description will help you quickly get acclimated to CPSC 220.  CPSC 220 is more demanding the CPSC 110. You may have completed CPSC 110 by creating 400 lines of code.  You will create that much in many of our weekly labs.  

## Assumed Knowledge

I assume that everyone in CPSC 220 has satisfied the prerequisites as defined in the UMW course catalog.  We will reexamine all of the concepts described in the prerequisites, but if you do not have a fundamental understanding, you will not be able to keep up.  The following list of concepts are what everyone should begin CPSC 220 with.

* Basic programming, which includes
  * How to create a program
    * An editor
    * An interpreter or compiler
  * How to test a program
    * Creating test cases
  * How to debug a program
    * Discovering why a program does not pass test cases
* **data types** such as integer, floating point, and string.
* **variables** which can be assigned values.
* **expressions** which include
  * numeric expressions
  * relational expressions
  * Boolean expressions
* **methods** or **functions**
  * How to define a method
  * How to call a method
* **parameters** or **arguments**
  * formal parameters
  * actual parameters


## Section Kept for Site URLS

If you're used to running Jekyll sites, you can type the normal jekyll command, `jekyll serve`, to run this site. However, if you're a new Jekyll user or if you run into issues, see the following two topics:

* {{site.data.urls.mydoc_install_jekyll_on_mac.link}}
* {{site.data.urls.mydoc_install_jekyll_on_windows.link}}

## Configure the sidebar

The following is Java code.

{% raw %}
```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World."):
    }
}
```
{% endraw %}

In each page's frontmatter, you must specify the sidebar you want that page to use. Here's an example of the page frontmatter showing the sidebar property:

```yaml
---
title: Alerts
tags: [formatting]
keywords: notes, tips, cautions, warnings, admonitions
last_updated: March 20, 2016
summary: "You can insert notes, tips, warnings, and important alerts in your content. These notes are stored as shortcodes made available through the linksrefs.hmtl include."
sidebar: mydoc_sidebar
permalink: /mydoc_alerts/
---
```

