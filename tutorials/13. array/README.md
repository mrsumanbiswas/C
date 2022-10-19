# Arrays
#### Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

- To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].

- To insert values to it, use a comma-separated list, inside curly braces:
```c
int myNumbers[] = {25, 50, 75, 100};
```
We have now created a variable that holds an array of four integers.

# Access the Elements of an Array
- To access an array element, refer to its index number.

Array indexes start with 0: [0] is the first element. [1] is the second element, etc.

This statement accesses the value of the first element [0] in myNumbers:

## Example
```c
int myNumbers[] = {25, 50, 75, 100};
printf("%d", myNumbers[0]);

// Outputs 25

Change an Array Element
- To change the value of a specific element, refer to the index number:

## Example
myNumbers[0] = 33;
## Example
int myNumbers[] = {25, 50, 75, 100};
myNumbers[0] = 33;

printf("%d", myNumbers[0]);

// Now outputs 33 instead of 25
```
# Loop Through an Array
You can loop through the array elements with the for loop.

The following example outputs all elements in the myNumbers array:

## Example
```c
int myNumbers[] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);
}
```
# Set Array Size
Another common way to create arrays, is to specify the size of the array, and add elements later:

## Example
```c
// Declare an array of four integers:
int myNumbers[4];

// Add elements
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;
```