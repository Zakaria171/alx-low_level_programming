#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t compt = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		compt++;
		h = h->next;
	}
	return (compt);
}
