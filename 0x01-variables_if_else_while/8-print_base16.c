#include <stdio.h>

/**
 * main - prints a hexadecial string
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
	putchar('\n');
	return (0);
}
