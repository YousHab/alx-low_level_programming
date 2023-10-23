#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: the head.
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	ptr = *head;
	n = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (n);
}
