#include <stdio.h>
/**
 * main - prints alphabets in lowercase except q and e
 *
 * Return: always(0)
 */
int main(void)
{
	char lower_alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(lower_alp[i]);
		}
	}
	putchar('\n');
	return (0);
}
