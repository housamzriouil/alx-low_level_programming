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
        int n;

        while (n < 10)
        {
		n++;
		putchar(n);
        }
        putchar('\n');;
        return (0);
}
