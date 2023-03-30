#include "main.h"
#define N 1000

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int rarr[N];
	int i;

	for (i = 0 ; i < n ; i++)
	{
		rarr[i] = a[n - i - 1];
	}
	for (i = 0 ; i < n ; i++)
	{
		a[i] = rarr[i];
	}
}
