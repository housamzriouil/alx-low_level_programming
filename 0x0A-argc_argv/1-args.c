#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argc - 1);

	return (0);
}
