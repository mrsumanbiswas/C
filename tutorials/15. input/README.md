# User Input
You have already learned that printf() is used to output values in C.

To get user input, you can use the scanf() function:

## Example
Output a number entered by the user:

```c
// Create an integer variable that will store the number we get from the user
int myNum;

// Ask the user to type a number
printf("Type a number: \n");

// Get and save the number the user types
scanf("%d", &myNum);

// Output the number the user typed
printf("Your number is: %d", myNum);
```
*The scanf() function takes two arguments: the format specifier of the variable (%d in the example above) and the reference operator (&myNum), which stores the memory address of the variable.*

**Tip:** You will learn more about memory addresses and functions in the next chapter.

# User Input Strings
You can also get a string entered by the user:

## Example
Output the name of a user:
```c
// Create a string
char firstName[30];

// Ask the user to input some text
printf("Enter your first name: \n");

// Get and save the text
scanf("%s", firstName);

// Output the text
printf("Hello %s.", firstName);
```