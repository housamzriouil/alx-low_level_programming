#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n, C;

	for (n = 0 ; n < 10 ; n++)
                putchar('0' + n);
        for (C= 'a'; C <= 'f'; C++)
		putchar(C);
	putchar('\n');

	return (0);
}
