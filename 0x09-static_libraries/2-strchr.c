#include "main.h"
/**
 * *_strchr -  locates a character in a string
 * @s: string to locate in
 * @c: charachter to locate
 * Return: the nes string s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
