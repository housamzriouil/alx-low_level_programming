#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len;

	len = _strlen(*s) + '0';
	return (len);
}
