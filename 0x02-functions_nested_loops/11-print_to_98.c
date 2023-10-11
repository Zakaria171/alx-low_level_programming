#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers from to to 98
 *
 * @n: number with which begin the count
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (i = n ; i < 99 ; i++)
		{
			printf("%d, ", i);
		}
	}
}
