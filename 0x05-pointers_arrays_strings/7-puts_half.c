#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
void puts_half(char *str)
{
	int mid, i, k, len;

	mid = len / 2;
	for (i = mid ,k = 0 ; i <= mid ; i++ , k++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
