#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: parameter
 * @f:function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
