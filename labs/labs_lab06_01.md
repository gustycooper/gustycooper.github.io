---
title: Looping Patterns, Arrays, ArrayLists Lab
keywords: looping pattern, array, arraylist
last_updated: June 6, 2016
summary: "<li>Practice using arrays and ArrayLists in the looping patterns.</li>"
sidebar: labs_sidebar
permalink: /labs_lab06_01/
---

## Looping Patterns with Arrays and ArrayLists

**Points**: Complete this entire section for 25 points.

This section allows you to practice programming looping patterns.  We first studied looping patterns in [Loop Patterns](/gustycooper.github.io/mydoc_5_loop_patterns).  We first practiced writing code for loopint patterns in [Loops, Ifs, Switches Lab](/gustycooper.github.io/labs_lab04_03).  We continue practicing our looping patterns in this lab.  These looping patterns are used over-and-over in programming.  All good programmers know these patterns like the back of their hands.  All of the patterns are variations of the accumulator pattern.  The looping patterns in this section include the following.

* Count the number of times a value is in an array/array list.
* Find the largest value in an array/array list.
* Find the smallest value in an array/array list.
* Compute the sum of the values in an array/array list.
* Compute the product of the values in an array/array list.
* Compute the average of values in an array/array list.

You will recall that we programmed some of these patterns in Lab 4 when we studied loops.  These are the same patterns, but now we use them with loops and arrays/array lists.  The following shows an accumulator pattern that computes the sum of the numbers from 1 to 10 without an array, and two versions of the pattern that computes the sum of numbers in an int[] array.  The first version uses a counting for loop.  The second version uses a for-each (or enhanced) for loop.

```java
int sum = 0;
for (int i = 1; i <= 10; i++)
   sum += i;

int[] ia = {1,2,3,4,5,6,7,8,9,10};
sum = 0;
for (int i = 0; i < ia.length; i++)
   sum += ia[i];

sum = 0;
for (int ele : ia)
   sum += ele;
```

To complete this section you will write a LoopingPatterns class that has the standard public static void main(String[] args) method.  You will write additional public static void methods for each of the patterns.  All of these methods can be in the same class.  You should realize that this approach means that we will not create objects of LoopingPatterns.  Instead, we will simply run the main() method which will call our various pattern methods.  By following this style, you will better learn that Java static attribute. The overall structure of the class will be something like the following.  Note this example does not show all of the methods.

```java
public class LoopingPatterns {
  static void fillArray(String filename, double[] numbers)   
              throws java.io.FileNotFoundException { ... }
  static void fillArrayList(String filename, ArrayList<Double> numbers) 
              throws java.io.FileNotFoundException { … }
  static class Person { …  }
  static Person oldest(ArrayList<Person> people) { ... }
  static int[] allMatches(double[] numbers, double value) { … }
  public static void main(String[] args)
         throws FileNotFoundException { ... }
}  
```

### Techniques to Populate Arrays and ArrayLists

In order to write programs that process arrays and array lists, you have to populate them.  This subsection discussing populating arrays and array lists.  Two techniques are discussed.  The first technique does not read data from files.  The first technique is covered in sections 6.0.1.1 through 6.0.1.4.  The second technique reads data from files.  The second technique is covered in sections 6.0.1.5 through 6.0.1.7.

#### Populating an Array When Declared

Populating an array can be done when the array is declared.   The following are examples of populating an int[] and a double[].

```java
int[] ia = {1,2,3,4,5,6,7,8,9,10};
double[] da = {3.2, 5, 6.9, 50000.4321};
```

This same technique can be used with multiple dimensioned arrays.   The following is an example of populating a 3x3 int[][].

```java
int[][] ia2d = { {1,2,3},
                 {4,5,6},
                 {7,8,9} };
```

This same technique can be used with an array that is a reference type (like Person).  One technique is to create Person objects and use them as part of the initialization.  The following demonstrates this technique.

```java
Person gusty = new Person(“Gusty”);
Person coletta = new Person(“Coletta”);
Person [] people = {gusty, coletta, new Person(“JerriAnne”)};
```

#### Populating an Array with a Loop

You should realize that a Java array is a reference variable, similar to String, Person, Car, etc.  You can declare a Java array that has an initial value of null – it does not reference an array.  When you do this, you have to use the new operator to create an array object.  Then you need some other technique to populate your array.  The following demonstrates this with a for loop to populate an int[].

