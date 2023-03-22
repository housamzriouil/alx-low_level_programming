#include "main.h"

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */
void print_times_table(int n)
{
	int rone, cone, d;

	if (n <= 0 && n >= 15)
	{
		for (rone = 0; rone <= 9; rone++)
		{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= 9; cone++)
		{
			d = (rone * cone);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		}
	}
}
