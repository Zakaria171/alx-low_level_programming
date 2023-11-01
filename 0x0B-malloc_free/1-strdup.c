#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - duplicate to a new space allocation
 * @str: char
 * Return: string or NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i, k = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (k < i)
	{
		s[k] = str[k];
		k++;
	}
	s[k] = '\0';
	return (s);
}
