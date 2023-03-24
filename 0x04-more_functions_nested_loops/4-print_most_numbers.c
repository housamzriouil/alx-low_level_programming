#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char c, a, b;

	a = '2';
	b = '4';

	for (c = 48; c <= 57; c++)
	{
		if (c != a && c != b)
			putchar(c);
	}
	putchar('\n');
}
