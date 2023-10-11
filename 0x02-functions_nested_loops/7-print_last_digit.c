#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @a: number in input
 * Return: last digit
 */
int print_last_digit(int a)
{
	int last_dig;

	last_dig = (a % 10);
	_putchar(last_dig + '0');
	return (last_dig);
}
