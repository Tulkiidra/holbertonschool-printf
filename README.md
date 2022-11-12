Summarize: 

This project is about recreating the function printf. Printf sends an output to the standarts output by formatting the argument(s) passed in and converting the arguments(s) into a character string. This function will be called _printf.

____________________________________________________________________

What are every files :

Flowchart Printf.drawio | it's the project flowchart, facilitating the group work.

decimal_to_char.c | Function that allows %d arguments compatibility ; it can convert a decimal to a string.

functions.c | Function that allow every arguments (%) compatibility (like %s, %c or %i).

printf.c | Main part of the _ printf function that allows to get the length of the string in output and that calls every functions in function.c to use arguments in the string.

main.h | Header files

man_3_printf | Man page of our function _printf.

____________________________________________________________________

How to use _printf:

#include <main.h>

int main(void)
{
  _printf("Let's try to print %d simple sentence.\n", 1);
  return (0):
 }

____________________________________________________________________

Note:

The _printf function does not support some printf functionalities.
