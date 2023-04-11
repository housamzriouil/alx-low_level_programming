#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: array values
 * Return: pointer to array 
 */
char *create_array(unsigned int size, char c)
{
	char *arry;
	int i = 0;

	if (size <= 0)
		return (NULL);
	arry = malloc(sizeof(char) * size);
	if (arry == NULL)
		return (NULL);

	while (i < (int)size)
	{
		*(arry + i) = c;
		i++;
	}
	*(arry + i) = '\0';

	return (arry);
}
