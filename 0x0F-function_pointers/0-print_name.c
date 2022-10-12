#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: parameter to be printed
 * @f: variable f
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
