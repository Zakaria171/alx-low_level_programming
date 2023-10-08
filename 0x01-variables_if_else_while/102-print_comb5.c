#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: always(0)
 */
int main(void)
{
	int i, j;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			if (i < j)
			{
				putchar('0');
				putchar(i);
				putchar(' ');
				putchar('0');
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
