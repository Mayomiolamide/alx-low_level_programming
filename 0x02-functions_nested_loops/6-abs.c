#include "main.h"
#include <stdio.h>
/**
 * _abs - function that com
 * @c: is the int
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
