#include <unistd.h>

/**
 * _putchar - putchar file
 * @c: the character to print
 *
 * Return: 0
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
