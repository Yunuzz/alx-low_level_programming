#include <stdio.h>

/**
 *Description:Write a program that prints all possible combinations
 * main - prints a series of numbers with commas
 *
 * return - always(success)
 */
int main(void)
{
int c;
	for (c = '0'; c <= '9'; c++);
{
putchar(c);
	if (c != '9')

{
putchar(',');
putchar(' ');
} 
}
	putchar('\n');
	return (0);
}
