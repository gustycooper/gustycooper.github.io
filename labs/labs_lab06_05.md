---
title: Person Type - Again
keywords: looping pattern, array, arraylist
last_updated: June 6, 2016
summary: "Lab 5, Person Type - Again"
sidebar: labs_sidebar
permalink: /labs_lab06_05/
toc: false
---

## Java Person Class – Revisited One More Time

**Points**: Complete this entire section for 30 points.

This lab uses the Person class from Section 6.2 and the Student subclass (of Person) along with the Banner interface from Section 5.4. 
1. Begin with the Java Person class from 6.2.  This is the Person class that has friends that implemented as an ArrayList<Person> along with all of the methods defined.

2. Override the Java Object class toString() method for Person so that it prints the name of the person.

3. Update your Student class that implements the Banner interface so that it extends the Person class from 1.

4. Implement a Dog class that has a DogType enum that defines the following types of dogs: HOUND, COLLIE, GERMAN_SHEPARD, and POODLE.  You may add more types if you like.  You Dog class should define the DogType as public so that users of the class can do the following.  Your Dog class should satisfy the following API.

   * a. public Dog(String name, int age, DogType type) – Constructor where age is people years.
   * b. public String getName() – returns the name of the dog.
   * c. public DogType getType() – returns the type of the dog.
   * d. public int getAge() – returns the age of the dog in people years.
   * e. public int getDogAge() – returns the age of the dog in dog years where a people year is equal to 7 dog years.

      ```java
      Dog d = new Dog("Gusty", 5, Dog.DogType.HOUND);
      ```

5. Add the following methods to your Person class.

   * a. void addDog(Dog dog) – adds the Dog dog to the Person.  You can think of this as the Person now has a pet dog.  You can add as many pet dogs as you lik.
   * b. boolean hasDog() – returns true of the Person has a pet dog, otherwise returns false

6. Since you the methods addDog() and hasDog() are Person methods, your Students can have dogs for pets.

7. Create a PersonTester class that creates Persons and Students that allows you to do the following.  You can use your imagination to add to this scenario.

   * a. You will create five Persons, some of which are Students: Gusty, Jeremy, Brandalee, Coletta, and Emily
   * b. Gusty is a Person, but not a Student.  Gusty does not have any dogs.  
   * c. Jeremy is a Person, but not a Student.  Jeremy has two Dogs.  One is a poodle named Dot, who is 4 people years old.  The other is named collie named Elle who is 3 people years old.
   * d. Brandalee is a Student with a GPA of 3.8.  Brandalee has the same two Dogs as Jeremy.
   * e. Coletta is a Person, but not a Student.
   * f. Emily is a Student with a GPA of 3.6.  Emily does not have any dogs.
   * g. Gusty’s friends are Jeremy, Brandalee, and Coletta.  Gusty’s favorite friend is Coletta.
   * h. Emily has Jeremy and Coletta as friends. Emily’s favorite friend is Jeremy.
   * i. Coletta’s friends are Jeremy, Brandalee, Gusty, and Emily. Coletta’s favorite friend is Gusty.
   * j. Brandalee’s friends are Jeremy and Coletta.  Brandalee’s favorite friend is Coletta.
   * k. Jeremy’s friends are Brandalee, Coletta, and Emily.  Jeremy’s favorite friend is Brandalle.
   * l. Create an array of Persons – in the following, I use Person[] people as the name of this array.  Put Gusty, Brandalee, Jeremy, Coletta, and Emily in the array.  You should notice that Brandalee and Emily are Students, but they can be placed in the array.
   * m. Create a for-each loop that loops through the array of Persons.  Print the name of each Person.  If the Person is an instance of a Student, print the GPA.  Since you have overridden the toString() method, given that the you can do this by the following.

     ```java
     for (Person p : people) {
         System.out.println(p)
         if (p instanceof Student)
            System.out.println(p.getFirstName() + " GPA is " +
                               ((Student)p).getGpa());
     }
     ```

   * n. Create a for-each loop that loops through the array of Persons.  On each iteration of the loop do the following.
     * i. Print the favorite friend of the Person.
     * ii. Print the favorite friend of the favorite friend of the Person.
     * iii. Print all Dogs that the Person has as pets.
     * iv. Print all Dogs of the favorite friend of the Person.
     * v. Print the age in Dog years of all poodles that any person may have as a pet.

