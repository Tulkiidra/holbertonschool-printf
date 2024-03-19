### Project Name: Custom printf Function (_printf)

#### Summary:
This project aims to recreate the functionality of the printf function in C. Printf is used to send formatted output to the standard output, converting arguments into character strings as necessary. In this project, the custom printf function is named _printf.

#### Files:
1. **Flowchart Printf.drawio:** A flowchart illustrating the project's workflow, aiding collaboration.
2. **decimal_to_char.c:** Converts decimal arguments (%d) into strings, ensuring compatibility.
3. **functions.c:** Provides compatibility for various arguments (%s, %c, %i) in printf.
4. **printf.c:** The core of the _printf function, determining output string length and invoking necessary functions from functions.c to handle arguments.
5. **main.h:** Header files containing function prototypes and definitions.
6. **man_3_printf:** Man page detailing the usage and functionality of the _printf function.

#### How to Use _printf:
```c
#include <main.h>

int main(void) {
    _printf("Let's try to print %d simple sentence.\n", 1);
    return (0);
}
```

#### Note:
The _printf function does not support some functionalities of the standard printf function.

---

This enhanced README provides a concise overview of the project, its components, usage instructions, and limitations, facilitating better understanding and usage for developers.
