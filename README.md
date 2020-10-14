### Deadline
This work should be completed before the exercise on **Friday 30th October**.

### Instructions
For instructions on how to do and submit the assignment, please see the
[assignments section of the course instructions](https://gits-15.sys.kth.se/inda-20/course-instructions#assignments).

### Preparation
You must read and answer the questions in the OLI material:

- Read [Module 7: Documentation](https://kth.oli.cmu.edu/jcourse/webui/syllabus/module.do?context=3f7e379aac1f088828b966ee895dc6bd)
- If you have not done so, goto https://kth.oli.cmu.edu/, signup and register for the course key `dd1337-ht20`

You may wish to also read from _Objects First with Java_:
- **5th edition:** 5.1 -- 5.9, 8.9 and 5.11 -- 5.14
- **6th edition:** 6.1 -- 6.10 and 6.12 -- 6.15

> **Assistant's note:** 8.9 is grabbed seemingly out of nowhere for the 5th edition
> as it covers Autoboxing and wrapper classes, which is covered in 6.10 in 6th
> edition.

### Github Task:
You must complete the following exercises. Exercise numbers in parentheses
are for the 6th ed, while the ones without are for the 5th ed.

- 5.14, 5.16, 5.18 and 5.20 (6.14, 6.16, 6.18 and 6.20)
- 5.XX
- 5.57 -- 5.60 (6.62 -- 6.65)
- 5.62 & 5.64 -- 5.66 (6.68 and 6.70-6.72)
- 5.71 (6.87)

Please commit any written answers to the [`docs`](docs) folder, and commit any
Java code developed to the [`src`](src) folder of your KTH Github repo.
Remember to push to KTH Github.

### RandomTester

#### Exercise 5.14 (6.14)
Write some code (in BlueJ) to test the generation of random numbers. To do
this, create a new class called RandomTester. In class RandomTester, implement
two methods: `printOneRandom` (which prints out one random number) and
`printMultiRandom(int howMany)` (which has a parameter to specify how many
numbers you want, and then prints out the appropriate number of random
numbers).

#### Exercise 5.16 (6.16)
Write a method in your RandomTester class called `throwDice` that returns a
random number between 1 and 6 (inclusive).

#### Exercise 5.17 + 5.18 (6.17 + 6.18)
Write a method called `getResponse` that randomly returns a string from a
collection of strings. You can add an `ArrayList<String>` as a field `words` to
your RandomTester class and fill it with a few strings of your choosing. The
`getResponse` will randomly returns one of these strings when called.

#### Exercise 5.20 (6.20)
Add a method `randInRangeMinMax` to your RandomTester class that takes two
integer parameters, `min` and `max`, and returns a random number in the range
min to max (inclusive).

### Autoboxing and wrapper classes

#### Exercies 5.XX
**a:** Rewrite the following statement to utilize autoboxing:

```java
Integer wrapped = new Integer(2);
```

**b:** Write a statement that unboxes the `wrapped` variable into a primitive
`int` variable called `unwrapped`.

### Scribble Demo

#### Exercise 5.57 (6.62)
In class DrawDemo, create a new method named `drawTriangle`. This method should
create a pen (as in the drawSquare method) and then draw a green triangle.

#### Exercise 5.58 (6.63)
Write a method `drawPentagon` that draws a pentagon.

#### Exercise 5.59 (6.64)
Write a method `drawPolygon(int n)` that draws a regular polygon with n sides
(thus, n=3 draws a triangle, n=4 draws a square, etc.).

#### Exercise 5.60 (6.65)
Write a method called `spiral` that draws a spiral that looks something like this:

![Spiral example](./spiral-example.png | width=320)

### Bouncing Balls

#### Exercise 5.62 (6.68)
Change the method `bounce` in class BallDemo to let the user choose how many
balls should be bouncing.

#### Exercise 5.64 (6.70)
Change the `bounce` method to place the balls randomly anywhere in the top half
of the screen.

#### Exercise 5.65 (6.71)
Write a new method named `boxBounce`. This method draws a rectangle (the “box”)
on screen and one or more balls inside the box. For the balls, do not use
BouncingBall, but create a new class BoxBall that moves around inside the box,
bouncing off the walls of the box so that the ball always stays inside. The
initial position and speed of the ball should be random. The boxBounce method
should have a parameter that specifies how many balls are in the box.

#### Exercise 5.66 (6.72)
Give the balls in boxBounce random colors.

### Star Wars

#### Exercise 5.71 (6.87)
There is a rumor circulating on the Internet that George Lucas (the creator of
the Star Wars movies) uses a formula to create the names for the characters in
his stories (Jar Jar Binks, ObiWan Kenobi, etc.). The formula—allegedly—is
this:

```
Your Star Wars first name:
1 Take the first three letters of your last name.
2 Add to that the first two letters of your first name.

Your Star Wars last name:
1 Take the first two letters of your mother’s maiden name.
2 Add to this the first three letters of the name of the town or city where you were born.
```

And now your task: Create a new class named `NameGenerator`. This class should
have a method named `generateStarWarsName` that generates a Star Wars name,
following the method described above. You will need to find out about a method
of the String class that generates a substring. The method
`generateStarWarsName` should return the name, rather than print it.

### Grading Criteria
Each week we will communicate grading criteria through the [issue tracker](../../issues/). Grading criteria set the basic standards for a pass, komp or fail, so it is essential you review them each week. These will change over time as your skills develop, so make sure you read the grading criteria issue carefully and tick off all the requirements.
