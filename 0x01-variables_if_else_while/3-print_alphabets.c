#include <stdio.h>
/**
 * main - prints alphabets in lowercase
 * prints alphabets in uppercase
 *
 * Return: always(0)
 */
int main(void)
{
	char lower_alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper_alp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(lower_alp[i]);
	}
	for (i = 0 ; i < 26 ; i++)
	{
		putchar(upper_alp[i]);
	}
	putchar('\n');
	return (0);
}
