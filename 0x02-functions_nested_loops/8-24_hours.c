#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * j = hour, i = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 00 ; i < 60 ; i++)
	{
		for (j = 0 ; j < 24 ; j++)
		{
			_putchar((j + '0'):( i + '0'));
		}
	_putchar('\n');
	}
}
