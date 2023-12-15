#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the array to set
 * @index: index given to set its value to 1
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set_bit = 1 << index;
	*n = *n | set_bit;
	return (1);
}
