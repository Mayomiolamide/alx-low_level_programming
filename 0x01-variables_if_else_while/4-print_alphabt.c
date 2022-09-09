#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabeth <= 'z'; alphabet++)
{
	if (alphabet == 'q')
		continue;
	else if (alphabet == 'e')
		continue;

	putchar (alphabet);
}

putchar ('\n');

return (0);
}
