#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node at the beggining of the list
 * @head: a pointer to the adresse of the head of the list
 * @n: integer for the new node
 * Return: the adress of the new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
