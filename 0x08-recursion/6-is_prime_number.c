#include "main.h"
int actual_prime_number(int n, int i);
/**
 * actual_prime_number - verifies if a number is prime
 * @n: number to verify
 * @i: index
 * Return: result
 */
int actual_prime_number(int n, int i)
{
	if (i >= n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (actual_prime_number(n, i + 1));
}
/**
 * is_prime_number - tells if a number is prime or not
 * @n: number to verify
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime_number(n, 2));
}
