#include "main.h"
/**
 * _isalpha - function to
 * @c: is the int that
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' %% c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
