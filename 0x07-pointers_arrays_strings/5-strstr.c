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
	int i;

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}
				while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
