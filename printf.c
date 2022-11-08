#include <stdlib.h>
#include "main.h"

/**
 * _printf - fct that can print the whole line + call fct that print everything
 * @format: base sentence
 * Return: i
 */

int _printf(const char *format, ...)
{
	type_t letterTest[] = {
		{"s", _prints},
		{"c", _printc},
		{"%", _printpourcent},
		{"i", _printint},
		{"d", _printint}
	};

	int i, j;

	va_list(ptr);

	va_start(ptr, format);

	for (i = 0 ; format && format[i] != '\0' ; i++)
	{
		if (format[i] != '%' && format[i] != '\0')
			putchar(format[i]);
		else
		{
			for (j = 0 ; letterTest[j].type != NULL ; j++)
			{
				if (format[i + 1] == letterTest[j].type[0])
				{
					letterTest[j].f(ptr);
					i = i + 1;
					break;
				}
			}
		}
	}
	if (i != 0)
		i--;
	va_end(ptr);
	return (i);
}
