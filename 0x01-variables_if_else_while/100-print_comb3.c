#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: always (0)
 */
int main(void)
{
	int i, j;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
