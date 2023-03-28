#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	for(int i = 0; i < n; ++i)
	{
		printf("%d, ", values[i]);
	}
	printf("\n");
	return 0;
}
