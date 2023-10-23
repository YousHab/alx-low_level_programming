#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node.
 *
 * @head: the head.
 * @idx: the index where we want to put the new element
 * @n: the new element
 *
 * Return: a pointer to the new node.
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *ptr = *head;
	unsigned int i = 0;
	unsigned int len = 0;

	if (*head == NULL && idx > 0)
		return (NULL);

	len = lengthlist(*head);
	if (idx > len)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		ptr = ptr->next;
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
