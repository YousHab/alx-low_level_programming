#include "lists.h"
/**
 * lengthlist - prints the number of elements in a linked listint_t list
 *
 * @h: a pointer to the head of the list.
 *
 * Return: the length of the list.
 

unsigned int lengthlist(listint_t *h)
{
	unsigned int count = 0;
	listint_t *ptr = NULL;

	if (!h)
		return (0);
	ptr = h;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}*/
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
