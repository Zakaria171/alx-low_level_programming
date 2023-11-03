#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: start of array
 * @max: end of array
 * Return: array from min to max
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0, l;

	if (min > max)
		return (NULL);
	l = max - min;
	arr = malloc((sizeof(int) * l) + sizeof(int));
	if (arr == 0)
		return (NULL);
	while (i <= l)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
