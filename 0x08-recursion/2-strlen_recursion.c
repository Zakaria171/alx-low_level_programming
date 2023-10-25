#include "main.h"
/**
 * _strlen_recursion - calculate lentgh of a string
 * @s: string to calculate
 * Return: lentgh of the string s
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 1;
	if (*s)
	{
		return (l + _strlen_recursion(s + 1));
	}
	return (0);
}
