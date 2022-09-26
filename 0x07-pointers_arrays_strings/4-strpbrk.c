#include "main.h"

/**
 * _strpbrk - function to serach for any set of bytes
 * @s: variable s
 * @accept: accept whatever
 *
 * Return: accept or null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
