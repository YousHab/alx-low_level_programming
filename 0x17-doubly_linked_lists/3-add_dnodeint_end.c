#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a linked list.
 * @head: pointer to the first element of the list.
 * @n: int to add.
 * Return: a pointer to the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list = NULL, *end = *head;

	list = malloc(sizeof(dlistint_t));

	if (list == NULL)
	{
		return (NULL);
	}
	list->n = n;
	list->prev = NULL;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (*head);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	list->prev = end;
	end->next = list;

	return (list);
}
