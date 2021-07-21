#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: Name to print
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
	else
		return;
}
