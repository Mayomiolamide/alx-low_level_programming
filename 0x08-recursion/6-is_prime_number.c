#include "main.h"

/**
 * is_prime_number - prime nummber
 * @n: interger n
 *
 * Return: 11
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime -returns
 * @n: odh
 * @start: snshs
 *
 * Return: 1
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return(is_prime(n, start - 1));
}
			
