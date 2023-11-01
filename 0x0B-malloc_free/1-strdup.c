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
	char *stg;
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
	stg = malloc(sizeof(char) * (i + 1));
	for (k = 0 ; str[k] ; k++)
	{
		stg[k] = str[k];
	}
	return (stg);
}
