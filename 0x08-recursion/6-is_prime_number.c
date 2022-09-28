#include "main.h"

/**
 * is_prime_number - prime nummber
 * @n: interger n
 *
 * Return: 11
 */
int is_prime_number(int n)
{
	int g = n / 2;

	if (n <= 1)
		retrun(0);
	return (is_prime_number(n, g));
}
			
