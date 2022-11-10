#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @str: the array to reverse
 * @i: number of element
 * Return: str
 */

char *reverse_array(char *str, int i)
{
	int at;
	char tp;

	i--;

	for (at = 0 ; at < i ; at++, i--)
	{
		tp = str[at];
		str[at] = str[i];
		str[i] = tp;
	}
	return (str);
}
/**
 * decimal_to_char - transfo int to ascii
 * @num: num to change
 * @str: where to put the array
 * Return: str
 */

char *decimal_to_char(int num, char *str)
{
	int rem;
	int i = 0;
	int isNegative = 0;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}

	while (num != 0)
	{
		rem = num % 10;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / 10;
	}

	if (isNegative == 1)
		str[i++] = '-';

	str[i] = '\0';

	reverse_array(str, i);

	return (str);

