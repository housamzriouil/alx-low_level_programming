#include "main.h"

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	while (*p != '\0')
	{
		p++;
	}
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(p++) = src[i];
	}
	*p = '\0';
	return dest;
}
