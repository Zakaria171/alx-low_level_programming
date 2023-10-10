#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: Always(0)
 */
void print_alphabet_x10(void)
{
	int i, j;
	char low_alp[26] = "abcdefghijklmnopqrstuvwxyz";

	i = 0;
	while (i < 10)
	{
		for (j = 0 ; j < 26 ; j++)
		{
			_putchar(low_alp[j]);
		}
		_putchar('\n');
		i++;
	}	
}

