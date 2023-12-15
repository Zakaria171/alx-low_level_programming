#include "main.h"
/**
 * _pow - calculates power of a number
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: power value
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1 ; a <= power ; a++)
	{
		num *= base;
	}
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char b;

	b = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			b = 1;
			_putchar('1');
		}
		else if (b == 1 || div == 1)
		{
			_putchar('0');
		}
		div = div >> 1;
	}
}
