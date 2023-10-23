#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 *
 * @s: the pointer
 * @b: constant to fill the memory with
 * @n: number of bytes of the memory pointed by s
 * Return: the pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
