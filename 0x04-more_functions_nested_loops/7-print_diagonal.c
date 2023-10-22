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

	for (i = 0 ; i < n ; i++)
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
	}
}
