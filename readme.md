# Graphical Mind Fornication Format(GMMF)
## What is GMMF?
GMMF is an image format based on the Brainfuck programming language. 
## What is Brainfuck?
Brainfuck, for those who have strangely never heard of it, is probably the most mainstream esoteric language there is. Short terminology reminder: An esoteric language is a language made for fun.
## Why Brainfuck?
Brainfuck is used for many reasons, but the mains are:
- It's simple to implement an interpreter for;
- It manipulates numbers on an array which allows to generate PPM-like images by executing code to generate the numbers automatically. An array only has to be ``3\*width\*height`` integers long, which seems a lot, until you realize that's exactly a PPM. Sure, it's inefficient for big pictures, but you'll see I am not exactly trying to render something the size of a Fairmont.
- And finally, you can have a picture of excellent quality take up a few megabytes, but a picture of 16x16 take up 16GB because it's Brainfuck, which is a programming language, and in a programming language, often, you have more than one way of doing a thing. For example, you could decide to put up a ``><><><><><><><><><><><><><><><><>`` simply to go one to the right, but since technically it's legit Brainfuck code, you could put one, or two, or 699548496400386594 of them inside a file. It's pointless, it's gonna make the GMMF reader lag, it increases your file size, but you can.
## The difference with standard Brainfuck
|Brainfuck Feature|Is available in GMMF|Function|
|-----------------|--------------------|--------|
| > | ✔ | Moves the pointer to the right |
| < | ✔ | Moves the pointer to the left |
| [ | ✔ | Begin a loop there |
| ] | ✔ | If the selected space is not set to zero, restart the loop |
| + | ✔ | Increments the value of the space the pointer is at |
| - | ✔ | Decrements the value of the space the pointer is at |
| . | ❌ | Output a value |
| + | ❌ | Input a value |
-----------------------

We don't need t