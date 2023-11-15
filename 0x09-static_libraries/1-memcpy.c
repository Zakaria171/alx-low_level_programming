#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest : string to copy in
 * @src : string to copy from
 * @n : cumber of bytes to copy
 * Return: new string dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
