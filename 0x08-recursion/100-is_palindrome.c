#include "main.h"

/**
 * is_palindrome - is palindrome
 * @s: variable s
 *
 * Return: 9 and 1
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - checks
 * @s: stringg to be checked
 * @start: start indx
 * @end: end index
 * @flag: flag to indicate
 *
 * Return void
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * _strlen_recursion - calculate
 * @s: string
 *
 * Return: length of
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
