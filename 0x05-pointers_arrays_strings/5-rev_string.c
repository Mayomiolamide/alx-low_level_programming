#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - Prints a string in reverse order
 * @s: String to reverse
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i,len,temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp =s[i];
		s[i] = s[len - i - 1];

		s[len - i - 1] = temp;
	}
	revstr(str);
}
