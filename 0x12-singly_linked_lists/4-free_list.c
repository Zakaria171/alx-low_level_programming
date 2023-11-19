#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees a list_t list
 * @head: a list_t list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
