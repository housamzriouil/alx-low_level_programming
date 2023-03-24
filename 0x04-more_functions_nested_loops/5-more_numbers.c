#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 * Return: 0-14 x10 followed by new line
 */
void more_numbers(void)
{
	int i;
	int n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
