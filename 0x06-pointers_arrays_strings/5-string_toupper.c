#include "main.h"
/**
 * *string_toupper - changes all lowercase letters to uppercase
 *
 * @a: string to change
 * Return: new string
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] > 97 && a[i] < 122)
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
