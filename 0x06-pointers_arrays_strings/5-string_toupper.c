#include "main.h"

/**
 * string_toupper - capitalize all letters in string
 * @s: string to manipulate
 * Return: string with all letters capitalized
 */
char *string_toupper(char *)
{
	int i;

	for (i = 0 ; s[i] ; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
