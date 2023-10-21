#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @a: String to capitalize
 * Return: String capitalized
 */
char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
		if (a[i] == 9 ||
		a[i] == 10 || a[i] == 32 ||
		a[i] == 33 || a[i] == 34 ||
		a[i] == 40 || a[i] == 41 ||
		a[i] == 44 || a[i] == 46 ||
		a[i] == 59 || a[i] == 63 ||
		a[i] == 123 || a[i] == 125)
		{
			i++;
			if (a[i] > 96 && a[i] < 123)
			{
				a[i] = a[i] - 32;
			}
			else if (a[i] == 32 || a[i] == 9 || a[i] == 10)
			{
				i--;
			}
		}
	}
	return (a);
}
