#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node at the beggining of the list
 * @head: list
 * @str: string
 * Return: adresse of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int lent = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	while (str[lent])
		lent++;
	tmp->len = lent;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
