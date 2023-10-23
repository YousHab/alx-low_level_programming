#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 *
 * @head: head.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;

	while (*head)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	head = NULL;
}
