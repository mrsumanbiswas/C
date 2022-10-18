

# Output (Print Text)
- To output values or print text in C, you can use the printf() function:

### Example
```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
```

- You can use as many printf() functions as you want. However, note that it does not insert a new line at the end of the output:

### Example
```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("I am learning C.");
  return 0;
}
```


# New Lines
- To insert a new line, you can use the \n character:

### Example
```c
#include <stdio.h>

int main() {
  printf("Hello World!\n");
  printf("I am learning C.");
  return 0;
}
```
- You can also output multiple lines with a single printf() function. However, be aware that this will make the code harder to read:

### Example
```c
#include <stdio.h>

int main() {
  printf("Hello World!\nI am learning C.\nAnd it is awesome!");
  return 0;
}
```
- **Tip:** Two `\n` characters after each other will create a blank line:

### Example
```c
#include <stdio.h>

int main() {
  printf("Hello World!\n\n");
  printf("I am learning C.");
  return 0;
}
```
