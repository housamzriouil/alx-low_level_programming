#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("Size of an int:%lu",(unsigned long)sizeof (i));
	printf("Size of a char:%lu",(unsigned long)sizeof (c));
	printf("Size of a float:%lu",(unsigned long)sizeof (f));
	printf("Size of a long int:%lu",(unsigned long)sizeof (li));
	printf("Size of a long long int:%lu",(unsigned long)sizeof (lli));
	return (0);
}
