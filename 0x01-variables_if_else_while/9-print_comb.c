#include <stdio.h>

/**
 * main - Prints a series of numbers with commas
 *
 * Return: Always(Success);
 */
int mian(void)
{
	int c;

	for (c = '0', c <= '9', c++)
	{
	putchar(c);
	if (c != '9')
	{
	Putchar(',');
	putchar('');
	}
	}
	putchar('\n');
	return (0);
}
