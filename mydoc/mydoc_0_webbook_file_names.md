---
title: WebBook File Names
tags: [getting_started]
keywords: file names
last_updated: July 19, 2016
summary: "<li>This page is not part of the class and thus does not have learning objectives.</li> <li>I added this page in order to understand the file names that underly the WebBook.</li> <li>I examine the text in the corresponding .md file to easily see the file that correspondes to a particular section.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_0_webbook_file_names/
---

## WebBook Introduction

You should study Tom Johnson's [Jekyll Documentation Theme 5.0](http://idratherbewriting.com/documentation-theme-jekyll/index.html) to understand the overall format of building a document using his theme.  This WebBook uses his theme.  The following folders contain content.

* mydoc - contains the WebBook
* labs - contains the labs
* projects - contains the projects
* product1 - contains the syllabus
* product2 - contains the references and acknowledgements

## WebBook mydoc File Names

I followed Tom's file naming convention for the mydoc sections.  Each file has a name like **mydoc_1_overview.md**.  Each file begins with **mydoc**.  I had a particular order for teaching the class.  The order is reflected by the **_X** that follows mydoc.  For example **mydoc_1**.  After the number is a name that reflects the section. After getting the content into the WebBook, I decided to rearrange the content of the course.  This messed up some of the numbers.  The following maps the WebBook sections to filenames.

### Start Here Module

Section | File Name
------- | ---------
Welcome | index
How to Use | mydoc_0_how_to_use
Let's Get Started | mydoc_0_get_started
Grand Goal of Course | mydoc_0_grand_goal
Java Downloads | mydoc_0_downloads
About Gusty | mydoc_0_about_gusty
FAQs | mydoc_0_faq
Example Authoring | mydoc_0_examples

### Intro & 1st Programs Module

Section | File Name
------- | ---------
Introduction Overview | mydoc_1_overview
Information, People, Computers | mydoc_1_information_people_computers
IDEs, Compiling, Interpreting | mydoc_1_ides_compiling_interpreting
Software Development Process | mydoc_1_software_development_process
Problem Solving | mydoc_1_problem_solving
Algorithms | mydoc_1_algorithms
Numbers as Information | mydoc_1_numbers
Chars as Information | mydoc_1_characters
Primitive Types | mydoc_1_primitive_types
Our First Java Programs | mydoc_1_first_programs

