#include <stdio.h>
/**
 * main -entry point
 *
 * codes for combinations of two digits
 * in ascending and decesnding  by a comma floowed by a space
 *
 * Return: Success
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit1 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
			continue;

			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
