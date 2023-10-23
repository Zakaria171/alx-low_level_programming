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
	int i;

	for (i = 0 ; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
