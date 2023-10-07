#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all hexadecimal numbers in lowcase
 *
 * Return: always (0)
 */
int main(void)
{
	char low_hexa[16] = "0123456789abcdef";
	int i;

	for (i = 0 ; i < 16 ; i++)
	{
		putchar(low_hexa[i]);
	}
	putchar('\n');
	return (0);
}
