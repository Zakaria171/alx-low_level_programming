#include <main.h>
/**
 * main - prints alphabets in lowercase
 *
 * Return: always(0)
 */
void print_alphabet(void)
{
	char low_alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(low_alp[i]);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
