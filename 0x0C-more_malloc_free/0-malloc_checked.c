#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
