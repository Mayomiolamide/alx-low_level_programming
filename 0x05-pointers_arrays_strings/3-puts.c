#include "main.h"

/**
 * _puts - prints string
 * @str: string to print
 *
 * Description: prints a string
 * on success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
