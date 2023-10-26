#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * actual_sqrt_recursion - calculates sqrt of a number
 * @n: number to calculate
 * @i: possible solution
 * Return: square root of n
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: integer to calculate the natural square root of
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (actual_sqrt_recursion(n, 0));
}
