#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: principal string
 * @accept: substring
 * Return: length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, l;

	l = 0;
	i = 0;
	while ((s[i] > 96 && s[i] < 123) || (s[i] > 64 && s[i] < 91))
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
			{
				l++;
			}
		}
		i++;
	}
	return (l);
}
