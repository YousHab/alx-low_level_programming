#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list.
 *
 * @head: the head.
 * @index: the index of element to be deleted.
 *
 * Return: 1 if it succeed, -1 otherwise.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = NULL;
	listint_t *tmp = NULL;
	unsigned int i;
	unsigned int len;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		free(*head);
		return (1);
	}

	len = lengthlist(*head);
	if (index > len)
		return (-1);

	p = *head;
	for (i = 0; i < index; i++)
	{
		p = p->next;
	}
	tmp = p->next;
	free(p);
	p = tmp;
	return (1);
}
