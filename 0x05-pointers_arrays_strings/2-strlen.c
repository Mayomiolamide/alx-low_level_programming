#include "main.h"

/**
 * int _strlen - integer to check str length
 * @s: string
 * Return: return len as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s + len) != '\0')
		len++;

	return (len);
}