```java
  Start Here
    Welcome - index
    How to Use - mydoc_0_how_to_use
    Let's Get Started - mydoc_0_get_started
    Grand Goal of Course - mydoc_0_grand_goal
    Java Downloads - mydoc_0_downloads
    About Gusty - mydoc_0_about_gusty
    FAQs - mydoc_0_faq
    Example Authoring - mydoc_0_examples

  Intro & 1st Programs
    Introduction Overview - mydoc_1_overview
    Information, People, Computers - mydoc_1_information_people_computers
    IDEs, Compiling, Interpreting - mydoc_1_ides_compiling_interpreting
    Software Development Process - mydoc_1_software_development_process
    Problem Solving - mydoc_1_problem_solving
    Algorithms - mydoc_1_algorithms
    Numbers as Information - mydoc_1_numbers
    Chars as Information - mydoc_1_characters
    Primitive Types - mydoc_1_primitive_types
    Our First Java Programs - mydoc_1_first_programs

  Expressions
    Expressions Overview - mydoc_2_expressions
    Ar Exp- mydoc_2_arithmetic_expressions
    Rel & Boo Exp- mydoc_2_relational_boolean_expressions
    As Exp- mydoc_2_assignment_expressions
    Conditional Exp - mydoc_2_conditional_expression

  Methods
    Methods - mydoc_1a_methods
    Method Quick Ref - mydoc_1a_method_qr

  Simple Objects
    Simple Objects - mydoc_3_simple_objects
    Java Strings - mydoc_3_strings
    Java Scanner - mydoc_3_scanner
    Java Random - mydoc_3_random
    Our 1st Classes - mydoc_3_our_first_classes
    JavaDoc - mydoc_3_javadoc

  Control Flow
    Control Flow - mydoc_4_control_flow
    Seq, Blks, Scope - mydoc_4_seq_blocks_scope
    Cond - if, switch - mydoc_4_conditional
    Sample Code- mydoc_4_conditional_code
    while, for, do-while - mydoc_4_loops
    Loop Patterns - mydoc_4_loop_patterns
    Sample Code- mydoc_4_loop_code

  Debugging
    Debugging - mydoc_4a_debugging

  Arrays and ArrayLists
    Arrays and ArrayLists - mydoc_6_arrays_arraylists
    Arrays - mydoc_6_arrays
    ArrayLists - mydoc_6_arraylists

  Stack, Heap, Parameters
    Stack and Heap - mydoc_5_stack_heap
    Passing Par- mydoc_5_passing_parameters

  Exceptions, Try, File IO
    Exceptions, Try - mydoc_6a_exceptions_try
    File IO - mydoc_6a_fileio

  Classes, Objects, ...
    Classes, Obj, ...  - mydoc_5_classes_objects
    nullReferences - mydoc_5_null
    Class wo Meths - mydoc_5_class_without_methods
    This - mydoc_5_this
    Public & Private - mydoc_5_public_private
    Instance & Static - mydoc_5_instance_static
    Final - mydoc_5_final
    Enum Types - mydoc_5_enumeration_types
    toString, comparable - mydoc_5_toString_comparable
    Interface - mydoc_5_interface
    Subclasses - mydoc_5_subclasses

  Packages, ADTs
    Packages - mydoc_8_packages
    ADTs - mydoc_8_ADT

  Graphics
    Graphics Overview - mydoc_7_graphics
    Grph Output - - mydoc_7_graphics_drawing
    Grph Draw Code - mydoc_7_graphics_drawing_code
    Graphics Input  - mydoc_7_graphics_events
    Events Code - mydoc_7_graphics_events_code
    Netb GUI Builder - mydoc_7_netbeans_gui_builder

  Recursion, Searching, Sorting
    Method Call Fr- mydoc_9_method_call_frames
    Big O - mydoc_9_big_o
    Recursion - mydoc_9_recursion
    Searching - mydoc_9_searching
    Sorting - mydoc_9_sorting

  Reference Information
    Program Style - mydoc_A_programming_style
    Exp, State, Blks - mydoc_A_exp_statements
    Meta Language - mydoc_A_meta_language
    Input  Output - mydoc_A_i_o
```

## WebBook labs File Names

Each file has a name like **labs_lab01_01.md**.  Each file begins with **labs_lab**.  I had a particular order for teaching the class.  The order is reflected by the **_X** that follows labs_lab.  For example **labs_lab01**.  After the number is a number that reflects the lab in that lab group. I should have selected a better naming convention for labs, but after getting the content into the WebBook, I retained the convention.  The convention got more hard to associate a file with a lab when decided to rearrange the content of the course.  The following maps the labs to the points achievable and their filenames.

NOTE: Points are now kept in the Google Spreadsheet referenced on [Lab Points](/gustycooper.github.io/labs_lab00_01).

### Intro & 1st Programs Labs

Lab | Points | File Name
--- | ------ | ---------
Intro & 1st ProgOver | 0 | labs_lab01_00
Install BlueJ | 10 | labs_lab01_00
Questions | 20 | labs_lab01_00
First Program | 10 | labs_lab01_01
Second Program | 10 | labs_lab01_02
Primitive Types | 10 | labs_lab01_03

