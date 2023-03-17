#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char C;

        for (C = 'a' ; C <= 'z' && C!= 'e' && C!= 'q' ; C++)
        {
                putchar(C);
        }
                putchar('\n');

        return (0);
}
