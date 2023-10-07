#include <stdio.h>
/**
 * main - prints lowcase alphabets in reverse
 *
 * Return: always(0)
 */
int main(void)
{
	char low_alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25 ; i >= 0 ; i--)
	{
		putchar(low_alp[i]);
	}
	putchar('\n');
	return (0);
}

