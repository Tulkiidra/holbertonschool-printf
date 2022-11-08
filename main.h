#ifndef MAIN
#define MAIN
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

/**
 * struct type - struct for function call
 * @type: letter
 * @f: function
 */

typedef struct type
{
	char *type;
	int (*f)(va_list ptr);
} type_t;

void _printINTMIN(void);
char *decimal_to_char(int num, char *str);
int _printc(va_list ptr);
int _printpourcent(va_list ptr);
int _printint(va_list ptr);
int _prints(va_list ptr);
int _printf(const char *format, ...);

#endif
