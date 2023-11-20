#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - calculate number of elements of a linked list
 * @h: a pointer to the head of the list
 * Return: number of elements of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
