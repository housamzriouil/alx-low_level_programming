#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: the number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (n * _sqrt_recursion(n));
}
