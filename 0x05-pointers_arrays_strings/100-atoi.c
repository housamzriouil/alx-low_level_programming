#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sum = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			printf("\nCan't Convert Into Integer");
			return 0;
		}
		else
		{
			sum = sum *10 + (str[i] - 48);
			i++;
		}
	}

	return sum;

}
