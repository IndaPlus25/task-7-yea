### Deadline
This work should be completed before the exercise on **Friday 3rd November**.

### Instructions
For instructions on how to do and submit the assignment, please see the
[assignments section of the course instructions](https://gits-15.sys.kth.se/inda-17/course-instructions#assignments).

### Homework
Study all sections lined up below and be prepared to discussed the material.

* **5th ed:** 5.1 -- 5.9 and 5.11 -- 5.14
* **6th ed:** Sections 6.1 -- 6.10 and 6.12 -- 6.15

### Github Task:
You must complete the following exercises (n.b 5th Edition only here):

- 5.14 & 5.16 -- 5.20
- Using JavaDoc, write the class documentation for `RandomTester`
- 5.57 -- 5.60
- 5.62 & 5.64 -- 5.66
- 5.71

Please commit any written answers to the "docs" folder, and commit any Java
code developed to the "code" folder of your KTH Github repo. Remember to push
to KTH Github.

### RandomTester

#### Exercise 5.14
Write some code (in BlueJ) to test the generation of random numbers. To do
this, create a new class called RandomTester. In class RandomTester, implement
two methods: `printOneRandom` (which prints out one random number) and
`printMultiRandom(int howMany)` (which has a parameter to specify how many
numbers you want, and then prints out the appropriate number of random
numbers).

#### Exercise 5.16
Write a method in your RandomTester class called `throwDice` that returns a
random number between 1 and 6 (inclusive).

#### Exercise 5.18
Extend your `getResponse` method so that it uses an ArrayList to store an
arbitrary number of responses and randomly returns one of them.

#### Exercise 5.20
Add a method `randInRangeMinMax` to your RandomTester class that takes two
parameters, min and max, and generates a random number in the range min to max
(inclusive). Rewrite the body of the method you wrote for the previous exercise
so that it now calls this new method to generate its result. Note that it
should not be necessary to use a loop in this method.

### Scribble Demo

#### Exercise 5.57
In class DrawDemo, create a new method named `drawTriangle`. This method should
create a pen (as in the drawSquare method) and then draw a green triangle.

#### Exercise 5.58
Write a method `drawPentagon` that draws a pentagon.

#### Exercise 5.59
Write a method `drawPolygon(int n)` that draws a regular polygon with n sides
(thus, n=3 draws a triangle, n=4 draws a square, etc.).

#### Exercise 5.60
Write a method called `spiral` that draws a spiral (see Figure 5.6).

### Bouncing Balls

#### Exercise 5.62
Change the method `bounce` in class BallDemo to let the user choose how many
balls should be bouncing.

#### Exercise 5.64
Change the `bounce` method to place the balls randomly anywhere in the top half
of the screen.

#### Exercise 5.65
Write a new method named `boxBounce`. This method draws a rectangle (the “box”)
on screen and one or more balls inside the box. For the balls, do not use
BouncingBall, but create a new class BoxBall that moves around inside the box,
bouncing off the walls of the box so that the ball always stays inside. The
initial position and speed of the ball should be random. The boxBounce method
should have a parameter that specifies how many balls are in the box.

#### Exercise 5.66
Give the balls in boxBounce random colors.

### Star Wars

#### Exercise 5.71
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

And now your task: Create a new BlueJ project named star-wars. In it create a
class named NameGenerator. This class should have a method named
generateStarWarsName that generates a Star Wars name, following the method
described above. You will need to find out about a method of the String class
that generates a substring.
