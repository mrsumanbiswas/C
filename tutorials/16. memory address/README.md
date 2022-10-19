# Memory Address
- When a variable is created in C, a memory address is assigned to the variable.

- The memory address is the location of where the variable is stored on the computer.

- When we assign a value to the variable, it is stored in this memory address.

- To access it, use the reference operator (&), and the result will represent where the variable is stored:

### Example
```c
int myAge = 43;
printf("%p", &myAge); // Outputs 0x7ffe5367e044
```
**Note:** The memory address is in hexadecimal form (0x..). You probably won't get the same result in your program.

*You should also note that &myAge is often called a "pointer". A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the %p format specifier.*
