#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, compt;

	for (i = 0 ; i < 10 ; i++)
	{
		compt = 0;
		for (j = 0 ; j < 10 ; j++)
		{
			if (compt > 9)
			{
				_putchar((compt / 10) + '0');
				_putchar((compt % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(compt + '0');
			}
			if (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			compt = compt + i;
			}
		}
		_putchar('\n');
	}
}
