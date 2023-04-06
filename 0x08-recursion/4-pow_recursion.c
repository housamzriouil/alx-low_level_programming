#include "main.h"

/**
 * _pow_recursion - print the power of a given number
 * @x: number
 * @y: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	
	y = 0;
	return (x * (_pow_recursion(y + 1));
}
