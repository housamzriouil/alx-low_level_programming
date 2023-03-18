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
	char C;

	for (C = 122; C >= 97; C--)
		putchar(C);
		putchar('\n');

	return (0);
}
