#include "main.h"
/**
 * *_strstr - locates a substring
 *
 * @haystack: string to search within
 * @needle: the substring
 * Return: new string haystack
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
