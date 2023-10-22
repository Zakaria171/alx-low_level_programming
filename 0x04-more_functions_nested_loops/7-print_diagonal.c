#include "main.h"
/**
 * print_diagonal - prints diagonal
 *
 * @n: number of lines
 * return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		_putchar(92);
		_putchar('\n');
		for (j = 0 ; j <= i ; j++)
		{
			if (i != n - 1)
			{
				_putchar(' ');
			}
		}
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
