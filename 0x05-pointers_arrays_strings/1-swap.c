#include "main.h"
/**
 * swap_int - swap the value of two integers
 *
 * @a: first integer to swap
 * @b: sconde integer to swap with
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	if ((*a != 0) && (*b != 0))
	{
		*a = *b;
		*b = c;
	}
}
