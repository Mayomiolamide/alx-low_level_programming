#include "main.h"

/**
 * factorial - factorial
 * @n: integer n
 *
 * Return: the factorial of a given number
 */

int factorial(int n)
{
	if (n <= 0)
		return (-1);
	return (n * factorial(n - 1));
}
