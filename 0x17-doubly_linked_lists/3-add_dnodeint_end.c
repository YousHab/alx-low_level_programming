#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a linked list.
 * @head: pointer to the first element of the list.
 * @n: int to add.
 * Return: a pointer to the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *pt;

	pt = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (pt)
	{
		while (pt->next)
			pt = aux->next;
		new->prev = pt;
		pt->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