```java

   Labs
     Labs			landing_page
     Sample Lab Submission	00_00
     Lab Points			00_01

   Intro & 1st Programs
     Intro & 1st ProgOver  	01_00
     Install BlueJ - 10		01_00
     Questions - 20		01_00
     First Program - 10		01_01
     Second Program - 10	01_02
     Primitive Types - 10	01_03
     
   Expressions, Methods
     Exp, Methods Overview  	02_00
     Questions - 20		02_00
     Java Expr in Codepad – 	02_01
     Split the Bill - 		02_02
     Paycheck - 10		02_03
     TwoPays - 10		02_03a
     Average - 10		02_04
     Largest - 10		02_05
     Temperature - 10		02_06
     Dice - 10			02_07
     Strings - 10		02_08
      
   Simple Objects
     Simple Objects Overview	03_00
     Questions – 20		03_00
     Person Type		03_01
     Car Type – 20		03_02
     TwoPays Type – 10	03_03
     MyMath Type – 10	03_04
     Dice Type – 10		03_05
     MyString Type – 10	03_06
     Temperature Type – 10	03_07
      
   Control Flow
     Control Flow Overview	04_00
     Questions – 10		04_00
     First Loops  - 10		04_01
     Potato Class – 10		04_02
     Loops, Ifs, Switches – 10	04_03
     Millionaire – 10		04_04
     MyMath Take 2 – 10		04_05
     Twitter Type – 10		04_06
     Gerbil Game – 10		04_07
     Triangle – 10		04_08
     Credit Card Type – 10	04_09
     Pig Game People – 10	04_10
     Pig Game Computer – 10	04_11
      
   Arrays, ArrayLists
     Arrays, ArrayLists Over	06_00
     Questions – 5		06_00
     Install Netbeans – 10	05_00
     Person Revisited – 10	05_01
     Car Revisited – 10		05_02
     Loop Patterns – 20		06_01
     MyIntegers Type – 20	06_02
     Person Type Again – 20	06_03
     My Trip – 10		06_04

   Stack, Heap, Parameters
     Stack, Heap, Par Over	passing_parameters_overview
     Questions – 5		passing_parameters_overview
     Passing Primitive - 10	passing_primitive_types
     Passing Reference – 10	passing_reference_types
     Passing String – 10	passing_string_types

   Exceptions, Try, File I/O
     Exs, Try, FIO Over		ex_try_fileio_book
     Book			ex_try_fileio_book			

   Classes, Objects, ...
     Classes, Objs, .. Over	05_00
     Questions – 5		05_00
     Twitter Revisited – 30	05_03
     Student Type – 30	05_04
     Person Type AGAIN – 30	06_05
  
   Packages, ADTs
     Pack, Interfs, ADTs Over	08_00
     Questions – 10		08_00
     Stack ADT – 30		08_01
     Palindrome Checker – 20	08_02
     Paren Balance Ckr – 20	08_03
     MyMath Package – 20	08_04
      
   Graphics
     Graphics Overview	07_00
       Simple Graphics
         Graphics Repeat – 5	07_01_01
         1st Graphics Prog- 10	07_01_02
         Growing Circle Ani – 5	07_01_03
         Simple Ani Startr – 10	07_01_04
         Java Fonts – 5		07_01_05
         CGTemplate – 10	07_01_06
       Graphics Events
         Hello World Repeat – 5	07_02_01
         Capitalizer Repeat – 5	07_02_02
         MoveaLine Repeat – 10	07_02_03
         Netbeans GUI Bdlr – 10	07_02_04
         EndorSmints – 20	07_02_05

   Recursion, Searching, Sorting
     Recursion, Search Sort	09_00
     Questions – 10		09_00
       Recursion Labs
         Rec Power Meth – 20	09_01_01
         Rec Fibonacci Met – 20	09_01_02
         RecThinking – 20	09_01_03
         Rec Simple Maze – 10	09_01_04
         Rec Array Print – 10	09_01_05
         Rec ArrLst Print – 10	09_01_06

       Searching Labs
         Num Searching – 20	09_02_01
         Rec Linear Search – 20	09_02_02
         Rec Binary Search – 20	09_02_03
         String Searching – 20	09_02_04
         Updtng Hash.java – 20	09_02_05
         wordCount w Map – 20	09_02_06

       Sorting Labs
         Sorting Animation – 10	09_03_01
         Sort a Few Nums – 20	09_03_02
         Sort a Few Strs – 20	09_03_03
         Sort Bunch Strings– 20	09_04_04
         Rec Num Conve – 20	09_04_05
```

