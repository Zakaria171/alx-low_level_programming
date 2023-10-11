#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @a: number in input
 * Return: last digit
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -1 * (a % 10);
	}
	_putchar((a % 10) + '0');
	return (a % 10);
}
