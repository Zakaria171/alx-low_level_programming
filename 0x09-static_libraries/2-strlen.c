#include "main.h"
/**
 * _strlen - calculates length of a string
 * @s: string to calculate
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
