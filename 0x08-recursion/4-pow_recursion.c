#include "main.h"

/**
 * _pow_recursion - power recursion
 * @x: variable x
 * @y: variable y
 *
 * Return: 1 if 1 is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
