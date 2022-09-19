#include main.h

/**
 * swap_int - to swap two integers
 * @a: first integer
 * @b: second integer
 * Return: retun nothing
 */

void swap_int(int *a, int *b)
{
	int yea = *a;
	
	*a = *b;
	*b =yea;
}
