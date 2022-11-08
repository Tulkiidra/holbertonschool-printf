#include "main.h"

/**
 * _prints - print string
 * @ptr: va list
 * Return: len of str
 */

int _prints(va_list ptr)
{
	int len = 0;
	char *string = va_arg(ptr, char *);

	if (string)
	{
		for (len = 0 ; string[len] != '\0' ; len++)
			putchar(string[len]);
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
	return (len - 1);
}

/**
 * _printc - print char
 * @ptr: va list
 * Return: 1
 */

int _printc(va_list ptr)
{
	putchar(va_arg(ptr, int));
	return (0);
}


/**
 * _printpourcent - print pourcent
 * @ptr: va list
 * Return: 1
 */

int _printpourcent(__attribute__((unused))va_list ptr)
{
	putchar('%');
	return (0);
}

/**
 * _printint - print int
 * @ptr: va list
 * Return: 1
 */

int _printint(va_list ptr)
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
	return (0);
}
