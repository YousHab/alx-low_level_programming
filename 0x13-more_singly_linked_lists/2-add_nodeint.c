#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list
 *
 * @head: the head of the list.
 * @n: element of the new node.
 *
 * Return: the address of the new elts, NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *ptr = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	ptr = *head;
	new_node->n = n;
	new_node->next = NULL;
	*head = new_node;
	new_node->next = ptr;

	return (*head);
}
