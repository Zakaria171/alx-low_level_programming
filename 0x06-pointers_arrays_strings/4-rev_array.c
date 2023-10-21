#include "main.h"
/**
 * reverse_array - reverses a string
 * @a: string to reverse
 * @n: number of arrays to reverse
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int b[] = {0,0,0,0,0,0,0,0,0,0,0,0,0};

	j = 0;
	i = 0;
	while (b[i] && i < n)
	{
		i++;
	}
	for (i = n - 1 ; i >= 0 ; i--)
	{
		b[j] = a[i];	
		j++;
	}
	for (i = 0 ; i < n ; i++)
	{
		a[i] = b[i];
	}	
}
