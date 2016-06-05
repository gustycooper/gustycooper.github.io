---
title: Codepad Expressions
keywords: expression
last_updated: June 5, 2016
summary: "Codepad Expressions"
sidebar: labs_sidebar
permalink: /labs_lab02_01/
toc: false
---

## Create Java Expressions

**Points**: Understand this entire section for 10 points.  If you do not understand Java expressions, this section provides you with the opportunity to practice in the BlueJ Codepad.  The BlueJ Codepad is a nice tool that I use to experiment with Java features.  If you understand Java expressions, then proceed to the next section.

Expressions are a central component of programming.  You will use expressions on the right-hand side of an assignment statement, controlling if statements, controlling switch statements, controlling loop statements, as actual parameters, and as the return expression.  You have to master expressions to be a good programmer.  For the most part, expressions are intuitive; however, mixing types can be tricky, Boolean expressions require careful thought, and Java has several fancy operators such as ++, +=, *=, and ? :.  The more you practice creating expressions, the better programmer you will be.  

Use the BlueJ Codepad window to create arithmetic expressions so that you understand how operators and types interact.  When creating statements in the BlueJ Codepad, the semicolon, which terminates Java statements, can be inserted or omitted.  When a statement in the BlueJ Codepad does not have a semicolon the BlueJ Codepad will display the results.  Consider the following several example statements as entered into the BlueJ Codepad with and without semicolons.  The font colors are indicative of the font colors in BlueJ Codepad.

```java
double x = Math.PI;
int ten = 10;
x
3.141592653589793   (double)
ten += 1
11   (int)
double y;
Note: Codepad variables are automatically initialized
 in the same way as instance fields.
y
0.0   (double)
y = x + 10
13.141592653589793   (double)
byte b = 300;
Error: incompatible types: possible lossy conversion from int to byte
byte b = 128;
Error: incompatible types: possible lossy conversion from int to byte
byte b = 127;  // finally
byte bb = (byte)300;
bb
44   (byte)
bb = (byte)255
-1   (byte)
boolean myBool = 5 < 6;
myBool
true   (boolean)
double d = 5.0;
double dd = 10.0;
double e = d < 10 ? 20.0 : 25.0;
e
20.0   (double)
```


I have provided a list of expressions that you should enter into the BlueJ Codepad, but you should experiment with your own expressions.  Be sure to notice which of the following is terminated with a semicolon and enter them as such.  I will ask you to evaluate expressions on tests.  The following are words from David Eck’s book describing Java operators.

Here is a listing of the operators discussed in this section, listed in order from highest precedence (evaluated first) to lowest precedence (evaluated last):

Description | Operators
--------------------------- | --------------------------------------
Unary                       | ```++``` ```--``` ```!``` ```unary -``` ```unary +``` ```type-cast```
Multiply Divide             | ```*```  ```/```  ```%```
Add Subtract                | ```+```  ```-```
Relational                  | ```<```  ```>```  ```<=```  ```>=```
Equality                    | ```==```  ```!=```
Boolean and                 | ```&&```
Boolean or                  | ```||```
Conditional                 | ```?:```
Assignment                  | ```=```  ```+=```  ```-=```  ```*=```  ```/=```  ```%=```

Operators on the same line have the same precedence. When operators of the same precedence are used in an expression without parentheses, unary operators and assignment operators are evaluated right-to-left, while the remaining operators are evaluated left-to-right. You are most likely familiar with left-to-right evaluation.  For example, ```x * y / z``` is evaluated as ```(x * y) / z```.  For right-to-left evaluation consider multiple assignments.  ```i = j = k``` is evaluated as ```i = (j = k)```.

The following are examples of expression evaluation questions I will ask on tests.

```java
int i = 24;
double x = 1.123;
int j = i / 5;               // What is the value of j?
double d = i / 5;            // What is the value of d? 
d = i / 5.0;                 // What is the value of d?
boolean b = true && false;   // What is the value of b?
boolean c = b || d < 5;      // What is the value of c?
c = d < 5;                   // What is the value of c?
i = d > 5 ? 20 : 21;         // What is the value of d?
double y = 4+5 * 6;          // What is the value of y
i = y - 3;                   // What is the value of i?  
                             // Maybe this statement is illegal.
d = Math.sqrt(25) * 5;       // What is the value of d?
```

As you work through the above and following expressions, you should practice evaluating them so that you know the answers and are prepared for our tests.  Be sure to create expressions that use all of the Java operators.

```java
int oneMillion = 1000000;
int mystery = oneMillion * oneMillion; // -727379968
oneMillion // 1000000
mystery // -727379968
double unitPrice = 4.35;
double totalPrice = 100 * unitPrice; // 434.999999999999994
oneMillion++ // post increment, displays 1000000
oneMillion   // 1000001
++oneMillion // pre increment, displays 1000002
oneMillion   // 1000002
oneMillion-- // post decrement, displays 1000002
oneMillion   // 1000001
--oneMillion // pre decrement, displays 1000000
oneMillion += 1 // 1000001
oneMillion -= 1 // 1000000
oneMillion*oneMillion  // -727379968
double d = 3;
d
int i = d; // incompatible types
int i = (int) d;
i
i = i--
i
i = --i
i
int j = 3;
i = j = i+10 // a legal but confusing statement
i
j
boolean b = 5 < 6;
b
false && b
false || b
!b
```

