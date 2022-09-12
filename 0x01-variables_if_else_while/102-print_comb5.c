#include <stdio.h>

/**
 * main - prints possible combination of two two-digit numbers,
 * ranging from 0-99, separated by a comma followed by a space. 
 *
 * Return: always 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num2++)
	{
		for (num2 = 0; num2 <= 98; num2++)
		{
			putchar((num1 / 10) + '0');
			puthcar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			
			if (num1 == 98 && num2 == 99)
				continue;
			
			putchar(',');
			putcahr(' ');
		}
	}
	
	putchar('\n');
	
	return (0);
}

