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
		{"d", _printint},
		{NULL, NULL}
	};
	int i = 0, j = 0, decrem = 0, stringlen = 0;

	va_list(ptr);
	va_start(ptr, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
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
					i++;
					stringlen = stringlen + (letterTest[j].f(ptr));
					decrem++;
					break;
				}
			}
			putchar('%');
		}
	}
	i = i - decrem + stringlen;
	va_end(ptr);
	return (i);
}
