#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to duplicate
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *copy_str;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++, len++;
	len++;

	copy_str = malloc(sizeof(char) * len);

	if (copy_str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(copy_str + i) = *(str + i);
		i++;
	}
	
	return (copy_str);
}
