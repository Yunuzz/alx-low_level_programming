#include <stdio.h>

/**
 * main - lowercase alphabets
 *
 *
 * You can only use the putchar
 * Return:Always(sucess)
 */

int main(void)
{
	char c;

	for( c= 'a'; c <= 'z'; c++ )
		putchar(c);

	putchar('\n');

	return (0);
}
