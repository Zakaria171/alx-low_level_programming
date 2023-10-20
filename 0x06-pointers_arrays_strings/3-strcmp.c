#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1:first string to compare
 * @s2: seconde stream to compare
 * Return: value of comparaison
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
			break;
	}
	result = s1[i] - s2[i];
	return (result);
}
