#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n: the number to be calculated
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n -1));
}
