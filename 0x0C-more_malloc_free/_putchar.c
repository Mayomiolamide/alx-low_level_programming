#include <stdio.h>

/**
 * _putchar - put char
 * @c: vairable c
 *
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