```java
int[] ia;         // at this point ia’s value is null
// int x = ia[0]; // generates an array index exception
ia = new int[10]; // create array object of size 10
for (int i = 0; i < ia.length; i++)
    ia[i] = i+1;  // populate ia with 1,2,3,4,5,6,7,8,9,10
```

#### Populating an ArrayList with a Loop

You cannot populate an ArrayList when it is declared.  You will have to use some looping technique as described in the last example with arrays.  The following shows how to populate an ArrayList<Integer> using an array.

```java
int[] ia = {1,2,3,4,5,6,7,8,9,10};
ArrayList<Integer> ial = new ArrayList<Integer>();
for (int ele : ia)
   ial.add(ele);
```

#### Example of main() Populating Arrays and ArrayLists

You main() method will have to declare and populate an array/array list in order to pass it to your pattern methods.  The following demonstrates main() populating an array of doubles, and array list of Doubles, and passing them to their respective average methods.

```java
public static void main(String[] args) {
   double[] da = {3.2, 5, 6.9, 50000.4321};
   ArrayList<Double> dal = new ArrayList<Double>();
   for (double ele : da)
      dal.add(ele);
   double a1 = average(da);
   double a2 = average(dal);
}
```

#### Populating an Array and ArrayLists by Reading a File

Another technique to populating arrays and array lists is to read data from file.  If you use this technique, you will get to practice with File input.    Connecting a Java File class to a Java Scanner class does this.  We have used Java Scanner class objects to read input from the console.  By connecting a Scanner to a File, you can read input from text files.  You will create two static methods that will read the contents of a file.  The first method reads the file into a double[] array.  The second method reads the contents of a file into an ArrayList<Double>.

#### static void fillArray(String filename, double[] numbers)

```static void fillArray(String filename, double[] numbers)``` – uses a Scanner and a File to create a fillArray() method that you can use to fill arrays from file contents for use in the subsequent methods.  The signature for this method will throw a FileNotFoundException, which is shown as follows.  I include the File and Scanner for your review. You have to be careful with this method so that it does not overflow the double[] array actual parameter.

```java
static void fillArray(String filename, double[] numbers) throws   
     java.io.FileNotFoundException 
{ 
    File inputFile = new File(filename); 
    Scanner inDouble = new Scanner(inputFile);
    int index = 0;
    while (inDouble.hasNextDouble()) {
        double number = inDouble.nextDouble();
        numbers[index] = number;
        index++;
    }
}
```

You should notice how fillArray() throws a java.io.fileNotFoundException.  We study exceptions in [Exceptions, Try](/gustycooper.github.io/mydoc_6a_exceptions).  For now you can mimick this code.  Since you will be calling this method from your main() method, your main() must either catch of throw the exception.  For example, you can declare you main() as follows.

```java
public static void main(String[] args) throws FileNotFoundException
```

In order for you Netbeans project to be able to read a file, you must put the file in the correct folder.  You should notice that Netbeans creates a folder for each of your projects.  Suppose you have created a Netbeans project named LoopingPatterns to contain all of your code for section 6.0.  Netbeans would have the following folder structure.

* LoopingPatterns – top-level folder for your project.
  * build – this folder contains a classes folder that contains your .class files.
  * nbproject – this folder contains information that Netbeans uses to build and run you code.
  * src – this folder contains your .java files
  * smallDoubleFile.txt – this is the text file that contains the values you want to fill your array.  Notice how this file is placed in the LoopingPatterns folder.

The contents of your smallDoubleFile.txt can be something like the following.

```java
100
2.0
3.2
100
5.4
7
100
```

Given the above information, you main() method can call your fillArray() method as follows.  You should notice how the array numbers can hold 20 doubles, and the file smallDoubleFile.txt contains 7 values.  If the size of the array numbers was too small, the fillArray() method would generate an array out of bounds exception.

```java
        double[] numbers = new double[20];
        fillArray("smallDoubleFile.txt", numbers);
```

You have to make sure that your methods to compute average and the array input match.  For example, if you called the method average() from 6.0.2 with the array numbers from above, you would get an incorrect average because numbers.length is 20, but numbers only contains 7 values.  When Java processes the statement

```java
        double[] numbers = new double[20];

Java will fill numbers with 20 values of 0.0.   This means when using fillArray() you should match the number of elements in the array with the number of data values in the file.  The following is a better example of using with fillArray() and average().

```java
        double[] numbers = new double[7];
        fillArray("smallDoubleFile.txt", numbers);
        double ave = average(numbers);
