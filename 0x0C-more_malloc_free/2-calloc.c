#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: array
 * @size: number of bytes to allocate
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	s = malloc(l);
	if (s == 0)
		return (NULL);
	while (i < l)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
