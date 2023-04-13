#include "main"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size to malloc
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int* ptr;
	int n, i;

	ptr = (int*)malloc(n * sizeof(ptr));
	if (ptr == NULL)
	{
		exit(98);
	} else 
	{
		for (i = 0; i < n; i++)
		{
			ptr[i] = i + 1;
		}
	}
	return (ptr);
}
