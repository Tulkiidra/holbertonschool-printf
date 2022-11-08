#include "main.h"

/**
 * _prints - print string
 * @ptr: va list
 */

void _prints(va_list ptr)
{
	int i;
	char *string = va_arg(ptr, char *);

	if (string)
	{
		for (i = 0 ; string[i] != '\0' ; i++)
			putchar(string[i]);
	}
	else
	{
		putchar('(');
		putchar('n');
		putchar('u');
		putchar('l');
		putchar('l');
		putchar(')');
	}
}

/**
 * _printc - print char
 * @ptr: va list
 */

void _printc(va_list ptr)
{
	putchar(va_arg(ptr, int));
}


/**
 * _printpourcent - print pourcent
 * @ptr: va list
 */

void _printpourcent(__attribute__((unused))va_list ptr)
{
	putchar('%');
}

/**
 * _printint - print int
 * @ptr: va list
 */

void _printint(va_list ptr)
{
	int i, num = va_arg(ptr, int);
	char *number;

	number = malloc(10);

	number = decimal_to_char(num, number);

	for (i = 0 ; number[i] != '\0' ; i++)
	{
		putchar(number[i]);
	}

	free(number);
}
