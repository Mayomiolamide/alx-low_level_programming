#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - recursion
 * @n: variable n
 *
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns the square
 * @n: test num
 * @x: squared
 *
 * Return: the square root
 */
int _sqrt(int n, int x)
{
	int square = x * x;

	if (square > n)
		return (-1);
	if (square == n)
		return (x);
	return (_sqrt(n, 1 + x));
}	
