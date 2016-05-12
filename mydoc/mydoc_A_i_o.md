---
title: Java I/O
tags: [io]
keywords: console, I/O, file I/O
last_updated: May 1, 2016
summary: "Java I/O"
sidebar: mydoc_sidebar
permalink: /mydoc_A_i_o/
---

## Appendix C: Input and Output

## C.1 I/O with System.out and Scanner

{% raw %}
```java
import java.util.Scanner;

System.out.print(“This is 1 + 2 = “); // no linefeed
System.out.println(1+2);

Scanner stdin = new Scanner( System.in );
System.out.print(“Enter interest rate: “);
rate = stdin.nextDouble();
System.out.print(“Enter number of years: “);
int numYears = in.nextInt();

// A sentinel loop
System.out.print(“Enter a value, Q to quit: “);
while (in.hasNextDouble()) {
  double value = in.nextDouble();
  if (value < 0) {
    counter++
  }
  System.out.print(“Enter a value, Q to quit: “);
}
```
{% endraw %}

## C.2 File I/O

## C.2.1 File Input
The following shows reading a file where each line contains a student’s name.  This code does not handle the exception very well since we just print the stack trace.  Production code would provide some better indications to the user and repeat until the user enters correct data.


{% raw %}
```java
private final ArrayList<String> studentNames = new ArrayList<String>();
private void loadStudentNames() throws IOException {
    BufferedReader in = null;
    try {
        in = new BufferedReader(new FileReader(STUDENTS_FILENAME));
        String studentLine;
        while (null != (studentLine = in.readLine())) {
            studentNames.add(studentLine);
        }
    } catch (FileNotFoundException e) {
        e.printStackTrace();
    } catch (IOException e) {
        e.printStackTrace();
    } finally {
        if (in != null) {
            in.close();
        }
    }
}
```
{% endraw %}

The following shows equivalent code that uses a try with resources.  Notice how the try statement allocates the resources – BufferedReader and FileReader.  Since they are allocated in the try statement, they are deallocated (in this case closed) automatically.

{% raw %}
```java
private final ArrayList<String> studentNames = new ArrayList<String>();

private void loadStudentNames() throws IOException {
    try (BufferedReader in = new BufferedReader(  
         new FileReader(STUDENTS_FILENAME))) {
        String studentLine;
        while (null != (studentLine = in.readLine())) {
            studentNames.add(studentLine);
        }
    } catch (FileNotFoundException e) {
        e.printStackTrace();
    } catch (IOException e) {
        e.printStackTrace();
    }
}

BufferedReader br = new BufferedReader(new FileReader("file.txt"));
try {
   StringBuilder sb = new StringBuilder();
   String line = br.readLine();

   while (line != null) {
      sb.append(line);
      sb.append(System.lineSeparator());
      line = br.readLine();
   }
   String everything = sb.toString();
} finally {
   br.close();
}

private void loadPlayerData() throws Exception {
    BufferedReader br = new BufferedReader(new FileReader(
            PLAYER_FILENAME));
    String playerLine = br.readLine();
    while (playerLine != null) {
 // for (int i=0; i<2; i++) {
        Scanner line = new Scanner(playerLine).useDelimiter(",");
        playerNames.add(line.next());
        playerClasses.add("battleship.players." + line.next() +
                "_BattleshipPlayer");
        playerLine = br.readLine();
    }
}
```
{% endraw %}

## C.2.2 File Output

The following demonstrates a function to write an ArrayList.

{% raw %}
```java
private static ArrayList<String> studentNames = new ArrayList<String>();

private static void writeStudentNames() {
    Charset charset = Charset.forName("US-ASCII");
    Path file;
    file = Paths.get("studentsOut.txt");
    try (BufferedWriter out = Files.newBufferedWriter(file, charset)) {
        for (String studentName : studentNames) {
            out.write(studentName, 0, studentName.length());
            out.write("\n");
        }
    } catch (IOException e) {
        e.printStackTrace();
    }
}
```
{% endraw %}

An alternative code snippet for writing to a file is given as follows.

{% raw %}
```java
String content = "This is the content to write into file";
File file = new File("filename.txt");
FileWriter fw = new FileWriter(file.getAbsoluteFile());
BufferedWriter bw = new BufferedWriter(fw);
bw.write(content);
bw.close();// be sure to close BufferedWriter 
```
{% endraw %}

