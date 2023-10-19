#include "lists.h"
/**
 * free_list - a function that frees a list.
 * @head: address of the head.
 *
 */

void free_list(list_t *head)
{
	list_t *temp;
	list_t *next_node;

	if (head == NULL)
		return;

	temp = head;
	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp->str);
		free(temp);
		temp = next_node;
	}
}
