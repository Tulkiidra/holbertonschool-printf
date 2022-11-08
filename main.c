#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2, a;

	len = _printf("%c", 'S');
	len2 = printf("%c", 'S');
	fflush(stdout);
	if (len != len2)
	{
		a = len2 - len;
		printf("%d\n", a);
		fflush(stdout);
		return (1);
	}
	return (0);
}
