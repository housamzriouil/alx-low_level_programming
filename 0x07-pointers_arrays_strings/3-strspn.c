#include "main.h"
#include <stdio.h>

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len;

	len = 0;

	for (i = 0 ; S[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (S[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j + 1] == '\0' && S[i] != accept[j])
		{
			return (len);
		}
		len++
	}
	return (len);
}
