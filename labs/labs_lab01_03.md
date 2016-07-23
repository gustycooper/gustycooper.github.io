---
title: Primitive Types Lab
keywords: primitive, types
summary: "<li>Understand Java primitive types from a programming perspective.</li>"
sidebar: labs_sidebar
permalink: /labs_lab01_03/
toc: false
---

## Java Primitive Types Lab

**Points**: Complete this entire section for 20 points.  To get the full 20 points, you have to add your own code to the sample provided.

1. For this section you can continue adding code to your public static void main() function.
2. Declare at least one variable of every primitive Java type. 
3. Assign a literal constant to each of your declared variables.
4. Create assignment statements for at least three variables of different primitive types that require casting.  The following is an example

   ```java
   double d = 2.3;
   float f = 1.1F;
   f = (float) d;
   ```

5. Create assignment statements for at least three variables that cast literals that are too large for the variable.  The following is an example.
byte b = (byte) 200;
6. Your program shall print all of your variables to the standard output.  The following is an example.
System.out.println(b);
7. Use System.out.print() and System.out.println() so that you understand the difference between them.
8. Use System.out.println() to print numbers as a number and numbers as a string.  Observe the difference.

   a. System.out.println(3 + 4 + 5); 

   b. System.out.println("3 + 4 + 5");

9. Use System.out.println() to print the following and observe.

   a. “Double ” + 3.1415

   b. “Int “ + 45

10. The following is some sample code, but you should experiment with your own variations of these samples.

```java
public static void main(String[] args) {
    String g = "Gusty";
    String c = "Cooper";
    byte b1 = (byte)127;
    byte b2 = (byte)128;
    short s1 = (short)65535;
    short s2 = (short)65536;
    int i = 32000;
    long l = 32000;
    System.out.println("Hello world."); 
    System.out.println("Hello "+g);
    String str128_zeroes = String.format("%32s", 
         Integer.toBinaryString(128)).replace(" ", "0");
    String str128_spaces = String.format("%32s", 
         Integer.toBinaryString(128));

    System.out.println(" (int)128 in Binary (leading spaces)" + str128_spaces);
    System.out.println(" (int)128 in Binary (leading zeroes)" + str128_zeroes);
    System.out.println("(byte)128 in Binary " + Integer.toBinaryString((byte)128));
    System.out.println("     -128 in Binary "+ Integer.toBinaryString(-128));
    System.out.println("b1: "+b1+" b2: "+b2); 
    System.out.print("s1: "+s1+" s2: "+s2); 
    System.out.print(“i and l:”+i+" "); 
    System.out.print(l+" "); 
    System.out.println(); 
    System.out.println("(byte) 2**32: " +    
                        (byte)Math.pow((double)2,(double)32)+" ");
    System.out.println("(short) 2**32: " + 
                        (short)Math.pow((double)2,(double)32)+" ");
    System.out.println("(int) 2**32: " + 
                        (int)Math.pow((double)2,(double)32)+" ");
    System.out.println("(long) 2**32: " + 
                        (long)Math.pow((double)2,(double)32)+" ");
    long two_32 = (long)Math.pow((double)2,(double)32);
    System.out.print("(long) 2**32 as binary" +   
                             Long.toBinaryString(two_32));
    System.out.println("");
    System.out.print(1+" ");
    System.out.print(2+" ");
    System.out.print(3+" ");
    System.out.println(100);
    System.out.println("Gusty "+c);
    System.out.println(); 
    boolean b = 3 < 5;
    System.out.println("b: "+b);
    System.out.println(g);
    char a = ‘a’;
    System.out.println(a);
}
```

