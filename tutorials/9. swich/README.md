# Switch Statement
Instead of writing many if..else statements, you can use the switch statement.

- The switch statement selects one of many code blocks to be executed:

## Syntax
```c
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```
- This is how it works:

1. The switch expression is evaluated once
1. The value of the expression is compared with the values of each case
1. If there is a match, the associated block of code is executed
1. The break statement breaks out of the switch block and stops the execution
1. The default statement is optional, and specifies some code to run if there is no case match
1. The example below uses the weekday number to calculate the weekday name:

### Example
```c
int day = 4;

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
}

// Outputs "Thursday" (day 4)
```

# The break Keyword
- When C reaches a break keyword, it breaks out of the switch block.

- This will stop the execution of more code and case testing inside the block.

- When a match is found, and the job is done, it's time for a break. There is no need for more testing.

- A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.

## The default Keyword
The default keyword specifies some code to run if there is no case match:

### Example
```c
int day = 4;

switch (day) {
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
}

// Outputs "Looking forward to the Weekend"
```