#include "main.h"
/**
 * print_line - print a line
 *
 * @n: line lenght
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
