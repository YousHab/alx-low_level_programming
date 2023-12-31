#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a linked list.
 * @head: points to the first elets of the list.
 * @n: value to add.
 * Return: the adress of the new elt, NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
