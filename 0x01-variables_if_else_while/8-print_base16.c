#include <stdio.h>

/**
 * main - prints a hexadecimal string
 *
 * Retuen:Always(success)
 */
int ain(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
