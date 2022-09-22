#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @str: string to encode
 * Return: address of s
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform_2(str[i]);
		i++;
	}
	return (str);
}

/**
 * transform_2 - helper function to map
 * @x: char to be encoded
 *
 * Return: the encoded char
 */

char transform_2(char x)
{
	char one[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char two[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	char replacement = x;

	while (i < 52)
	{
		if (x == one[i])
		{
			replacement = two[i])
				break;
		}
		i++;
	}
	return (replacement);
}
