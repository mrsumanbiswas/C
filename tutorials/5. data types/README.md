# Data Types
As explained in the Variables chapter, a variable in C must be a specified data type, and you must use a format specifier inside the printf() function to display it:

### Example
```c
// Create variables
int Num = 5;             // Integer (whole number)
float FloatNum = 5.99;   // Floating point number
char Letter = 'D';       // Character

// Print variables
printf("%d\n", Num);
printf("%f\n", FloatNum);
printf("%c\n", Letter);
```

## Basic Data Types
- The data type specifies the size and type of information the variable will store.

- In this tutorial, we will focus on the most basic ones:

| Data Type |	Size |	Description |
|---|---|---|
| int |	2 or 4 bytes | Stores whole numbers, without decimals |
|float	|4 bytes	|Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits|
|double|	8 bytes|	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits|
|char|	1 byte|	Stores a single character/letter/number, or ASCII values|

## Basic Format Specifiers
- There are different format specifiers for each data type. Here are some of them:

|Format Specifier | Data Type|
|---|---|
%d or %i|int
%f	|float
%lf	|double
%c	|char