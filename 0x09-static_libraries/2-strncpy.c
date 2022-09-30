#include "main.h"

/**
 * _strncpy - functions that copies a string
 * @dest: cody destination
 * @src: source string
 * @n: numbey of byte copied
 * Return: retrun @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
