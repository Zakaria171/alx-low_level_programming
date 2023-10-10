#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: always(0)
 */
void print_alphabet(void)
{
	char low_alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		_putchar(low_alp[i]);
	}
	_putchar('\n');
}
