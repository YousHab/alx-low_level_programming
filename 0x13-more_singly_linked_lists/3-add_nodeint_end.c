#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end.
 *
 * @head: the head of the list.
 * @n: the element to add.
 *
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL;
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		ptr = *head;
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}

	return (new_node);
}
