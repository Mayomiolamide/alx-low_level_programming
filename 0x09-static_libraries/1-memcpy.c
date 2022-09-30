#include "main.h"

/**
 * _memcpy - copy memmory area
 * @dest: memory desstination
 * @src: source memory
 * @n: variable n
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

