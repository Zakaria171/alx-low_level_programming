#include <stdlib.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the array to set
 * @index: index given to set its value to 1
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (n == NULL)
		return (-1);
	while (*n)
	{
		if (i == index)
			n[i] = 1;
		i++;
	}
	return (1);
}
