
# Syntax
You have already seen the following code a couple of times. Let's break it down to understand it better:

### Example ###
```c
#include <stdio.h>

int main() {
  printf("Hello World!\");
  return 0;
}
```

### Example explained

- **Line 1:** `#include <stdio.h>` is a header file library that lets us work with input and output functions, such as printf() (used in line 4). Header files add functionality to C programs.

Don't worry if you don't understand how  `#include <stdio.h>` works. Just think of it as something that (almost) always appears in your program.

- **Line 2:** A blank line. C ignores white space. But we use it to make the code more readable.

- **Line 3:** Another thing that always appear in a C program, is main(). This is called a function. Any code inside its curly brackets {} will be executed.

- **Line 4:** printf() is a function used to output/print text to the screen. In our example it will output "Hello World".

**Note that:** Every C statement ends with a semicolon ;

**Note:** The body of int main() could also been written as:
`int main(){printf("Hello World!\");return 0;}`

Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.

- **Line 5:** return 0 ends the main() function.

- **Line 6:** Do not forget to add the closing curly bracket } to actually end the main function.


# Tokens in C
- A **C** program consists of various tokens and a token is either a keyword, an identifier, a constant, a string literal, or a symbol. For example, the following C statement consists of five tokens −

`printf("Hello, World! \n");`


#### The individual tokens are −
```
printf
(
   "Hello, World! \n"
)
;
```