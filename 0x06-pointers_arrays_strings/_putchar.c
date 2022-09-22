#include <unistd.h>

/**
 * _putchar -writes the ch
 * @c: the character
 *
 * Return: on success 1.
 * on error, -1 is returnedd
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
