#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all digit numbers without using printf
 *
 * Return: always(0)
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
