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
	while(n)
	{
		dest[n - 1] = src;
		n--;
	}
	return (dest)
}
