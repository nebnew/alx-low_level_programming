#include "main.h"
/**
 * print_alphabet -> prints the lowercasse alphabets
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
