#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: the number
 * @root: root
 * Return: square root
 */
int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: the number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
