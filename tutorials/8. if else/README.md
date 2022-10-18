# Conditions and If Statements
You learned from the operators comparison chapter, that C supports the usual logical conditions from mathematics:

**Less than:** `a < b`

**Less than or equal to:** `a <= b`

**Greater than:**` a > b`

**Greater than or equal to:** `a >= b`

**Equal to:** `a == b`

**Not Equal to:** `a != b`

#### You can use these conditions to perform different actions for different decisions.

## C has the following conditional statements:

1. Use if to specify a block of code to be executed, if a specified condition is true
1. Use else to specify a block of code to be executed, if the same condition is false
1. Use else if to specify a new condition to test, if the first condition is false
1. Use switch to specify many alternative blocks of code to be executed
The if Statement
1. Use the if statement to specify a block of C code to be executed if a condition is true.

## Syntax
```c
if (condition) {
  // block of code to be executed if the condition is true
}
```
Note that if is in lowercase letters. Uppercase letters (If or IF) will generate an error.

In the example below, we test two values to find out if 20 is greater than 18. If the condition is true, print some text:

### Example
```c
if (20 > 18) {
  printf("20 is greater than 18");
}
```
We can also test variables:

### Example
```c
int x = 20;
int y = 18;
if (x > y) {
  printf("x is greater than y");
}
```
### Example explained
In the example above we use two variables, x and y, to test whether x is greater than y (using the > operator). As x is 20, and y is 18, and we know that 20 is greater than 18, we print to the screen that "x is greater than y".

# The else Statement
Use the else statement to specify a block of code to be executed if the condition is false.

## Syntax
```c
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}
```
### Example
```c
int time = 20;
if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
// Outputs "Good evening."
```
### Example explained
In the example above, time (20) is greater than 18, so the condition is false. Because of this, we move on to the else condition and print to the screen "Good evening". If the time was less than 18, the program would print "Good day".

# The else if Statement
Use the else if statement to specify a new condition if the first condition is false.

## Syntax
```c
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
```
### Example
```c
int time = 22;
if (time < 10) {
  printf("Good morning.");
} else if (time < 20) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
// Outputs "Good evening."
```
### Example explained
In the example above, time (22) is greater than 10, so the first condition is false. The next condition, in the else if statement, is also false, so we move on to the else condition since condition1 and condition2 is both false - and print to the screen "Good evening".

However, if the time was 14, our program would print "Good day."

#### Another Example
This example shows how you can use if..else to find out if a number is positive or negative:

### Example
```c
int myNum = 10; // Is this a positive or negative number?

if (myNum > 0)
  printf("The value is a positive number.");
else if (myNum < 0)
  printf("The value is a negative number.");
else
  printf("The value is 0.");
```


# Short Hand If...Else (Ternary Operator)
There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

## Syntax
_variable = (condition) ? expressionTrue : expressionFalse;_

**Instead of writing:**

Example
```c
int time = 20;
if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
```
**You can simply write:**

Example
```c
int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");
```