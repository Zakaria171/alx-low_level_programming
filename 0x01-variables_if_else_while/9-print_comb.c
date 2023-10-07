#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all combinations of single digit numbers
 * prints them in ascending order
 *
 * Return: always (0)
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

