#include <stdio.h>

/**
 * main - Ommit some alphabet
 *
 * Return:Always (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if ((c == 'e') || (c == 'q'))
	
		{
			continue;
		}
			putchar(c);
	}
	}

	putchar('\n');
	return (0);
