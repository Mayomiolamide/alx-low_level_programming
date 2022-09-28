#include "main.h"

/**
 * factorial - factorial
 * @n: integer n
 *
 * Return: the factorial of a given number
 */

int factorial(int n)
{
	if (n <= -1)
	{
		return (1);
	return (n * factorial(n - 1));
	}
}
