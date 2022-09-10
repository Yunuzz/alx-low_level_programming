#include <stdio.h>
/**
 * main - prints the alphabet reverse
 *
 * Retuen:Always (success)
 */
int main(void)

{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
