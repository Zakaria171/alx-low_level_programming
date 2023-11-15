#include "main.h"
/**
 * _isupper - returns 1 if uppercase and returns 0 otherwise
 *
 * @c: integer to check
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
