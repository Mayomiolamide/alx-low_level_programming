#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: string pointer
 *
 * Return; length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	
	if (*S != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}

