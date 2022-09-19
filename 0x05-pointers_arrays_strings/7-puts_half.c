#include "main.h"

/**
 * puts_half - puts half
 * @str: string para
 */

void puts_half(char *str)
{
	int x, y, i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (1 = y; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