```
 
#### static void fillArrayList(String filename, ArrayList<Double> numbers)

```static void fillArrayList(String filename, ArrayList<Double> numbers)``` – This method is just like fillArray() except it is filling an ArrayList.  This is a safer method since you can keep adding to an ArrayList.  Remember that ArrayLists contain objects – not Java’s primitive data types.  That is why we use Double, which is the object that Java provides to box the elementary double type.  This method will throws java.io.FileNotFoundException just like fillArray.  The following is the code for this method.  When Java executes the statement numbers.add(number); Java performs boxing to change the double number to a Double.   Java also boxes in the other direction – for example number = numbers.get(0);

```java
static void fillArrayList(String filename, ArrayList<Double> numbers) throws java.io.FileNotFoundException 
{
   File inputFile = new File(filename); 
   Scanner inDouble = new Scanner(inputFile);
   int index = 0;
   while (inDouble.hasNextDouble()) {
      double number = inDouble.nextDouble();
      numbers.add(number);
      index++;
   }
}
```

### Methods to Compute an Average from an Array and ArrayList of Doubles

You shall write the code for two average methods, one has a double[] formal parameter and the other has an ArrayList<Double> formal parameter.  You should populate some arrays and ArrayLists and test your average methods.

```java
static double average(double[] numbers) – returns the average of the doubles in the array numbers.
static double average(ArrayList<Double> numbers) – returns the average of the doubles in the ArrayList numbers.
```


### Method to Count the Number of Times a Value is in an Array/Array List

You shall write the code for two count methods, one has a double[] formal parameter and the other has an ArrayList<Double> formal parameter.  You should populate arrays and ArrayLists and test your count methods.

```java
static int count(double[] numbers, double value) – returns the number of times value appears in the array numbers.

static int count(ArrayList<Double> numbers, double value) – returns the number of times value appears in the ArrayList numbers.
```

### Method to Find the Largest Value is in an Array/Array List

You shall write the code for two largest methods, one has a double[] formal parameter and the other has an ArrayList<Double> formal parameter.  You should populate arrays and ArrayLists and test your largest methods.

```java
static double largest(double[] numbers) – returns the largest value in the array numbers.
static double largest(ArrayList<Double> numbers) – returns the largest value in the ArrayList numbers.
```

### Method to Find the Oldest Person in an ArrayList of Persons

You shall write the code for a method that returns the oldest Person in an ArrayList of Person.   For this problem, you should create a simple static class Person inside of your LoopingPatterns class.  Why does it have to be a static class?  The following demonstrates the beginnings of how to put a static class Person inside of your LoopingPatterns class.  You will have to create a way to populate your ArrayList<Person>.  You may want to create a method fillPerson(String filename, ArrayList<Person>) to fill an ArrayList<Person> from a file.  If you do pursue this, the file would contain a sequence of lines where each line has a name and age.  The next 5 lines are an example of the file contents.

```java
Gusty 22
Coletta 1
JerriAnne 20
Jeremy 29
Brandalee 29
```

The following code shows LoopingPatterns with a static class Person and the method that returns the oldest person in an ArrayList<Person>.

```java
public static class LoopingPatterns {

   static class Person {
      private String name;
      private int age;
      Person(String name, age) {
        this.name = name;
        this.age = age;
      }
      String getName() {
        return this.name;
      }
      ... more code for person
   }

   static Person oldest(ArrayList<Person> people) { 

      // put you code here to find the oldest person

   }

   public static void main(String[] args) 
    throws java.io.FileNotFoundException
   {
     Person p1 = new Person(“Gusty”,100);
     Person p2 = new Person(“Coletta”,1);
     ArrayList<Person> pal = new ArrayList<Person>();
     pal.add(p1);
     pal.add(p2);
     Person p3 = oldest(pal);
     System.out.println(p3.getName());
   }
}
```

### Method to Convert String to Char[] to String

```static String stringToCharToString(String s, char toReplace, char newChar)``` – Use the ```String``` method ```toCharArray``` to first convert the formal parameter s to a local ```char[]```.  Then loop through the local ```char[]``` replacing each occurrence of the ```char toReplace``` with the ```char newChar```.  Finally, the method uses the ```String``` constructor ```String(char[])``` to convert the changed local ```char[]``` back to a ```String``` in order to return it.

