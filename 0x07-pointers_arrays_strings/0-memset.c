#include "main.h"

/**
 * _memset - function that fills mmemmory with a constant byte
 * @s: string
 * @b: variable b
 * @n: bytes used n
 *
 * Return: return pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}


